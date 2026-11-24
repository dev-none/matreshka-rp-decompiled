package com.vk.id.multibranding.common.style;

import androidx.webkit.Profile;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: OAuthListWidgetCornersStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0007\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b7\u0018\u0000 \r2\u00020\u0001:\u0006\b\t\n\u000b\f\rB\u0011\b\u0004\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0082\u0001\u0005\u000e\u000f\u0010\u0011\u0012¨\u0006\u0013"}, d2 = {"Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "", "radiusDp", "", "<init>", "(F)V", "getRadiusDp", "()F", Profile.DEFAULT_PROFILE_NAME, "None", "Rounded", "Round", "Custom", "Companion", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle$Custom;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle$Default;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle$None;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle$Round;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle$Rounded;", "multibranding-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class OAuthListWidgetCornersStyle {
    private static final Companion Companion = new Companion(null);
    private static final float NONE_RADIUS_DP = 0.0f;
    private static final float ROUNDED_RADIUS_DP = 8.0f;
    private static final float ROUND_RADIUS_DP = 1000.0f;
    private final float radiusDp;

    public /* synthetic */ OAuthListWidgetCornersStyle(float f, DefaultConstructorMarker defaultConstructorMarker) {
        this(f);
    }

    private OAuthListWidgetCornersStyle(float f) {
        this.radiusDp = f;
    }

    public final float getRadiusDp() {
        return this.radiusDp;
    }

    /* JADX INFO: compiled from: OAuthListWidgetCornersStyle.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle$Default;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "<init>", "()V", "multibranding-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Default extends OAuthListWidgetCornersStyle {
        public static final Default INSTANCE = new Default();

        private Default() {
            super(8.0f, null);
        }
    }

    /* JADX INFO: compiled from: OAuthListWidgetCornersStyle.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle$None;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "<init>", "()V", "multibranding-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class None extends OAuthListWidgetCornersStyle {
        public static final None INSTANCE = new None();

        private None() {
            super(0.0f, null);
        }
    }

    /* JADX INFO: compiled from: OAuthListWidgetCornersStyle.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle$Rounded;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "<init>", "()V", "multibranding-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Rounded extends OAuthListWidgetCornersStyle {
        public static final Rounded INSTANCE = new Rounded();

        private Rounded() {
            super(8.0f, null);
        }
    }

    /* JADX INFO: compiled from: OAuthListWidgetCornersStyle.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle$Round;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "<init>", "()V", "multibranding-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Round extends OAuthListWidgetCornersStyle {
        public static final Round INSTANCE = new Round();

        private Round() {
            super(OAuthListWidgetCornersStyle.ROUND_RADIUS_DP, null);
        }
    }

    /* JADX INFO: compiled from: OAuthListWidgetCornersStyle.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005¨\u0006\u0006"}, d2 = {"Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle$Custom;", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "radiusDp", "", "<init>", "(F)V", "multibranding-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Custom extends OAuthListWidgetCornersStyle {
        public Custom(float f) {
            super(f, null);
        }
    }

    /* JADX INFO: compiled from: OAuthListWidgetCornersStyle.kt */
    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\u0003\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle$Companion;", "", "<init>", "()V", "ROUNDED_RADIUS_DP", "", "NONE_RADIUS_DP", "ROUND_RADIUS_DP", "multibranding-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }
}
