package com.vk.id.onetap.common.icon.style;

import com.my.target.common.menu.MenuActionType;
import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIconStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0087\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\t\u0010\r\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0012\u001a\u00020\u0013HÖ\u0001J\t\u0010\u0014\u001a\u00020\u0015HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0016"}, d2 = {"Lcom/vk/id/onetap/common/icon/style/InternalVKIconStyle;", "", "colorStyle", "Lcom/vk/id/onetap/common/icon/style/InternalVKIconColorStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/icon/style/InternalVKIconSizeStyle;", "<init>", "(Lcom/vk/id/onetap/common/icon/style/InternalVKIconColorStyle;Lcom/vk/id/onetap/common/icon/style/InternalVKIconSizeStyle;)V", "getColorStyle", "()Lcom/vk/id/onetap/common/icon/style/InternalVKIconColorStyle;", "getSizeStyle", "()Lcom/vk/id/onetap/common/icon/style/InternalVKIconSizeStyle;", "component1", "component2", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class InternalVKIconStyle {
    private final InternalVKIconColorStyle colorStyle;
    private final InternalVKIconSizeStyle sizeStyle;

    public static /* synthetic */ InternalVKIconStyle copy$default(InternalVKIconStyle internalVKIconStyle, InternalVKIconColorStyle internalVKIconColorStyle, InternalVKIconSizeStyle internalVKIconSizeStyle, int i, Object obj) {
        if ((i & 1) != 0) {
            internalVKIconColorStyle = internalVKIconStyle.colorStyle;
        }
        if ((i & 2) != 0) {
            internalVKIconSizeStyle = internalVKIconStyle.sizeStyle;
        }
        return internalVKIconStyle.copy(internalVKIconColorStyle, internalVKIconSizeStyle);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final InternalVKIconColorStyle getColorStyle() {
        return this.colorStyle;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final InternalVKIconSizeStyle getSizeStyle() {
        return this.sizeStyle;
    }

    public final InternalVKIconStyle copy(InternalVKIconColorStyle colorStyle, InternalVKIconSizeStyle sizeStyle) {
        Intrinsics.checkNotNullParameter(colorStyle, "colorStyle");
        Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
        return new InternalVKIconStyle(colorStyle, sizeStyle);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof InternalVKIconStyle)) {
            return false;
        }
        InternalVKIconStyle internalVKIconStyle = (InternalVKIconStyle) other;
        return this.colorStyle == internalVKIconStyle.colorStyle && this.sizeStyle == internalVKIconStyle.sizeStyle;
    }

    public int hashCode() {
        return (this.colorStyle.hashCode() * 31) + this.sizeStyle.hashCode();
    }

    public String toString() {
        return "InternalVKIconStyle(colorStyle=" + this.colorStyle + ", sizeStyle=" + this.sizeStyle + ")";
    }

    public InternalVKIconStyle(InternalVKIconColorStyle colorStyle, InternalVKIconSizeStyle sizeStyle) {
        Intrinsics.checkNotNullParameter(colorStyle, "colorStyle");
        Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
        this.colorStyle = colorStyle;
        this.sizeStyle = sizeStyle;
    }

    public final InternalVKIconColorStyle getColorStyle() {
        return this.colorStyle;
    }

    public final InternalVKIconSizeStyle getSizeStyle() {
        return this.sizeStyle;
    }
}
