package io.appmetrica.analytics.impl;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleRegistry;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.o, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2335o extends H7 implements ActivityLifecycleRegistry {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Application f6230a;
    public volatile EnumC2310n b = EnumC2310n.d;
    public final C2545wa c = new C2545wa(true);

    public final synchronized void a(Context context) {
        if (this.f6230a == null) {
            try {
                this.f6230a = (Application) context.getApplicationContext();
            } catch (Throwable unused) {
            }
        }
        b();
    }

    public final synchronized void b() {
        EnumC2310n enumC2310n = this.b;
        EnumC2310n enumC2310n2 = EnumC2310n.b;
        if (enumC2310n != enumC2310n2 && !this.c.f6383a.isEmpty()) {
            if (this.f6230a == null) {
                this.b = EnumC2310n.c;
            } else {
                this.b = enumC2310n2;
                this.f6230a.registerActivityLifecycleCallbacks(this);
            }
        }
    }

    public final synchronized void c() {
        if (this.b == EnumC2310n.b && this.c.f6383a.isEmpty()) {
            this.b = EnumC2310n.d;
            Application application = this.f6230a;
            if (application != null) {
                application.unregisterActivityLifecycleCallbacks(this);
            }
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        a(activity, ActivityEvent.CREATED);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        a(activity, ActivityEvent.DESTROYED);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        a(activity, ActivityEvent.PAUSED);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        a(activity, ActivityEvent.RESUMED);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        a(activity, ActivityEvent.STARTED);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        a(activity, ActivityEvent.STOPPED);
    }

    /* JADX WARN: Code duplicated, block: B:6:0x0006 A[Catch: all -> 0x001d, TryCatch #0 {, blocks: (B:4:0x0003, B:7:0x000a, B:9:0x000e, B:10:0x0018, B:6:0x0006), top: B:16:0x0003 }] */
    /* JADX WARN: Code duplicated, block: B:9:0x000e A[Catch: all -> 0x001d, LOOP:0: B:8:0x000c->B:9:0x000e, LOOP_END, TryCatch #0 {, blocks: (B:4:0x0003, B:7:0x000a, B:9:0x000e, B:10:0x0018, B:6:0x0006), top: B:16:0x0003 }] */
    @Override // io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleRegistry
    public final synchronized void registerListener(ActivityLifecycleListener activityLifecycleListener, ActivityEvent... activityEventArr) {
        int i;
        if (activityEventArr != null) {
            if (activityEventArr.length == 0) {
                activityEventArr = ActivityEvent.values();
            }
            for (ActivityEvent activityEvent : activityEventArr) {
                this.c.a(activityEvent, activityLifecycleListener);
            }
            b();
        } else {
            activityEventArr = ActivityEvent.values();
            while (i < r0) {
                this.c.a(activityEvent, activityLifecycleListener);
            }
            b();
        }
        throw th;
    }

    /* JADX WARN: Code duplicated, block: B:6:0x0006 A[Catch: all -> 0x003e, TryCatch #0 {, blocks: (B:4:0x0003, B:7:0x000a, B:9:0x000e, B:11:0x001c, B:13:0x0022, B:15:0x0028, B:17:0x002c, B:18:0x0031, B:19:0x0036, B:20:0x0039, B:6:0x0006), top: B:26:0x0003 }] */
    /* JADX WARN: Code duplicated, block: B:9:0x000e A[Catch: all -> 0x003e, TryCatch #0 {, blocks: (B:4:0x0003, B:7:0x000a, B:9:0x000e, B:11:0x001c, B:13:0x0022, B:15:0x0028, B:17:0x002c, B:18:0x0031, B:19:0x0036, B:20:0x0039, B:6:0x0006), top: B:26:0x0003 }] */
    @Override // io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleRegistry
    public final synchronized void unregisterListener(ActivityLifecycleListener activityLifecycleListener, ActivityEvent... activityEventArr) {
        int i;
        Collection collection;
        if (activityEventArr != null) {
            if (activityEventArr.length == 0) {
                activityEventArr = ActivityEvent.values();
            }
            for (ActivityEvent activityEvent : activityEventArr) {
                C2545wa c2545wa = this.c;
                collection = (Collection) c2545wa.f6383a.get(activityEvent);
                if (collection == null && collection.remove(activityLifecycleListener)) {
                    if (collection.isEmpty() && c2545wa.b) {
                        c2545wa.f6383a.remove(activityEvent);
                    }
                    new ArrayList(collection);
                }
            }
            c();
        } else {
            activityEventArr = ActivityEvent.values();
            while (i < r0) {
                C2545wa c2545wa2 = this.c;
                collection = (Collection) c2545wa2.f6383a.get(activityEvent);
                if (collection == null) {
                }
            }
            c();
        }
        throw th;
    }

    public final synchronized void a(Application application) {
        if (this.f6230a == null) {
            this.f6230a = application;
        }
        b();
    }

    public final EnumC2310n a() {
        return this.b;
    }

    public final void a(Activity activity, ActivityEvent activityEvent) {
        Collection collection;
        synchronized (this) {
            collection = (Collection) this.c.f6383a.get(activityEvent);
        }
        if (collection != null) {
            Iterator it = collection.iterator();
            while (it.hasNext()) {
                ((ActivityLifecycleListener) it.next()).onEvent(activity, activityEvent);
            }
        }
    }
}
