package com.v_chat_sdk.v_video_compressor;

import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoEncodingSettings.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0010\u0006\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J(\u0010\r\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u00052\u0006\u0010\u000f\u001a\u00020\u00052\u0006\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013J\u001f\u0010\u0014\u001a\u00020\f2\b\u0010\u0015\u001a\u0004\u0018\u00010\f2\b\u0010\u0016\u001a\u0004\u0018\u00010\f¢\u0006\u0002\u0010\u0017J!\u0010\u0018\u001a\u0004\u0018\u00010\f2\b\u0010\u0015\u001a\u0004\u0018\u00010\f2\b\u0010\u0016\u001a\u0004\u0018\u00010\f¢\u0006\u0002\u0010\u0019R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0086T¢\u0006\u0002\n\u0000¨\u0006\u001a"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoEncodingSettings;", "", "<init>", "()V", "BITRATE_4K_HIGH", "", "BITRATE_1080P_HIGH", "BITRATE_720P_MEDIUM", "BITRATE_480P_LOW", "BITRATE_360P_VERY_LOW", "BITRATE_240P_ULTRA_LOW", "DEFAULT_FRAME_RATE", "", "targetBitrate", "width", "height", "quality", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;", "advanced", "Lcom/v_chat_sdk/v_video_compressor/VVideoAdvancedConfig;", "effectiveFrameRate", "requested", "source", "(Ljava/lang/Double;Ljava/lang/Double;)D", "frameDropTarget", "(Ljava/lang/Double;Ljava/lang/Double;)Ljava/lang/Double;", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class VVideoEncodingSettings {
    public static final int BITRATE_1080P_HIGH = 3500000;
    public static final int BITRATE_240P_ULTRA_LOW = 200000;
    public static final int BITRATE_360P_VERY_LOW = 300000;
    public static final int BITRATE_480P_LOW = 500000;
    public static final int BITRATE_4K_HIGH = 8000000;
    public static final int BITRATE_720P_MEDIUM = 1800000;
    public static final double DEFAULT_FRAME_RATE = 30.0d;
    public static final VVideoEncodingSettings INSTANCE = new VVideoEncodingSettings();

    /* JADX INFO: compiled from: VVideoEncodingSettings.kt */
    @Metadata(k = 3, mv = {2, 2, 0}, xi = 48)
    public static final /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[VVideoCompressQuality.values().length];
            try {
                iArr[VVideoCompressQuality.HIGH.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[VVideoCompressQuality.MEDIUM.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[VVideoCompressQuality.LOW.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[VVideoCompressQuality.VERY_LOW.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr[VVideoCompressQuality.ULTRA_LOW.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    private VVideoEncodingSettings() {
    }

    public final int targetBitrate(int width, int height, VVideoCompressQuality quality, VVideoAdvancedConfig advanced) {
        int iDoubleValue;
        Intrinsics.checkNotNullParameter(quality, "quality");
        if (width >= 3840 || height >= 2160) {
            int i = WhenMappings.$EnumSwitchMapping$0[quality.ordinal()];
            if (i == 1) {
                iDoubleValue = 8000000;
            } else if (i == 2) {
                iDoubleValue = 4800000;
            } else if (i == 3) {
                iDoubleValue = 3200000;
            } else if (i == 4) {
                iDoubleValue = 2000000;
            } else {
                if (i != 5) {
                    throw new NoWhenBranchMatchedException();
                }
                iDoubleValue = 1200000;
            }
        } else {
            int i2 = WhenMappings.$EnumSwitchMapping$0[quality.ordinal()];
            if (i2 == 1) {
                iDoubleValue = BITRATE_1080P_HIGH;
            } else if (i2 == 2) {
                iDoubleValue = 1800000;
            } else if (i2 == 3) {
                iDoubleValue = BITRATE_480P_LOW;
            } else if (i2 == 4) {
                iDoubleValue = BITRATE_360P_VERY_LOW;
            } else {
                if (i2 != 5) {
                    throw new NoWhenBranchMatchedException();
                }
                iDoubleValue = BITRATE_240P_ULTRA_LOW;
            }
        }
        if (advanced == null) {
            return iDoubleValue;
        }
        Integer videoBitrate = advanced.getVideoBitrate();
        if (videoBitrate != null) {
            return videoBitrate.intValue();
        }
        if (Intrinsics.areEqual((Object) advanced.getAggressiveCompression(), (Object) true)) {
            iDoubleValue = (int) (iDoubleValue * 0.7f);
        }
        Double reducedFrameRate = advanced.getReducedFrameRate();
        if (reducedFrameRate != null) {
            if (reducedFrameRate.doubleValue() >= 30.0d) {
                reducedFrameRate = null;
            }
            if (reducedFrameRate != null) {
                iDoubleValue = (int) (((double) iDoubleValue) * (reducedFrameRate.doubleValue() / 30.0d));
            }
        }
        if (Intrinsics.areEqual((Object) advanced.getVariableBitrate(), (Object) true)) {
            iDoubleValue = (int) (iDoubleValue * 0.85f);
        }
        return Math.max(iDoubleValue, 100000);
    }

    /* JADX WARN: Code duplicated, block: B:16:0x0035  */
    /* JADX WARN: Code duplicated, block: B:9:0x001e  */
    public final double effectiveFrameRate(Double requested, Double source) {
        if (requested != null) {
            double dDoubleValue = requested.doubleValue();
            if (Math.abs(dDoubleValue) > Double.MAX_VALUE || dDoubleValue <= 0.0d) {
                requested = null;
            }
        } else {
            requested = null;
        }
        if (source != null) {
            double dDoubleValue2 = source.doubleValue();
            if (Math.abs(dDoubleValue2) > Double.MAX_VALUE || dDoubleValue2 <= 0.0d) {
                source = null;
            }
        } else {
            source = null;
        }
        if (requested != null && source != null) {
            return Math.min(requested.doubleValue(), source.doubleValue());
        }
        if (requested != null) {
            return requested.doubleValue();
        }
        if (source != null) {
            return source.doubleValue();
        }
        return 30.0d;
    }

    /* JADX WARN: Code duplicated, block: B:18:0x003b  */
    public final Double frameDropTarget(Double requested, Double source) {
        if (requested != null) {
            double dDoubleValue = requested.doubleValue();
            if (Math.abs(dDoubleValue) > Double.MAX_VALUE || dDoubleValue <= 0.0d) {
                requested = null;
            }
            if (requested != null) {
                double dDoubleValue2 = requested.doubleValue();
                if (source != null) {
                    double dDoubleValue3 = source.doubleValue();
                    if (Math.abs(dDoubleValue3) > Double.MAX_VALUE || dDoubleValue3 <= 0.0d) {
                        source = null;
                    }
                } else {
                    source = null;
                }
                if (source == null || dDoubleValue2 < source.doubleValue()) {
                    return requested;
                }
                return null;
            }
        }
        return null;
    }
}
