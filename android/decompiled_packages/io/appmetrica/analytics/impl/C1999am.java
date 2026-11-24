package io.appmetrica.analytics.impl;

import android.content.Context;
import android.text.TextUtils;
import com.unity3d.ads.core.domain.AndroidGetIsModulesInitEnabled;
import io.appmetrica.analytics.StartupParamsCallback;
import io.appmetrica.analytics.coreapi.internal.identifiers.IdentifierStatus;
import io.appmetrica.analytics.internal.IdentifiersResult;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import kotlin.NoWhenBranchMatchedException;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.am, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1999am {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashSet f6006a;
    public final HashMap b;
    public final Xl c;
    public List d;
    public HashMap e;
    public long f;
    public boolean g;
    public long h;
    public final C1992af i;
    public final P j;
    public final K3 k;
    public final E6 l;
    public final C1987aa m;
    public final Z9 n;
    public final ro o;

    public C1999am(Context context, C1992af c1992af) {
        this(c1992af, new P(), new K3(), C2213j4.l().a(context), new E6(), new C1987aa(), new Z9(), new ro());
    }

    public final synchronized boolean a(List list) {
        boolean z;
        boolean z2;
        boolean zA = a(CollectionsKt.intersect(list, AbstractC2154gm.f6101a));
        Iterator it = list.iterator();
        while (true) {
            z = true;
            if (!it.hasNext()) {
                z2 = false;
                break;
            }
            if (this.f6006a.contains((String) it.next())) {
                z2 = true;
                break;
            }
        }
        boolean z3 = AbstractC2154gm.b.currentTimeSeconds() > this.h;
        if (zA && !z2 && !z3 && !this.g) {
            z = false;
        }
        return z;
    }

    public final void b(IdentifiersResult identifiersResult) {
        if (a(identifiersResult)) {
            return;
        }
        this.b.put("appmetrica_clids", identifiersResult);
    }

    public final void c(IdentifiersResult identifiersResult) {
        if (identifiersResult != null) {
            ro roVar = this.o;
            String str = identifiersResult.id;
            roVar.getClass();
            if (ro.a(str)) {
                this.b.put(StartupParamsCallback.APPMETRICA_UUID, identifiersResult);
            }
        }
    }

    public final synchronized boolean b() {
        return a(Arrays.asList("appmetrica_clids", StartupParamsCallback.APPMETRICA_DEVICE_ID_HASH, StartupParamsCallback.APPMETRICA_DEVICE_ID, "appmetrica_get_ad_url", "appmetrica_report_ad_url", StartupParamsCallback.APPMETRICA_UUID));
    }

    public final void c() {
        C2039ca c2039ca;
        C1992af c1992afD = this.i.i((IdentifiersResult) this.b.get(StartupParamsCallback.APPMETRICA_UUID)).e((IdentifiersResult) this.b.get(StartupParamsCallback.APPMETRICA_DEVICE_ID)).d((IdentifiersResult) this.b.get(StartupParamsCallback.APPMETRICA_DEVICE_ID_HASH)).a((IdentifiersResult) this.b.get("appmetrica_get_ad_url")).b((IdentifiersResult) this.b.get("appmetrica_report_ad_url")).e(this.f).h((IdentifiersResult) this.b.get("appmetrica_clids")).j(Jm.a((Map) this.e)).f((IdentifiersResult) this.b.get("appmetrica_google_adv_id")).g((IdentifiersResult) this.b.get("appmetrica_huawei_oaid")).j((IdentifiersResult) this.b.get("appmetrica_yandex_adv_id")).b(this.g).c(this.l.d).d(this.h);
        C1987aa c1987aa = this.m;
        synchronized (c1987aa) {
            c2039ca = c1987aa.b;
        }
        c1992afD.a(c2039ca).b();
    }

    public C1999am(C1992af c1992af, P p, K3 k3, Cd cd, E6 e6, C1987aa c1987aa, Z9 z9, ro roVar) {
        HashSet hashSet = new HashSet();
        this.f6006a = hashSet;
        this.b = new HashMap();
        this.c = new Xl();
        hashSet.add("appmetrica_google_adv_id");
        hashSet.add("appmetrica_huawei_oaid");
        hashSet.add("appmetrica_yandex_adv_id");
        this.i = c1992af;
        this.j = p;
        this.k = k3;
        this.l = e6;
        this.m = c1987aa;
        this.n = z9;
        this.o = roVar;
        c(cd.a());
        a(StartupParamsCallback.APPMETRICA_DEVICE_ID, c1992af.j());
        a(StartupParamsCallback.APPMETRICA_DEVICE_ID_HASH, c1992af.i());
        a("appmetrica_get_ad_url", c1992af.d());
        a("appmetrica_report_ad_url", c1992af.e());
        b(c1992af.o());
        a("appmetrica_google_adv_id", c1992af.l());
        a("appmetrica_huawei_oaid", c1992af.m());
        a("appmetrica_yandex_adv_id", c1992af.r());
        e6.a(c1992af.h());
        c1987aa.a(c1992af.k());
        this.d = c1992af.g();
        String strI = c1992af.i((String) null);
        this.e = strI != null ? Jm.a(strI) : null;
        this.g = c1992af.a(true);
        this.f = c1992af.b(0L);
        this.h = c1992af.n();
        c();
    }

    public final boolean a() {
        IdentifiersResult identifiersResult = (IdentifiersResult) this.b.get("appmetrica_clids");
        if (!a(identifiersResult) && identifiersResult.id.isEmpty()) {
            return no.a((Map) this.e);
        }
        return true;
    }

    public static boolean a(IdentifiersResult identifiersResult) {
        return identifiersResult == null || identifiersResult.id == null;
    }

    public final void a(String str, IdentifiersResult identifiersResult) {
        if (identifiersResult == null || TextUtils.isEmpty(identifiersResult.id)) {
            return;
        }
        this.b.put(str, identifiersResult);
    }

    public final synchronized boolean a(Collection collection) {
        Boolean bool;
        String str;
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            String str2 = (String) it.next();
            IdentifiersResult identifiersResult = (IdentifiersResult) this.b.get(str2);
            if (identifiersResult == null) {
                identifiersResult = (IdentifiersResult) this.l.c.get(str2);
            }
            if (identifiersResult == null) {
                C2039ca c2039ca = this.m.b;
                if (!Intrinsics.areEqual(str2, "appmetrica_lib_ssl_enabled") || (bool = c2039ca.f6027a) == null) {
                    identifiersResult = null;
                } else {
                    boolean zBooleanValue = bool.booleanValue();
                    IdentifierStatus identifierStatus = c2039ca.b;
                    String str3 = c2039ca.c;
                    if (zBooleanValue) {
                        str = AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE;
                    } else if (!zBooleanValue) {
                        str = "false";
                    } else {
                        throw new NoWhenBranchMatchedException();
                    }
                    identifiersResult = new IdentifiersResult(str, identifierStatus, str3);
                }
            }
            if ("appmetrica_clids".equals(str2)) {
                if (this.g || a(identifiersResult) || (identifiersResult.id.isEmpty() && !no.a((Map) this.e))) {
                    return false;
                }
            } else if ("appmetrica_lib_ssl_enabled".equals(str2)) {
                if (identifiersResult == null) {
                    return false;
                }
            } else if (identifiersResult == null || TextUtils.isEmpty(identifiersResult.id)) {
                return false;
            }
        }
        return true;
    }
}
