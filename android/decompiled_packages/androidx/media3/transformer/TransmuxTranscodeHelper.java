package androidx.media3.transformer;

import android.content.Context;
import android.util.Pair;
import androidx.media3.common.C;
import androidx.media3.common.Format;
import androidx.media3.common.MediaItem;
import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.Util;
import com.google.common.collect.ImmutableList;
import com.google.common.io.ByteStreams;
import com.google.common.util.concurrent.ListenableFuture;
import com.google.common.util.concurrent.SettableFuture;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes4.dex */
final class TransmuxTranscodeHelper {

    public static final class ResumeMetadata {
        public final ImmutableList<Pair<Integer, Long>> firstMediaItemIndexAndOffsetInfo;
        public final long lastSyncSampleTimestampUs;
        public final Format videoFormat;

        public ResumeMetadata(long j, ImmutableList<Pair<Integer, Long>> immutableList, Format format) {
            this.lastSyncSampleTimestampUs = j;
            this.firstMediaItemIndexAndOffsetInfo = immutableList;
            this.videoFormat = format;
        }
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [androidx.media3.transformer.TransmuxTranscodeHelper$1] */
    public static ListenableFuture<Mp4Info> getMp4Info(final Context context, final String str, final long j) {
        final SettableFuture settableFutureCreate = SettableFuture.create();
        new Thread("TransmuxTranscodeHelper:Mp4Info") { // from class: androidx.media3.transformer.TransmuxTranscodeHelper.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                try {
                    settableFutureCreate.set(Mp4Info.create(context, str, j));
                } catch (Exception e) {
                    settableFutureCreate.setException(e);
                }
            }
        }.start();
        return settableFutureCreate;
    }

    public static Composition buildUponCompositionForTrimOptimization(Composition composition, long j, long j2, long j3, boolean z, boolean z2) {
        Effects effects;
        EditedMediaItem editedMediaItem = composition.sequences.get(0).editedMediaItems.get(0);
        MediaItem mediaItemBuild = editedMediaItem.mediaItem.buildUpon().setClippingConfiguration(new MediaItem.ClippingConfiguration.Builder().setStartPositionUs(j).setEndPositionUs(j2).setStartsAtKeyFrame(z).build()).build();
        if (z2) {
            effects = new Effects(editedMediaItem.effects.audioProcessors, ImmutableList.of());
        } else {
            effects = editedMediaItem.effects;
        }
        return composition.buildUpon().setSequences(ImmutableList.of(new EditedMediaItemSequence.Builder(editedMediaItem.buildUpon().setMediaItem(mediaItemBuild).setDurationUs(j3).setEffects(effects).build()).build())).build();
    }

    private TransmuxTranscodeHelper() {
    }

    public static Composition createVideoOnlyComposition(String str, long j) {
        return new Composition.Builder(new EditedMediaItemSequence.Builder(new EditedMediaItem.Builder(new MediaItem.Builder().setUri(str).setClippingConfiguration(new MediaItem.ClippingConfiguration.Builder().setEndPositionMs(Util.usToMs(j)).build()).build()).setRemoveAudio(true).build()).build(), new EditedMediaItemSequence[0]).build();
    }

    public static Composition createAudioTranscodeAndVideoTransmuxComposition(Composition composition, String str) {
        Composition compositionBuildUponComposition = buildUponComposition((Composition) Assertions.checkNotNull(composition), false, true, null);
        Composition.Builder builderBuildUpon = compositionBuildUponComposition.buildUpon();
        ArrayList arrayList = new ArrayList(compositionBuildUponComposition.sequences);
        arrayList.add(new EditedMediaItemSequence.Builder(new EditedMediaItem.Builder(new MediaItem.Builder().setUri(str).build()).build()).build());
        builderBuildUpon.setSequences(arrayList);
        builderBuildUpon.setTransmuxVideo(true);
        return builderBuildUpon.build();
    }

    public static Composition buildUponComposition(Composition composition, boolean z, boolean z2, ResumeMetadata resumeMetadata) {
        long jLongValue;
        int iIntValue;
        Composition.Builder builderBuildUpon = composition.buildUpon();
        ImmutableList<EditedMediaItemSequence> immutableList = composition.sequences;
        ArrayList arrayList = new ArrayList();
        ImmutableList<Pair<Integer, Long>> immutableList2 = resumeMetadata != null ? resumeMetadata.firstMediaItemIndexAndOffsetInfo : null;
        int i = 0;
        while (i < immutableList.size()) {
            EditedMediaItemSequence editedMediaItemSequence = immutableList.get(i);
            ImmutableList<EditedMediaItem> immutableList3 = editedMediaItemSequence.editedMediaItems;
            ArrayList arrayList2 = new ArrayList();
            if (immutableList2 != null) {
                iIntValue = ((Integer) immutableList2.get(i).first).intValue();
                jLongValue = ((Long) immutableList2.get(i).second).longValue();
            } else {
                jLongValue = 0;
                iIntValue = 0;
            }
            int i2 = iIntValue;
            while (i2 < immutableList3.size()) {
                EditedMediaItem editedMediaItem = immutableList3.get(i2);
                EditedMediaItem.Builder builderBuildUpon2 = editedMediaItem.buildUpon();
                if (i2 == iIntValue) {
                    builderBuildUpon2.setMediaItem(editedMediaItem.mediaItem.buildUpon().setClippingConfiguration(editedMediaItem.mediaItem.clippingConfiguration.buildUpon().setStartPositionMs(editedMediaItem.mediaItem.clippingConfiguration.startPositionMs + Util.usToMs(jLongValue)).build()).build());
                }
                if (z) {
                    builderBuildUpon2.setRemoveAudio(true);
                }
                if (z2) {
                    builderBuildUpon2.setRemoveVideo(true);
                }
                arrayList2.add(builderBuildUpon2.build());
                i2++;
                i = i;
            }
            arrayList.add(new EditedMediaItemSequence.Builder(arrayList2).setIsLooping(editedMediaItemSequence.isLooping).build());
            i++;
        }
        builderBuildUpon.setSequences(arrayList);
        return builderBuildUpon.build();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [androidx.media3.transformer.TransmuxTranscodeHelper$2] */
    public static ListenableFuture<ResumeMetadata> getResumeMetadataAsync(final Context context, final String str, final Composition composition) {
        final SettableFuture settableFutureCreate = SettableFuture.create();
        new Thread("TransmuxTranscodeHelper:ResumeMetadata") { // from class: androidx.media3.transformer.TransmuxTranscodeHelper.2
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                try {
                    if (settableFutureCreate.isCancelled()) {
                        return;
                    }
                    Mp4Info mp4InfoCreate = Mp4Info.create(context, str);
                    long j = mp4InfoCreate.lastSyncSampleTimestampUs;
                    ImmutableList.Builder builder = new ImmutableList.Builder();
                    if (j != C.TIME_UNSET) {
                        for (int i = 0; i < composition.sequences.size(); i++) {
                            ImmutableList<EditedMediaItem> immutableList = composition.sequences.get(i).editedMediaItems;
                            long j2 = j;
                            int i2 = 0;
                            while (true) {
                                if (i2 >= immutableList.size() || j2 <= 0) {
                                    j2 = 0;
                                    break;
                                }
                                long mediaItemDurationUs = TransmuxTranscodeHelper.getMediaItemDurationUs(context, immutableList.get(i2).mediaItem);
                                if (mediaItemDurationUs > j2) {
                                    break;
                                }
                                j2 -= mediaItemDurationUs;
                                i2++;
                            }
                            builder.add(new Pair(Integer.valueOf(i2), Long.valueOf(j2)));
                        }
                    }
                    settableFutureCreate.set(new ResumeMetadata(j, builder.build(), mp4InfoCreate.videoFormat));
                } catch (Exception e) {
                    settableFutureCreate.setException(e);
                }
            }
        }.start();
        return settableFutureCreate;
    }

    /* JADX WARN: Type inference failed for: r1v0, types: [androidx.media3.transformer.TransmuxTranscodeHelper$3] */
    public static ListenableFuture<Void> copyFileAsync(final File file, final File file2) {
        final SettableFuture settableFutureCreate = SettableFuture.create();
        new Thread("TransmuxTranscodeHelper:CopyFile") { // from class: androidx.media3.transformer.TransmuxTranscodeHelper.3
            /* JADX WARN: Code duplicated, block: B:30:0x0052 A[DONT_INVERT] */
            /* JADX WARN: Code duplicated, block: B:31:0x0054 A[Catch: IOException -> 0x0057, TRY_LEAVE, TryCatch #0 {IOException -> 0x0057, blocks: (B:29:0x004f, B:31:0x0054), top: B:35:0x004f }] */
            /* JADX WARN: Code duplicated, block: B:35:0x004f A[EXC_TOP_SPLITTER, SYNTHETIC] */
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() throws Throwable {
                FileOutputStream fileOutputStream;
                Throwable th;
                FileInputStream fileInputStream;
                Exception e;
                if (settableFutureCreate.isCancelled()) {
                    return;
                }
                try {
                    try {
                        fileInputStream = new FileInputStream(file);
                        try {
                            fileOutputStream = new FileOutputStream(file2);
                            try {
                                try {
                                    ByteStreams.copy(fileInputStream, fileOutputStream);
                                    settableFutureCreate.set(null);
                                    fileInputStream.close();
                                    fileOutputStream.close();
                                } catch (Exception e2) {
                                    e = e2;
                                    settableFutureCreate.setException(e);
                                    if (fileInputStream != null) {
                                        fileInputStream.close();
                                    }
                                    if (fileOutputStream != null) {
                                        fileOutputStream.close();
                                    }
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                if (fileInputStream != null) {
                                    try {
                                        fileInputStream.close();
                                        if (fileOutputStream != null) {
                                            fileOutputStream.close();
                                        }
                                    } catch (IOException unused) {
                                        throw th;
                                    }
                                } else if (fileOutputStream != null) {
                                    fileOutputStream.close();
                                }
                                throw th;
                            }
                        } catch (Exception e3) {
                            fileOutputStream = null;
                            e = e3;
                        } catch (Throwable th3) {
                            fileOutputStream = null;
                            th = th3;
                            if (fileInputStream != null) {
                                fileInputStream.close();
                                if (fileOutputStream != null) {
                                    fileOutputStream.close();
                                }
                            } else if (fileOutputStream != null) {
                                fileOutputStream.close();
                            }
                            throw th;
                        }
                    } catch (IOException unused2) {
                    }
                } catch (Exception e4) {
                    fileOutputStream = null;
                    e = e4;
                    fileInputStream = null;
                } catch (Throwable th4) {
                    fileOutputStream = null;
                    th = th4;
                    fileInputStream = null;
                }
            }
        }.start();
        return settableFutureCreate;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static long getMediaItemDurationUs(Context context, MediaItem mediaItem) throws IOException {
        long jMsToUs;
        String string = ((MediaItem.LocalConfiguration) Assertions.checkNotNull(mediaItem.localConfiguration)).uri.toString();
        long jMsToUs2 = Util.msToUs(mediaItem.clippingConfiguration.startPositionMs);
        if (mediaItem.clippingConfiguration.endPositionMs != Long.MIN_VALUE) {
            jMsToUs = Util.msToUs(mediaItem.clippingConfiguration.endPositionMs);
        } else {
            jMsToUs = Mp4Info.create(context, string).durationUs;
        }
        return jMsToUs - jMsToUs2;
    }
}
