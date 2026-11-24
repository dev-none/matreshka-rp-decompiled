package androidx.media3.transformer;

import android.content.Context;
import android.media.MediaCodecInfo;
import android.media.MediaFormat;
import android.media.metrics.LogSessionId;
import android.os.Build;
import android.util.Size;
import androidx.media3.common.C;
import androidx.media3.common.ColorInfo;
import androidx.media3.common.Format;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.MediaFormatUtil;
import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Locale;
import org.checkerframework.checker.nullness.qual.RequiresNonNull;

/* JADX INFO: loaded from: classes4.dex */
public final class DefaultEncoderFactory implements Codec.EncoderFactory {
    private static final int DEFAULT_AUDIO_BITRATE = 131072;
    private static final int DEFAULT_FRAME_RATE = 30;
    private static final int PRIORITY_BEST_EFFORT = 1;
    private final int codecPriority;
    private final Context context;
    private final boolean enableCodecDbLite;
    private final boolean enableFallback;
    private final AudioEncoderSettings requestedAudioEncoderSettings;
    private final VideoEncoderSettings requestedVideoEncoderSettings;
    private final EncoderSelector videoEncoderSelector;

    /* JADX INFO: Access modifiers changed from: private */
    interface EncoderFallbackCost {
        int getParameterSupportGap(MediaCodecInfo mediaCodecInfo);
    }

    private static int getSuggestedBitrate(int i, int i2, float f) {
        return (int) (((double) (i * i2 * f)) * 0.07d * 2.0d);
    }

    public static final class Builder {
        private final Context context;
        private EncoderSelector videoEncoderSelector = EncoderSelector.DEFAULT;
        private VideoEncoderSettings requestedVideoEncoderSettings = VideoEncoderSettings.DEFAULT;
        private AudioEncoderSettings requestedAudioEncoderSettings = AudioEncoderSettings.DEFAULT;
        private boolean enableFallback = true;
        private boolean enableCodecDbLite = false;
        private int codecPriority = C.PRIORITY_PROCESSING_FOREGROUND;

        public Builder(Context context) {
            this.context = context.getApplicationContext();
        }

        public Builder setVideoEncoderSelector(EncoderSelector encoderSelector) {
            this.videoEncoderSelector = encoderSelector;
            return this;
        }

        public Builder setRequestedVideoEncoderSettings(VideoEncoderSettings videoEncoderSettings) {
            this.requestedVideoEncoderSettings = videoEncoderSettings;
            return this;
        }

        public Builder setRequestedAudioEncoderSettings(AudioEncoderSettings audioEncoderSettings) {
            this.requestedAudioEncoderSettings = audioEncoderSettings;
            return this;
        }

        public Builder setEnableFallback(boolean z) {
            this.enableFallback = z;
            return this;
        }

        public Builder setEnableCodecDbLite(boolean z) {
            this.enableCodecDbLite = z;
            return this;
        }

        public Builder setCodecPriority(int i) {
            this.codecPriority = i;
            return this;
        }

        public DefaultEncoderFactory build() {
            return new DefaultEncoderFactory(this);
        }
    }

    private DefaultEncoderFactory(Builder builder) {
        this.context = builder.context;
        this.videoEncoderSelector = builder.videoEncoderSelector;
        this.requestedVideoEncoderSettings = builder.requestedVideoEncoderSettings;
        this.requestedAudioEncoderSettings = builder.requestedAudioEncoderSettings;
        this.enableFallback = builder.enableFallback;
        this.enableCodecDbLite = builder.enableCodecDbLite;
        this.codecPriority = builder.codecPriority;
    }

    @Override // androidx.media3.transformer.Codec.EncoderFactory
    public DefaultCodec createForAudioEncoding(Format format, LogSessionId logSessionId) throws ExportException {
        EncoderQueryResult encoderQueryResultFindAudioEncoderWithClosestSupportedFormat;
        if (format.bitrate == -1) {
            format = format.buildUpon().setAverageBitrate(131072).build();
        }
        boolean z = false;
        if (format.sampleMimeType == null) {
            throw createNoSupportedMimeTypeException(format, false);
        }
        MediaFormat mediaFormatCreateMediaFormatFromFormat = MediaFormatUtil.createMediaFormatFromFormat(format);
        ImmutableList<MediaCodecInfo> supportedEncoders = EncoderUtil.getSupportedEncoders(format.sampleMimeType);
        if (supportedEncoders.isEmpty()) {
            throw createExportException(format, "No audio media codec found");
        }
        MediaCodecInfo mediaCodecInfo = supportedEncoders.get(0);
        if (this.requestedAudioEncoderSettings.profile != -1) {
            for (int i = 0; i < supportedEncoders.size(); i++) {
                MediaCodecInfo mediaCodecInfo2 = supportedEncoders.get(i);
                if (EncoderUtil.findSupportedEncodingProfiles(mediaCodecInfo2, format.sampleMimeType).contains(Integer.valueOf(this.requestedAudioEncoderSettings.profile))) {
                    if (format.sampleMimeType.equals(MimeTypes.AUDIO_AAC)) {
                        mediaFormatCreateMediaFormatFromFormat.setInteger("aac-profile", this.requestedAudioEncoderSettings.profile);
                    }
                    mediaFormatCreateMediaFormatFromFormat.setInteger("profile", this.requestedAudioEncoderSettings.profile);
                    z = true;
                    mediaCodecInfo = mediaCodecInfo2;
                    break;
                }
            }
        }
        if (!z && this.enableFallback && (encoderQueryResultFindAudioEncoderWithClosestSupportedFormat = findAudioEncoderWithClosestSupportedFormat(format, supportedEncoders)) != null) {
            mediaCodecInfo = encoderQueryResultFindAudioEncoderWithClosestSupportedFormat.encoder;
            format = encoderQueryResultFindAudioEncoderWithClosestSupportedFormat.supportedFormat;
            mediaFormatCreateMediaFormatFromFormat = MediaFormatUtil.createMediaFormatFromFormat(format);
        }
        Format format2 = format;
        MediaFormat mediaFormat = mediaFormatCreateMediaFormatFromFormat;
        if (this.requestedAudioEncoderSettings.bitrate != -1) {
            mediaFormat.setInteger("bitrate", this.requestedAudioEncoderSettings.bitrate);
        }
        if (Build.VERSION.SDK_INT >= 35 && logSessionId != null) {
            TransformerUtil.Api35.setLogSessionIdToMediaCodecFormat(mediaFormat, logSessionId);
        }
        return new DefaultCodec(this.context, format2, mediaFormat, mediaCodecInfo.getName(), false, null);
    }

    @Override // androidx.media3.transformer.Codec.EncoderFactory
    public DefaultCodec createForVideoEncoding(Format format, LogSessionId logSessionId) throws ExportException {
        int suggestedBitrate;
        String str;
        if (format.frameRate == -1.0f || deviceNeedsDefaultFrameRateWorkaround()) {
            format = format.buildUpon().setFrameRate(30.0f).build();
        }
        if (format.sampleMimeType == null) {
            throw createNoSupportedMimeTypeException(format, true);
        }
        Assertions.checkArgument(format.width != -1);
        Assertions.checkArgument(format.height != -1);
        Assertions.checkArgument(format.rotationDegrees == 0);
        Assertions.checkStateNotNull(this.videoEncoderSelector);
        VideoEncoderQueryResult videoEncoderQueryResultFindVideoEncoderWithClosestSupportedFormat = findVideoEncoderWithClosestSupportedFormat(format, this.requestedVideoEncoderSettings, this.videoEncoderSelector, this.enableFallback);
        if (videoEncoderQueryResultFindVideoEncoderWithClosestSupportedFormat == null) {
            throw createExportException(format, "The requested video encoding format is not supported.");
        }
        MediaCodecInfo mediaCodecInfo = videoEncoderQueryResultFindVideoEncoderWithClosestSupportedFormat.encoder;
        Format format2 = videoEncoderQueryResultFindVideoEncoderWithClosestSupportedFormat.supportedFormat;
        VideoEncoderSettings videoEncoderSettingsBuild = videoEncoderQueryResultFindVideoEncoderWithClosestSupportedFormat.supportedEncoderSettings;
        String str2 = (String) Assertions.checkNotNull(format2.sampleMimeType);
        if (this.enableCodecDbLite) {
            VideoEncoderSettings recommendedVideoEncoderSettings = CodecDbLite.getRecommendedVideoEncoderSettings(format);
            VideoEncoderSettings.Builder builderBuildUpon = videoEncoderSettingsBuild.buildUpon();
            if (videoEncoderSettingsBuild.maxBFrames == -1) {
                builderBuildUpon.setMaxBFrames(recommendedVideoEncoderSettings.maxBFrames);
            }
            if (videoEncoderSettingsBuild.numNonBidirectionalTemporalLayers == -1 && videoEncoderSettingsBuild.numBidirectionalTemporalLayers == -1) {
                builderBuildUpon.setTemporalLayers(recommendedVideoEncoderSettings.numNonBidirectionalTemporalLayers, recommendedVideoEncoderSettings.numBidirectionalTemporalLayers);
            }
            videoEncoderSettingsBuild = builderBuildUpon.build();
        }
        if (this.enableFallback || videoEncoderSettingsBuild.bitrate != -1) {
            suggestedBitrate = videoEncoderSettingsBuild.bitrate;
        } else if (format2.averageBitrate != -1) {
            suggestedBitrate = format2.averageBitrate;
        } else {
            suggestedBitrate = getSuggestedBitrate(format2.width, format2.height, format2.frameRate);
        }
        Format formatBuild = format2.buildUpon().setAverageBitrate(suggestedBitrate).build();
        MediaFormat mediaFormatCreateMediaFormatFromFormat = MediaFormatUtil.createMediaFormatFromFormat(formatBuild);
        mediaFormatCreateMediaFormatFromFormat.setInteger("bitrate-mode", videoEncoderSettingsBuild.bitrateMode);
        mediaFormatCreateMediaFormatFromFormat.setInteger("frame-rate", Math.round(formatBuild.frameRate));
        if (videoEncoderSettingsBuild.profile != -1 && videoEncoderSettingsBuild.level != -1) {
            mediaFormatCreateMediaFormatFromFormat.setInteger("profile", videoEncoderSettingsBuild.profile);
            mediaFormatCreateMediaFormatFromFormat.setInteger("level", videoEncoderSettingsBuild.level);
        } else if (ColorInfo.isTransferHdr(format.colorInfo)) {
            mediaFormatCreateMediaFormatFromFormat.setInteger("profile", EncoderUtil.getCodecProfilesForHdrFormat(str2, ((ColorInfo) Assertions.checkNotNull(format.colorInfo)).colorTransfer).get(0).intValue());
        }
        if (str2.equals("video/avc")) {
            adjustMediaFormatForH264EncoderSettings(format.colorInfo, mediaCodecInfo, mediaFormatCreateMediaFormatFromFormat);
        }
        if (Build.VERSION.SDK_INT >= 31 && ColorInfo.isTransferHdr(format.colorInfo)) {
            if (EncoderUtil.getSupportedColorFormats(mediaCodecInfo, str2).contains(2130750114)) {
                mediaFormatCreateMediaFormatFromFormat.setInteger("color-format", 2130750114);
            } else {
                throw createExportException(format, "Encoding HDR is not supported on this device.");
            }
        } else {
            mediaFormatCreateMediaFormatFromFormat.setInteger("color-format", 2130708361);
        }
        mediaFormatCreateMediaFormatFromFormat.setFloat("i-frame-interval", videoEncoderSettingsBuild.iFrameIntervalSeconds);
        int i = videoEncoderSettingsBuild.operatingRate;
        int i2 = videoEncoderSettingsBuild.priority;
        if (i == -1 && i2 == -1) {
            adjustMediaFormatForEncoderPerformanceSettings(mediaFormatCreateMediaFormatFromFormat);
        } else {
            if (i != -2) {
                mediaFormatCreateMediaFormatFromFormat.setInteger("operating-rate", i);
            }
            if (i2 != -2) {
                mediaFormatCreateMediaFormatFromFormat.setInteger("priority", i2);
            }
        }
        long j = videoEncoderSettingsBuild.repeatPreviousFrameIntervalUs;
        if (j != -1) {
            mediaFormatCreateMediaFormatFromFormat.setLong("repeat-previous-frame-after", j);
        }
        if (Build.VERSION.SDK_INT >= 35) {
            mediaFormatCreateMediaFormatFromFormat.setInteger("importance", Math.max(0, -this.codecPriority));
            if (logSessionId != null) {
                TransformerUtil.Api35.setLogSessionIdToMediaCodecFormat(mediaFormatCreateMediaFormatFromFormat, logSessionId);
            }
        }
        int i3 = videoEncoderSettingsBuild.maxBFrames;
        if (Build.VERSION.SDK_INT >= 29 && i3 != -1) {
            mediaFormatCreateMediaFormatFromFormat.setInteger("max-bframes", i3);
        }
        int i4 = videoEncoderSettingsBuild.numNonBidirectionalTemporalLayers;
        int i5 = videoEncoderSettingsBuild.numBidirectionalTemporalLayers;
        if (Build.VERSION.SDK_INT >= 29 && i4 >= 0) {
            if (i4 == 0) {
                str = "none";
            } else if (i5 > 0) {
                str = String.format(Locale.ROOT, "android.generic.%d+%d", Integer.valueOf(i4), Integer.valueOf(i5));
            } else {
                str = String.format(Locale.ROOT, "android.generic.%d", Integer.valueOf(i4));
            }
            mediaFormatCreateMediaFormatFromFormat.setString("ts-schema", str);
        }
        return new DefaultCodec(this.context, formatBuild, mediaFormatCreateMediaFormatFromFormat, mediaCodecInfo.getName(), false, null);
    }

    @Override // androidx.media3.transformer.Codec.EncoderFactory
    public boolean audioNeedsEncoding() {
        return !this.requestedAudioEncoderSettings.equals(AudioEncoderSettings.DEFAULT);
    }

    @Override // androidx.media3.transformer.Codec.EncoderFactory
    public boolean videoNeedsEncoding() {
        return !this.requestedVideoEncoderSettings.equals(VideoEncoderSettings.DEFAULT);
    }

    @RequiresNonNull({"#1.sampleMimeType"})
    private static VideoEncoderQueryResult findVideoEncoderWithClosestSupportedFormat(Format format, VideoEncoderSettings videoEncoderSettings, EncoderSelector encoderSelector, boolean z) {
        int suggestedBitrate;
        String str = (String) Assertions.checkNotNull(format.sampleMimeType);
        ImmutableList<MediaCodecInfo> immutableListSelectEncoderInfos = encoderSelector.selectEncoderInfos(str);
        if (immutableListSelectEncoderInfos.isEmpty()) {
            return null;
        }
        if (!z) {
            return new VideoEncoderQueryResult(immutableListSelectEncoderInfos.get(0), format, videoEncoderSettings);
        }
        ImmutableList<MediaCodecInfo> immutableListFilterEncodersByHdrEditingSupport = filterEncodersByHdrEditingSupport(immutableListSelectEncoderInfos, str, format.colorInfo);
        if (immutableListFilterEncodersByHdrEditingSupport.isEmpty()) {
            return null;
        }
        ImmutableList<MediaCodecInfo> immutableListFilterEncodersByResolution = filterEncodersByResolution(immutableListFilterEncodersByHdrEditingSupport, str, format.width, format.height);
        if (immutableListFilterEncodersByResolution.isEmpty()) {
            return null;
        }
        Size size = (Size) Assertions.checkNotNull(EncoderUtil.getSupportedResolution(immutableListFilterEncodersByResolution.get(0), str, format.width, format.height));
        if (videoEncoderSettings.bitrate != -1) {
            suggestedBitrate = videoEncoderSettings.bitrate;
        } else if (format.averageBitrate != -1) {
            suggestedBitrate = format.averageBitrate;
        } else {
            suggestedBitrate = getSuggestedBitrate(size.getWidth(), size.getHeight(), format.frameRate);
        }
        ImmutableList<MediaCodecInfo> immutableListFilterEncodersByBitrate = filterEncodersByBitrate(immutableListFilterEncodersByResolution, str, suggestedBitrate);
        if (immutableListFilterEncodersByBitrate.isEmpty()) {
            return null;
        }
        ImmutableList<MediaCodecInfo> immutableListFilterEncodersByBitrateMode = filterEncodersByBitrateMode(immutableListFilterEncodersByBitrate, str, videoEncoderSettings.bitrateMode);
        if (immutableListFilterEncodersByBitrateMode.isEmpty()) {
            return null;
        }
        VideoEncoderSettings.Builder builderBuildUpon = videoEncoderSettings.buildUpon();
        Format.Builder height = format.buildUpon().setSampleMimeType(str).setWidth(size.getWidth()).setHeight(size.getHeight());
        MediaCodecInfo mediaCodecInfo = immutableListFilterEncodersByBitrateMode.get(0);
        int iIntValue = ((Integer) EncoderUtil.getSupportedBitrateRange(mediaCodecInfo, str).clamp(Integer.valueOf(suggestedBitrate))).intValue();
        builderBuildUpon.setBitrate(iIntValue);
        height.setAverageBitrate(iIntValue);
        if (videoEncoderSettings.profile == -1 || videoEncoderSettings.level == -1 || videoEncoderSettings.level > EncoderUtil.findHighestSupportedEncodingLevel(mediaCodecInfo, str, videoEncoderSettings.profile)) {
            builderBuildUpon.setEncodingProfileLevel(-1, -1);
        }
        return new VideoEncoderQueryResult(mediaCodecInfo, height.build(), builderBuildUpon.build());
    }

    private static ImmutableList<MediaCodecInfo> filterEncodersByResolution(List<MediaCodecInfo> list, final String str, final int i, final int i2) {
        return filterEncoders(list, new EncoderFallbackCost() { // from class: androidx.media3.transformer.DefaultEncoderFactory$$ExternalSyntheticLambda3
            @Override // androidx.media3.transformer.DefaultEncoderFactory.EncoderFallbackCost
            public final int getParameterSupportGap(MediaCodecInfo mediaCodecInfo) {
                return DefaultEncoderFactory.lambda$filterEncodersByResolution$0(str, i, i2, mediaCodecInfo);
            }
        });
    }

    static /* synthetic */ int lambda$filterEncodersByResolution$0(String str, int i, int i2, MediaCodecInfo mediaCodecInfo) {
        Size supportedResolution = EncoderUtil.getSupportedResolution(mediaCodecInfo, str, i, i2);
        if (supportedResolution == null) {
            return Integer.MAX_VALUE;
        }
        return Math.abs((i * i2) - (supportedResolution.getWidth() * supportedResolution.getHeight()));
    }

    private static ImmutableList<MediaCodecInfo> filterEncodersByBitrate(List<MediaCodecInfo> list, final String str, final int i) {
        return filterEncoders(list, new EncoderFallbackCost() { // from class: androidx.media3.transformer.DefaultEncoderFactory$$ExternalSyntheticLambda0
            @Override // androidx.media3.transformer.DefaultEncoderFactory.EncoderFallbackCost
            public final int getParameterSupportGap(MediaCodecInfo mediaCodecInfo) {
                String str2 = str;
                int i2 = i;
                return Math.abs(((Integer) EncoderUtil.getSupportedBitrateRange(mediaCodecInfo, str2).clamp(Integer.valueOf(i2))).intValue() - i2);
            }
        });
    }

    private static ImmutableList<MediaCodecInfo> filterEncodersByBitrateMode(List<MediaCodecInfo> list, final String str, final int i) {
        return filterEncoders(list, new EncoderFallbackCost() { // from class: androidx.media3.transformer.DefaultEncoderFactory$$ExternalSyntheticLambda1
            @Override // androidx.media3.transformer.DefaultEncoderFactory.EncoderFallbackCost
            public final int getParameterSupportGap(MediaCodecInfo mediaCodecInfo) {
                return DefaultEncoderFactory.lambda$filterEncodersByBitrateMode$2(str, i, mediaCodecInfo);
            }
        });
    }

    static /* synthetic */ int lambda$filterEncodersByBitrateMode$2(String str, int i, MediaCodecInfo mediaCodecInfo) {
        return EncoderUtil.isBitrateModeSupported(mediaCodecInfo, str, i) ? 0 : Integer.MAX_VALUE;
    }

    private static ImmutableList<MediaCodecInfo> filterEncodersByHdrEditingSupport(List<MediaCodecInfo> list, final String str, final ColorInfo colorInfo) {
        if (Build.VERSION.SDK_INT < 33 || !ColorInfo.isTransferHdr(colorInfo)) {
            return ImmutableList.copyOf((Collection) list);
        }
        return filterEncoders(list, new EncoderFallbackCost() { // from class: androidx.media3.transformer.DefaultEncoderFactory$$ExternalSyntheticLambda2
            @Override // androidx.media3.transformer.DefaultEncoderFactory.EncoderFallbackCost
            public final int getParameterSupportGap(MediaCodecInfo mediaCodecInfo) {
                return DefaultEncoderFactory.lambda$filterEncodersByHdrEditingSupport$3(str, colorInfo, mediaCodecInfo);
            }
        });
    }

    static /* synthetic */ int lambda$filterEncodersByHdrEditingSupport$3(String str, ColorInfo colorInfo, MediaCodecInfo mediaCodecInfo) {
        return EncoderUtil.isHdrEditingSupported(mediaCodecInfo, str, (ColorInfo) Assertions.checkNotNull(colorInfo)) ? 0 : Integer.MAX_VALUE;
    }

    @RequiresNonNull({"#1.sampleMimeType"})
    private static EncoderQueryResult findAudioEncoderWithClosestSupportedFormat(Format format, ImmutableList<MediaCodecInfo> immutableList) {
        String str = (String) Assertions.checkNotNull(format.sampleMimeType);
        if (immutableList.isEmpty()) {
            return null;
        }
        MediaCodecInfo mediaCodecInfo = filterEncodersBySampleRate(immutableList, str, format.sampleRate).get(0);
        return new EncoderQueryResult(mediaCodecInfo, format.buildUpon().setSampleRate(EncoderUtil.getClosestSupportedSampleRate(mediaCodecInfo, str, format.sampleRate)).build());
    }

    private static ImmutableList<MediaCodecInfo> filterEncodersBySampleRate(List<MediaCodecInfo> list, final String str, final int i) {
        return filterEncoders(list, new EncoderFallbackCost() { // from class: androidx.media3.transformer.DefaultEncoderFactory$$ExternalSyntheticLambda4
            @Override // androidx.media3.transformer.DefaultEncoderFactory.EncoderFallbackCost
            public final int getParameterSupportGap(MediaCodecInfo mediaCodecInfo) {
                String str2 = str;
                int i2 = i;
                return Math.abs(EncoderUtil.getClosestSupportedSampleRate(mediaCodecInfo, str2, i2) - i2);
            }
        });
    }

    private static class EncoderQueryResult {
        public final MediaCodecInfo encoder;
        public final Format supportedFormat;

        public EncoderQueryResult(MediaCodecInfo mediaCodecInfo, Format format) {
            this.encoder = mediaCodecInfo;
            this.supportedFormat = format;
        }
    }

    private static final class VideoEncoderQueryResult extends EncoderQueryResult {
        public final VideoEncoderSettings supportedEncoderSettings;

        public VideoEncoderQueryResult(MediaCodecInfo mediaCodecInfo, Format format, VideoEncoderSettings videoEncoderSettings) {
            super(mediaCodecInfo, format);
            this.supportedEncoderSettings = videoEncoderSettings;
        }
    }

    private static void adjustMediaFormatForEncoderPerformanceSettings(MediaFormat mediaFormat) {
        mediaFormat.setInteger("priority", 1);
        if (Build.VERSION.SDK_INT == 26) {
            mediaFormat.setInteger("operating-rate", 30);
        } else if (deviceNeedsLowerOperatingRateAvoidingOverflowWorkaround()) {
            mediaFormat.setInteger("operating-rate", 1000);
        } else {
            mediaFormat.setInteger("operating-rate", Integer.MAX_VALUE);
        }
    }

    private static boolean deviceNeedsLowerOperatingRateAvoidingOverflowWorkaround() {
        if (Build.VERSION.SDK_INT < 31 || Build.VERSION.SDK_INT > 34) {
            return false;
        }
        return Build.SOC_MODEL.equals("SM8550") || Build.SOC_MODEL.equals("SM7450") || Build.SOC_MODEL.equals("SM6450") || Build.SOC_MODEL.equals("SC9863A") || Build.SOC_MODEL.equals("T612") || Build.SOC_MODEL.equals("T606") || Build.SOC_MODEL.equals("T603");
    }

    private static void adjustMediaFormatForH264EncoderSettings(ColorInfo colorInfo, MediaCodecInfo mediaCodecInfo, MediaFormat mediaFormat) {
        int iIntValue = 8;
        if (Build.VERSION.SDK_INT >= 29) {
            if (colorInfo != null) {
                ImmutableList<Integer> codecProfilesForHdrFormat = EncoderUtil.getCodecProfilesForHdrFormat("video/avc", colorInfo.colorTransfer);
                if (!codecProfilesForHdrFormat.isEmpty()) {
                    iIntValue = codecProfilesForHdrFormat.get(0).intValue();
                }
            }
            int iFindHighestSupportedEncodingLevel = EncoderUtil.findHighestSupportedEncodingLevel(mediaCodecInfo, "video/avc", iIntValue);
            if (iFindHighestSupportedEncodingLevel != -1) {
                mediaFormat.setInteger("profile", iIntValue);
                if (mediaFormat.containsKey("level")) {
                    return;
                }
                mediaFormat.setInteger("level", iFindHighestSupportedEncodingLevel);
                return;
            }
            return;
        }
        if (!deviceNeedsNoH264HighProfileWorkaround()) {
            int iFindHighestSupportedEncodingLevel2 = EncoderUtil.findHighestSupportedEncodingLevel(mediaCodecInfo, "video/avc", 8);
            if (iFindHighestSupportedEncodingLevel2 != -1) {
                mediaFormat.setInteger("profile", 8);
                if (!mediaFormat.containsKey("level")) {
                    mediaFormat.setInteger("level", iFindHighestSupportedEncodingLevel2);
                }
                mediaFormat.setInteger("latency", 1);
                return;
            }
            return;
        }
        int iFindHighestSupportedEncodingLevel3 = EncoderUtil.findHighestSupportedEncodingLevel(mediaCodecInfo, "video/avc", 1);
        Assertions.checkState(iFindHighestSupportedEncodingLevel3 != -1);
        mediaFormat.setInteger("profile", 1);
        if (mediaFormat.containsKey("level")) {
            return;
        }
        mediaFormat.setInteger("level", iFindHighestSupportedEncodingLevel3);
    }

    private static ImmutableList<MediaCodecInfo> filterEncoders(List<MediaCodecInfo> list, EncoderFallbackCost encoderFallbackCost) {
        ArrayList arrayList = new ArrayList(list.size());
        int i = Integer.MAX_VALUE;
        for (int i2 = 0; i2 < list.size(); i2++) {
            MediaCodecInfo mediaCodecInfo = list.get(i2);
            int parameterSupportGap = encoderFallbackCost.getParameterSupportGap(mediaCodecInfo);
            if (parameterSupportGap != Integer.MAX_VALUE) {
                if (parameterSupportGap < i) {
                    arrayList.clear();
                    arrayList.add(mediaCodecInfo);
                    i = parameterSupportGap;
                } else if (parameterSupportGap == i) {
                    arrayList.add(mediaCodecInfo);
                }
            }
        }
        return ImmutableList.copyOf((Collection) arrayList);
    }

    private static ExportException createNoSupportedMimeTypeException(Format format, boolean z) {
        String str;
        if (z && ColorInfo.isTransferHdr(format.colorInfo)) {
            str = "No MIME type is supported by both encoder and muxer. Requested HDR colorInfo: " + format.colorInfo;
        } else {
            str = "No MIME type is supported by both encoder and muxer.";
        }
        return ExportException.createForCodec(new IllegalArgumentException(str), 4003, new ExportException.CodecInfo(format.toString(), z, false, null));
    }

    @RequiresNonNull({"#1.sampleMimeType"})
    private static ExportException createExportException(Format format, String str) {
        return ExportException.createForCodec(new IllegalArgumentException(str), 4003, new ExportException.CodecInfo(format.toString(), MimeTypes.isVideo(format.sampleMimeType), false, null));
    }

    private static boolean deviceNeedsDefaultFrameRateWorkaround() {
        return Build.VERSION.SDK_INT < 30 && Build.DEVICE.equals("joyeuse");
    }

    private static boolean deviceNeedsNoH264HighProfileWorkaround() {
        if (Build.VERSION.SDK_INT == 27) {
            return Build.DEVICE.equals("ASUS_X00T_3") || Build.DEVICE.equals("TC77");
        }
        return false;
    }
}
