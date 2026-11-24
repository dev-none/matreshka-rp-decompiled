package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoCropGeometry.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0015\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B=\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\n\u0012\f\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\r0\f¢\u0006\u0004\b\u000e\u0010\u000fJ\t\u0010\u001b\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001c\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001d\u001a\u00020\u0007HÆ\u0003J\t\u0010\u001e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001f\u001a\u00020\nHÆ\u0003J\u000f\u0010 \u001a\b\u0012\u0004\u0012\u00020\r0\fHÆ\u0003JK\u0010!\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u00032\b\b\u0002\u0010\t\u001a\u00020\n2\u000e\b\u0002\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\r0\fHÆ\u0001J\u0013\u0010\"\u001a\u00020#2\b\u0010$\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010%\u001a\u00020\nHÖ\u0001J\t\u0010&\u001a\u00020'HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0011R\u0011\u0010\t\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u0017\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\r0\f¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001a¨\u0006("}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCropPlan;", "", "orientedSize", "Lcom/v_chat_sdk/v_video_compressor/VVideoSize;", "pixelCrop", "Lcom/v_chat_sdk/v_video_compressor/VVideoPixelCrop;", "media3Crop", "Lcom/v_chat_sdk/v_video_compressor/VVideoMedia3Crop;", "outputSize", "presentationLayout", "", "effectOrder", "", "Lcom/v_chat_sdk/v_video_compressor/VVideoEffectStep;", "<init>", "(Lcom/v_chat_sdk/v_video_compressor/VVideoSize;Lcom/v_chat_sdk/v_video_compressor/VVideoPixelCrop;Lcom/v_chat_sdk/v_video_compressor/VVideoMedia3Crop;Lcom/v_chat_sdk/v_video_compressor/VVideoSize;ILjava/util/List;)V", "getOrientedSize", "()Lcom/v_chat_sdk/v_video_compressor/VVideoSize;", "getPixelCrop", "()Lcom/v_chat_sdk/v_video_compressor/VVideoPixelCrop;", "getMedia3Crop", "()Lcom/v_chat_sdk/v_video_compressor/VVideoMedia3Crop;", "getOutputSize", "getPresentationLayout", "()I", "getEffectOrder", "()Ljava/util/List;", "component1", "component2", "component3", "component4", "component5", "component6", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "toString", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class VVideoCropPlan {
    private final List<VVideoEffectStep> effectOrder;
    private final VVideoMedia3Crop media3Crop;
    private final VVideoSize orientedSize;
    private final VVideoSize outputSize;
    private final VVideoPixelCrop pixelCrop;
    private final int presentationLayout;

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ VVideoCropPlan copy$default(VVideoCropPlan vVideoCropPlan, VVideoSize vVideoSize, VVideoPixelCrop vVideoPixelCrop, VVideoMedia3Crop vVideoMedia3Crop, VVideoSize vVideoSize2, int i, List list, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            vVideoSize = vVideoCropPlan.orientedSize;
        }
        if ((i2 & 2) != 0) {
            vVideoPixelCrop = vVideoCropPlan.pixelCrop;
        }
        if ((i2 & 4) != 0) {
            vVideoMedia3Crop = vVideoCropPlan.media3Crop;
        }
        if ((i2 & 8) != 0) {
            vVideoSize2 = vVideoCropPlan.outputSize;
        }
        if ((i2 & 16) != 0) {
            i = vVideoCropPlan.presentationLayout;
        }
        if ((i2 & 32) != 0) {
            list = vVideoCropPlan.effectOrder;
        }
        int i3 = i;
        List list2 = list;
        return vVideoCropPlan.copy(vVideoSize, vVideoPixelCrop, vVideoMedia3Crop, vVideoSize2, i3, list2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final VVideoSize getOrientedSize() {
        return this.orientedSize;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final VVideoPixelCrop getPixelCrop() {
        return this.pixelCrop;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final VVideoMedia3Crop getMedia3Crop() {
        return this.media3Crop;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final VVideoSize getOutputSize() {
        return this.outputSize;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final int getPresentationLayout() {
        return this.presentationLayout;
    }

    public final List<VVideoEffectStep> component6() {
        return this.effectOrder;
    }

    public final VVideoCropPlan copy(VVideoSize orientedSize, VVideoPixelCrop pixelCrop, VVideoMedia3Crop media3Crop, VVideoSize outputSize, int presentationLayout, List<? extends VVideoEffectStep> effectOrder) {
        Intrinsics.checkNotNullParameter(orientedSize, "orientedSize");
        Intrinsics.checkNotNullParameter(pixelCrop, "pixelCrop");
        Intrinsics.checkNotNullParameter(media3Crop, "media3Crop");
        Intrinsics.checkNotNullParameter(outputSize, "outputSize");
        Intrinsics.checkNotNullParameter(effectOrder, "effectOrder");
        return new VVideoCropPlan(orientedSize, pixelCrop, media3Crop, outputSize, presentationLayout, effectOrder);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VVideoCropPlan)) {
            return false;
        }
        VVideoCropPlan vVideoCropPlan = (VVideoCropPlan) other;
        return Intrinsics.areEqual(this.orientedSize, vVideoCropPlan.orientedSize) && Intrinsics.areEqual(this.pixelCrop, vVideoCropPlan.pixelCrop) && Intrinsics.areEqual(this.media3Crop, vVideoCropPlan.media3Crop) && Intrinsics.areEqual(this.outputSize, vVideoCropPlan.outputSize) && this.presentationLayout == vVideoCropPlan.presentationLayout && Intrinsics.areEqual(this.effectOrder, vVideoCropPlan.effectOrder);
    }

    public int hashCode() {
        return (((((((((this.orientedSize.hashCode() * 31) + this.pixelCrop.hashCode()) * 31) + this.media3Crop.hashCode()) * 31) + this.outputSize.hashCode()) * 31) + Integer.hashCode(this.presentationLayout)) * 31) + this.effectOrder.hashCode();
    }

    public String toString() {
        return "VVideoCropPlan(orientedSize=" + this.orientedSize + ", pixelCrop=" + this.pixelCrop + ", media3Crop=" + this.media3Crop + ", outputSize=" + this.outputSize + ", presentationLayout=" + this.presentationLayout + ", effectOrder=" + this.effectOrder + ")";
    }

    /* JADX WARN: Multi-variable type inference failed */
    public VVideoCropPlan(VVideoSize orientedSize, VVideoPixelCrop pixelCrop, VVideoMedia3Crop media3Crop, VVideoSize outputSize, int i, List<? extends VVideoEffectStep> effectOrder) {
        Intrinsics.checkNotNullParameter(orientedSize, "orientedSize");
        Intrinsics.checkNotNullParameter(pixelCrop, "pixelCrop");
        Intrinsics.checkNotNullParameter(media3Crop, "media3Crop");
        Intrinsics.checkNotNullParameter(outputSize, "outputSize");
        Intrinsics.checkNotNullParameter(effectOrder, "effectOrder");
        this.orientedSize = orientedSize;
        this.pixelCrop = pixelCrop;
        this.media3Crop = media3Crop;
        this.outputSize = outputSize;
        this.presentationLayout = i;
        this.effectOrder = effectOrder;
    }

    public final VVideoSize getOrientedSize() {
        return this.orientedSize;
    }

    public final VVideoPixelCrop getPixelCrop() {
        return this.pixelCrop;
    }

    public final VVideoMedia3Crop getMedia3Crop() {
        return this.media3Crop;
    }

    public final VVideoSize getOutputSize() {
        return this.outputSize;
    }

    public final int getPresentationLayout() {
        return this.presentationLayout;
    }

    public final List<VVideoEffectStep> getEffectOrder() {
        return this.effectOrder;
    }
}
