package com.vk.id.onetap.common.auth.style;

import com.vk.id.common.InternalVKIDApi;
import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonElevationStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyleKt;
import com.vk.id.onetap.common.icon.style.InternalVKIconColorStyle;
import com.vk.id.onetap.common.icon.style.InternalVKIconStyle;
import com.vk.id.onetap.common.progress.style.InternalCircleProgressStyle;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDButtonStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000X\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0019\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b7\u0018\u00002\u00020\u0001:\u0005()*+,BQ\b\u0004\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r\u0012\u0006\u0010\u000e\u001a\u00020\u000f\u0012\u0006\u0010\u0010\u001a\u00020\u0011\u0012\u0006\u0010\u0012\u001a\u00020\u0013¢\u0006\u0004\b\u0014\u0010\u0015R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u001bR\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001dR\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u001fR\u0011\u0010\f\u001a\u00020\r¢\u0006\b\n\u0000\u001a\u0004\b \u0010!R\u0011\u0010\u000e\u001a\u00020\u000f¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010#R\u0011\u0010\u0010\u001a\u00020\u0011¢\u0006\b\n\u0000\u001a\u0004\b$\u0010%R\u0011\u0010\u0012\u001a\u00020\u0013¢\u0006\b\n\u0000\u001a\u0004\b&\u0010'\u0082\u0001\u0005-./01¨\u00062"}, d2 = {"Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;", "", "backgroundStyle", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonBackgroundStyle;", "rippleStyle", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonRippleStyle;", "borderStyle", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonBorderStyle;", "iconStyle", "Lcom/vk/id/onetap/common/icon/style/InternalVKIconStyle;", "textStyle", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonTextStyle;", "progressStyle", "Lcom/vk/id/onetap/common/progress/style/InternalCircleProgressStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonBackgroundStyle;Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonRippleStyle;Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonBorderStyle;Lcom/vk/id/onetap/common/icon/style/InternalVKIconStyle;Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonTextStyle;Lcom/vk/id/onetap/common/progress/style/InternalCircleProgressStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "getBackgroundStyle", "()Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonBackgroundStyle;", "getRippleStyle", "()Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonRippleStyle;", "getBorderStyle", "()Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonBorderStyle;", "getIconStyle", "()Lcom/vk/id/onetap/common/icon/style/InternalVKIconStyle;", "getTextStyle", "()Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonTextStyle;", "getProgressStyle", "()Lcom/vk/id/onetap/common/progress/style/InternalCircleProgressStyle;", "getCornersStyle", "()Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "getSizeStyle", "()Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "getElevationStyle", "()Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "Light", "Dark", "Secondary", "TransparentLight", "TransparentDark", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle$Dark;", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle$Light;", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle$Secondary;", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle$TransparentDark;", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle$TransparentLight;", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class InternalVKIDButtonStyle {
    private final InternalVKIDButtonBackgroundStyle backgroundStyle;
    private final InternalVKIDButtonBorderStyle borderStyle;
    private final OneTapButtonCornersStyle cornersStyle;
    private final OneTapButtonElevationStyle elevationStyle;
    private final InternalVKIconStyle iconStyle;
    private final InternalCircleProgressStyle progressStyle;
    private final InternalVKIDButtonRippleStyle rippleStyle;
    private final OneTapButtonSizeStyle sizeStyle;
    private final InternalVKIDButtonTextStyle textStyle;

    public /* synthetic */ InternalVKIDButtonStyle(InternalVKIDButtonBackgroundStyle internalVKIDButtonBackgroundStyle, InternalVKIDButtonRippleStyle internalVKIDButtonRippleStyle, InternalVKIDButtonBorderStyle internalVKIDButtonBorderStyle, InternalVKIconStyle internalVKIconStyle, InternalVKIDButtonTextStyle internalVKIDButtonTextStyle, InternalCircleProgressStyle internalCircleProgressStyle, OneTapButtonCornersStyle oneTapButtonCornersStyle, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle oneTapButtonElevationStyle, DefaultConstructorMarker defaultConstructorMarker) {
        this(internalVKIDButtonBackgroundStyle, internalVKIDButtonRippleStyle, internalVKIDButtonBorderStyle, internalVKIconStyle, internalVKIDButtonTextStyle, internalCircleProgressStyle, oneTapButtonCornersStyle, oneTapButtonSizeStyle, oneTapButtonElevationStyle);
    }

    private InternalVKIDButtonStyle(InternalVKIDButtonBackgroundStyle internalVKIDButtonBackgroundStyle, InternalVKIDButtonRippleStyle internalVKIDButtonRippleStyle, InternalVKIDButtonBorderStyle internalVKIDButtonBorderStyle, InternalVKIconStyle internalVKIconStyle, InternalVKIDButtonTextStyle internalVKIDButtonTextStyle, InternalCircleProgressStyle internalCircleProgressStyle, OneTapButtonCornersStyle oneTapButtonCornersStyle, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle oneTapButtonElevationStyle) {
        this.backgroundStyle = internalVKIDButtonBackgroundStyle;
        this.rippleStyle = internalVKIDButtonRippleStyle;
        this.borderStyle = internalVKIDButtonBorderStyle;
        this.iconStyle = internalVKIconStyle;
        this.textStyle = internalVKIDButtonTextStyle;
        this.progressStyle = internalCircleProgressStyle;
        this.cornersStyle = oneTapButtonCornersStyle;
        this.sizeStyle = oneTapButtonSizeStyle;
        this.elevationStyle = oneTapButtonElevationStyle;
    }

    public final InternalVKIDButtonBackgroundStyle getBackgroundStyle() {
        return this.backgroundStyle;
    }

    public final InternalVKIDButtonRippleStyle getRippleStyle() {
        return this.rippleStyle;
    }

    public final InternalVKIDButtonBorderStyle getBorderStyle() {
        return this.borderStyle;
    }

    public final InternalVKIconStyle getIconStyle() {
        return this.iconStyle;
    }

    public final InternalVKIDButtonTextStyle getTextStyle() {
        return this.textStyle;
    }

    public final InternalCircleProgressStyle getProgressStyle() {
        return this.progressStyle;
    }

    public final OneTapButtonCornersStyle getCornersStyle() {
        return this.cornersStyle;
    }

    public final OneTapButtonSizeStyle getSizeStyle() {
        return this.sizeStyle;
    }

    public final OneTapButtonElevationStyle getElevationStyle() {
        return this.elevationStyle;
    }

    /* JADX INFO: compiled from: InternalVKIDButtonStyle.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle$Light;", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Light extends InternalVKIDButtonStyle {
        public Light() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ Light(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.MEDIUM_44 : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Light(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(InternalVKIDButtonBackgroundStyle.BLUE, InternalVKIDButtonRippleStyle.LIGHT, InternalVKIDButtonBorderStyle.NONE, new InternalVKIconStyle(InternalVKIconColorStyle.WHITE, OneTapButtonSizeStyleKt.internalVKIDAsIconSizeStyle(sizeStyle)), InternalVKIDButtonTextStyle.LIGHT, InternalCircleProgressStyle.LIGHT, cornersStyle, sizeStyle, elevationStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }

    /* JADX INFO: compiled from: InternalVKIDButtonStyle.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle$Dark;", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Dark extends InternalVKIDButtonStyle {
        public Dark() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ Dark(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.MEDIUM_44 : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Dark(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(InternalVKIDButtonBackgroundStyle.BLUE, InternalVKIDButtonRippleStyle.LIGHT, InternalVKIDButtonBorderStyle.NONE, new InternalVKIconStyle(InternalVKIconColorStyle.WHITE, OneTapButtonSizeStyleKt.internalVKIDAsIconSizeStyle(sizeStyle)), InternalVKIDButtonTextStyle.LIGHT, InternalCircleProgressStyle.LIGHT, cornersStyle, sizeStyle, elevationStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }

    /* JADX INFO: compiled from: InternalVKIDButtonStyle.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle$Secondary;", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Secondary extends InternalVKIDButtonStyle {
        public Secondary() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ Secondary(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.MEDIUM_44 : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Secondary(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(InternalVKIDButtonBackgroundStyle.WHITE, InternalVKIDButtonRippleStyle.DARK, InternalVKIDButtonBorderStyle.DARK, new InternalVKIconStyle(InternalVKIconColorStyle.BLUE, OneTapButtonSizeStyleKt.internalVKIDAsIconSizeStyle(sizeStyle)), InternalVKIDButtonTextStyle.DARK, InternalCircleProgressStyle.DARK, cornersStyle, sizeStyle, elevationStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }

    /* JADX INFO: compiled from: InternalVKIDButtonStyle.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle$TransparentLight;", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class TransparentLight extends InternalVKIDButtonStyle {
        public TransparentLight() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ TransparentLight(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.MEDIUM_44 : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public TransparentLight(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(InternalVKIDButtonBackgroundStyle.TRANSPARENT, InternalVKIDButtonRippleStyle.DARK, InternalVKIDButtonBorderStyle.DARK, new InternalVKIconStyle(InternalVKIconColorStyle.BLUE, OneTapButtonSizeStyleKt.internalVKIDAsIconSizeStyle(sizeStyle)), InternalVKIDButtonTextStyle.DARK, InternalCircleProgressStyle.DARK, cornersStyle, sizeStyle, elevationStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }

    /* JADX INFO: compiled from: InternalVKIDButtonStyle.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle$TransparentDark;", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class TransparentDark extends InternalVKIDButtonStyle {
        public TransparentDark() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ TransparentDark(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.MEDIUM_44 : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public TransparentDark(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(InternalVKIDButtonBackgroundStyle.TRANSPARENT, InternalVKIDButtonRippleStyle.LIGHT, InternalVKIDButtonBorderStyle.LIGHT, new InternalVKIconStyle(InternalVKIconColorStyle.BLUE, OneTapButtonSizeStyleKt.internalVKIDAsIconSizeStyle(sizeStyle)), InternalVKIDButtonTextStyle.LIGHT, InternalCircleProgressStyle.LIGHT, cornersStyle, sizeStyle, elevationStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }
}
