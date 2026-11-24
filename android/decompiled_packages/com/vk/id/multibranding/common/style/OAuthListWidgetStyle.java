package com.vk.id.multibranding.common.style;

import android.content.Context;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.common.util.IsDarkThemeKt;
import kotlin.Metadata;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OAuthListWidgetStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0015\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b7\u0018\u0000  2\u00020\u0001:\u0003\u001e\u001f B1\b\u0004\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0004\b\f\u0010\rR\u001c\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u000e\u0010\u000f\u001a\u0004\b\u0010\u0010\u0011R\u001c\u0010\u0004\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0012\u0010\u000f\u001a\u0004\b\u0013\u0010\u0014R\u001c\u0010\u0006\u001a\u00020\u00078\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0015\u0010\u000f\u001a\u0004\b\u0016\u0010\u0017R\u001c\u0010\b\u001a\u00020\t8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0018\u0010\u000f\u001a\u0004\b\u0019\u0010\u001aR\u001c\u0010\n\u001a\u00020\u000b8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u001b\u0010\u000f\u001a\u0004\b\u001c\u0010\u001d\u0082\u0001\u0002!\"¨\u0006#"}, d2 = {"Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;", "", "cornersStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "rippleStyle", "Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetRippleStyle;", "borderStyle", "Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetBorderStyle;", "textStyle", "Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetTextStyle;", "sizeStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetSizeStyle;", "<init>", "(Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetRippleStyle;Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetBorderStyle;Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetTextStyle;Lcom/vk/id/multibranding/common/style/OAuthListWidgetSizeStyle;)V", "getCornersStyle$annotations", "()V", "getCornersStyle", "()Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "getRippleStyle$annotations", "getRippleStyle", "()Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetRippleStyle;", "getBorderStyle$annotations", "getBorderStyle", "()Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetBorderStyle;", "getTextStyle$annotations", "getTextStyle", "()Lcom/vk/id/multibranding/common/style/InternalVKIDOAuthListWidgetTextStyle;", "getSizeStyle$annotations", "getSizeStyle", "()Lcom/vk/id/multibranding/common/style/OAuthListWidgetSizeStyle;", "Dark", "Light", "Companion", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle$Dark;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle$Light;", "multibranding-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class OAuthListWidgetStyle {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final InternalVKIDOAuthListWidgetBorderStyle borderStyle;
    private final OAuthListWidgetCornersStyle cornersStyle;
    private final InternalVKIDOAuthListWidgetRippleStyle rippleStyle;
    private final OAuthListWidgetSizeStyle sizeStyle;
    private final InternalVKIDOAuthListWidgetTextStyle textStyle;

    public /* synthetic */ OAuthListWidgetStyle(OAuthListWidgetCornersStyle oAuthListWidgetCornersStyle, InternalVKIDOAuthListWidgetRippleStyle internalVKIDOAuthListWidgetRippleStyle, InternalVKIDOAuthListWidgetBorderStyle internalVKIDOAuthListWidgetBorderStyle, InternalVKIDOAuthListWidgetTextStyle internalVKIDOAuthListWidgetTextStyle, OAuthListWidgetSizeStyle oAuthListWidgetSizeStyle, DefaultConstructorMarker defaultConstructorMarker) {
        this(oAuthListWidgetCornersStyle, internalVKIDOAuthListWidgetRippleStyle, internalVKIDOAuthListWidgetBorderStyle, internalVKIDOAuthListWidgetTextStyle, oAuthListWidgetSizeStyle);
    }

    @InternalVKIDApi
    public static /* synthetic */ void getBorderStyle$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getCornersStyle$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getRippleStyle$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getSizeStyle$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getTextStyle$annotations() {
    }

    private OAuthListWidgetStyle(OAuthListWidgetCornersStyle oAuthListWidgetCornersStyle, InternalVKIDOAuthListWidgetRippleStyle internalVKIDOAuthListWidgetRippleStyle, InternalVKIDOAuthListWidgetBorderStyle internalVKIDOAuthListWidgetBorderStyle, InternalVKIDOAuthListWidgetTextStyle internalVKIDOAuthListWidgetTextStyle, OAuthListWidgetSizeStyle oAuthListWidgetSizeStyle) {
        this.cornersStyle = oAuthListWidgetCornersStyle;
        this.rippleStyle = internalVKIDOAuthListWidgetRippleStyle;
        this.borderStyle = internalVKIDOAuthListWidgetBorderStyle;
        this.textStyle = internalVKIDOAuthListWidgetTextStyle;
        this.sizeStyle = oAuthListWidgetSizeStyle;
    }

    public final OAuthListWidgetCornersStyle getCornersStyle() {
        return this.cornersStyle;
    }

    public final InternalVKIDOAuthListWidgetRippleStyle getRippleStyle() {
        return this.rippleStyle;
    }

    public final InternalVKIDOAuthListWidgetBorderStyle getBorderStyle() {
        return this.borderStyle;
    }

    public final InternalVKIDOAuthListWidgetTextStyle getTextStyle() {
        return this.textStyle;
    }

    public final OAuthListWidgetSizeStyle getSizeStyle() {
        return this.sizeStyle;
    }

    /* JADX INFO: compiled from: OAuthListWidgetStyle.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u001b\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle$Dark;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;", "cornersStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "sizeStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetSizeStyle;", "<init>", "(Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;Lcom/vk/id/multibranding/common/style/OAuthListWidgetSizeStyle;)V", "multibranding-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Dark extends OAuthListWidgetStyle {
        /* JADX WARN: Multi-variable type inference failed */
        public Dark() {
            this(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
        }

        public /* synthetic */ Dark(OAuthListWidgetCornersStyle.Default r1, OAuthListWidgetSizeStyle oAuthListWidgetSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OAuthListWidgetCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OAuthListWidgetSizeStyle.DEFAULT : oAuthListWidgetSizeStyle);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Dark(OAuthListWidgetCornersStyle cornersStyle, OAuthListWidgetSizeStyle sizeStyle) {
            super(cornersStyle, InternalVKIDOAuthListWidgetRippleStyle.LIGHT, InternalVKIDOAuthListWidgetBorderStyle.LIGHT, InternalVKIDOAuthListWidgetTextStyle.LIGHT, sizeStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
        }
    }

    /* JADX INFO: compiled from: OAuthListWidgetStyle.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u001b\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle$Light;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;", "cornersStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "sizeStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetSizeStyle;", "<init>", "(Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;Lcom/vk/id/multibranding/common/style/OAuthListWidgetSizeStyle;)V", "multibranding-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Light extends OAuthListWidgetStyle {
        /* JADX WARN: Multi-variable type inference failed */
        public Light() {
            this(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
        }

        public /* synthetic */ Light(OAuthListWidgetCornersStyle.Default r1, OAuthListWidgetSizeStyle oAuthListWidgetSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OAuthListWidgetCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OAuthListWidgetSizeStyle.DEFAULT : oAuthListWidgetSizeStyle);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Light(OAuthListWidgetCornersStyle cornersStyle, OAuthListWidgetSizeStyle sizeStyle) {
            super(cornersStyle, InternalVKIDOAuthListWidgetRippleStyle.DARK, InternalVKIDOAuthListWidgetBorderStyle.DARK, InternalVKIDOAuthListWidgetTextStyle.DARK, sizeStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
        }
    }

    /* JADX INFO: compiled from: OAuthListWidgetStyle.kt */
    @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\"\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u000b¨\u0006\f"}, d2 = {"Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle$Companion;", "", "<init>", "()V", "system", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;", "context", "Landroid/content/Context;", "cornersStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "sizeStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetSizeStyle;", "multibranding-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public static /* synthetic */ OAuthListWidgetStyle system$default(Companion companion, Context context, OAuthListWidgetCornersStyle oAuthListWidgetCornersStyle, OAuthListWidgetSizeStyle oAuthListWidgetSizeStyle, int i, Object obj) {
            if ((i & 2) != 0) {
                oAuthListWidgetCornersStyle = OAuthListWidgetCornersStyle.Default.INSTANCE;
            }
            if ((i & 4) != 0) {
                oAuthListWidgetSizeStyle = OAuthListWidgetSizeStyle.DEFAULT;
            }
            return companion.system(context, oAuthListWidgetCornersStyle, oAuthListWidgetSizeStyle);
        }

        public final OAuthListWidgetStyle system(Context context, OAuthListWidgetCornersStyle cornersStyle, OAuthListWidgetSizeStyle sizeStyle) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(sizeStyle, "sizeStyle");
            return (OAuthListWidgetStyle) ((Function2) (IsDarkThemeKt.getInternalVkIdIsDarkTheme(context) ? OAuthListWidgetStyle$Companion$system$1.INSTANCE : OAuthListWidgetStyle$Companion$system$2.INSTANCE)).invoke(cornersStyle, sizeStyle);
        }
    }
}
