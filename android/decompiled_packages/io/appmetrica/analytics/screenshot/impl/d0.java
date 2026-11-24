package io.appmetrica.analytics.screenshot.impl;

import android.app.ActivityManager;
import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.backport.FunctionWithThrowable;
import io.appmetrica.analytics.coreutils.internal.system.SystemServiceUtils;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.TimeUnit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class d0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ g0 f6558a;

    public d0(g0 g0Var) {
        this.f6558a = g0Var;
    }

    public static final Boolean a(g0 g0Var, d0 d0Var, C2647n c2647n, ActivityManager activityManager) {
        Object next;
        List<ActivityManager.RunningServiceInfo> runningServices = activityManager.getRunningServices(200);
        if (runningServices == null) {
            runningServices = CollectionsKt.emptyList();
        }
        for (ActivityManager.RunningServiceInfo runningServiceInfo : runningServices) {
        }
        Iterator<T> it = runningServices.iterator();
        do {
            if (!it.hasNext()) {
                next = null;
                break;
            }
            next = it.next();
        } while (!Intrinsics.areEqual(((ActivityManager.RunningServiceInfo) next).process, "com.android.systemui:screenshot"));
        if (((ActivityManager.RunningServiceInfo) next) != null) {
            ((C2656x) g0Var.b).a("ServiceScreenshotCaptor");
        }
        return Boolean.valueOf(g0Var.c.postDelayed(d0Var, TimeUnit.SECONDS.toMillis(c2647n.b)));
    }

    @Override // java.lang.Runnable
    public final void run() {
        final C2647n c2647n = this.f6558a.e;
        if (this.f6558a.d || c2647n == null || !c2647n.f6572a) {
            return;
        }
        Context context = this.f6558a.f6562a.getContext();
        final g0 g0Var = this.f6558a;
        SystemServiceUtils.accessSystemServiceByNameSafely(context, "activity", "running service screenshot captor", "ActivityManager", new FunctionWithThrowable() { // from class: io.appmetrica.analytics.screenshot.impl.d0$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.coreapi.internal.backport.FunctionWithThrowable
            public final Object apply(Object obj) {
                return d0.a(g0Var, this, c2647n, (ActivityManager) obj);
            }
        });
    }
}
