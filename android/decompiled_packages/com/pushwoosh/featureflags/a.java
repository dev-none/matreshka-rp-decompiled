package com.pushwoosh.featureflags;

import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.d.c;
import com.pushwoosh.d.d;
import com.pushwoosh.d.e;
import com.pushwoosh.d.f;
import com.pushwoosh.d.g;
import com.pushwoosh.d.i;
import com.pushwoosh.e0.l;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.inapp.PushwooshInAppImpl;
import com.pushwoosh.internal.event.DeviceDataRemovedEvent;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.event.Subscription;
import com.pushwoosh.internal.event.UserIdUpdatedEvent;
import com.pushwoosh.internal.network.NetworkException;
import com.pushwoosh.internal.network.RequestManager;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.ApplicationOpenDetector;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.event.RegistrationSuccessEvent;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.tags.TagsBundle;
import io.flutter.plugins.firebase.analytics.Constants;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicReference;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class a {
    public static final long A;
    public static final long B;
    public static final long C;
    public static final long D;
    public static final PushwooshFeatureFlags E;
    public static final AtomicReference F;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final RegistrationPrefs f5078a;
    public final RequestManager b;
    public final f c;
    public final com.pushwoosh.d.b d;
    public final l e;
    public final boolean f;
    public final CopyOnWriteArrayList g = new CopyOnWriteArrayList();
    public final CopyOnWriteArrayList h = new CopyOnWriteArrayList();
    public final Object i;
    public final Handler j;
    public final com.pushwoosh.d.a k;
    public volatile boolean l;
    public Map m;
    public String n;
    public long o;
    public String p;
    public boolean q;
    public boolean r;
    public ArrayList s;
    public boolean t;
    public ArrayList u;
    public boolean v;
    public int w;
    public boolean x;
    public long y;
    public volatile c z;

    static {
        TimeUnit timeUnit = TimeUnit.MINUTES;
        A = timeUnit.toMillis(5L);
        B = TimeUnit.HOURS.toMillis(24L);
        C = timeUnit.toMillis(30L);
        D = timeUnit.toMillis(60L);
        E = new PushwooshFeatureFlags(new i() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda2
            @Override // com.pushwoosh.d.i
            public final a a() {
                return a.e();
            }
        });
        F = new AtomicReference();
    }

    public a(RegistrationPrefs registrationPrefs, RequestManager requestManager, f fVar, com.pushwoosh.d.b bVar, l lVar, boolean z) {
        e eVar;
        Object obj = new Object();
        this.i = obj;
        this.j = new Handler(Looper.getMainLooper());
        this.k = new com.pushwoosh.d.a(this);
        this.m = Collections.EMPTY_MAP;
        this.n = "";
        this.s = new ArrayList();
        this.u = new ArrayList();
        this.y = -1L;
        this.z = new c();
        this.f5078a = registrationPrefs;
        this.b = requestManager;
        this.c = fVar;
        this.d = bVar;
        this.e = lVar;
        this.f = z;
        String str = fVar.f5055a.get();
        String str2 = fVar.d.get();
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            eVar = null;
        } else {
            String str3 = fVar.b.get();
            eVar = new e(str, str3 == null ? "" : str3, fVar.c.get(), str2);
        }
        if (eVar == null) {
            return;
        }
        try {
            Map mapA = b.a(new JSONObject(eVar.f5054a));
            synchronized (obj) {
                this.m = mapA;
                this.n = eVar.b;
                this.o = eVar.c;
                this.p = eVar.d;
                this.q = true;
            }
        } catch (JSONException unused) {
            PWLog.error("FeatureFlagsManager", "Cached feature flags are unreadable, dropping them");
            f fVar2 = this.c;
            fVar2.f5055a.set("");
            fVar2.b.set("");
            fVar2.c.set(0L);
            fVar2.d.set("");
        }
    }

    public static a a(com.pushwoosh.a.a aVar, RegistrationPrefs registrationPrefs, RequestManager requestManager, final PushwooshInAppImpl pushwooshInAppImpl) {
        return new a(registrationPrefs, requestManager, new f(AndroidPlatformModule.getPrefsProvider().providePrefs("pw_feature_flags")), new com.pushwoosh.d.b() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda5
            @Override // com.pushwoosh.d.b
            public final void a(String str, TagsBundle tagsBundle, Callback callback) {
                pushwooshInAppImpl.postEvent(str, tagsBundle, callback);
            }
        }, new l(), aVar.y);
    }

    public static a e() {
        PushwooshPlatform pushwooshPlatform = PushwooshPlatform.getInstance();
        if (pushwooshPlatform != null) {
            return pushwooshPlatform.featureFlags();
        }
        PushwooshPlatform.notifyNotInitialized();
        return null;
    }

    public final void b(final Callback callback, final boolean z) {
        com.pushwoosh.s.c cVar = com.pushwoosh.s.c.d;
        if (cVar.f5311a == 3) {
            a(callback, Result.fromException(new FeatureFlagsException("SDK initialization failed", 0)));
        } else {
            cVar.a(new Runnable() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda8
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.a(callback, z);
                }
            });
        }
    }

    public final /* synthetic */ void c() {
        this.j.removeCallbacks(this.k);
    }

    public final void d() {
        BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda7
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b();
            }
        });
    }

    public final Runnable f() {
        String str = this.f5078a.applicationId().get();
        String str2 = this.f5078a.hwid().get();
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            ArrayList arrayList = this.s;
            this.s = new ArrayList();
            Result resultFromException = Result.fromException(new FeatureFlagsException("Feature flags refresh skipped: Application code or HWID is not set", 0));
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                a((Callback) it.next(), resultFromException);
            }
            return null;
        }
        this.r = true;
        final String strA = a();
        final int i = this.w;
        String str3 = (this.q && strA.equals(this.p)) ? this.n : "";
        this.v = true ^ this.f5078a.registeredOnServer().get();
        final long j = this.c.e.get();
        f fVar = this.c;
        this.e.getClass();
        fVar.e.set(l.a());
        PWLog.debug("FeatureFlagsManager", "Feature flags refresh sent".concat(str3.isEmpty() ? "" : " with etag"));
        final g gVar = new g(str, str2, str3);
        return new Runnable() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda6
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(gVar, strA, i, j);
            }
        };
    }

    public final void g() {
        Map map;
        String str;
        long j;
        String str2;
        boolean z;
        a aVar = (a) F.getAndSet(this);
        if (aVar == this) {
            return;
        }
        if (aVar != null) {
            aVar.h();
            Iterator it = aVar.g.iterator();
            while (it.hasNext()) {
                a((FeatureFlagsUpdateListener) it.next());
            }
            synchronized (aVar.i) {
                map = aVar.m;
                str = aVar.n;
                j = aVar.o;
                str2 = aVar.p;
                z = aVar.q;
            }
            synchronized (this.i) {
                this.m = map;
                this.n = str;
                this.o = j;
                this.p = str2;
                this.q = z;
            }
            this.z = aVar.z;
        }
        this.h.add(EventBus.subscribe(ApplicationOpenDetector.ApplicationMovedToForegroundEvent.class, new EventListener() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda9
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((ApplicationOpenDetector.ApplicationMovedToForegroundEvent) event);
            }
        }));
        this.h.add(EventBus.subscribe(com.pushwoosh.w.a.class, new EventListener() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda10
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((com.pushwoosh.w.a) event);
            }
        }));
        this.h.add(EventBus.subscribe(RegistrationSuccessEvent.class, new EventListener() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda11
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((RegistrationSuccessEvent) event);
            }
        }));
        this.h.add(EventBus.subscribe(UserIdUpdatedEvent.class, new EventListener() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda12
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((UserIdUpdatedEvent) event);
            }
        }));
        this.h.add(EventBus.subscribe(DeviceDataRemovedEvent.class, new EventListener() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda13
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((DeviceDataRemovedEvent) event);
            }
        }));
    }

    public final void h() {
        this.l = true;
        Iterator it = this.h.iterator();
        while (it.hasNext()) {
            ((Subscription) it.next()).unsubscribe();
        }
        this.h.clear();
        this.j.post(new Runnable() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda4
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.c();
            }
        });
    }

    public final void c(String str) {
        final int i;
        FeatureFlag featureFlagA = a(str);
        if (featureFlagA == null) {
            return;
        }
        final String str2 = str + (char) 0 + featureFlagA.getRuleId() + (char) 0 + featureFlagA.isEnabled();
        final c cVar = this.z;
        synchronized (cVar) {
            i = (cVar.f5052a.contains(str2) || !cVar.b.add(str2)) ? -1 : cVar.c;
        }
        if (i < 0) {
            return;
        }
        this.d.a("PW_FeatureFlagImpression", new TagsBundle.Builder().putString("flag_key", str).putString("rule_id", featureFlagA.getRuleId()).putBoolean(Constants.ENABLED, featureFlagA.isEnabled()).build(), new Callback() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda1
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                a.a(cVar, str2, i, result);
            }
        });
    }

    public final FeatureFlag a(String str) {
        FeatureFlag featureFlag;
        synchronized (this.i) {
            Map map = (!this.f5078a.removeAllDeviceData().get() && b(a())) ? this.m : Collections.EMPTY_MAP;
            featureFlag = (FeatureFlag) map.get(str);
        }
        return featureFlag;
    }

    public final void b(FeatureFlagsUpdateListener featureFlagsUpdateListener) {
        a aVar;
        this.g.remove(featureFlagsUpdateListener);
        if (!this.l || (aVar = (a) F.get()) == this) {
            aVar = null;
        }
        if (aVar != null) {
            aVar.b(featureFlagsUpdateListener);
        }
    }

    public final void a(FeatureFlagsUpdateListener featureFlagsUpdateListener) {
        a aVar;
        if (!this.l || (aVar = (a) F.get()) == this) {
            aVar = null;
        }
        if (aVar != null) {
            aVar.a(featureFlagsUpdateListener);
        } else {
            if (this.g.contains(featureFlagsUpdateListener)) {
                return;
            }
            this.g.add(featureFlagsUpdateListener);
        }
    }

    /* JADX WARN: Code duplicated, block: B:27:0x0082 A[Catch: all -> 0x00e9, TryCatch #0 {, blocks: (B:5:0x0004, B:7:0x000e, B:8:0x0015, B:10:0x0023, B:29:0x0095, B:11:0x0035, B:13:0x003b, B:16:0x0042, B:18:0x004a, B:25:0x007e, B:27:0x0082, B:19:0x0052, B:21:0x005c, B:22:0x0067, B:23:0x006f), top: B:58:0x0004 }] */
    /* JADX WARN: Code duplicated, block: B:28:0x0094  */
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final void a(String str, int i, long j, Result result) {
        ArrayList arrayList;
        boolean z;
        a aVar;
        Result resultFromException;
        boolean zA;
        Runnable runnableF;
        a aVar2;
        synchronized (this.i) {
            this.r = false;
            if (result.getException() instanceof com.pushwoosh.v.i) {
                this.c.e.set(j);
            }
            arrayList = this.s;
            this.s = new ArrayList();
            z = this.l;
            aVar = null;
            if (z) {
                arrayList.addAll(this.u);
                this.u = new ArrayList();
                this.t = false;
                zA = false;
                runnableF = null;
                resultFromException = null;
            } else {
                if (result.isSuccess() && result.getData() != null) {
                    resultFromException = Result.fromData(null);
                    if (i != this.w) {
                        PWLog.debug("FeatureFlagsManager", "Feature flags cache cleared while in flight, response dropped");
                    } else {
                        if (str.equals(a())) {
                            zA = a((d) result.getData(), str);
                        } else {
                            PWLog.debug("FeatureFlagsManager", "User changed while feature flags were in flight, response dropped");
                        }
                        if (this.t) {
                            this.t = false;
                            this.s = this.u;
                            this.u = new ArrayList();
                            runnableF = f();
                        } else {
                            runnableF = null;
                        }
                    }
                } else {
                    resultFromException = Result.fromException(a((NetworkException) result.getException()));
                }
                zA = false;
                if (this.t) {
                    this.t = false;
                    this.s = this.u;
                    this.u = new ArrayList();
                    runnableF = f();
                } else {
                    runnableF = null;
                }
            }
        }
        if (z) {
            Callback callbackA = arrayList.isEmpty() ? null : a(arrayList);
            if (this.l && (aVar2 = (a) F.get()) != this) {
                aVar = aVar2;
            }
            if (aVar != null) {
                aVar.b(callbackA, true);
                return;
            } else {
                a(callbackA, Result.fromException(new FeatureFlagsException("Feature flags manager is stopped", 0)));
                return;
            }
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            a((Callback) it.next(), resultFromException);
        }
        if (zA) {
            d();
        }
        if (runnableF != null) {
            runnableF.run();
        }
    }

    /* JADX WARN: Code duplicated, block: B:14:0x0028  */
    public final void a(ApplicationOpenDetector.ApplicationMovedToForegroundEvent applicationMovedToForegroundEvent) {
        long j;
        boolean z;
        boolean z2;
        if (this.l) {
            return;
        }
        synchronized (this.i) {
            this.e.getClass();
            long jA = l.a();
            boolean z3 = this.x;
            j = 0;
            if (z3) {
                long j2 = this.y;
                if (j2 < 0 || jA - j2 < C) {
                    z = false;
                } else {
                    z = true;
                }
            } else {
                z = false;
            }
            z2 = !z3 || z;
            this.x = true;
            this.y = -1L;
            if (z) {
                this.z.a();
            }
        }
        if (z2) {
            b((Callback) null, false);
        }
        this.j.removeCallbacks(this.k);
        Handler handler = this.j;
        com.pushwoosh.d.a aVar = this.k;
        this.e.getClass();
        long jA2 = l.a() - this.c.e.get();
        if (jA2 >= 0) {
            long j3 = D;
            if (jA2 < j3) {
                j = j3 - jA2;
            }
        }
        handler.postDelayed(aVar, j);
    }

    public final void a(com.pushwoosh.w.a aVar) {
        synchronized (this.i) {
            this.e.getClass();
            this.y = l.a();
        }
        this.j.removeCallbacks(this.k);
    }

    public final void a(RegistrationSuccessEvent registrationSuccessEvent) {
        synchronized (this.i) {
            if (this.v) {
                this.v = false;
                b((Callback) null, true);
            }
        }
    }

    public final void a(UserIdUpdatedEvent userIdUpdatedEvent) {
        boolean zEquals;
        synchronized (this.i) {
            zEquals = a().equals(this.p);
            if (!zEquals) {
                this.m = Collections.EMPTY_MAP;
                this.n = "";
                this.o = 0L;
                this.p = null;
                this.q = false;
                this.w++;
                f fVar = this.c;
                fVar.f5055a.set("");
                fVar.b.set("");
                fVar.c.set(0L);
                fVar.d.set("");
                PWLog.debug("FeatureFlagsManager", "User changed, feature flags cache cleared");
            } else {
                this.n = "";
                this.w++;
                this.c.b.set("");
                PWLog.debug("FeatureFlagsManager", "User confirmed, feature flags revalidated without etag");
            }
        }
        if (!zEquals) {
            this.z.a();
        }
        b((Callback) null, true);
    }

    public final boolean b(String str) {
        String str2 = this.p;
        if (str2 != null && str2.equals(str)) {
            this.e.getClass();
            long jA = l.a() - this.o;
            if (jA >= 0 && jA <= B) {
                return true;
            }
        }
        return false;
    }

    public final /* synthetic */ void b() {
        Iterator it = this.g.iterator();
        while (it.hasNext()) {
            try {
                ((FeatureFlagsUpdateListener) it.next()).onFeatureFlagsUpdated();
            } catch (Exception e) {
                PWLog.error("FeatureFlagsManager", "Feature flags listener threw", e);
            }
        }
    }

    public final void a(DeviceDataRemovedEvent deviceDataRemovedEvent) {
        synchronized (this.i) {
            this.m = Collections.EMPTY_MAP;
            this.n = "";
            this.o = 0L;
            this.p = null;
            this.q = false;
            this.w++;
            f fVar = this.c;
            fVar.f5055a.set("");
            fVar.b.set("");
            fVar.c.set(0L);
            fVar.d.set("");
        }
        this.z.a();
    }

    public static void a(c cVar, String str, int i, Result result) {
        boolean zIsSuccess = result.isSuccess();
        synchronized (cVar) {
            if (i == cVar.c) {
                cVar.b.remove(str);
                if (zIsSuccess) {
                    cVar.f5052a.add(str);
                }
            }
        }
    }

    public final void a(Callback callback, boolean z) {
        a aVar;
        a aVar2 = null;
        if (this.l) {
            if (this.l && (aVar = (a) F.get()) != this) {
                aVar2 = aVar;
            }
            if (aVar2 != null) {
                aVar2.b(callback, z);
                return;
            } else {
                a(callback, Result.fromException(new FeatureFlagsException("Feature flags manager is stopped", 0)));
                return;
            }
        }
        synchronized (this.i) {
            if (this.r) {
                if (z) {
                    this.t = true;
                    ArrayList arrayList = this.u;
                    if (callback != null) {
                        arrayList.add(callback);
                    }
                } else {
                    ArrayList arrayList2 = this.s;
                    if (callback != null) {
                        arrayList2.add(callback);
                    }
                }
                return;
            }
            if (!z && !this.f && b(a())) {
                this.e.getClass();
                long jA = l.a() - this.c.e.get();
                if (jA >= 0 && jA < A) {
                    PWLog.debug("FeatureFlagsManager", "Feature flags refresh throttled");
                    a(callback, Result.fromData(null));
                    return;
                }
            }
            ArrayList arrayList3 = this.s;
            if (callback != null) {
                arrayList3.add(callback);
            }
            Runnable runnableF = f();
            if (runnableF != null) {
                runnableF.run();
            }
        }
    }

    public final /* synthetic */ void a(g gVar, String str, int i, long j) {
        final String str2;
        final int i2;
        final long j2;
        try {
            str2 = str;
            i2 = i;
            j2 = j;
            try {
                this.b.sendRequest(gVar, new Callback() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda0
                    @Override // com.pushwoosh.function.Callback
                    public final void process(Result result) {
                        this.f$0.a(str2, i2, j2, result);
                    }
                });
            } catch (RuntimeException e) {
                e = e;
                RuntimeException runtimeException = e;
                PWLog.error("FeatureFlagsManager", "Feature flags request could not be sent", runtimeException);
                a(str2, i2, j2, Result.fromException(new com.pushwoosh.v.i(runtimeException.getMessage())));
            }
        } catch (RuntimeException e2) {
            e = e2;
            str2 = str;
            i2 = i;
            j2 = j;
        }
    }

    public final boolean a(d dVar, String str) {
        this.e.getClass();
        long jA = l.a();
        Map map = (!this.f5078a.removeAllDeviceData().get() && b(a())) ? this.m : Collections.EMPTY_MAP;
        if (dVar.d) {
            if (this.q && str.equals(this.p)) {
                this.o = jA;
                this.c.c.set(jA);
            }
            PWLog.debug("FeatureFlagsManager", "Feature flags not modified");
        } else if (dVar.e) {
            PWLog.warn("FeatureFlagsManager", "Feature flags response is partial, not cached");
            if (!this.q || !b(str)) {
                this.m = dVar.b;
                this.n = "";
                this.o = jA;
                this.p = str;
                this.q = false;
            }
        } else {
            Map map2 = dVar.b;
            String str2 = dVar.c;
            this.m = map2;
            this.n = str2;
            this.o = jA;
            this.p = str;
            this.q = true;
            f fVar = this.c;
            String string = dVar.f5053a.toString();
            String str3 = dVar.c;
            fVar.f5055a.set(string);
            fVar.b.set(str3);
            fVar.c.set(jA);
            fVar.d.set(str);
            PWLog.debug("FeatureFlagsManager", "Feature flags updated: " + dVar.b.size() + " flags");
        }
        Map map3 = (!this.f5078a.removeAllDeviceData().get() && b(a())) ? this.m : Collections.EMPTY_MAP;
        return !map.equals(map3);
    }

    public final String a() {
        String str = this.f5078a.userId().get();
        if (!TextUtils.isEmpty(str)) {
            return str;
        }
        String str2 = this.f5078a.hwid().get();
        return str2 != null ? str2 : "";
    }

    public static FeatureFlagsException a(NetworkException networkException) {
        int i = networkException instanceof com.pushwoosh.v.a ? ((com.pushwoosh.v.a) networkException).f5317a : 0;
        if (i == 200) {
            PWLog.error("FeatureFlagsManager", "Feature flags response could not be used");
        } else {
            PWLog.debug("FeatureFlagsManager", "Feature flags refresh failed, HTTP " + i);
        }
        return new FeatureFlagsException(networkException != null ? networkException.getMessage() : "Feature flags request failed", i);
    }

    public static void a(final Callback callback, final Result result) {
        if (callback == null) {
            return;
        }
        BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda3
            @Override // java.lang.Runnable
            public final void run() {
                callback.process(result);
            }
        });
    }

    public static Callback a(final ArrayList arrayList) {
        return new Callback() { // from class: com.pushwoosh.featureflags.a$$ExternalSyntheticLambda14
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                a.a(arrayList, result);
            }
        };
    }

    public static /* synthetic */ void a(List list, Result result) {
        Iterator it = list.iterator();
        while (it.hasNext()) {
            ((Callback) it.next()).process(result);
        }
    }
}
