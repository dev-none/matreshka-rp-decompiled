package com.vk.id.onetap.common;

import android.content.Context;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.common.util.IsDarkThemeKt;
import com.vk.id.multibranding.common.style.OAuthListWidgetStyle;
import com.vk.id.onetap.common.alternate.style.InternalVKIDAlternateAccountButtonStyle;
import com.vk.id.onetap.common.auth.style.InternalVKIDButtonStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonElevationStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyle;
import com.vk.id.onetap.common.mutlibranding.style.CornersStyleExtKt;
import com.vk.id.onetap.common.mutlibranding.style.SizeStyleExtKt;
import kotlin.Deprecated;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.ReplaceWith;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0013\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b7\u0018\u0000 *2\u00020\u0001:\b#$%&'()*B1\b\u0004\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0004\b\f\u0010\rR\u001c\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u000e\u0010\u000f\u001a\u0004\b\u0010\u0010\u0011R\u001c\u0010\u0004\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0012\u0010\u000f\u001a\u0004\b\u0013\u0010\u0014R\u001c\u0010\u0006\u001a\u00020\u00078\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0015\u0010\u000f\u001a\u0004\b\u0016\u0010\u0017R\u001c\u0010\b\u001a\u00020\t8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0018\u0010\u000f\u001a\u0004\b\u0019\u0010\u001aR\u001c\u0010\n\u001a\u00020\u000b8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u001b\u0010\u000f\u001a\u0004\b\u001c\u0010\u001dR\u001a\u0010\u001e\u001a\u00020\u001f8FX\u0087\u0004¢\u0006\f\u0012\u0004\b \u0010\u000f\u001a\u0004\b!\u0010\"\u0082\u0001\u0007+,-./01¨\u00062"}, d2 = {"Lcom/vk/id/onetap/common/OneTapStyle;", "", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "vkidButtonStyle", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;", "alternateAccountButtonStyle", "Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;)V", "getCornersStyle$annotations", "()V", "getCornersStyle", "()Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "getSizeStyle$annotations", "getSizeStyle", "()Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "getElevationStyle$annotations", "getElevationStyle", "()Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "getVkidButtonStyle$annotations", "getVkidButtonStyle", "()Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;", "getAlternateAccountButtonStyle$annotations", "getAlternateAccountButtonStyle", "()Lcom/vk/id/onetap/common/alternate/style/InternalVKIDAlternateAccountButtonStyle;", "oAuthListWidgetStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;", "getOAuthListWidgetStyle$annotations", "getOAuthListWidgetStyle", "()Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;", "Light", "Dark", "SecondaryLight", "SecondaryDark", "TransparentLight", "TransparentDark", "Icon", "Companion", "Lcom/vk/id/onetap/common/OneTapStyle$Dark;", "Lcom/vk/id/onetap/common/OneTapStyle$Icon;", "Lcom/vk/id/onetap/common/OneTapStyle$Light;", "Lcom/vk/id/onetap/common/OneTapStyle$SecondaryDark;", "Lcom/vk/id/onetap/common/OneTapStyle$SecondaryLight;", "Lcom/vk/id/onetap/common/OneTapStyle$TransparentDark;", "Lcom/vk/id/onetap/common/OneTapStyle$TransparentLight;", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class OneTapStyle {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final InternalVKIDAlternateAccountButtonStyle alternateAccountButtonStyle;
    private final OneTapButtonCornersStyle cornersStyle;
    private final OneTapButtonElevationStyle elevationStyle;
    private final OneTapButtonSizeStyle sizeStyle;
    private final InternalVKIDButtonStyle vkidButtonStyle;

    public /* synthetic */ OneTapStyle(OneTapButtonCornersStyle oneTapButtonCornersStyle, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle oneTapButtonElevationStyle, InternalVKIDButtonStyle internalVKIDButtonStyle, InternalVKIDAlternateAccountButtonStyle internalVKIDAlternateAccountButtonStyle, DefaultConstructorMarker defaultConstructorMarker) {
        this(oneTapButtonCornersStyle, oneTapButtonSizeStyle, oneTapButtonElevationStyle, internalVKIDButtonStyle, internalVKIDAlternateAccountButtonStyle);
    }

    @InternalVKIDApi
    public static /* synthetic */ void getAlternateAccountButtonStyle$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getCornersStyle$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getElevationStyle$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getOAuthListWidgetStyle$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getSizeStyle$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getVkidButtonStyle$annotations() {
    }

    private OneTapStyle(OneTapButtonCornersStyle oneTapButtonCornersStyle, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle oneTapButtonElevationStyle, InternalVKIDButtonStyle internalVKIDButtonStyle, InternalVKIDAlternateAccountButtonStyle internalVKIDAlternateAccountButtonStyle) {
        this.cornersStyle = oneTapButtonCornersStyle;
        this.sizeStyle = oneTapButtonSizeStyle;
        this.elevationStyle = oneTapButtonElevationStyle;
        this.vkidButtonStyle = internalVKIDButtonStyle;
        this.alternateAccountButtonStyle = internalVKIDAlternateAccountButtonStyle;
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

    public final InternalVKIDButtonStyle getVkidButtonStyle() {
        return this.vkidButtonStyle;
    }

    public final InternalVKIDAlternateAccountButtonStyle getAlternateAccountButtonStyle() {
        return this.alternateAccountButtonStyle;
    }

    public final OAuthListWidgetStyle getOAuthListWidgetStyle() {
        if ((this instanceof Icon) || (this instanceof TransparentLight) || (this instanceof SecondaryLight) || (this instanceof Light)) {
            return new OAuthListWidgetStyle.Light(CornersStyleExtKt.toOAuthListWidgetStyle(this.cornersStyle), SizeStyleExtKt.toOAuthListWidgetStyle(this.sizeStyle));
        }
        if (!(this instanceof TransparentDark) && !(this instanceof SecondaryDark) && !(this instanceof Dark)) {
            throw new NoWhenBranchMatchedException();
        }
        return new OAuthListWidgetStyle.Dark(CornersStyleExtKt.toOAuthListWidgetStyle(this.cornersStyle), SizeStyleExtKt.toOAuthListWidgetStyle(this.sizeStyle));
    }

    /* JADX INFO: compiled from: OneTapStyle.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/OneTapStyle$Light;", "Lcom/vk/id/onetap/common/OneTapStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Light extends OneTapStyle {
        public Light() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ Light(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.DEFAULT : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Light(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(cornersStyle, sizeStyle, elevationStyle, new InternalVKIDButtonStyle.Light(cornersStyle, sizeStyle, elevationStyle), new InternalVKIDAlternateAccountButtonStyle.Light(cornersStyle, sizeStyle), null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }

    /* JADX INFO: compiled from: OneTapStyle.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/OneTapStyle$Dark;", "Lcom/vk/id/onetap/common/OneTapStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Dark extends OneTapStyle {
        public Dark() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ Dark(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.DEFAULT : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Dark(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(cornersStyle, sizeStyle, elevationStyle, new InternalVKIDButtonStyle.Dark(cornersStyle, sizeStyle, elevationStyle), new InternalVKIDAlternateAccountButtonStyle.Dark(cornersStyle, sizeStyle), null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }

    /* JADX INFO: compiled from: OneTapStyle.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/OneTapStyle$SecondaryLight;", "Lcom/vk/id/onetap/common/OneTapStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class SecondaryLight extends OneTapStyle {
        public SecondaryLight() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ SecondaryLight(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.DEFAULT : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public SecondaryLight(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(cornersStyle, sizeStyle, elevationStyle, new InternalVKIDButtonStyle.Secondary(cornersStyle, sizeStyle, elevationStyle), new InternalVKIDAlternateAccountButtonStyle.Light(cornersStyle, sizeStyle), null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }

    /* JADX INFO: compiled from: OneTapStyle.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/OneTapStyle$SecondaryDark;", "Lcom/vk/id/onetap/common/OneTapStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class SecondaryDark extends OneTapStyle {
        public SecondaryDark() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ SecondaryDark(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.DEFAULT : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public SecondaryDark(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(cornersStyle, sizeStyle, elevationStyle, new InternalVKIDButtonStyle.Secondary(cornersStyle, sizeStyle, elevationStyle), new InternalVKIDAlternateAccountButtonStyle.Dark(cornersStyle, sizeStyle), null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }

    /* JADX INFO: compiled from: OneTapStyle.kt */
    @Deprecated(message = "This style will be removed in future releases. Please, use SecondaryLight instead.", replaceWith = @ReplaceWith(expression = "SecondaryLight", imports = {"com.vk.id.onetap.common.SecondaryLight"}))
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/OneTapStyle$TransparentLight;", "Lcom/vk/id/onetap/common/OneTapStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class TransparentLight extends OneTapStyle {
        public TransparentLight() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ TransparentLight(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.DEFAULT : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public TransparentLight(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(cornersStyle, sizeStyle, elevationStyle, new InternalVKIDButtonStyle.TransparentLight(cornersStyle, sizeStyle, elevationStyle), new InternalVKIDAlternateAccountButtonStyle.TransparentLight(cornersStyle, sizeStyle), null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }

    /* JADX INFO: compiled from: OneTapStyle.kt */
    @Deprecated(message = "This style will be removed in future releases. Please, use SecondaryDark instead.", replaceWith = @ReplaceWith(expression = "SecondaryDark", imports = {"com.vk.id.onetap.common.SecondaryDark"}))
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/OneTapStyle$TransparentDark;", "Lcom/vk/id/onetap/common/OneTapStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class TransparentDark extends OneTapStyle {
        public TransparentDark() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ TransparentDark(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.DEFAULT : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public TransparentDark(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(cornersStyle, sizeStyle, elevationStyle, new InternalVKIDButtonStyle.TransparentDark(cornersStyle, sizeStyle, elevationStyle), new InternalVKIDAlternateAccountButtonStyle.TransparentDark(cornersStyle, sizeStyle), null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }

    /* JADX INFO: compiled from: OneTapStyle.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/common/OneTapStyle$Icon;", "Lcom/vk/id/onetap/common/OneTapStyle;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Icon extends OneTapStyle {
        public Icon() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ Icon(OneTapButtonCornersStyle.Default r1, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle.Default r3, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonSizeStyle.DEFAULT : oneTapButtonSizeStyle, (i & 4) != 0 ? OneTapButtonElevationStyle.Default.INSTANCE : r3);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Icon(OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            super(cornersStyle, sizeStyle, elevationStyle, new InternalVKIDButtonStyle.Light(cornersStyle, sizeStyle, elevationStyle), new InternalVKIDAlternateAccountButtonStyle.Light(cornersStyle, sizeStyle), null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
        }
    }

    /* JADX INFO: compiled from: OneTapStyle.kt */
    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J,\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\rJ,\u0010\u000e\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\rJ.\u0010\u000f\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\rH\u0007¨\u0006\u0010"}, d2 = {"Lcom/vk/id/onetap/common/OneTapStyle$Companion;", "", "<init>", "()V", "system", "Lcom/vk/id/onetap/common/OneTapStyle;", "context", "Landroid/content/Context;", "cornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "sizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "elevationStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "secondarySystem", "transparentSystem", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public static /* synthetic */ OneTapStyle system$default(Companion companion, Context context, OneTapButtonCornersStyle oneTapButtonCornersStyle, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle oneTapButtonElevationStyle, int i, Object obj) {
            if ((i & 2) != 0) {
                oneTapButtonCornersStyle = OneTapButtonCornersStyle.Default.INSTANCE;
            }
            if ((i & 4) != 0) {
                oneTapButtonSizeStyle = OneTapButtonSizeStyle.DEFAULT;
            }
            if ((i & 8) != 0) {
                oneTapButtonElevationStyle = OneTapButtonElevationStyle.Default.INSTANCE;
            }
            return companion.system(context, oneTapButtonCornersStyle, oneTapButtonSizeStyle, oneTapButtonElevationStyle);
        }

        public final OneTapStyle system(Context context, OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
            return (OneTapStyle) ((Function3) (IsDarkThemeKt.getInternalVkIdIsDarkTheme(context) ? OneTapStyle$Companion$system$1.INSTANCE : OneTapStyle$Companion$system$2.INSTANCE)).invoke(cornersStyle, sizeStyle, elevationStyle);
        }

        public static /* synthetic */ OneTapStyle secondarySystem$default(Companion companion, Context context, OneTapButtonCornersStyle oneTapButtonCornersStyle, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle oneTapButtonElevationStyle, int i, Object obj) {
            if ((i & 2) != 0) {
                oneTapButtonCornersStyle = OneTapButtonCornersStyle.Default.INSTANCE;
            }
            if ((i & 4) != 0) {
                oneTapButtonSizeStyle = OneTapButtonSizeStyle.DEFAULT;
            }
            if ((i & 8) != 0) {
                oneTapButtonElevationStyle = OneTapButtonElevationStyle.Default.INSTANCE;
            }
            return companion.secondarySystem(context, oneTapButtonCornersStyle, oneTapButtonSizeStyle, oneTapButtonElevationStyle);
        }

        public final OneTapStyle secondarySystem(Context context, OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
            return (OneTapStyle) ((Function3) (IsDarkThemeKt.getInternalVkIdIsDarkTheme(context) ? OneTapStyle$Companion$secondarySystem$1.INSTANCE : OneTapStyle$Companion$secondarySystem$2.INSTANCE)).invoke(cornersStyle, sizeStyle, elevationStyle);
        }

        public static /* synthetic */ OneTapStyle transparentSystem$default(Companion companion, Context context, OneTapButtonCornersStyle oneTapButtonCornersStyle, OneTapButtonSizeStyle oneTapButtonSizeStyle, OneTapButtonElevationStyle oneTapButtonElevationStyle, int i, Object obj) {
            if ((i & 2) != 0) {
                oneTapButtonCornersStyle = OneTapButtonCornersStyle.Default.INSTANCE;
            }
            if ((i & 4) != 0) {
                oneTapButtonSizeStyle = OneTapButtonSizeStyle.DEFAULT;
            }
            if ((i & 8) != 0) {
                oneTapButtonElevationStyle = OneTapButtonElevationStyle.Default.INSTANCE;
            }
            return companion.transparentSystem(context, oneTapButtonCornersStyle, oneTapButtonSizeStyle, oneTapButtonElevationStyle);
        }

        @Deprecated(message = "This style will be removed in future releases. Please, use secondarySystem instead.", replaceWith = @ReplaceWith(expression = "OneTapStyle.secondarySystem(context, cornersStyle, sizeStyle, elevationStyle)", imports = {}))
        public final OneTapStyle transparentSystem(Context context, OneTapButtonCornersStyle cornersStyle, OneTapButtonSizeStyle sizeStyle, OneTapButtonElevationStyle elevationStyle) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            Intrinsics.checkNotNullParameter(elevationStyle, "elevationStyle");
            return (OneTapStyle) ((Function3) (IsDarkThemeKt.getInternalVkIdIsDarkTheme(context) ? OneTapStyle$Companion$transparentSystem$1.INSTANCE : OneTapStyle$Companion$transparentSystem$2.INSTANCE)).invoke(cornersStyle, sizeStyle, elevationStyle);
        }
    }
}
