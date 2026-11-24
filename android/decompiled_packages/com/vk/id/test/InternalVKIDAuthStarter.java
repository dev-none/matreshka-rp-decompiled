package com.vk.id.test;

import android.content.Context;
import android.content.Intent;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.internal.auth.AuthActivity;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDAuthStarter.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t¨\u0006\n"}, d2 = {"Lcom/vk/id/test/InternalVKIDAuthStarter;", "", "<init>", "()V", "startAuth", "", "context", "Landroid/content/Context;", "intent", "Landroid/content/Intent;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDAuthStarter {
    public static final int $stable = 0;
    public static final InternalVKIDAuthStarter INSTANCE = new InternalVKIDAuthStarter();

    private InternalVKIDAuthStarter() {
    }

    public final void startAuth(Context context, Intent intent) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(intent, "intent");
        AuthActivity.INSTANCE.startForAuth$vkid_release(context, intent);
    }
}
