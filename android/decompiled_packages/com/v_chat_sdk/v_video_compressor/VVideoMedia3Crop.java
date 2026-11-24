package com.v_chat_sdk.v_video_compressor;

import androidx.media3.extractor.text.ttml.TtmlNode;
import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import io.sentry.rrweb.RRWebVideoEvent;
import kotlin.Metadata;

/* JADX INFO: compiled from: VVideoCropGeometry.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\u000e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000f\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J1\u0010\u0012\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u0013\u001a\u00020\u00142\b\u0010\u0015\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0016\u001a\u00020\u0017HÖ\u0001J\t\u0010\u0018\u001a\u00020\u0019HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\nR\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\n¨\u0006\u001a"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoMedia3Crop;", "", "left", "", TtmlNode.RIGHT, "bottom", RRWebVideoEvent.JsonKeys.TOP, "<init>", "(FFFF)V", "getLeft", "()F", "getRight", "getBottom", "getTop", "component1", "component2", "component3", "component4", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class VVideoMedia3Crop {
    private final float bottom;
    private final float left;
    private final float right;
    private final float top;

    public static /* synthetic */ VVideoMedia3Crop copy$default(VVideoMedia3Crop vVideoMedia3Crop, float f, float f2, float f3, float f4, int i, Object obj) {
        if ((i & 1) != 0) {
            f = vVideoMedia3Crop.left;
        }
        if ((i & 2) != 0) {
            f2 = vVideoMedia3Crop.right;
        }
        if ((i & 4) != 0) {
            f3 = vVideoMedia3Crop.bottom;
        }
        if ((i & 8) != 0) {
            f4 = vVideoMedia3Crop.top;
        }
        return vVideoMedia3Crop.copy(f, f2, f3, f4);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final float getLeft() {
        return this.left;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final float getRight() {
        return this.right;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final float getBottom() {
        return this.bottom;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final float getTop() {
        return this.top;
    }

    public final VVideoMedia3Crop copy(float left, float right, float bottom, float top) {
        return new VVideoMedia3Crop(left, right, bottom, top);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VVideoMedia3Crop)) {
            return false;
        }
        VVideoMedia3Crop vVideoMedia3Crop = (VVideoMedia3Crop) other;
        return Float.compare(this.left, vVideoMedia3Crop.left) == 0 && Float.compare(this.right, vVideoMedia3Crop.right) == 0 && Float.compare(this.bottom, vVideoMedia3Crop.bottom) == 0 && Float.compare(this.top, vVideoMedia3Crop.top) == 0;
    }

    public int hashCode() {
        return (((((Float.hashCode(this.left) * 31) + Float.hashCode(this.right)) * 31) + Float.hashCode(this.bottom)) * 31) + Float.hashCode(this.top);
    }

    public String toString() {
        return "VVideoMedia3Crop(left=" + this.left + ", right=" + this.right + ", bottom=" + this.bottom + ", top=" + this.top + ")";
    }

    public VVideoMedia3Crop(float f, float f2, float f3, float f4) {
        this.left = f;
        this.right = f2;
        this.bottom = f3;
        this.top = f4;
    }

    public final float getLeft() {
        return this.left;
    }

    public final float getRight() {
        return this.right;
    }

    public final float getBottom() {
        return this.bottom;
    }

    public final float getTop() {
        return this.top;
    }
}
