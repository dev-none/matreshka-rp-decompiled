package com.pushwoosh.b;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.view.Window;
import androidx.fragment.app.FragmentActivity;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.inapp.event.ActivityBroughtOnTopEvent;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public final class j implements Application.ActivityLifecycleCallbacks {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final h f5042a;
    public int b;
    public String c;
    public String d;
    public long e;
    public final Handler f;
    public final i g;
    public final i h;
    public boolean i;
    public final e j;
    public final g k;
    public final b l;

    public j(final h hVar, int i, g gVar, int i2, a aVar) {
        Handler handler = new Handler(Looper.getMainLooper());
        this.f = handler;
        this.f5042a = hVar;
        this.g = new i(handler, 1000L, new Runnable() { // from class: com.pushwoosh.b.j$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(hVar);
            }
        });
        this.h = new i(handler, 100L, new Runnable() { // from class: com.pushwoosh.b.j$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(hVar);
            }
        });
        if (i > 0 && gVar != null) {
            this.k = gVar;
            this.j = new e(i, new c() { // from class: com.pushwoosh.b.j$$ExternalSyntheticLambda3
                @Override // com.pushwoosh.b.c
                public final void a(String str, int i3) {
                    this.f$0.a(str, i3);
                }
            });
            PWLog.debug("PushwooshAppLifecycleCallbacks", "Idle detection enabled with timeout " + i + "s");
        }
        if (i2 <= 0 || aVar == null) {
            return;
        }
        this.l = new b(i2, aVar);
        PWLog.debug("PushwooshAppLifecycleCallbacks", "Exit Intent detection enabled with timeout " + i2 + "s");
    }

    public final /* synthetic */ void a(h hVar) {
        hVar.a("ApplicationClosed", this.c);
    }

    public final /* synthetic */ void b(h hVar) {
        hVar.a("ScreenOpened", this.c);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        if (((com.pushwoosh.a.a) PushwooshPlatform.getInstance().getConfig()).v) {
            this.d = null;
            if (activity instanceof FragmentActivity) {
                ((FragmentActivity) activity).getSupportFragmentManager().registerFragmentLifecycleCallbacks(new f(this), true);
            }
            if (this.i) {
                return;
            }
            i iVar = this.h;
            iVar.f5041a.removeCallbacks(iVar.d);
            iVar.e = true;
            iVar.f5041a.postDelayed(iVar.d, iVar.b);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        if (PushwooshPlatform.getInstance().getTopActivity() != null && PushwooshPlatform.getInstance().getTopActivity() == activity) {
            PushwooshPlatform.getInstance().setTopActivity(null);
        }
        if (PushwooshPlatform.getInstance().getHostActivity() == activity) {
            PushwooshPlatform.getInstance().setHostActivity(null);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        e eVar = this.j;
        if (eVar != null) {
            eVar.c.removeCallbacks(eVar.d);
            eVar.c();
            eVar.f = null;
        }
        if (PushwooshPlatform.getInstance().getTopActivity() == null || PushwooshPlatform.getInstance().getTopActivity() != activity) {
            return;
        }
        PushwooshPlatform.getInstance().setTopActivity(null);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        if (PushwooshPlatform.isHostCandidate(activity)) {
            PushwooshPlatform.getInstance().setHostActivity(activity);
        }
        PushwooshPlatform.getInstance().setTopActivity(activity);
        EventBus.sendEvent(ActivityBroughtOnTopEvent.getInstance());
        e eVar = this.j;
        if (eVar != null) {
            eVar.f = activity;
            eVar.i = false;
            eVar.j = true;
            Window window = activity.getWindow();
            if (window != null) {
                Window.Callback callback = window.getCallback();
                if (!(callback instanceof d) && !eVar.e.contains(window)) {
                    window.setCallback(new d(eVar, callback));
                    eVar.e.add(window);
                    PWLog.debug("IdleDetector", "Window.Callback wrapper installed");
                }
            }
            eVar.a(activity);
            if (eVar.h) {
                return;
            }
            eVar.c.removeCallbacks(eVar.d);
            eVar.c.postDelayed(eVar.d, eVar.f5039a);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        if (PushwooshPlatform.isHostCandidate(activity)) {
            PushwooshPlatform.getInstance().setHostActivity(activity);
        }
        if (((com.pushwoosh.a.a) PushwooshPlatform.getInstance().getConfig()).v) {
            this.c = activity.getClass().getName();
            if (this.b == 0) {
                i iVar = this.g;
                if (iVar.e) {
                    iVar.f5041a.removeCallbacks(iVar.d);
                    iVar.e = false;
                    i iVar2 = this.h;
                    iVar2.f5041a.removeCallbacks(iVar2.d);
                    iVar2.e = false;
                    this.i = true;
                    this.f.post(new Runnable() { // from class: com.pushwoosh.b.j$$ExternalSyntheticLambda0
                        @Override // java.lang.Runnable
                        public final void run() {
                            this.f$0.a();
                        }
                    });
                } else {
                    this.e = SystemClock.elapsedRealtime();
                    this.f5042a.a("ApplicationOpened", this.c);
                }
                b bVar = this.l;
                if (bVar != null) {
                    bVar.d.removeCallbacks(bVar.e);
                    bVar.f = null;
                    bVar.g = 0L;
                }
            }
            this.b++;
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        if (PushwooshPlatform.getInstance().getTopActivity() != null && PushwooshPlatform.getInstance().getTopActivity() == activity) {
            PushwooshPlatform.getInstance().setTopActivity(null);
        }
        if (((com.pushwoosh.a.a) PushwooshPlatform.getInstance().getConfig()).v) {
            int i = this.b - 1;
            this.b = i;
            if (i != 0) {
                return;
            }
            e eVar = this.j;
            if (eVar != null) {
                eVar.c.removeCallbacks(eVar.d);
                eVar.c();
                eVar.f = null;
                eVar.h = false;
                eVar.i = false;
            }
            b bVar = this.l;
            if (bVar != null) {
                String simpleName = activity.getClass().getSimpleName();
                if (this.d != null) {
                    simpleName = simpleName + "/" + this.d;
                }
                long jElapsedRealtime = (SystemClock.elapsedRealtime() - this.e) / 1000;
                bVar.f = simpleName;
                bVar.g = jElapsedRealtime;
                bVar.d.removeCallbacks(bVar.e);
                bVar.d.postDelayed(bVar.e, bVar.b);
            }
            i iVar = this.h;
            iVar.f5041a.removeCallbacks(iVar.d);
            iVar.e = false;
            i iVar2 = this.g;
            iVar2.f5041a.removeCallbacks(iVar2.d);
            iVar2.e = true;
            iVar2.f5041a.postDelayed(iVar2.d, iVar2.b);
        }
    }

    public final /* synthetic */ void a() {
        this.i = false;
    }

    public final void a(String str, int i) {
        g gVar = this.k;
        if (gVar == null) {
            return;
        }
        if (str != null && this.d != null) {
            str = str + "/" + this.d;
        }
        gVar.a(str, (SystemClock.elapsedRealtime() - this.e) / 1000, i);
    }
}
