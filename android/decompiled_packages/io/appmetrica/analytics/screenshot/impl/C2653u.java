package io.appmetrica.analytics.screenshot.impl;

import android.app.Activity;
import android.provider.MediaStore;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.u, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2653u implements ActivityLifecycleListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2654v f6577a;

    public C2653u(C2654v c2654v) {
        this.f6577a = c2654v;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener
    public final void onEvent(Activity activity, ActivityEvent activityEvent) {
        int i = AbstractC2652t.f6576a[activityEvent.ordinal()];
        try {
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                this.f6577a.f6578a.getContext().getContentResolver().unregisterContentObserver(this.f6577a.d);
            } else {
                C2644k c2644k = this.f6577a.c;
                if (c2644k == null || !c2644k.f6567a) {
                    return;
                }
                this.f6577a.f6578a.getContext().getContentResolver().registerContentObserver(MediaStore.Images.Media.EXTERNAL_CONTENT_URI, true, this.f6577a.d);
            }
        } catch (Throwable unused) {
        }
    }
}
