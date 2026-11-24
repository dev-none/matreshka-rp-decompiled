package com.vk.id.onetap.compose.onetap.sheet.style;

import android.content.Context;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.common.util.IsDarkThemeKt;
import com.vk.id.onetap.common.OneTapStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyle;
import com.vk.id.onetap.compose.R;
import kotlin.Deprecated;
import kotlin.Metadata;
import kotlin.ReplaceWith;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapBottomSheetStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0013\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b7\u0018\u0000 \u001c2\u00020\u0001:\u0005\u0018\u0019\u001a\u001b\u001cB?\b\u0005\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\b\u0001\u0010\b\u001a\u00020\t\u0012\b\b\u0001\u0010\n\u001a\u00020\t\u0012\b\b\u0001\u0010\u000b\u001a\u00020\t¢\u0006\u0004\b\f\u0010\rR\u0014\u0010\u0002\u001a\u00020\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0014\u0010\u0004\u001a\u00020\u0005X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0014\u0010\u0006\u001a\u00020\u0007X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0014\u0010\b\u001a\u00020\tX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0014\u0010\n\u001a\u00020\tX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0015R\u0014\u0010\u000b\u001a\u00020\tX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0015\u0082\u0001\u0004\u001d\u001e\u001f ¨\u0006!"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "", "cornersStyle", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "oneTapStyle", "Lcom/vk/id/onetap/common/OneTapStyle;", "backgroundStyle", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetBackgroundStyle;", "vkidIcon", "", "contentTextColor", "contentTitleTextColor", "<init>", "(Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;Lcom/vk/id/onetap/common/OneTapStyle;Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetBackgroundStyle;III)V", "getCornersStyle$onetap_compose_release", "()Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "getOneTapStyle$onetap_compose_release", "()Lcom/vk/id/onetap/common/OneTapStyle;", "getBackgroundStyle$onetap_compose_release", "()Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetBackgroundStyle;", "getVkidIcon$onetap_compose_release", "()I", "getContentTextColor$onetap_compose_release", "getContentTitleTextColor$onetap_compose_release", "Light", "Dark", "TransparentLight", "TransparentDark", "Companion", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle$Dark;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle$Light;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle$TransparentDark;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle$TransparentLight;", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class OneTapBottomSheetStyle {
    public static final int $stable = 0;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final OneTapSheetBackgroundStyle backgroundStyle;
    private final int contentTextColor;
    private final int contentTitleTextColor;
    private final OneTapSheetCornersStyle cornersStyle;
    private final OneTapStyle oneTapStyle;
    private final int vkidIcon;

    public /* synthetic */ OneTapBottomSheetStyle(OneTapSheetCornersStyle oneTapSheetCornersStyle, OneTapStyle oneTapStyle, OneTapSheetBackgroundStyle oneTapSheetBackgroundStyle, int i, int i2, int i3, DefaultConstructorMarker defaultConstructorMarker) {
        this(oneTapSheetCornersStyle, oneTapStyle, oneTapSheetBackgroundStyle, i, i2, i3);
    }

    @InternalVKIDApi
    private OneTapBottomSheetStyle(OneTapSheetCornersStyle oneTapSheetCornersStyle, OneTapStyle oneTapStyle, OneTapSheetBackgroundStyle oneTapSheetBackgroundStyle, int i, int i2, int i3) {
        this.cornersStyle = oneTapSheetCornersStyle;
        this.oneTapStyle = oneTapStyle;
        this.backgroundStyle = oneTapSheetBackgroundStyle;
        this.vkidIcon = i;
        this.contentTextColor = i2;
        this.contentTitleTextColor = i3;
    }

    /* JADX INFO: renamed from: getCornersStyle$onetap_compose_release, reason: from getter */
    public final OneTapSheetCornersStyle getCornersStyle() {
        return this.cornersStyle;
    }

    /* JADX INFO: renamed from: getOneTapStyle$onetap_compose_release, reason: from getter */
    public final OneTapStyle getOneTapStyle() {
        return this.oneTapStyle;
    }

    /* JADX INFO: renamed from: getBackgroundStyle$onetap_compose_release, reason: from getter */
    public final OneTapSheetBackgroundStyle getBackgroundStyle() {
        return this.backgroundStyle;
    }

    /* JADX INFO: renamed from: getVkidIcon$onetap_compose_release, reason: from getter */
    public final int getVkidIcon() {
        return this.vkidIcon;
    }

    /* JADX INFO: renamed from: getContentTextColor$onetap_compose_release, reason: from getter */
    public final int getContentTextColor() {
        return this.contentTextColor;
    }

    /* JADX INFO: renamed from: getContentTitleTextColor$onetap_compose_release, reason: from getter */
    public final int getContentTitleTextColor() {
        return this.contentTitleTextColor;
    }

    /* JADX INFO: compiled from: OneTapBottomSheetStyle.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle$Light;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "cornersStyle", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "buttonsCornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "buttonsSizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "<init>", "(Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Light extends OneTapBottomSheetStyle {
        public static final int $stable = 0;

        public Light() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ Light(OneTapSheetCornersStyle.Default r1, OneTapButtonCornersStyle.Default r2, OneTapButtonSizeStyle oneTapButtonSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapSheetCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r2, (i & 4) != 0 ? OneTapButtonSizeStyle.DEFAULT : oneTapButtonSizeStyle);
        }

        /* JADX WARN: Illegal instructions before constructor call */
        public Light(OneTapSheetCornersStyle cornersStyle, OneTapButtonCornersStyle buttonsCornersStyle, OneTapButtonSizeStyle buttonsSizeStyle) {
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(buttonsCornersStyle, "buttonsCornersStyle");
            Intrinsics.checkNotNullParameter(buttonsSizeStyle, "buttonsSizeStyle");
            int i = 0;
            super(cornersStyle, new OneTapStyle.Light(buttonsCornersStyle, buttonsSizeStyle, null, 4, null), OneTapSheetBackgroundStyle.LIGHT, i, R.color.vkid_gray_subhead, R.color.vkid_black, null);
        }
    }

    /* JADX INFO: compiled from: OneTapBottomSheetStyle.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle$Dark;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "cornersStyle", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "buttonsCornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "buttonsSizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "<init>", "(Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Dark extends OneTapBottomSheetStyle {
        public static final int $stable = 0;

        public Dark() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ Dark(OneTapSheetCornersStyle.Default r1, OneTapButtonCornersStyle.Default r2, OneTapButtonSizeStyle oneTapButtonSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapSheetCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r2, (i & 4) != 0 ? OneTapButtonSizeStyle.DEFAULT : oneTapButtonSizeStyle);
        }

        /* JADX WARN: Illegal instructions before constructor call */
        public Dark(OneTapSheetCornersStyle cornersStyle, OneTapButtonCornersStyle buttonsCornersStyle, OneTapButtonSizeStyle buttonsSizeStyle) {
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(buttonsCornersStyle, "buttonsCornersStyle");
            Intrinsics.checkNotNullParameter(buttonsSizeStyle, "buttonsSizeStyle");
            int i = 0;
            super(cornersStyle, new OneTapStyle.Dark(buttonsCornersStyle, buttonsSizeStyle, null, 4, null), OneTapSheetBackgroundStyle.DARK, i, R.color.vkid_gray_subhead_dark, R.color.vkid_gray_100, null);
        }
    }

    /* JADX INFO: compiled from: OneTapBottomSheetStyle.kt */
    @Deprecated(message = "This style will be removed in future releases. Please, use Light instead.", replaceWith = @ReplaceWith(expression = "Light", imports = {" com.vk.id.onetap.compose.onetap.sheet.style.Light"}))
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle$TransparentLight;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "cornersStyle", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "buttonsCornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "buttonsSizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "<init>", "(Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class TransparentLight extends OneTapBottomSheetStyle {
        public static final int $stable = 0;

        public TransparentLight() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ TransparentLight(OneTapSheetCornersStyle.Default r1, OneTapButtonCornersStyle.Default r2, OneTapButtonSizeStyle oneTapButtonSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapSheetCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r2, (i & 4) != 0 ? OneTapButtonSizeStyle.DEFAULT : oneTapButtonSizeStyle);
        }

        /* JADX WARN: Illegal instructions before constructor call */
        public TransparentLight(OneTapSheetCornersStyle cornersStyle, OneTapButtonCornersStyle buttonsCornersStyle, OneTapButtonSizeStyle buttonsSizeStyle) {
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(buttonsCornersStyle, "buttonsCornersStyle");
            Intrinsics.checkNotNullParameter(buttonsSizeStyle, "buttonsSizeStyle");
            int i = 0;
            super(cornersStyle, new OneTapStyle.TransparentLight(buttonsCornersStyle, buttonsSizeStyle, null, 4, null), OneTapSheetBackgroundStyle.LIGHT, i, R.color.vkid_gray_subhead, R.color.vkid_black, null);
        }
    }

    /* JADX INFO: compiled from: OneTapBottomSheetStyle.kt */
    @Deprecated(message = "This style will be removed in future releases. Please, use Dark instead.", replaceWith = @ReplaceWith(expression = "Dark", imports = {" com.vk.id.onetap.compose.onetap.sheet.style.Dark"}))
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle$TransparentDark;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "cornersStyle", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "buttonsCornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "buttonsSizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "<init>", "(Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class TransparentDark extends OneTapBottomSheetStyle {
        public static final int $stable = 0;

        public TransparentDark() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ TransparentDark(OneTapSheetCornersStyle.Default r1, OneTapButtonCornersStyle.Default r2, OneTapButtonSizeStyle oneTapButtonSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? OneTapSheetCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? OneTapButtonCornersStyle.Default.INSTANCE : r2, (i & 4) != 0 ? OneTapButtonSizeStyle.DEFAULT : oneTapButtonSizeStyle);
        }

        /* JADX WARN: Illegal instructions before constructor call */
        public TransparentDark(OneTapSheetCornersStyle cornersStyle, OneTapButtonCornersStyle buttonsCornersStyle, OneTapButtonSizeStyle buttonsSizeStyle) {
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(buttonsCornersStyle, "buttonsCornersStyle");
            Intrinsics.checkNotNullParameter(buttonsSizeStyle, "buttonsSizeStyle");
            int i = 0;
            super(cornersStyle, new OneTapStyle.TransparentDark(buttonsCornersStyle, buttonsSizeStyle, null, 4, null), OneTapSheetBackgroundStyle.DARK, i, R.color.vkid_gray_subhead_dark, R.color.vkid_gray_100, null);
        }
    }

    /* JADX INFO: compiled from: OneTapBottomSheetStyle.kt */
    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J,\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\rJ.\u0010\u000e\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\rH\u0007¨\u0006\u000f"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle$Companion;", "", "<init>", "()V", "system", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "context", "Landroid/content/Context;", "cornersStyle", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "buttonsCornersStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonCornersStyle;", "buttonsSizeStyle", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "transparentSystem", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public static /* synthetic */ OneTapBottomSheetStyle system$default(Companion companion, Context context, OneTapSheetCornersStyle oneTapSheetCornersStyle, OneTapButtonCornersStyle oneTapButtonCornersStyle, OneTapButtonSizeStyle oneTapButtonSizeStyle, int i, Object obj) {
            if ((i & 2) != 0) {
                oneTapSheetCornersStyle = OneTapSheetCornersStyle.Default.INSTANCE;
            }
            if ((i & 4) != 0) {
                oneTapButtonCornersStyle = OneTapButtonCornersStyle.Default.INSTANCE;
            }
            if ((i & 8) != 0) {
                oneTapButtonSizeStyle = OneTapButtonSizeStyle.DEFAULT;
            }
            return companion.system(context, oneTapSheetCornersStyle, oneTapButtonCornersStyle, oneTapButtonSizeStyle);
        }

        public final OneTapBottomSheetStyle system(Context context, OneTapSheetCornersStyle cornersStyle, OneTapButtonCornersStyle buttonsCornersStyle, OneTapButtonSizeStyle buttonsSizeStyle) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(buttonsCornersStyle, "buttonsCornersStyle");
            Intrinsics.checkNotNullParameter(buttonsSizeStyle, "buttonsSizeStyle");
            return (OneTapBottomSheetStyle) ((Function3) (IsDarkThemeKt.getInternalVkIdIsDarkTheme(context) ? OneTapBottomSheetStyle$Companion$system$1.INSTANCE : OneTapBottomSheetStyle$Companion$system$2.INSTANCE)).invoke(cornersStyle, buttonsCornersStyle, buttonsSizeStyle);
        }

        public static /* synthetic */ OneTapBottomSheetStyle transparentSystem$default(Companion companion, Context context, OneTapSheetCornersStyle oneTapSheetCornersStyle, OneTapButtonCornersStyle oneTapButtonCornersStyle, OneTapButtonSizeStyle oneTapButtonSizeStyle, int i, Object obj) {
            if ((i & 2) != 0) {
                oneTapSheetCornersStyle = OneTapSheetCornersStyle.Default.INSTANCE;
            }
            if ((i & 4) != 0) {
                oneTapButtonCornersStyle = OneTapButtonCornersStyle.Default.INSTANCE;
            }
            if ((i & 8) != 0) {
                oneTapButtonSizeStyle = OneTapButtonSizeStyle.DEFAULT;
            }
            return companion.transparentSystem(context, oneTapSheetCornersStyle, oneTapButtonCornersStyle, oneTapButtonSizeStyle);
        }

        @Deprecated(message = "This style will be removed in future releases. Please, use system instead.", replaceWith = @ReplaceWith(expression = "OneTapBottomSheetStyle.system(context, cornersStyle, buttonsCornersStyle, buttonsSizeStyle)", imports = {}))
        public final OneTapBottomSheetStyle transparentSystem(Context context, OneTapSheetCornersStyle cornersStyle, OneTapButtonCornersStyle buttonsCornersStyle, OneTapButtonSizeStyle buttonsSizeStyle) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(buttonsCornersStyle, "buttonsCornersStyle");
            Intrinsics.checkNotNullParameter(buttonsSizeStyle, "buttonsSizeStyle");
            return (OneTapBottomSheetStyle) ((Function3) (IsDarkThemeKt.getInternalVkIdIsDarkTheme(context) ? OneTapBottomSheetStyle$Companion$transparentSystem$1.INSTANCE : OneTapBottomSheetStyle$Companion$transparentSystem$2.INSTANCE)).invoke(cornersStyle, buttonsCornersStyle, buttonsSizeStyle);
        }
    }
}
