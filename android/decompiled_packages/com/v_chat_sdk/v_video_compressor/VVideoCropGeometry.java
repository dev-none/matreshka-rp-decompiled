package com.v_chat_sdk.v_video_compressor;

import io.flutter.plugin.platform.PlatformPlugin;
import io.sentry.rrweb.RRWebVideoEvent;
import java.util.List;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.math.MathKt;

/* JADX INFO: compiled from: VVideoCropGeometry.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0006\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0007\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000e\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001e\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\u00052\u0006\u0010\f\u001a\u00020\u0005J\u000e\u0010\r\u001a\u00020\u000e2\u0006\u0010\f\u001a\u00020\u0005J\u000e\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0012J\u0016\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\t2\u0006\u0010\u0011\u001a\u00020\u0012JQ\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u00052\u0006\u0010\u0019\u001a\u00020\u00052\u0006\u0010\u001a\u001a\u00020\u00052\u0006\u0010\u001b\u001a\u00020\u00122\u0006\u0010\u001c\u001a\u00020\u001d2\b\u0010\u001e\u001a\u0004\u0018\u00010\u00052\b\u0010\u001f\u001a\u0004\u0018\u00010\u00052\b\u0010 \u001a\u0004\u0018\u00010!¢\u0006\u0002\u0010\"J7\u0010#\u001a\u00020\t2\u0006\u0010$\u001a\u00020\t2\u0006\u0010\u001c\u001a\u00020\u001d2\b\u0010\u001e\u001a\u0004\u0018\u00010\u00052\b\u0010\u001f\u001a\u0004\u0018\u00010\u00052\u0006\u0010%\u001a\u00020!¢\u0006\u0002\u0010&J\u0016\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020*2\u0006\u0010+\u001a\u00020,J \u0010-\u001a\u00020\t2\u0006\u0010.\u001a\u00020\u00052\u0006\u0010/\u001a\u00020\u00052\u0006\u00100\u001a\u00020\u0007H\u0002J\"\u00101\u001a\u0004\u0018\u00010\t2\u0006\u00102\u001a\u00020\t2\u0006\u00100\u001a\u00020\u00072\u0006\u00103\u001a\u00020\u0005H\u0002J\u0010\u00104\u001a\u00020\u00052\u0006\u00105\u001a\u00020\u0005H\u0002J \u00106\u001a\u00020(2\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\u00052\u0006\u00100\u001a\u00020\u0007H\u0002J \u00107\u001a\u00020\u00072\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\u00052\u0006\u00100\u001a\u00020\u0007H\u0002J\u0018\u00108\u001a\u00020\u00052\u0006\u00105\u001a\u00020\u00052\u0006\u00103\u001a\u00020\u0005H\u0002J\u0010\u00109\u001a\u00020\u00052\u0006\u00105\u001a\u00020\u0005H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000¨\u0006:"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCropGeometry;", "", "<init>", "()V", "MIN_ENCODER_DIMENSION", "", "MAX_ASPECT_ERROR", "", "orientedSize", "Lcom/v_chat_sdk/v_video_compressor/VVideoSize;", "width", "height", "rotation", "cropRotationDegrees", "", "toMedia3Crop", "Lcom/v_chat_sdk/v_video_compressor/VVideoMedia3Crop;", "rect", "Lcom/v_chat_sdk/v_video_compressor/VVideoCropRect;", "pixelCrop", "Lcom/v_chat_sdk/v_video_compressor/VVideoPixelCrop;", RRWebVideoEvent.JsonKeys.SIZE, "createPlan", "Lcom/v_chat_sdk/v_video_compressor/VVideoCropPlan;", "displayedWidth", "displayedHeight", "explicitRotation", "cropRect", "quality", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;", "customWidth", "customHeight", "dimensionHandling", "Lcom/v_chat_sdk/v_video_compressor/VDimensionHandling;", "(IIILcom/v_chat_sdk/v_video_compressor/VVideoCropRect;Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/v_chat_sdk/v_video_compressor/VDimensionHandling;)Lcom/v_chat_sdk/v_video_compressor/VVideoCropPlan;", "resolveOutputSize", "cropSize", "handling", "(Lcom/v_chat_sdk/v_video_compressor/VVideoSize;Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/v_chat_sdk/v_video_compressor/VDimensionHandling;)Lcom/v_chat_sdk/v_video_compressor/VVideoSize;", "requiresEncodedOutput", "", "video", "Lcom/v_chat_sdk/v_video_compressor/VVideoInfo;", "config", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionConfig;", "fitInside", "maxWidth", "maxHeight", "aspect", "alignedIfAspectSafe", "fitted", "alignment", "alignedCanvasDimension", "value", "preservesAspectWithinOnePixel", "aspectError", "alignDown", "evenFloor", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class VVideoCropGeometry {
    public static final VVideoCropGeometry INSTANCE = new VVideoCropGeometry();
    private static final double MAX_ASPECT_ERROR = 0.01d;
    public static final int MIN_ENCODER_DIMENSION = 16;

    /* JADX INFO: compiled from: VVideoCropGeometry.kt */
    @Metadata(k = 3, mv = {2, 2, 0}, xi = 48)
    public static final /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;
        public static final /* synthetic */ int[] $EnumSwitchMapping$1;

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
            int[] iArr2 = new int[VDimensionHandling.values().length];
            try {
                iArr2[VDimensionHandling.LETTERBOX.ordinal()] = 1;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                iArr2[VDimensionHandling.EXACT.ordinal()] = 2;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                iArr2[VDimensionHandling.AUTO_ALIGN.ordinal()] = 3;
            } catch (NoSuchFieldError unused8) {
            }
            $EnumSwitchMapping$1 = iArr2;
        }
    }

    private VVideoCropGeometry() {
    }

    public final VVideoSize orientedSize(int width, int height, int rotation) {
        if (width <= 0 || height <= 0) {
            throw new IllegalArgumentException("Source dimensions must be positive".toString());
        }
        if (!CollectionsKt.listOf((Object[]) new Integer[]{0, 90, 180, 270}).contains(Integer.valueOf(rotation))) {
            throw new IllegalArgumentException("rotation must be 0, 90, 180, or 270".toString());
        }
        if (rotation == 90 || rotation == 270) {
            return new VVideoSize(height, width);
        }
        return new VVideoSize(width, height);
    }

    public final float cropRotationDegrees(int rotation) {
        if (CollectionsKt.listOf((Object[]) new Integer[]{0, 90, 180, 270}).contains(Integer.valueOf(rotation))) {
            return rotation;
        }
        throw new IllegalArgumentException("rotation must be 0, 90, 180, or 270".toString());
    }

    public final VVideoMedia3Crop toMedia3Crop(VVideoCropRect rect) {
        Intrinsics.checkNotNullParameter(rect, "rect");
        if (!rect.isValid()) {
            throw new IllegalArgumentException("Invalid crop rectangle".toString());
        }
        return new VVideoMedia3Crop((float) ((rect.getLeft() * 2.0d) - 1.0d), (float) ((rect.getRight() * 2.0d) - 1.0d), (float) (1.0d - (rect.getBottom() * 2.0d)), (float) (1.0d - (rect.getTop() * 2.0d)));
    }

    public final VVideoPixelCrop pixelCrop(VVideoSize size, VVideoCropRect rect) {
        Intrinsics.checkNotNullParameter(size, "size");
        Intrinsics.checkNotNullParameter(rect, "rect");
        if (!rect.isValid()) {
            throw new IllegalArgumentException("Invalid crop rectangle".toString());
        }
        VVideoPixelCrop vVideoPixelCrop = new VVideoPixelCrop((int) Math.ceil(rect.getLeft() * ((double) size.getWidth())), (int) Math.ceil(rect.getTop() * ((double) size.getHeight())), (int) Math.floor(rect.getRight() * ((double) size.getWidth())), (int) Math.floor(rect.getBottom() * ((double) size.getHeight())));
        if (vVideoPixelCrop.getWidth() >= 16 && vVideoPixelCrop.getHeight() >= 16) {
            return vVideoPixelCrop;
        }
        throw new IllegalArgumentException(("Crop resolves to " + vVideoPixelCrop.getWidth() + "x" + vVideoPixelCrop.getHeight() + "; encoded dimensions must be at least 16x16").toString());
    }

    public final VVideoCropPlan createPlan(int displayedWidth, int displayedHeight, int explicitRotation, VVideoCropRect cropRect, VVideoCompressQuality quality, Integer customWidth, Integer customHeight, VDimensionHandling dimensionHandling) {
        Intrinsics.checkNotNullParameter(cropRect, "cropRect");
        Intrinsics.checkNotNullParameter(quality, "quality");
        if ((customWidth == null) != (customHeight == null)) {
            throw new IllegalArgumentException("customWidth and customHeight must be specified together".toString());
        }
        VVideoSize vVideoSizeOrientedSize = orientedSize(displayedWidth, displayedHeight, explicitRotation);
        VVideoPixelCrop vVideoPixelCropPixelCrop = pixelCrop(vVideoSizeOrientedSize, cropRect);
        VVideoSize vVideoSizeResolveOutputSize = resolveOutputSize(new VVideoSize(vVideoPixelCropPixelCrop.getWidth(), vVideoPixelCropPixelCrop.getHeight()), quality, customWidth, customHeight, dimensionHandling == null ? VDimensionHandling.AUTO_ALIGN : dimensionHandling);
        int i = dimensionHandling == VDimensionHandling.LETTERBOX ? 0 : 1;
        List listCreateListBuilder = CollectionsKt.createListBuilder();
        if (explicitRotation != 0) {
            listCreateListBuilder.add(VVideoEffectStep.EXPLICIT_ROTATION);
        }
        listCreateListBuilder.add(VVideoEffectStep.CROP);
        listCreateListBuilder.add(VVideoEffectStep.PRESENTATION);
        return new VVideoCropPlan(vVideoSizeOrientedSize, vVideoPixelCropPixelCrop, toMedia3Crop(cropRect), vVideoSizeResolveOutputSize, i, CollectionsKt.build(listCreateListBuilder));
    }

    public final VVideoSize resolveOutputSize(VVideoSize cropSize, VVideoCompressQuality quality, Integer customWidth, Integer customHeight, VDimensionHandling handling) {
        int i;
        VVideoSize vVideoSize;
        VVideoSize vVideoSizeAlignedIfAspectSafe;
        Intrinsics.checkNotNullParameter(cropSize, "cropSize");
        Intrinsics.checkNotNullParameter(quality, "quality");
        Intrinsics.checkNotNullParameter(handling, "handling");
        if ((customWidth == null) != (customHeight == null)) {
            throw new IllegalArgumentException("customWidth and customHeight must be specified together".toString());
        }
        double width = ((double) cropSize.getWidth()) / ((double) cropSize.getHeight());
        int i2 = WhenMappings.$EnumSwitchMapping$0[quality.ordinal()];
        if (i2 == 1) {
            i = 1920;
        } else if (i2 == 2) {
            i = PlatformPlugin.DEFAULT_SYSTEM_UI;
        } else if (i2 == 3) {
            i = 960;
        } else if (i2 == 4) {
            i = 640;
        } else {
            if (i2 != 5) {
                throw new NoWhenBranchMatchedException();
            }
            i = 432;
        }
        int iIntValue = customWidth != null ? customWidth.intValue() : Math.min(cropSize.getWidth(), i);
        int iIntValue2 = customHeight != null ? customHeight.intValue() : Math.min(cropSize.getHeight(), i);
        if (iIntValue < 16 || iIntValue2 < 16) {
            throw new IllegalArgumentException("Requested output dimensions must be at least 16x16".toString());
        }
        int i3 = WhenMappings.$EnumSwitchMapping$1[handling.ordinal()];
        if (i3 == 1) {
            vVideoSize = new VVideoSize(alignedCanvasDimension(iIntValue), alignedCanvasDimension(iIntValue2));
        } else {
            if (i3 == 2) {
                int iEvenFloor = evenFloor(iIntValue);
                int iEvenFloor2 = evenFloor(iIntValue2);
                if (!preservesAspectWithinOnePixel(iEvenFloor, iEvenFloor2, width)) {
                    throw new IllegalArgumentException(("Exact dimensions " + iEvenFloor + "x" + iEvenFloor2 + " do not preserve crop aspect ratio").toString());
                }
                vVideoSize = new VVideoSize(iEvenFloor, iEvenFloor2);
            } else {
                if (i3 != 3) {
                    throw new NoWhenBranchMatchedException();
                }
                VVideoSize vVideoSizeFitInside = fitInside(iIntValue, iIntValue2, width);
                vVideoSizeAlignedIfAspectSafe = alignedIfAspectSafe(vVideoSizeFitInside, width, 16);
                if (vVideoSizeAlignedIfAspectSafe == null && (vVideoSizeAlignedIfAspectSafe = alignedIfAspectSafe(vVideoSizeFitInside, width, 2)) == null) {
                    throw new IllegalArgumentException("Crop cannot produce encoder-safe dimensions");
                }
            }
            if (vVideoSizeAlignedIfAspectSafe.getWidth() < 16 && vVideoSizeAlignedIfAspectSafe.getHeight() >= 16) {
                return vVideoSizeAlignedIfAspectSafe;
            }
            throw new IllegalArgumentException(("Resolved output " + vVideoSizeAlignedIfAspectSafe.getWidth() + "x" + vVideoSizeAlignedIfAspectSafe.getHeight() + " is below 16x16").toString());
        }
        vVideoSizeAlignedIfAspectSafe = vVideoSize;
        if (vVideoSizeAlignedIfAspectSafe.getWidth() < 16) {
        }
        throw new IllegalArgumentException(("Resolved output " + vVideoSizeAlignedIfAspectSafe.getWidth() + "x" + vVideoSizeAlignedIfAspectSafe.getHeight() + " is below 16x16").toString());
    }

    public final boolean requiresEncodedOutput(VVideoInfo video, VVideoCompressionConfig config) {
        Intrinsics.checkNotNullParameter(video, "video");
        Intrinsics.checkNotNullParameter(config, "config");
        VVideoAdvancedConfig advanced = config.getAdvanced();
        if (config.getIncludeAudio()) {
            if (advanced != null) {
                if (advanced.getCropRect() == null || advanced.getCropRect().isFullFrame()) {
                    Integer trimStartMs = advanced.getTrimStartMs();
                    if ((trimStartMs != null ? trimStartMs.intValue() : 0) <= 0 && (advanced.getTrimEndMs() == null || advanced.getTrimEndMs().intValue() >= video.getDurationMillis())) {
                        Integer rotation = advanced.getRotation();
                        if ((rotation != null ? rotation.intValue() : 0) != 0 || advanced.getCustomWidth() != null || advanced.getCustomHeight() != null || Intrinsics.areEqual((Object) advanced.getRemoveAudio(), (Object) true) || advanced.getVideoCodec() != null || advanced.getAudioCodec() != null) {
                        }
                    }
                }
            }
            return false;
        }
        return true;
    }

    private final VVideoSize fitInside(int maxWidth, int maxHeight, double aspect) {
        double d = maxWidth;
        double d2 = maxHeight;
        if (d / d2 > aspect) {
            return new VVideoSize(MathKt.roundToInt(d2 * aspect), maxHeight);
        }
        return new VVideoSize(maxWidth, MathKt.roundToInt(d / aspect));
    }

    private final VVideoSize alignedIfAspectSafe(VVideoSize fitted, double aspect, int alignment) {
        VVideoSize vVideoSize = new VVideoSize(alignDown(fitted.getWidth(), alignment), alignDown(fitted.getHeight(), alignment));
        if (vVideoSize.getWidth() < 16 || vVideoSize.getHeight() < 16 || INSTANCE.aspectError(vVideoSize.getWidth(), vVideoSize.getHeight(), aspect) > MAX_ASPECT_ERROR) {
            return null;
        }
        return vVideoSize;
    }

    private final int alignedCanvasDimension(int value) {
        int iAlignDown = alignDown(value, 16);
        return iAlignDown >= 16 ? iAlignDown : evenFloor(value);
    }

    private final boolean preservesAspectWithinOnePixel(int width, int height, double aspect) {
        double d = width;
        double d2 = height;
        return Math.abs(d - (d2 * aspect)) <= 1.0d || Math.abs(d2 - (d / aspect)) <= 1.0d;
    }

    private final double aspectError(int width, int height, double aspect) {
        return Math.abs((((double) width) / ((double) height)) - aspect) / aspect;
    }

    private final int alignDown(int value, int alignment) {
        return (value / alignment) * alignment;
    }

    private final int evenFloor(int value) {
        return value - (value % 2);
    }
}
