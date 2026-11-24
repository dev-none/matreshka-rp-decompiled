package androidx.media3.transformer;

import android.content.Context;
import android.media.MediaFormat;
import android.media.metrics.LogSessionId;
import android.os.Build;
import android.util.Pair;
import android.view.Surface;
import androidx.media3.common.C;
import androidx.media3.common.ColorInfo;
import androidx.media3.common.Format;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.Log;
import androidx.media3.common.util.MediaFormatUtil;
import androidx.media3.exoplayer.mediacodec.MediaCodecInfo;
import androidx.media3.exoplayer.mediacodec.MediaCodecSelector;
import androidx.media3.exoplayer.mediacodec.MediaCodecUtil;
import com.google.common.base.Ascii;
import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public final class DefaultDecoderFactory implements Codec.DecoderFactory {
    private static final String TAG = "DefaultDecoderFactory";
    private final int codecPriority;
    private final Context context;
    private final boolean dynamicSchedulingEnabled;
    private final boolean enableDecoderFallback;
    private final Listener listener;
    private final MediaCodecSelector mediaCodecSelector;
    private final boolean shouldConfigureOperatingRate;

    public interface Listener {
        void onCodecInitialized(String str, List<ExportException> list);
    }

    public static final class Builder {
        private final Context context;
        private boolean dynamicSchedulingEnabled;
        private boolean enableDecoderFallback;
        private Listener listener = new Listener() { // from class: androidx.media3.transformer.DefaultDecoderFactory$Builder$$ExternalSyntheticLambda0
            @Override // androidx.media3.transformer.DefaultDecoderFactory.Listener
            public final void onCodecInitialized(String str, List list) {
                DefaultDecoderFactory.Builder.lambda$new$0(str, list);
            }
        };
        private int codecPriority = C.PRIORITY_PROCESSING_FOREGROUND;
        private boolean shouldConfigureOperatingRate = false;
        private MediaCodecSelector mediaCodecSelector = MediaCodecSelector.DEFAULT;

        static /* synthetic */ void lambda$new$0(String str, List list) {
        }

        public Builder(Context context) {
            this.context = context.getApplicationContext();
        }

        public Builder setListener(Listener listener) {
            this.listener = listener;
            return this;
        }

        public Builder setEnableDecoderFallback(boolean z) {
            this.enableDecoderFallback = z;
            return this;
        }

        public Builder setCodecPriority(int i) {
            this.codecPriority = i;
            return this;
        }

        public Builder setShouldConfigureOperatingRate(boolean z) {
            this.shouldConfigureOperatingRate = z;
            return this;
        }

        public Builder setMediaCodecSelector(MediaCodecSelector mediaCodecSelector) {
            this.mediaCodecSelector = mediaCodecSelector;
            return this;
        }

        public Builder experimentalSetDynamicSchedulingEnabled(boolean z) {
            this.dynamicSchedulingEnabled = z;
            return this;
        }

        public DefaultDecoderFactory build() {
            return new DefaultDecoderFactory(this);
        }
    }

    @Deprecated
    public DefaultDecoderFactory(Context context) {
        this(new Builder(context));
    }

    @Deprecated
    public DefaultDecoderFactory(Context context, boolean z, Listener listener) {
        this(new Builder(context).setEnableDecoderFallback(z).setListener(listener));
    }

    private DefaultDecoderFactory(Builder builder) {
        this.context = builder.context;
        this.enableDecoderFallback = builder.enableDecoderFallback;
        this.listener = builder.listener;
        this.codecPriority = builder.codecPriority;
        this.shouldConfigureOperatingRate = builder.shouldConfigureOperatingRate;
        this.mediaCodecSelector = builder.mediaCodecSelector;
        this.dynamicSchedulingEnabled = builder.dynamicSchedulingEnabled;
    }

    @Override // androidx.media3.transformer.Codec.DecoderFactory
    public DefaultCodec createForAudioDecoding(Format format, LogSessionId logSessionId) throws ExportException {
        return createCodecForMediaFormat(MediaFormatUtil.createMediaFormatFromFormat(format), format, null, false, logSessionId);
    }

    @Override // androidx.media3.transformer.Codec.DecoderFactory
    public DefaultCodec createForVideoDecoding(Format format, Surface surface, boolean z, LogSessionId logSessionId) throws ExportException {
        if (ColorInfo.isTransferHdr(format.colorInfo)) {
            if (z && (Build.VERSION.SDK_INT < 31 || deviceNeedsDisableToneMappingWorkaround(((ColorInfo) Assertions.checkNotNull(format.colorInfo)).colorTransfer))) {
                throw createExportException(format, "Tone-mapping HDR is not supported on this device.");
            }
            if (Build.VERSION.SDK_INT < 29) {
                throw createExportException(format, "Decoding HDR is not supported on this device.");
            }
        }
        if (deviceNeedsDisable8kWorkaround(format)) {
            throw createExportException(format, "Decoding 8k is not supported on this device.");
        }
        if (deviceNeedsNoFrameRateWorkaround()) {
            format = format.buildUpon().setFrameRate(-1.0f).build();
        }
        Format format2 = format;
        MediaFormat mediaFormatCreateMediaFormatFromFormat = MediaFormatUtil.createMediaFormatFromFormat(format2);
        if (decoderSupportsKeyAllowFrameDrop(this.context)) {
            mediaFormatCreateMediaFormatFromFormat.setInteger("allow-frame-drop", 0);
        }
        if (Build.VERSION.SDK_INT >= 31 && z) {
            mediaFormatCreateMediaFormatFromFormat.setInteger("color-transfer-request", 3);
        }
        Pair<Integer, Integer> codecProfileAndLevel = MediaCodecUtil.getCodecProfileAndLevel(format2);
        if (codecProfileAndLevel != null) {
            MediaFormatUtil.maybeSetInteger(mediaFormatCreateMediaFormatFromFormat, "profile", ((Integer) codecProfileAndLevel.first).intValue());
            MediaFormatUtil.maybeSetInteger(mediaFormatCreateMediaFormatFromFormat, "level", ((Integer) codecProfileAndLevel.second).intValue());
        }
        if (Build.VERSION.SDK_INT >= 35) {
            mediaFormatCreateMediaFormatFromFormat.setInteger("importance", Math.max(0, -this.codecPriority));
        }
        if (this.shouldConfigureOperatingRate) {
            configureOperatingRate(mediaFormatCreateMediaFormatFromFormat);
        }
        return createCodecForMediaFormat(mediaFormatCreateMediaFormatFromFormat, format2, surface, devicePrefersSoftwareDecoder(format2), logSessionId);
    }

    private DefaultCodec createCodecForMediaFormat(MediaFormat mediaFormat, Format format, Surface surface, boolean z, LogSessionId logSessionId) throws ExportException {
        ImmutableList.of();
        Assertions.checkNotNull(format.sampleMimeType);
        try {
            List<MediaCodecInfo> decoderInfosSortedByFullFormatSupport = MediaCodecUtil.getDecoderInfosSortedByFullFormatSupport(MediaCodecUtil.getDecoderInfosSoftMatch(this.mediaCodecSelector, format, false, false), format);
            if (decoderInfosSortedByFullFormatSupport.isEmpty()) {
                throw createExportException(format, "No decoders for format");
            }
            if (z) {
                ArrayList arrayList = new ArrayList();
                for (int i = 0; i < decoderInfosSortedByFullFormatSupport.size(); i++) {
                    MediaCodecInfo mediaCodecInfo = decoderInfosSortedByFullFormatSupport.get(i);
                    if (!mediaCodecInfo.hardwareAccelerated) {
                        arrayList.add(mediaCodecInfo);
                    }
                }
                if (!arrayList.isEmpty()) {
                    decoderInfosSortedByFullFormatSupport = arrayList;
                }
            }
            if (Build.VERSION.SDK_INT >= 31 && decoderInfosSortedByFullFormatSupport.get(0).codecMimeType.equals(MimeTypes.VIDEO_DOLBY_VISION)) {
                mediaFormat.setInteger("color-transfer-request", 7);
            }
            if (Build.VERSION.SDK_INT >= 35 && logSessionId != null) {
                TransformerUtil.Api35.setLogSessionIdToMediaCodecFormat(mediaFormat, logSessionId);
            }
            ArrayList arrayList2 = new ArrayList();
            Context context = this.context;
            if (!this.enableDecoderFallback) {
                decoderInfosSortedByFullFormatSupport = decoderInfosSortedByFullFormatSupport.subList(0, 1);
            }
            DefaultCodec defaultCodecCreateCodecFromDecoderInfos = createCodecFromDecoderInfos(context, decoderInfosSortedByFullFormatSupport, format, mediaFormat, surface, arrayList2);
            this.listener.onCodecInitialized(defaultCodecCreateCodecFromDecoderInfos.getName(), arrayList2);
            return defaultCodecCreateCodecFromDecoderInfos;
        } catch (MediaCodecUtil.DecoderQueryException e) {
            Log.e(TAG, "Error querying decoders", e);
            throw createExportException(format, "Querying codecs failed");
        }
    }

    public boolean isDynamicSchedulingEnabled() {
        return this.dynamicSchedulingEnabled;
    }

    private static DefaultCodec createCodecFromDecoderInfos(Context context, List<MediaCodecInfo> list, Format format, MediaFormat mediaFormat, Surface surface, List<ExportException> list2) throws ExportException {
        Context context2;
        Format format2;
        MediaFormat mediaFormat2;
        Surface surface2;
        for (MediaCodecInfo mediaCodecInfo : list) {
            mediaFormat.setString("mime", mediaCodecInfo.codecMimeType);
            try {
                context2 = context;
                format2 = format;
                mediaFormat2 = mediaFormat;
                surface2 = surface;
                try {
                    return new DefaultCodec(context2, format2, mediaFormat2, mediaCodecInfo.name, true, surface2);
                } catch (ExportException e) {
                    e = e;
                    list2.add(e);
                    context = context2;
                    format = format2;
                    mediaFormat = mediaFormat2;
                    surface = surface2;
                }
            } catch (ExportException e2) {
                e = e2;
                context2 = context;
                format2 = format;
                mediaFormat2 = mediaFormat;
                surface2 = surface;
            }
        }
        throw list2.get(0);
    }

    private static void configureOperatingRate(MediaFormat mediaFormat) {
        if (deviceNeedsPriorityWorkaround()) {
            mediaFormat.setInteger("priority", 1);
        }
        mediaFormat.setInteger("operating-rate", 10000);
    }

    private static boolean deviceNeedsPriorityWorkaround() {
        if (Build.VERSION.SDK_INT >= 31) {
            return Build.SOC_MODEL.equals("s5e8835") || Build.SOC_MODEL.equals("SA8155P");
        }
        return false;
    }

    private static boolean deviceNeedsDisable8kWorkaround(Format format) {
        if (Build.VERSION.SDK_INT >= 31 || format.width < 7680 || format.height < 4320 || format.sampleMimeType == null || !format.sampleMimeType.equals("video/hevc")) {
            return false;
        }
        return Build.MODEL.equals("SM-F711U1") || Build.MODEL.equals("SM-F926U1");
    }

    private static boolean deviceNeedsDisableToneMappingWorkaround(int i) {
        if (Build.MANUFACTURER.equals("Google") && Build.ID.startsWith("TP1A")) {
            return true;
        }
        if (i == 7 && (Build.MODEL.startsWith("SM-F936") || Build.MODEL.startsWith("SM-F916") || Build.MODEL.startsWith("SM-F721") || Build.MODEL.equals("SM-X900"))) {
            return true;
        }
        return Build.VERSION.SDK_INT < 34 && i == 6 && Build.MODEL.startsWith("SM-F936");
    }

    private static boolean deviceNeedsNoFrameRateWorkaround() {
        return Build.VERSION.SDK_INT < 30 && Build.DEVICE.equals("joyeuse");
    }

    private static boolean decoderSupportsKeyAllowFrameDrop(Context context) {
        return Build.VERSION.SDK_INT >= 29 && context.getApplicationInfo().targetSdkVersion >= 29;
    }

    private static boolean devicePrefersSoftwareDecoder(Format format) {
        if (format.width * format.height >= 2073600) {
            return Ascii.equalsIgnoreCase(Build.MODEL, "vivo 1906") || Ascii.equalsIgnoreCase(Build.MODEL, "redmi 7a") || Ascii.equalsIgnoreCase(Build.MODEL, "redmi 8");
        }
        return false;
    }

    private static ExportException createExportException(Format format, String str) {
        return ExportException.createForCodec(new IllegalArgumentException(str), 3003, new ExportException.CodecInfo(format.toString(), MimeTypes.isVideo((String) Assertions.checkNotNull(format.sampleMimeType)), true, null));
    }
}
