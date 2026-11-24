package com.vk.id.onetap.compose.onetap.sheet.style;

import androidx.webkit.Profile;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: OneTapSheetCornersStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0007\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b7\u0018\u0000 \f2\u00020\u0001:\u0005\b\t\n\u000b\fB\u0011\b\u0004\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0082\u0001\u0004\r\u000e\u000f\u0010¨\u0006\u0011"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "", "radiusDp", "", "<init>", "(F)V", "getRadiusDp", "()F", Profile.DEFAULT_PROFILE_NAME, "None", "Rounded", "Custom", "Companion", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle$Custom;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle$Default;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle$None;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle$Rounded;", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class OneTapSheetCornersStyle {
    public static final int $stable = 0;
    private static final Companion Companion = new Companion(null);
    private static final float DEFAULT_RADIUS_DP = 24.0f;
    private static final float NONE_RADIUS_DP = 0.0f;
    private static final float ROUNDED_RADIUS_DP = 12.0f;
    private final float radiusDp;

    public /* synthetic */ OneTapSheetCornersStyle(float f, DefaultConstructorMarker defaultConstructorMarker) {
        this(f);
    }

    private OneTapSheetCornersStyle(float f) {
        this.radiusDp = f;
    }

    public final float getRadiusDp() {
        return this.radiusDp;
    }

    /* JADX INFO: compiled from: OneTapSheetCornersStyle.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle$Default;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "<init>", "()V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Default extends OneTapSheetCornersStyle {
        public static final int $stable = 0;
        public static final Default INSTANCE = new Default();

        private Default() {
            super(24.0f, null);
        }
    }

    /* JADX INFO: compiled from: OneTapSheetCornersStyle.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle$None;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "<init>", "()V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class None extends OneTapSheetCornersStyle {
        public static final int $stable = 0;
        public static final None INSTANCE = new None();

        private None() {
            super(0.0f, null);
        }
    }

    /* JADX INFO: compiled from: OneTapSheetCornersStyle.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle$Rounded;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "<init>", "()V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Rounded extends OneTapSheetCornersStyle {
        public static final int $stable = 0;
        public static final Rounded INSTANCE = new Rounded();

        private Rounded() {
            super(OneTapSheetCornersStyle.ROUNDED_RADIUS_DP, null);
        }
    }

    /* JADX INFO: compiled from: OneTapSheetCornersStyle.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005¨\u0006\u0006"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle$Custom;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle;", "radiusDp", "", "<init>", "(F)V", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Custom extends OneTapSheetCornersStyle {
        public static final int $stable = 0;

        public Custom(float f) {
            super(f, null);
        }
    }

    /* JADX INFO: compiled from: OneTapSheetCornersStyle.kt */
    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\u0003\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapSheetCornersStyle$Companion;", "", "<init>", "()V", "ROUNDED_RADIUS_DP", "", "DEFAULT_RADIUS_DP", "NONE_RADIUS_DP", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }
}
