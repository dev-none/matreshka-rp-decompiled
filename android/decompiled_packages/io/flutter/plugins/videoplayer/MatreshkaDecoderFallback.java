package io.flutter.plugins.videoplayer;

import android.content.Context;
import android.os.Build;
import androidx.media3.exoplayer.DefaultRenderersFactory;
import androidx.media3.exoplayer.mediacodec.MediaCodecInfo;
import androidx.media3.exoplayer.mediacodec.MediaCodecSelector;
import androidx.media3.exoplayer.mediacodec.MediaCodecUtil;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Set;

/* JADX INFO: loaded from: classes7.dex */
public final class MatreshkaDecoderFallback {
    static final Set<String> SOFTWARE_FIRST_MIME_TYPES = Collections.unmodifiableSet(new HashSet(Arrays.asList("video/avc", "video/hevc")));
    static final MediaCodecSelector SOFTWARE_FIRST_VIDEO_SELECTOR = new MediaCodecSelector() { // from class: io.flutter.plugins.videoplayer.MatreshkaDecoderFallback$$ExternalSyntheticLambda0
        @Override // androidx.media3.exoplayer.mediacodec.MediaCodecSelector
        public final List getDecoderInfos(String str, boolean z, boolean z2) {
            return MatreshkaDecoderFallback.lambda$static$0(str, z, z2);
        }
    };

    private MatreshkaDecoderFallback() {
    }

    public static DefaultRenderersFactory create(Context context) {
        DefaultRenderersFactory enableDecoderFallback = new DefaultRenderersFactory(context).setEnableDecoderFallback(true);
        if (needsSoftwareFirstVideo()) {
            enableDecoderFallback.setMediaCodecSelector(SOFTWARE_FIRST_VIDEO_SELECTOR);
        }
        return enableDecoderFallback;
    }

    static boolean needsSoftwareFirstVideo() {
        String lowerCase = String.valueOf(Build.HARDWARE).toLowerCase(Locale.ROOT);
        String lowerCase2 = String.valueOf(Build.MANUFACTURER).toLowerCase(Locale.ROOT);
        return lowerCase.contains("kirin") || lowerCase.startsWith("hi3") || "huawei".equals(lowerCase2) || "honor".equals(lowerCase2);
    }

    static /* synthetic */ List lambda$static$0(String str, boolean z, boolean z2) throws MediaCodecUtil.DecoderQueryException {
        List<MediaCodecInfo> decoderInfos = MediaCodecUtil.getDecoderInfos(str, z, z2);
        if (SOFTWARE_FIRST_MIME_TYPES.contains(str) && decoderInfos.size() > 1) {
            ArrayList arrayList = new ArrayList(decoderInfos.size());
            ArrayList arrayList2 = new ArrayList(decoderInfos.size());
            for (MediaCodecInfo mediaCodecInfo : decoderInfos) {
                if (isSoftware(mediaCodecInfo)) {
                    arrayList.add(mediaCodecInfo);
                } else {
                    arrayList2.add(mediaCodecInfo);
                }
            }
            if (!arrayList.isEmpty()) {
                arrayList.addAll(arrayList2);
                return arrayList;
            }
        }
        return decoderInfos;
    }

    private static boolean isSoftware(MediaCodecInfo mediaCodecInfo) {
        if (!mediaCodecInfo.hardwareAccelerated) {
            return true;
        }
        String str = mediaCodecInfo.name;
        return str.startsWith("OMX.google.") || str.startsWith("c2.android.");
    }
}
