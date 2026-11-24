package io.flutter.plugins.urllauncher;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Messages.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010 \n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\b\u0086\b\u0018\u0000 \u00122\u00020\u0001:\u0001\u0012B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\b\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\tJ\u0013\u0010\n\u001a\u00020\u00032\b\u0010\u000b\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\f\u001a\u00020\rH\u0016J\b\u0010\u000e\u001a\u00020\u000fH\u0016J\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\u0011\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÆ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0013"}, d2 = {"Lio/flutter/plugins/urllauncher/BrowserOptions;", "", "showTitle", "", "<init>", "(Z)V", "getShowTitle", "()Z", "toList", "", "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "", "component1", MenuActionType.COPY, "Companion", "url_launcher_android_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class BrowserOptions {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final boolean showTitle;

    public static /* synthetic */ BrowserOptions copy$default(BrowserOptions browserOptions, boolean z, int i, Object obj) {
        if ((i & 1) != 0) {
            z = browserOptions.showTitle;
        }
        return browserOptions.copy(z);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final boolean getShowTitle() {
        return this.showTitle;
    }

    public final BrowserOptions copy(boolean showTitle) {
        return new BrowserOptions(showTitle);
    }

    public BrowserOptions(boolean z) {
        this.showTitle = z;
    }

    public final boolean getShowTitle() {
        return this.showTitle;
    }

    /* JADX INFO: compiled from: Messages.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u000e\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0007¨\u0006\b"}, d2 = {"Lio/flutter/plugins/urllauncher/BrowserOptions$Companion;", "", "<init>", "()V", "fromList", "Lio/flutter/plugins/urllauncher/BrowserOptions;", "pigeonVar_list", "", "url_launcher_android_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final BrowserOptions fromList(List<? extends Object> pigeonVar_list) {
            Intrinsics.checkNotNullParameter(pigeonVar_list, "pigeonVar_list");
            Object obj = pigeonVar_list.get(0);
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Boolean");
            return new BrowserOptions(((Boolean) obj).booleanValue());
        }
    }

    public final List<Object> toList() {
        return CollectionsKt.listOf(Boolean.valueOf(this.showTitle));
    }

    public boolean equals(Object other) {
        if (other == null || !Intrinsics.areEqual(other.getClass(), getClass())) {
            return false;
        }
        if (this == other) {
            return true;
        }
        return MessagesPigeonUtils.INSTANCE.deepEquals(Boolean.valueOf(this.showTitle), Boolean.valueOf(((BrowserOptions) other).showTitle));
    }

    public int hashCode() {
        return (getClass().hashCode() * 31) + MessagesPigeonUtils.INSTANCE.deepHash(Boolean.valueOf(this.showTitle));
    }

    public String toString() {
        return "BrowserOptions(showTitle=" + this.showTitle + ")";
    }
}
