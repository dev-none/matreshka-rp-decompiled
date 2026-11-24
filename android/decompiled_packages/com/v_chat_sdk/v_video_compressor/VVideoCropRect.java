package com.v_chat_sdk.v_video_compressor;

import androidx.media3.extractor.text.ttml.TtmlNode;
import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import io.sentry.rrweb.RRWebVideoEvent;
import java.util.Map;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoModels.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0010\b\n\u0002\b\u0003\b\u0086\b\u0018\u0000 \u001e2\u00020\u0001:\u0001\u001eB'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003¢\u0006\u0004\b\u0007\u0010\bJ\u0006\u0010\u000e\u001a\u00020\u000fJ\u0006\u0010\u0010\u001a\u00020\u000fJ\u0012\u0010\u0011\u001a\u000e\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\u00030\u0012J\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003J1\u0010\u0018\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u0019\u001a\u00020\u000f2\b\u0010\u001a\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001b\u001a\u00020\u001cHÖ\u0001J\t\u0010\u001d\u001a\u00020\u0013HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\nR\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\n¨\u0006\u001f"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCropRect;", "", "left", "", RRWebVideoEvent.JsonKeys.TOP, TtmlNode.RIGHT, "bottom", "<init>", "(DDDD)V", "getLeft", "()D", "getTop", "getRight", "getBottom", "isValid", "", "isFullFrame", "toMap", "", "", "component1", "component2", "component3", "component4", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "Companion", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class VVideoCropRect {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static final double FULL_FRAME_TOLERANCE = 1.0E-6d;
    private final double bottom;
    private final double left;
    private final double right;
    private final double top;

    public static /* synthetic */ VVideoCropRect copy$default(VVideoCropRect vVideoCropRect, double d, double d2, double d3, double d4, int i, Object obj) {
        if ((i & 1) != 0) {
            d = vVideoCropRect.left;
        }
        double d5 = d;
        if ((i & 2) != 0) {
            d2 = vVideoCropRect.top;
        }
        double d6 = d2;
        if ((i & 4) != 0) {
            d3 = vVideoCropRect.right;
        }
        return vVideoCropRect.copy(d5, d6, d3, (i & 8) != 0 ? vVideoCropRect.bottom : d4);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final double getLeft() {
        return this.left;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final double getTop() {
        return this.top;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final double getRight() {
        return this.right;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final double getBottom() {
        return this.bottom;
    }

    public final VVideoCropRect copy(double left, double top, double right, double bottom) {
        return new VVideoCropRect(left, top, right, bottom);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VVideoCropRect)) {
            return false;
        }
        VVideoCropRect vVideoCropRect = (VVideoCropRect) other;
        return Double.compare(this.left, vVideoCropRect.left) == 0 && Double.compare(this.top, vVideoCropRect.top) == 0 && Double.compare(this.right, vVideoCropRect.right) == 0 && Double.compare(this.bottom, vVideoCropRect.bottom) == 0;
    }

    public int hashCode() {
        return (((((Double.hashCode(this.left) * 31) + Double.hashCode(this.top)) * 31) + Double.hashCode(this.right)) * 31) + Double.hashCode(this.bottom);
    }

    public String toString() {
        return "VVideoCropRect(left=" + this.left + ", top=" + this.top + ", right=" + this.right + ", bottom=" + this.bottom + ")";
    }

    public VVideoCropRect(double d, double d2, double d3, double d4) {
        this.left = d;
        this.top = d2;
        this.right = d3;
        this.bottom = d4;
    }

    public final double getLeft() {
        return this.left;
    }

    public final double getTop() {
        return this.top;
    }

    public final double getRight() {
        return this.right;
    }

    public final double getBottom() {
        return this.bottom;
    }

    public final boolean isValid() {
        if (Math.abs(this.left) > Double.MAX_VALUE || Math.abs(this.top) > Double.MAX_VALUE || Math.abs(this.right) > Double.MAX_VALUE || Math.abs(this.bottom) > Double.MAX_VALUE) {
            return false;
        }
        double d = this.left;
        if (d < 0.0d) {
            return false;
        }
        double d2 = this.top;
        if (d2 < 0.0d) {
            return false;
        }
        double d3 = this.right;
        if (d3 > 1.0d) {
            return false;
        }
        double d4 = this.bottom;
        return d4 <= 1.0d && d < d3 && d2 < d4;
    }

    public final boolean isFullFrame() {
        return isValid() && Math.abs(this.left) <= 1.0E-6d && Math.abs(this.top) <= 1.0E-6d && Math.abs(this.right - 1.0d) <= 1.0E-6d && Math.abs(this.bottom - 1.0d) <= 1.0E-6d;
    }

    public final Map<String, Double> toMap() {
        return MapsKt.mapOf(TuplesKt.to("left", Double.valueOf(this.left)), TuplesKt.to(RRWebVideoEvent.JsonKeys.TOP, Double.valueOf(this.top)), TuplesKt.to(TtmlNode.RIGHT, Double.valueOf(this.right)), TuplesKt.to("bottom", Double.valueOf(this.bottom)));
    }

    /* JADX INFO: compiled from: VVideoModels.kt */
    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001c\u0010\u0006\u001a\u00020\u00072\u0014\u0010\b\u001a\u0010\u0012\u0004\u0012\u00020\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\tR\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCropRect$Companion;", "", "<init>", "()V", "FULL_FRAME_TOLERANCE", "", "fromMap", "Lcom/v_chat_sdk/v_video_compressor/VVideoCropRect;", "map", "", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        private static final double fromMap$coordinate(Map<String, ? extends Object> map, String str) {
            Object obj = map.get(str);
            Number number = obj instanceof Number ? (Number) obj : null;
            if (number != null) {
                return number.doubleValue();
            }
            throw new IllegalArgumentException("cropRect." + str + " must be numeric");
        }

        public final VVideoCropRect fromMap(Map<String, ? extends Object> map) {
            Intrinsics.checkNotNullParameter(map, "map");
            VVideoCropRect vVideoCropRect = new VVideoCropRect(fromMap$coordinate(map, "left"), fromMap$coordinate(map, RRWebVideoEvent.JsonKeys.TOP), fromMap$coordinate(map, TtmlNode.RIGHT), fromMap$coordinate(map, "bottom"));
            if (vVideoCropRect.isValid()) {
                return vVideoCropRect;
            }
            throw new IllegalArgumentException("cropRect must satisfy 0 <= left < right <= 1 and 0 <= top < bottom <= 1".toString());
        }
    }
}
