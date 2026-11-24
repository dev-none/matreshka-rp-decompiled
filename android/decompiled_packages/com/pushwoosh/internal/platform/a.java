package com.pushwoosh.internal.platform;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.utils.PWLog;
import java.util.Date;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements Application.ActivityLifecycleCallbacks {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f5199a;
    public int b;
    public boolean c;
    public boolean d;
    public final Runnable e = new Runnable() { // from class: com.pushwoosh.internal.platform.a$$ExternalSyntheticLambda0
        @Override // java.lang.Runnable
        public final void run() {
            this.f$0.a();
        }
    };
    public final Runnable f = new Runnable() { // from class: com.pushwoosh.internal.platform.a$$ExternalSyntheticLambda1
        @Override // java.lang.Runnable
        public final void run() {
            this.f$0.b();
        }
    };
    public final /* synthetic */ ApplicationOpenDetector g;

    public a(ApplicationOpenDetector applicationOpenDetector) {
        this.g = applicationOpenDetector;
    }

    public final /* synthetic */ void a() {
        if (this.b == 0 && this.c) {
            this.c = false;
            EventBus.sendEvent(new com.pushwoosh.w.a());
            PWLog.debug("ApplicationOpenDetector", "ApplicationMovedToBackgroundEvent fired");
        }
    }

    public final /* synthetic */ void b() {
        if (this.f5199a == 0 && this.d) {
            this.d = false;
            PWLog.debug("ApplicationOpenDetector", "inOpened reset after debounce");
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        if (this.g.f5198a != null) {
            if (new Date().getTime() - this.g.f5198a.getTime() >= 60000) {
                EventBus.sendEvent(new com.pushwoosh.w.b());
                PWLog.debug("ApplicationOpenDetector", "ApplicationOpenEvent fired");
            }
            this.g.f5198a = null;
            this.d = true;
        } else if (this.f5199a == 0) {
            if (this.d) {
                this.g.c.removeCallbacks(this.f);
            } else {
                this.d = true;
                EventBus.sendEvent(new com.pushwoosh.w.b());
                PWLog.debug("ApplicationOpenDetector", "ApplicationOpenEvent fired");
            }
        }
        this.f5199a++;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        int i = this.f5199a - 1;
        this.f5199a = i;
        if (i == 0) {
            this.g.c.postDelayed(this.f, 700L);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        if (this.b == 0) {
            if (this.c) {
                this.g.c.removeCallbacks(this.e);
            } else {
                this.c = true;
                EventBus.sendEvent(new ApplicationOpenDetector.ApplicationMovedToForegroundEvent());
                PWLog.debug("ApplicationOpenDetector", "ApplicationMovedToForegroundEvent fired");
            }
        }
        this.b++;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        int i = this.b - 1;
        this.b = i;
        if (i == 0) {
            this.g.c.postDelayed(this.e, 700L);
        }
    }
}
