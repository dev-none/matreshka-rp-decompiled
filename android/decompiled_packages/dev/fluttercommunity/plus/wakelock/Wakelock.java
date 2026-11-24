package dev.fluttercommunity.plus.wakelock;

import android.app.Activity;
import defpackage.IsEnabledMessage;
import defpackage.ToggleMessage;
import io.flutter.plugins.firebase.analytics.Constants;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Wakelock.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011J\u0006\u0010\u0012\u001a\u00020\u0013R\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR\u0014\u0010\n\u001a\u00020\u000b8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\f\u0010\r¨\u0006\u0014"}, d2 = {"Ldev/fluttercommunity/plus/wakelock/Wakelock;", "", "<init>", "()V", "activity", "Landroid/app/Activity;", "getActivity", "()Landroid/app/Activity;", "setActivity", "(Landroid/app/Activity;)V", Constants.ENABLED, "", "getEnabled", "()Z", "toggle", "", "message", "LToggleMessage;", com.google.firebase.perf.util.Constants.ENABLE_DISABLE, "LIsEnabledMessage;", "wakelock_plus_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class Wakelock {
    private Activity activity;

    public final Activity getActivity() {
        return this.activity;
    }

    public final void setActivity(Activity activity) {
        this.activity = activity;
    }

    private final boolean getEnabled() {
        Activity activity = this.activity;
        Intrinsics.checkNotNull(activity);
        return (activity.getWindow().getAttributes().flags & 128) != 0;
    }

    public final void toggle(ToggleMessage message) throws NoActivityException {
        Intrinsics.checkNotNullParameter(message, "message");
        Activity activity = this.activity;
        if (activity == null) {
            throw new NoActivityException();
        }
        Intrinsics.checkNotNull(activity);
        boolean enabled = getEnabled();
        Boolean enable = message.getEnable();
        Intrinsics.checkNotNull(enable);
        if (enable.booleanValue()) {
            if (enabled) {
                return;
            }
            activity.getWindow().addFlags(128);
        } else if (enabled) {
            activity.getWindow().clearFlags(128);
        }
    }

    public final IsEnabledMessage isEnabled() throws NoActivityException {
        if (this.activity == null) {
            throw new NoActivityException();
        }
        return new IsEnabledMessage(Boolean.valueOf(getEnabled()));
    }
}
