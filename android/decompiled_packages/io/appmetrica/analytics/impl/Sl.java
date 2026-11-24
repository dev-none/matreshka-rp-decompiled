package io.appmetrica.analytics.impl;

import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.text.TextUtils;
import io.appmetrica.analytics.AdvIdentifiersResult;
import io.appmetrica.analytics.StartupParamsCallback;
import io.appmetrica.analytics.coreapi.internal.identifiers.SdkIdentifiers;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.internal.IdentifiersResult;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class Sl implements Tl {
    public static final Map k = Collections.unmodifiableMap(new Pl());

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f5889a;
    public final Bi b;
    public final C1999am c;
    public final Handler d;
    public PublicLogger e;
    public final Ql f;
    public final Object g;
    public final WeakHashMap h;
    public HashMap i;
    public boolean j;

    public Sl(Context context, Bi bi, C1992af c1992af, Handler handler) {
        this(bi, new C1999am(context, c1992af), handler);
    }

    public final void a(StartupParamsCallback startupParamsCallback, List<String> list, Map<String, String> map) {
        synchronized (this.g) {
            C1999am c1999am = this.c;
            c1999am.getClass();
            if (!no.a((Map) map) && !no.a(map, c1999am.e)) {
                c1999am.e = new HashMap(map);
                c1999am.g = true;
                c1999am.c();
            }
            a(startupParamsCallback, list);
            if (this.c.a((List) list)) {
                a(list, new Rl(this, startupParamsCallback), map, true);
            } else {
                a(new Bundle(), startupParamsCallback);
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:9:0x007f A[Catch: all -> 0x0115, TryCatch #0 {, blocks: (B:4:0x0063, B:6:0x0071, B:10:0x0082, B:12:0x00b1, B:13:0x00b8, B:15:0x00be, B:16:0x00c5, B:18:0x00da, B:21:0x00e5, B:22:0x00f1, B:19:0x00df, B:9:0x007f), top: B:29:0x0063 }] */
    public final void b(Bundle bundle) {
        IdentifiersResult identifiersResultA = C1981a4.a(bundle, "Uuid");
        IdentifiersResult identifiersResultA2 = C1981a4.a(bundle, "DeviceId");
        IdentifiersResult identifiersResultA3 = C1981a4.a(bundle, "DeviceIdHash");
        IdentifiersResult identifiersResultA4 = C1981a4.a(bundle, "AdUrlReport");
        IdentifiersResult identifiersResultA5 = C1981a4.a(bundle, "AdUrlGet");
        IdentifiersResult identifiersResultA6 = C1981a4.a(bundle, "Clids");
        IdentifiersResult identifiersResultA7 = C1981a4.a(bundle, "RequestClids");
        IdentifiersResult identifiersResultA8 = C1981a4.a(bundle, "GAID");
        IdentifiersResult identifiersResultA9 = C1981a4.a(bundle, "HOAID");
        IdentifiersResult identifiersResultA10 = C1981a4.a(bundle, "YANDEX_ADV_ID");
        IdentifiersResult identifiersResultA11 = C1981a4.a(bundle, "CUSTOM_SDK_HOSTS");
        long j = bundle.getLong("ServerTimeOffset");
        long j2 = bundle.getLong("NextStartupTime");
        C2039ca c2039caA = C1981a4.a(bundle);
        Bundle bundle2 = bundle.getBundle("module_configs");
        C1999am c1999am = this.c;
        synchronized (c1999am) {
            IdentifiersResult identifiersResult = (IdentifiersResult) c1999am.b.get(StartupParamsCallback.APPMETRICA_UUID);
            if (identifiersResult != null) {
                ro roVar = c1999am.o;
                String str = identifiersResult.id;
                roVar.getClass();
                if (!ro.a(str)) {
                    c1999am.c(identifiersResultA);
                }
            } else {
                c1999am.c(identifiersResultA);
            }
            c1999am.a(StartupParamsCallback.APPMETRICA_DEVICE_ID, identifiersResultA2);
            c1999am.a(StartupParamsCallback.APPMETRICA_DEVICE_ID_HASH, identifiersResultA3);
            c1999am.b.put("appmetrica_google_adv_id", identifiersResultA8);
            c1999am.b.put("appmetrica_huawei_oaid", identifiersResultA9);
            c1999am.b.put("appmetrica_yandex_adv_id", identifiersResultA10);
            c1999am.l.a(identifiersResultA11);
            c1999am.m.a(c2039caA);
            if (!C1999am.a(identifiersResultA5)) {
                c1999am.b.put("appmetrica_get_ad_url", identifiersResultA5);
            }
            if (!C1999am.a(identifiersResultA4)) {
                c1999am.b.put("appmetrica_report_ad_url", identifiersResultA4);
            }
            c1999am.f = j;
            K3 k3 = c1999am.k;
            HashMap map = c1999am.e;
            HashMap mapA = AbstractC2322nb.a(identifiersResultA7.id);
            k3.getClass();
            if (no.a((Map) map) ? no.a((Map) mapA) : map.equals(mapA)) {
                c1999am.b.put("appmetrica_clids", identifiersResultA6);
                c1999am.g = false;
            }
            c1999am.h = j2;
            c1999am.c();
        }
        C2213j4.l().m().a(bundle2, new SdkIdentifiers(identifiersResultA.id, identifiersResultA2.id, identifiersResultA3.id));
        h();
    }

    public final H6 c() {
        return this.f;
    }

    public final String d() {
        IdentifiersResult identifiersResult = (IdentifiersResult) this.c.b.get(StartupParamsCallback.APPMETRICA_DEVICE_ID);
        if (identifiersResult == null) {
            return null;
        }
        return identifiersResult.id;
    }

    public final C2090ea e() {
        C2039ca c2039ca;
        C1999am c1999am = this.c;
        Z9 z9 = c1999am.n;
        C1987aa c1987aa = c1999am.m;
        synchronized (c1987aa) {
            c2039ca = c1987aa.b;
        }
        z9.getClass();
        Boolean bool = c2039ca.f6027a;
        return new C2090ea();
    }

    public final long f() {
        return this.c.f;
    }

    public final String g() {
        IdentifiersResult identifiersResult = (IdentifiersResult) this.c.b.get(StartupParamsCallback.APPMETRICA_UUID);
        if (identifiersResult == null) {
            return null;
        }
        return identifiersResult.id;
    }

    public final void h() {
        WeakHashMap weakHashMap = new WeakHashMap();
        for (Map.Entry entry : this.h.entrySet()) {
            List list = (List) entry.getValue();
            if (this.c.a((Collection) list)) {
                weakHashMap.put((StartupParamsCallback) entry.getKey(), list);
            }
        }
        Iterator it = weakHashMap.entrySet().iterator();
        while (it.hasNext()) {
            StartupParamsCallback startupParamsCallback = (StartupParamsCallback) ((Map.Entry) it.next()).getKey();
            if (startupParamsCallback != null) {
                a(new Bundle(), startupParamsCallback);
            }
        }
        weakHashMap.clear();
    }

    public final void i() {
        synchronized (this.g) {
            if (!this.j || this.c.b()) {
                this.j = true;
                a(this.f5889a, this.f, this.i, false);
            }
        }
    }

    public Sl(Bi bi, C1999am c1999am, Handler handler) {
        this.f5889a = Arrays.asList(StartupParamsCallback.APPMETRICA_UUID, StartupParamsCallback.APPMETRICA_DEVICE_ID, StartupParamsCallback.APPMETRICA_DEVICE_ID_HASH, "appmetrica_get_ad_url", "appmetrica_report_ad_url", "appmetrica_clids");
        this.g = new Object();
        this.h = new WeakHashMap();
        this.j = false;
        this.b = bi;
        this.c = c1999am;
        this.d = handler;
        this.f = new Ql(this);
    }

    public final void a(Bundle bundle) {
        b(bundle, null);
    }

    public final void a(PublicLogger publicLogger) {
        this.e = publicLogger;
    }

    public final void a(List list, H6 h6, Map map, boolean z) {
        I6 i6 = new I6(this.d, h6);
        Bi bi = this.b;
        bi.getClass();
        Bundle bundle = new Bundle();
        bundle.putParcelable("io.appmetrica.analytics.impl.IdentifiersData", new C2091eb(i6, list, map, z));
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        PublicLogger anonymousInstance = PublicLogger.getAnonymousInstance();
        Set set = D9.f5638a;
        U3 u3 = new U3("", "", 1536, 0, anonymousInstance);
        u3.m = bundle;
        M4 m4 = bi.f5614a;
        bi.a(Bi.a(u3, m4), m4, 1, (Map) null);
    }

    public final void a(Map<String, String> map) {
        if (no.a((Map) map)) {
            return;
        }
        synchronized (this.g) {
            HashMap mapB = Jm.b(map);
            this.i = mapB;
            this.b.a(mapB);
            C1999am c1999am = this.c;
            c1999am.getClass();
            if (!no.a((Map) mapB) && !no.a(mapB, c1999am.e)) {
                c1999am.e = new HashMap(mapB);
                c1999am.g = true;
                c1999am.c();
            }
        }
    }

    public final void b(Bundle bundle, StartupParamsCallback startupParamsCallback) {
        synchronized (this.g) {
            b(bundle);
            h();
            if (startupParamsCallback != null) {
                a(bundle, startupParamsCallback);
            }
        }
    }

    public final void a(String str) {
        synchronized (this.g) {
            this.b.a(str);
        }
    }

    public final void b(List<String> list) {
        synchronized (this.g) {
            List list2 = this.c.d;
            if (no.a((Collection) list)) {
                if (!no.a((Collection) list2)) {
                    C1999am c1999am = this.c;
                    c1999am.d = null;
                    c1999am.i.a((List<String>) null);
                    this.b.a((List) null);
                }
            } else if (!no.a(list, list2)) {
                C1999am c1999am2 = this.c;
                c1999am2.d = list;
                c1999am2.i.a(list);
                this.b.a(list);
            } else {
                this.b.a(list2);
            }
        }
    }

    public final void a(Bundle bundle, StartupParamsCallback startupParamsCallback) {
        Nl nl;
        if (this.h.containsKey(startupParamsCallback)) {
            List list = (List) this.h.get(startupParamsCallback);
            if (this.c.a((Collection) list)) {
                startupParamsCallback.onReceive(a(list));
            } else {
                StartupParamsCallback.Reason reason = null;
                if (bundle.containsKey("startup_error_key_code")) {
                    int i = bundle.getInt("startup_error_key_code");
                    nl = Nl.UNKNOWN;
                    if (i == 1) {
                        nl = Nl.NETWORK;
                    } else if (i == 2) {
                        nl = Nl.PARSE;
                    }
                } else {
                    nl = null;
                }
                if (nl == null) {
                    if (!this.c.a()) {
                        PublicLogger publicLogger = this.e;
                        if (publicLogger != null) {
                            publicLogger.warning("Clids error. Passed clids: %s, and clids from server are empty.", this.i);
                        }
                        reason = new StartupParamsCallback.Reason("INCONSISTENT_CLIDS");
                    } else {
                        nl = Nl.UNKNOWN;
                    }
                }
                if (reason == null) {
                    reason = (StartupParamsCallback.Reason) CollectionUtils.getOrDefault(k, nl, StartupParamsCallback.Reason.UNKNOWN);
                }
                startupParamsCallback.onRequestError(reason, a(list));
            }
            this.h.remove(startupParamsCallback);
            if (this.h.isEmpty()) {
                C2361p0 c2361p0 = this.b.d;
                synchronized (c2361p0.f) {
                    c2361p0.c = false;
                    c2361p0.c();
                }
            }
        }
    }

    public final void b(String str) {
        synchronized (this.g) {
            this.b.b(str);
        }
    }

    public final Map<String, String> b() {
        IdentifiersResult identifiersResult = (IdentifiersResult) this.c.b.get("appmetrica_clids");
        String str = identifiersResult == null ? null : identifiersResult.id;
        if (!TextUtils.isEmpty(str)) {
            return AbstractC2322nb.a(str);
        }
        return this.i;
    }

    public final StartupParamsCallback.Result a(List list) {
        HashMap map = new HashMap();
        C1999am c1999am = this.c;
        synchronized (c1999am) {
            Iterator it = list.iterator();
            while (it.hasNext()) {
                String str = (String) it.next();
                IdentifiersResult identifiersResult = (IdentifiersResult) c1999am.b.get(str);
                if (identifiersResult != null) {
                    map.put(str, c1999am.c.a(identifiersResult));
                }
            }
            c1999am.l.a(list, map);
            c1999am.m.a(list, map);
        }
        return new StartupParamsCallback.Result(map);
    }

    public final void a(StartupParamsCallback startupParamsCallback, List list) {
        if (this.h.isEmpty()) {
            C2361p0 c2361p0 = this.b.d;
            synchronized (c2361p0.f) {
                c2361p0.c = true;
                c2361p0.b();
            }
        }
        this.h.put(startupParamsCallback, list);
    }

    public final AdvIdentifiersResult a() {
        C1999am c1999am = this.c;
        P p = c1999am.j;
        IdentifiersResult identifiersResult = (IdentifiersResult) c1999am.b.get("appmetrica_google_adv_id");
        IdentifiersResult identifiersResult2 = (IdentifiersResult) c1999am.b.get("appmetrica_huawei_oaid");
        IdentifiersResult identifiersResult3 = (IdentifiersResult) c1999am.b.get("appmetrica_yandex_adv_id");
        p.getClass();
        return new AdvIdentifiersResult(P.a(identifiersResult), P.a(identifiersResult2), P.a(identifiersResult3));
    }
}
