package com.vk.id.onetap.common.button.style;

import androidx.webkit.Profile;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: OneTapButtonElevationStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b7\u0018\u00002\u00020\u0001:\u0002\b\tB\u0011\b\u0004\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0082\u0001\u0002\n\u000b¨\u0006\f"}, d2 = {"Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "", "elevationDp", "", "<init>", "(F)V", "getElevationDp", "()F", Profile.DEFAULT_PROFILE_NAME, "Custom", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle$Custom;", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle$Default;", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class OneTapButtonElevationStyle {
    private final float elevationDp;

    public /* synthetic */ OneTapButtonElevationStyle(float f, DefaultConstructorMarker defaultConstructorMarker) {
        this(f);
    }

    private OneTapButtonElevationStyle(float f) {
        this.elevationDp = f;
    }

    public final float getElevationDp() {
        return this.elevationDp;
    }

    /* JADX INFO: compiled from: OneTapButtonElevationStyle.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle$Default;", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "<init>", "()V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Default extends OneTapButtonElevationStyle {
        public static final Default INSTANCE = new Default();

        private Default() {
            super(0.0f, null);
        }
    }

    /* JADX INFO: compiled from: OneTapButtonElevationStyle.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005¨\u0006\u0006"}, d2 = {"Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle$Custom;", "Lcom/vk/id/onetap/common/button/style/OneTapButtonElevationStyle;", "elevationDp", "", "<init>", "(F)V", "onetap-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Custom extends OneTapButtonElevationStyle {
        public Custom(float f) {
            super(f, null);
        }
    }
}
