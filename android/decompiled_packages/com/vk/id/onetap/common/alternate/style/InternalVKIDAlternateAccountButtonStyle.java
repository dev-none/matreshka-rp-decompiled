package com.vk.id.onetap.common.alternate.style;

import com.vk.id.common.InternalVKIDApi;
import com.vk.id.onetap.common.auth.style.InternalVKIDButtonBorderStyle;
import com.vk.id.onetap.common.auth.style.InternalVKIDButtonRippleStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyle;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDAlternateAccountButtonStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000B\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b7\u0018\u00002\u00020\u0001:\u0004\u001c\u001d\u001e\u001fB9\b\u0004\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r¢\u0006\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0011\u0010\f\u001a\u00020\r¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u001b\u0082\u0001\u0004 !\"#¨\u0006$"}, d2 = {"Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;", "", "backgroundStyle", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonBackgroundStyle;", "borderStyle", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonBorderStyle;", "rippleStyle", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonRippleStyle;", "textStyle", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonTextStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "<init>", "(Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonBackgroundStyle;Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonBorderStyle;Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonRippleStyle;Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonTextStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)V", "getBackgroundStyle", "()Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonBackgroundStyle;", "getBorderStyle", "()Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonBorderStyle;", "getRippleStyle", "()Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonRippleStyle;", "getTextStyle", "()Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonTextStyle;", "getCornersStyle", "()Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "getSizeStyle", "()Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "Light", "Dark", "TransparentLight", "TransparentDark", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle$Dark;", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle$Light;", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle$TransparentDark;", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle$TransparentLight;", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class InternalVKIDAlternateAccountButtonStyle {
    private final InternalVKIDAlternateAccountButtonBackgroundStyle backgroundStyle;
    private final InternalVKIDButtonBorderStyle borderStyle;
    private final OneTapButtonCornersStyle cornersStyle;
    private final InternalVKIDButtonRippleStyle rippleStyle;
    private final OneTapButtonSizeStyle sizeStyle;
    private final InternalVKIDAlternateAccountButtonTextStyle textStyle;

    public /* synthetic */ InternalVKIDAlternateAccountButtonStyle(InternalVKIDAlternateAccountButtonBackgroundStyle internalVKIDAlternateAccountButtonBackgroundStyle, InternalVKIDButtonBorderStyle internalVKIDButtonBorderStyle, InternalVKIDButtonRippleStyle internalVKIDButtonRippleStyle, InternalVKIDAlternateAccountButtonTextStyle internalVKIDAlternateAccountButtonTextStyle, OneTapButtonCornersStyle oneTapButtonCornersStyle, OneTapButtonSizeStyle oneTapButtonSizeStyle, DefaultConstructorMarker defaultConstructorMarker) {
        this(internalVKIDAlternateAccountButtonBackgroundStyle, internalVKIDButtonBorderStyle, internalVKIDButtonRippleStyle, internalVKIDAlternateAccountButtonTextStyle, oneTapButtonCornersStyle, oneTapButtonSizeStyle);
    }

    private InternalVKIDAlternateAccountButtonStyle(InternalVKIDAlternateAccountButtonBackgroundStyle internalVKIDAlternateAccountButtonBackgroundStyle, InternalVKIDButtonBorderStyle internalVKIDButtonBorderStyle, InternalVKIDButtonRippleStyle internalVKIDButtonRippleStyle, InternalVKIDAlternateAccountButtonTextStyle internalVKIDAlternateAccountButtonTextStyle, OneTapButtonCornersStyle oneTapButtonCornersStyle, OneTapButtonSizeStyle oneTapButtonSizeStyle) {
        this.backgroundStyle = internalVKIDAlternateAccountButtonBackgroundStyle;
        this.borderStyle = internalVKIDButtonBorderStyle;
        this.rippleStyle = internalVKIDButtonRippleStyle;
        this.textStyle = internalVKIDAlternateAccountButtonTextStyle;
        this.cornersStyle = oneTapButtonCornersStyle;
        this.sizeStyle = oneTapButtonSizeStyle;
    }

    public final InternalVKIDAlternateAccountButtonBackgroundStyle getBackgroundStyle() {
        return this.backgroundStyle;
    }

    public final InternalVKIDButtonBorderStyle getBorderStyle() {
        return this.borderStyle;
    }

    public final InternalVKIDButtonRippleStyle getRippleStyle() {
        return this.rippleStyle;
    }

    public final InternalVKIDAlternateAccountButtonTextStyle getTextStyle() {
        return this.textStyle;
    }

    public final OneTapButtonCornersStyle getCornersStyle() {
        return this.cornersStyle;
    }

    public final OneTapButtonSizeStyle getSizeStyle() {
        return this.sizeStyle;
    }

    /* JADX INFO: compiled from: InternalVKIDAlternateAccountButtonStyle.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B\u001b\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle$Light;", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Light extends InternalVKIDAlternateAccountButtonStyle {
        /* JADX WARN: Multi-variable type inference failed */
        public Light() {
            this(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
        }

        public /* synthetic */ Light(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.MEDIUM_44 : oneTapButtonSizeStyle);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Light(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle) {
            super(InternalVKIDAlternateAccountButtonBackgroundStyle.LIGHT, InternalVKIDButtonBorderStyle.NONE, InternalVKIDButtonRippleStyle.LIGHT, InternalVKIDAlternateAccountButtonTextStyle.LIGHT, cornersStyle, sizeStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
        }
    }

    /* JADX INFO: compiled from: InternalVKIDAlternateAccountButtonStyle.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B\u001b\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle$Dark;", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Dark extends InternalVKIDAlternateAccountButtonStyle {
        /* JADX WARN: Multi-variable type inference failed */
        public Dark() {
            this(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
        }

        public /* synthetic */ Dark(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.MEDIUM_44 : oneTapButtonSizeStyle);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Dark(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle) {
            super(InternalVKIDAlternateAccountButtonBackgroundStyle.DARK, InternalVKIDButtonBorderStyle.NONE, InternalVKIDButtonRippleStyle.DARK, InternalVKIDAlternateAccountButtonTextStyle.DARK, cornersStyle, sizeStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
        }
    }

    /* JADX INFO: compiled from: InternalVKIDAlternateAccountButtonStyle.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B\u001b\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle$TransparentLight;", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class TransparentLight extends InternalVKIDAlternateAccountButtonStyle {
        /* JADX WARN: Multi-variable type inference failed */
        public TransparentLight() {
            this(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
        }

        public /* synthetic */ TransparentLight(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.MEDIUM_44 : oneTapButtonSizeStyle);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public TransparentLight(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle) {
            super(InternalVKIDAlternateAccountButtonBackgroundStyle.TRANSPARENT, InternalVKIDButtonBorderStyle.DARK, InternalVKIDButtonRippleStyle.DARK, InternalVKIDAlternateAccountButtonTextStyle.TRANSPARENT_DARK, cornersStyle, sizeStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
        }
    }

    /* JADX INFO: compiled from: InternalVKIDAlternateAccountButtonStyle.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B\u001b\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle$TransparentDark;", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class TransparentDark extends InternalVKIDAlternateAccountButtonStyle {
        /* JADX WARN: Multi-variable type inference failed */
        public TransparentDark() {
            this(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
        }

        public /* synthetic */ TransparentDark(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.MEDIUM_44 : oneTapButtonSizeStyle);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public TransparentDark(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle) {
            super(InternalVKIDAlternateAccountButtonBackgroundStyle.TRANSPARENT, InternalVKIDButtonBorderStyle.LIGHT, InternalVKIDButtonRippleStyle.LIGHT, InternalVKIDAlternateAccountButtonTextStyle.DARK, cornersStyle, sizeStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
        }
    }
}
