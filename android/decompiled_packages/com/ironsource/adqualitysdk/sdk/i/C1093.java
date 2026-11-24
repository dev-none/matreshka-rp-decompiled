package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.WeakHashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﺰ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1093 extends AbstractC1041 implements Application.ActivityLifecycleCallbacks {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public WeakReference f3881;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public WeakReference f3882;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final WeakHashMap f3883 = new WeakHashMap();

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        try {
            synchronized (AbstractC1041.class) {
                if (this.f3882 == null) {
                    this.f3882 = new WeakReference(activity);
                    AbstractC1766n.m8388(new C1109(activity));
                    AbstractC1041.class.notifyAll();
                }
            }
            Iterator it = m8869().iterator();
            while (it.hasNext()) {
                ((InterfaceC0463) it.next()).onActivityCreated(activity, bundle);
            }
        } catch (Exception e) {
            AbstractC1104.m8887(StringFog.decrypt("6Is6cqwBUpTJgjZprgF7scaUIXWjCGyuypUjea4I\n", "r+dVEM1tHv0=\n"), StringFog.decrypt("XmkXCNOeG3E7dAsmwsobaXJvHCTT2xNrfn8=\n", "GxtlZ6G+ch8=\n"), (Throwable) e, false);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        ArrayList arrayList;
        try {
            synchronized (this) {
                arrayList = new ArrayList(this.f3778);
            }
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                ((InterfaceC0463) it.next()).onActivityDestroyed(activity);
            }
        } catch (Exception e) {
            AbstractC1104.m8887(StringFog.decrypt("9C65Oujg793VJ7Uh6uDG+Noxoj3n6dHn1jCgMerp\n", "s0LWWImMo7Q=\n"), StringFog.decrypt("G9X5UY+iwoF+yOV/nvbCmTfT8nqY8d+dMd7uWg==\n", "XqeLPv2Cq+8=\n"), (Throwable) e, false);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        ArrayList arrayList;
        try {
            synchronized (this) {
                arrayList = new ArrayList(this.f3778);
            }
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                ((InterfaceC0463) it.next()).onActivityPaused(activity);
            }
        } catch (Exception e) {
            AbstractC1104.m8887(StringFog.decrypt("eeXYzKRkUFpY7NTXpmR5f1f6w8urbW5gW/vBx6Zt\n", "Pom3rsUIHDM=\n"), StringFog.decrypt("6HgpUxvwhRyNZTV9CqSFBMR+ImwIpZ8XyQ==\n", "rQpbPGnQ7HI=\n"), (Throwable) e, false);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        ArrayList arrayList;
        try {
            this.f3882 = new WeakReference(activity);
            AbstractC1766n.m8388(new C1109(activity));
            synchronized (this) {
                arrayList = new ArrayList(this.f3778);
            }
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                ((InterfaceC0463) it.next()).onActivityResumed(activity);
            }
        } catch (Exception e) {
            AbstractC1104.m8887(StringFog.decrypt("llNcvYy+csO3WlCmjr5b5rhMR7qDt0z5tE1Fto63\n", "0T8z3+3SPqo=\n"), StringFog.decrypt("JnNpu0wJyVpDbnWVXV3JQgp1YoZbWtVZBmU=\n", "YwEb1D4poDQ=\n"), (Throwable) e, false);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
        ArrayList arrayList;
        try {
            synchronized (this) {
                arrayList = new ArrayList(this.f3778);
            }
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                ((InterfaceC0463) it.next()).onActivitySaveInstanceState(activity, bundle);
            }
        } catch (Exception e) {
            AbstractC1104.m8887(StringFog.decrypt("KaOgS0pcdjcIqqxQSFxfEge8u0xFVUgNC725QEhV\n", "bs/PKSswOl4=\n"), StringFog.decrypt("X47NNrxMTc86k9EYrRhN13OIxgqvGkHodI/LOKAPQfJuncs8\n", "Gvy/Wc5sJKE=\n"), (Throwable) e, false);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        try {
            if (this.f3882 == null) {
                this.f3882 = new WeakReference(activity);
                AbstractC1766n.m8388(new C1109(activity));
            }
            synchronized (this) {
                this.f3883.put(activity, Boolean.TRUE);
            }
            Iterator it = m8869().iterator();
            while (it.hasNext()) {
                ((InterfaceC0463) it.next()).onActivityStarted(activity);
            }
            if (activity.getLocalClassName().equals(StringFog.decrypt("9qkbzge7m7zs9RLOArmTsfC0WLUcvIaxxaoXmRenorr6vg+hEaGbvvyyDw==\n", "lcZ24HLV8sg=\n"))) {
                return;
            }
            synchronized (this) {
                if (this.f3883.size() == 1 && !this.f3779) {
                    m8883(activity);
                }
            }
        } catch (Exception e) {
            AbstractC1104.m8887(StringFog.decrypt("trlEpYzv9ziXsEi+ju/eHZimX6KD5skClKddro7m\n", "8dUrx+2Du1E=\n"), StringFog.decrypt("Pmgc49aOb4JbdQDNx9pvmhJuF9/Qz3SYHn4=\n", "expujKSuBuw=\n"), (Throwable) e, false);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        int size;
        try {
            Iterator it = m8869().iterator();
            while (it.hasNext()) {
                ((InterfaceC0463) it.next()).onActivityStopped(activity);
            }
            this.f3779 = activity.isChangingConfigurations();
            synchronized (this) {
                if (!this.f3883.containsKey(activity) || activity.getLocalClassName().equals(StringFog.decrypt("UWEwek/9/GJLPTl6Sv/0b1d8cwFU+uFvYmI8LV/hxWRddiQVWef8YFt6JA==\n", "Mg5dVDqTlRY=\n"))) {
                    size = -1;
                } else {
                    this.f3883.remove(activity);
                    size = this.f3883.size();
                }
            }
            if (size <= -1 || size != 0 || this.f3779) {
                return;
            }
            m8884(activity);
        } catch (Exception e) {
            AbstractC1104.m8887(StringFog.decrypt("koEevP6ZxkiziBKn/JnvbbyeBbvxkPhysJ8Ht/yQ\n", "1e1x3p/1iiE=\n"), StringFog.decrypt("MM1Oxz6tBaNV0FLpL/kFuxzLRfs44hy9ENs=\n", "db88qEyNbM0=\n"), (Throwable) e, false);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC1041
    /* JADX INFO: renamed from: ﻛ */
    public final synchronized boolean mo8868() {
        return this.f3883.size() > 0;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final void m8883(Activity activity) {
        ArrayList arrayList;
        synchronized (this) {
            arrayList = new ArrayList(this.f3778);
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((InterfaceC0463) it.next()).mo8453(activity);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC1041
    /* JADX INFO: renamed from: ﾒ */
    public final synchronized void mo8871(Application application, Activity activity) {
        if (this.f3881 == null) {
            this.f3881 = new WeakReference(application);
            if (activity != null) {
                this.f3882 = new WeakReference(activity);
                AbstractC1766n.m8388(new C1109(activity));
                synchronized (this) {
                    this.f3883.put(activity, Boolean.TRUE);
                }
            }
            application.registerActivityLifecycleCallbacks(this);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC1041
    /* JADX INFO: renamed from: ﾒ */
    public final Activity mo8870() {
        WeakReference weakReference = this.f3882;
        if (weakReference != null) {
            return (Activity) weakReference.get();
        }
        return null;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8884(Activity activity) {
        ArrayList arrayList;
        synchronized (this) {
            arrayList = new ArrayList(this.f3778);
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((InterfaceC0463) it.next()).mo8454(activity);
        }
    }
}
