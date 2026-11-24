package androidx.media3.transformer;

import android.content.Context;
import android.hardware.DataSpace;
import android.media.metrics.EditingEndedEvent;
import android.media.metrics.EditingSession;
import android.media.metrics.LogSessionId;
import android.media.metrics.MediaItemInfo;
import android.media.metrics.MediaMetricsManager;
import android.util.Size;
import android.util.SparseIntArray;
import androidx.media3.common.C;
import androidx.media3.common.ColorInfo;
import androidx.media3.common.Format;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.util.Log;
import androidx.media3.common.util.SystemClock;
import androidx.media3.common.util.Util;
import androidx.media3.effect.GainmapUtil$$ExternalSyntheticApiModelOutline0;
import androidx.media3.muxer.AacWriter$$ExternalSyntheticBackport0;
import androidx.preference.PreferenceCategory$$ExternalSyntheticApiModelOutline0;
import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
final class EditingMetricsCollector {
    private static final SparseIntArray DATA_SPACE_RANGE_CONVERSION_MAP;
    private static final SparseIntArray DATA_SPACE_STANDARD_CONVERSION_MAP;
    private static final SparseIntArray DATA_SPACE_TRANSFER_CONVERSION_MAP;
    private static final SparseIntArray ERROR_CODE_CONVERSION_MAP;
    private static final int SUCCESS_PROGRESS_PERCENTAGE = 100;
    private static final String TAG = "EditingMetricsCollector";
    private final String exporterName;
    private final MetricsReporter metricsReporter;
    private final String muxerName;
    private final long startTimeMs = SystemClock.DEFAULT.elapsedRealtime();

    public interface MetricsReporter extends AutoCloseable {

        public interface Factory {
            MetricsReporter create();
        }

        void reportMetrics(EditingEndedEvent editingEndedEvent);
    }

    static final class DefaultMetricsReporter implements MetricsReporter {
        private EditingSession editingSession;
        private boolean metricsReported;

        public static final class Factory implements MetricsReporter.Factory {
            private final Context context;

            public Factory(Context context) {
                this.context = context;
            }

            @Override // androidx.media3.transformer.EditingMetricsCollector.MetricsReporter.Factory
            public MetricsReporter create() {
                return new DefaultMetricsReporter(this.context);
            }
        }

        private DefaultMetricsReporter(Context context) {
            MediaMetricsManager mediaMetricsManagerM7408m = GainmapUtil$$ExternalSyntheticApiModelOutline0.m7408m(context.getSystemService("media_metrics"));
            if (mediaMetricsManagerM7408m != null) {
                this.editingSession = mediaMetricsManagerM7408m.createEditingSession();
            }
        }

        @Override // androidx.media3.transformer.EditingMetricsCollector.MetricsReporter
        public void reportMetrics(EditingEndedEvent editingEndedEvent) {
            EditingSession editingSession;
            if (this.metricsReported || (editingSession = this.editingSession) == null) {
                return;
            }
            editingSession.reportEditingEndedEvent(editingEndedEvent);
            this.metricsReported = true;
        }

        @Override // java.lang.AutoCloseable
        public void close() {
            EditingSession editingSession = this.editingSession;
            if (editingSession != null) {
                editingSession.close();
                this.editingSession = null;
            }
        }

        public LogSessionId getLogSessionId() {
            EditingSession editingSession = this.editingSession;
            if (editingSession != null) {
                return editingSession.getSessionId();
            }
            return null;
        }
    }

    static {
        SparseIntArray sparseIntArray = new SparseIntArray();
        ERROR_CODE_CONVERSION_MAP = sparseIntArray;
        SparseIntArray sparseIntArray2 = new SparseIntArray();
        DATA_SPACE_STANDARD_CONVERSION_MAP = sparseIntArray2;
        SparseIntArray sparseIntArray3 = new SparseIntArray();
        DATA_SPACE_RANGE_CONVERSION_MAP = sparseIntArray3;
        SparseIntArray sparseIntArray4 = new SparseIntArray();
        DATA_SPACE_TRANSFER_CONVERSION_MAP = sparseIntArray4;
        sparseIntArray.put(1000, 1);
        sparseIntArray.put(1001, 2);
        sparseIntArray.put(2000, 3);
        sparseIntArray.put(2001, 4);
        sparseIntArray.put(2002, 5);
        sparseIntArray.put(2003, 3);
        sparseIntArray.put(2004, 6);
        sparseIntArray.put(2005, 7);
        sparseIntArray.put(2006, 8);
        sparseIntArray.put(2007, 9);
        sparseIntArray.put(2008, 10);
        sparseIntArray.put(3001, 11);
        sparseIntArray.put(3002, 12);
        sparseIntArray.put(3003, 13);
        sparseIntArray.put(4001, 14);
        sparseIntArray.put(4002, 15);
        sparseIntArray.put(4003, 16);
        sparseIntArray.put(5001, 17);
        sparseIntArray.put(6001, 18);
        sparseIntArray.put(7001, 19);
        sparseIntArray.put(ExportException.ERROR_CODE_MUXING_TIMEOUT, 2);
        sparseIntArray2.put(-1, 0);
        sparseIntArray2.put(2, 131072);
        sparseIntArray2.put(1, 65536);
        sparseIntArray2.put(6, 393216);
        sparseIntArray3.put(-1, 0);
        sparseIntArray3.put(2, 268435456);
        sparseIntArray3.put(1, C.BUFFER_FLAG_FIRST_SAMPLE);
        sparseIntArray4.put(-1, 0);
        sparseIntArray4.put(1, 4194304);
        sparseIntArray4.put(3, 12582912);
        sparseIntArray4.put(2, 8388608);
        sparseIntArray4.put(10, 16777216);
        sparseIntArray4.put(6, 29360128);
        sparseIntArray4.put(7, 33554432);
    }

    public EditingMetricsCollector(MetricsReporter metricsReporter, String str, String str2) {
        this.metricsReporter = metricsReporter;
        this.exporterName = str;
        this.muxerName = str2;
    }

    public void onExportSuccess(ExportResult exportResult) {
        EditingEndedEvent.Builder finalProgressPercent = createEditingEndedEventBuilder(1).setFinalProgressPercent(100.0f);
        List<MediaItemInfo> inputMediaItemInfos = getInputMediaItemInfos(exportResult.processedInputs);
        for (int i = 0; i < inputMediaItemInfos.size(); i++) {
            finalProgressPercent.addInputMediaItemInfo(PreferenceCategory$$ExternalSyntheticApiModelOutline0.m7683m((Object) inputMediaItemInfos.get(i)));
        }
        finalProgressPercent.setOutputMediaItemInfo(getOutputMediaItemInfo(exportResult));
        this.metricsReporter.reportMetrics(finalProgressPercent.build());
        try {
            AacWriter$$ExternalSyntheticBackport0.m7629m((Object) this.metricsReporter);
        } catch (Exception e) {
            Log.e(TAG, "error while closing the metrics reporter", e);
        }
    }

    public void onExportError(int i, ExportException exportException, ExportResult exportResult) {
        EditingEndedEvent.Builder errorCode = createEditingEndedEventBuilder(3).setErrorCode(getEditingEndedEventErrorCode(exportException.errorCode));
        if (i != -1) {
            errorCode.setFinalProgressPercent(i);
        }
        List<MediaItemInfo> inputMediaItemInfos = getInputMediaItemInfos(exportResult.processedInputs);
        for (int i2 = 0; i2 < inputMediaItemInfos.size(); i2++) {
            errorCode.addInputMediaItemInfo(PreferenceCategory$$ExternalSyntheticApiModelOutline0.m7683m((Object) inputMediaItemInfos.get(i2)));
        }
        errorCode.setOutputMediaItemInfo(getOutputMediaItemInfo(exportResult));
        this.metricsReporter.reportMetrics(errorCode.build());
        try {
            AacWriter$$ExternalSyntheticBackport0.m7629m((Object) this.metricsReporter);
        } catch (Exception e) {
            Log.e(TAG, "error while closing the metrics reporter", e);
        }
    }

    public void onExportCancelled(int i) {
        EditingEndedEvent.Builder builderCreateEditingEndedEventBuilder = createEditingEndedEventBuilder(2);
        if (i != -1) {
            builderCreateEditingEndedEventBuilder.setFinalProgressPercent(i);
        }
        this.metricsReporter.reportMetrics(builderCreateEditingEndedEventBuilder.build());
        try {
            AacWriter$$ExternalSyntheticBackport0.m7629m((Object) this.metricsReporter);
        } catch (Exception e) {
            Log.e(TAG, "error while closing the metrics reporter", e);
        }
    }

    private EditingEndedEvent.Builder createEditingEndedEventBuilder(int i) {
        EditingEndedEvent.Builder exporterName = PreferenceCategory$$ExternalSyntheticApiModelOutline0.m(i).setTimeSinceCreatedMillis(SystemClock.DEFAULT.elapsedRealtime() - this.startTimeMs).setExporterName(this.exporterName);
        String str = this.muxerName;
        if (str != null) {
            exporterName.setMuxerName(str);
        }
        return exporterName;
    }

    private static List<MediaItemInfo> getInputMediaItemInfos(ImmutableList<ExportResult.ProcessedInput> immutableList) {
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < immutableList.size(); i++) {
            ExportResult.ProcessedInput processedInput = immutableList.get(i);
            MediaItemInfo.Builder builderM7682m = PreferenceCategory$$ExternalSyntheticApiModelOutline0.m7682m();
            builderM7682m.setClipDurationMillis(Util.usToMs(processedInput.durationUs));
            if (processedInput.videoDecoderName != null) {
                builderM7682m.addCodecName(processedInput.videoDecoderName);
            }
            if (processedInput.audioDecoderName != null) {
                builderM7682m.addCodecName(processedInput.audioDecoderName);
            }
            Format format = processedInput.videoFormat;
            if (format != null) {
                if (format.containerMimeType != null) {
                    builderM7682m.setContainerMimeType(format.containerMimeType);
                }
                if (format.sampleMimeType != null) {
                    builderM7682m.addSampleMimeType(format.sampleMimeType);
                    builderM7682m.addDataType(getDataTypes(format.sampleMimeType));
                }
                if (format.frameRate != -1.0f) {
                    builderM7682m.setVideoFrameRate(format.frameRate);
                }
                builderM7682m.setVideoSize(new Size(format.width != -1 ? format.width : -1, format.height != -1 ? format.height : -1));
                if (format.colorInfo != null) {
                    builderM7682m.setVideoDataSpace(getVideoDataSpace(format.colorInfo));
                }
            }
            Format format2 = processedInput.audioFormat;
            if (format2 != null) {
                if (format2.sampleMimeType != null) {
                    builderM7682m.addSampleMimeType(format2.sampleMimeType);
                    builderM7682m.addDataType(getDataTypes(format2.sampleMimeType));
                }
                if (format2.channelCount != -1) {
                    builderM7682m.setAudioChannelCount(format2.channelCount);
                }
                if (format2.sampleRate != -1) {
                    builderM7682m.setAudioSampleRateHz(format2.sampleRate);
                }
            }
            arrayList.add(builderM7682m.build());
        }
        return arrayList;
    }

    private static MediaItemInfo getOutputMediaItemInfo(ExportResult exportResult) {
        MediaItemInfo.Builder builderM7682m = PreferenceCategory$$ExternalSyntheticApiModelOutline0.m7682m();
        if (exportResult.durationMs != C.TIME_UNSET) {
            builderM7682m.setDurationMillis(exportResult.durationMs);
        }
        if (exportResult.audioMimeType != null) {
            builderM7682m.addSampleMimeType(exportResult.audioMimeType);
            builderM7682m.addDataType(getDataTypes(exportResult.audioMimeType));
        }
        if (exportResult.videoMimeType != null) {
            builderM7682m.addSampleMimeType(exportResult.videoMimeType);
            builderM7682m.addDataType(getDataTypes(exportResult.videoMimeType));
        }
        if (exportResult.channelCount != -1) {
            builderM7682m.setAudioChannelCount(exportResult.channelCount);
        }
        if (exportResult.sampleRate != -2147483647) {
            builderM7682m.setAudioSampleRateHz(exportResult.sampleRate);
        }
        if (exportResult.audioEncoderName != null) {
            builderM7682m.addCodecName(exportResult.audioEncoderName);
        }
        if (exportResult.videoEncoderName != null) {
            builderM7682m.addCodecName(exportResult.videoEncoderName);
        }
        builderM7682m.setVideoSampleCount(exportResult.videoFrameCount);
        builderM7682m.setVideoSize(new Size(exportResult.width != -1 ? exportResult.width : -1, exportResult.height != -1 ? exportResult.height : -1));
        if (exportResult.colorInfo != null) {
            builderM7682m.setVideoDataSpace(getVideoDataSpace(exportResult.colorInfo));
        }
        return builderM7682m.build();
    }

    private static long getDataTypes(String str) {
        long j = MimeTypes.isAudio(str) ? 4L : 0L;
        if (MimeTypes.isVideo(str)) {
            j |= 2;
        }
        return MimeTypes.isImage(str) ? j | 1 : j;
    }

    private static int getVideoDataSpace(ColorInfo colorInfo) {
        return DataSpace.pack(DATA_SPACE_STANDARD_CONVERSION_MAP.get(colorInfo.colorSpace, 0), DATA_SPACE_TRANSFER_CONVERSION_MAP.get(colorInfo.colorTransfer, 0), DATA_SPACE_RANGE_CONVERSION_MAP.get(colorInfo.colorRange, 0));
    }

    private static int getEditingEndedEventErrorCode(int i) {
        return ERROR_CODE_CONVERSION_MAP.get(i, 1);
    }
}
