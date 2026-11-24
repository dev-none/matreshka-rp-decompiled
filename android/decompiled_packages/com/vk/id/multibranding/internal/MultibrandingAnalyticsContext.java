package com.vk.id.multibranding.internal;

import com.my.target.common.menu.MenuActionType;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.onetap.compose.onetap.OneTapAnalytics;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MultibrandingAnalyticsContext.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u000b\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\t\u0010\f\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\r\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u000e\u001a\u00020\u00052\b\u0010\u000f\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0010\u001a\u00020\u0011HÖ\u0001J\t\u0010\u0012\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\n¨\u0006\u0013"}, d2 = {"Lcom/vk/id/multibranding/internal/MultibrandingAnalyticsContext;", "", OneTapAnalytics.SCREEN_PARAM_NAME, "", "isPaused", "", "<init>", "(Ljava/lang/String;Z)V", "getScreen", "()Ljava/lang/String;", "()Z", "component1", "component2", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "multibranding-internal_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class MultibrandingAnalyticsContext {
    private final boolean isPaused;
    private final String screen;

    public static /* synthetic */ MultibrandingAnalyticsContext copy$default(MultibrandingAnalyticsContext multibrandingAnalyticsContext, String str, boolean z, int i, Object obj) {
        if ((i & 1) != 0) {
            str = multibrandingAnalyticsContext.screen;
        }
        if ((i & 2) != 0) {
            z = multibrandingAnalyticsContext.isPaused;
        }
        return multibrandingAnalyticsContext.copy(str, z);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getScreen() {
        return this.screen;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final boolean getIsPaused() {
        return this.isPaused;
    }

    public final MultibrandingAnalyticsContext copy(String screen, boolean isPaused) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        return new MultibrandingAnalyticsContext(screen, isPaused);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof MultibrandingAnalyticsContext)) {
            return false;
        }
        MultibrandingAnalyticsContext multibrandingAnalyticsContext = (MultibrandingAnalyticsContext) other;
        return Intrinsics.areEqual(this.screen, multibrandingAnalyticsContext.screen) && this.isPaused == multibrandingAnalyticsContext.isPaused;
    }

    public int hashCode() {
        return (this.screen.hashCode() * 31) + Boolean.hashCode(this.isPaused);
    }

    public String toString() {
        return "MultibrandingAnalyticsContext(screen=" + this.screen + ", isPaused=" + this.isPaused + ")";
    }

    public MultibrandingAnalyticsContext(String screen, boolean z) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        this.screen = screen;
        this.isPaused = z;
    }

    public /* synthetic */ MultibrandingAnalyticsContext(String str, boolean z, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, (i & 2) != 0 ? false : z);
    }

    public final String getScreen() {
        return this.screen;
    }

    public final boolean isPaused() {
        return this.isPaused;
    }
}
