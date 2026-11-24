package io.appmetrica.analytics.impl;

import android.content.Context;
import android.text.TextUtils;
import android.util.SparseArray;
import io.appmetrica.analytics.AdRevenue;
import io.appmetrica.analytics.ModuleEvent;
import io.appmetrica.analytics.Revenue;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.appmetrica.analytics.coreutils.internal.io.Base64Utils;
import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import io.appmetrica.analytics.ecommerce.ECommerceEvent;
import io.appmetrica.analytics.internal.CounterConfiguration;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import io.appmetrica.analytics.plugins.IPluginReporter;
import io.appmetrica.analytics.plugins.PluginErrorDetails;
import io.appmetrica.analytics.profile.UserProfile;
import io.appmetrica.analytics.profile.UserProfileUpdate;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import kotlin.NoWhenBranchMatchedException;
import kotlin.collections.CollectionsKt;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public abstract class Q2 implements Ka {
    public static final HashSet n = new HashSet(Arrays.asList(1, 13));
    public static final O2 o = new O2();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final Context f5845a;
    protected final Kh b;
    protected final PublicLogger c;
    protected final Tn d;
    protected final Jg e;
    protected final C6 f;
    public final C2055d0 g;
    protected final Bi h;
    public C2521vb i;
    public final Hf j;
    public final T9 k;
    public final Oe l;
    public final C2206in m;

    public Q2(Context context, Bi bi, Kh kh, T9 t9, C2591y6 c2591y6, Tn tn, Jg jg, C6 c6, C2055d0 c2055d0, Oe oe) {
        Context applicationContext = context.getApplicationContext();
        this.f5845a = applicationContext;
        this.h = bi;
        this.b = kh;
        this.k = t9;
        this.d = tn;
        this.e = jg;
        this.f = c6;
        this.g = c2055d0;
        this.l = oe;
        PublicLogger orCreatePublicLogger = LoggerStorage.getOrCreatePublicLogger(kh.b().getApiKey());
        this.c = orCreatePublicLogger;
        if (AbstractC2135g3.a(kh.b().isLogEnabled())) {
            orCreatePublicLogger.setEnabled(true);
        }
        this.j = c2591y6;
        this.m = new C2206in(applicationContext);
    }

    public void a(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            this.c.warning("Invalid Error Environment (key,value) pair: (%s,%s).", str, str2);
            return;
        }
        this.c.info("Put error environment pair <%s, %s>", str, str2);
        Kh kh = this.b;
        synchronized (kh) {
            I8 i8 = kh.c;
            i8.b.b(i8.f5723a, str, str2);
        }
    }

    public final void b(Map<String, String> map) {
        if (no.a((Map) map)) {
            return;
        }
        for (Map.Entry<String, String> entry : map.entrySet()) {
            a(entry.getKey(), entry.getValue());
        }
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void clearAppEnvironment() {
        String str;
        this.c.info("Clear app environment", new Object[0]);
        Bi bi = this.h;
        Kh kh = this.b;
        bi.getClass();
        W5 w5N = U3.n();
        Gf gf = new Gf(kh.f5829a);
        CounterConfiguration counterConfiguration = new CounterConfiguration(kh.b);
        I8 i8 = kh.c;
        synchronized (kh) {
            str = kh.f;
        }
        bi.a(new Ah(w5N, false, 1, null, new Kh(gf, counterConfiguration, i8, str)));
    }

    public final void d(String str) {
        if (this.b.f()) {
            return;
        }
        this.h.d.c();
        C2521vb c2521vb = this.i;
        c2521vb.f6368a.removeCallbacks(c2521vb.c, c2521vb.b.b.b.getApiKey());
        this.b.e = true;
        Bi bi = this.h;
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3("", str, 3, 0, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
    }

    public final void e(String str) {
        this.h.d.b();
        C2521vb c2521vb = this.i;
        C2521vb.a(c2521vb.f6368a, c2521vb.b, c2521vb.c);
        Bi bi = this.h;
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3("", str, 6400, 0, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
        this.b.e = false;
    }

    @Override // io.appmetrica.analytics.IReporter
    public final IPluginReporter getPluginExtension() {
        return this;
    }

    public String j() {
        return "[BaseReporter]";
    }

    public void k() {
        String str;
        C2525vf c2525vf;
        Bi bi = this.h;
        Kh kh = this.b;
        bi.getClass();
        C2625zf c2625zf = kh.d;
        synchronized (kh) {
            str = kh.f;
        }
        PublicLogger orCreatePublicLogger = LoggerStorage.getOrCreatePublicLogger(kh.b.getApiKey());
        Set set = D9.f5638a;
        JSONObject jSONObject = new JSONObject();
        if (c2625zf != null && (c2525vf = c2625zf.f6431a) != null) {
            try {
                jSONObject.put("preloadInfo", c2525vf.c());
            } catch (Throwable unused) {
            }
        }
        String string = jSONObject.toString();
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(string, "", 6144, 0, orCreatePublicLogger);
        u3.c(str);
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void pauseSession() {
        this.c.info("Pause session", new Object[0]);
        d(null);
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void putAppEnvironmentValue(String str, String str2) {
        String str3;
        if (TextUtils.isEmpty(str)) {
            this.c.warning("Invalid App Environment (key,value) pair: (%s,%s).", str, str2);
            return;
        }
        this.c.info("Put app environment: <%s, %s>", str, str2);
        Bi bi = this.h;
        Kh kh = this.b;
        bi.getClass();
        W5 w5B = U3.b(str, str2);
        Gf gf = new Gf(kh.f5829a);
        CounterConfiguration counterConfiguration = new CounterConfiguration(kh.b);
        I8 i8 = kh.c;
        synchronized (kh) {
            str3 = kh.f;
        }
        bi.a(new Ah(w5B, false, 1, null, new Kh(gf, counterConfiguration, i8, str3)));
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportAdRevenue(AdRevenue adRevenue) {
        reportAdRevenue(adRevenue, false);
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportAnr(Map<Thread, StackTraceElement[]> map) {
        StackTraceElement[] stackTraceElementArrB;
        C2080e0 c2080e0 = new C2080e0(new C2106f0(this, map));
        C2445sa c2445sa = new C2445sa();
        C2591y6 c2591y6 = C2213j4.l().f6145a;
        Thread threadA = c2080e0.a();
        Map mapC = null;
        try {
            stackTraceElementArrB = c2080e0.b();
            if (stackTraceElementArrB == null) {
                try {
                    stackTraceElementArrB = threadA.getStackTrace();
                } catch (SecurityException unused) {
                }
            }
        } catch (SecurityException unused2) {
            stackTraceElementArrB = null;
        }
        C2608yn c2608yn = (C2608yn) c2445sa.apply(threadA, stackTraceElementArrB);
        ArrayList arrayList = new ArrayList();
        TreeMap treeMap = new TreeMap(new Dn());
        try {
            mapC = c2080e0.c();
        } catch (SecurityException unused3) {
        }
        if (mapC != null) {
            treeMap.putAll(mapC);
        }
        for (Map.Entry entry : treeMap.entrySet()) {
            Thread thread = (Thread) entry.getKey();
            if (thread != threadA && thread != null) {
                arrayList.add((C2608yn) c2445sa.apply(thread, (StackTraceElement[]) entry.getValue()));
            }
        }
        a(new V(c2608yn, arrayList, c2591y6.a()));
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportECommerce(ECommerceEvent eCommerceEvent) {
        String str;
        this.c.info("E-commerce event received: " + eCommerceEvent.getPublicDescription(), new Object[0]);
        Bi bi = this.h;
        Kh kh = this.b;
        bi.getClass();
        for (Ii ii : eCommerceEvent.toProto()) {
            U3 u3 = new U3(LoggerStorage.getOrCreatePublicLogger(kh.b.getApiKey()));
            EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
            u3.d = 41000;
            u3.b = u3.e(Base64Utils.compressBase64(MessageNano.toByteArray((MessageNano) ii.f5730a)));
            u3.g = ii.b.getBytesTruncated();
            Gf gf = new Gf(kh.f5829a);
            CounterConfiguration counterConfiguration = new CounterConfiguration(kh.b);
            I8 i8 = kh.c;
            synchronized (kh) {
                str = kh.f;
            }
            bi.a(new Ah(u3, false, 1, null, new Kh(gf, counterConfiguration, i8, str)));
        }
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportError(String str, Throwable th) {
        Ig ig = new Ig(str, a(th));
        Bi bi = this.h;
        byte[] byteArray = MessageNano.toByteArray(this.e.fromModel(ig));
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(byteArray, str, 5892, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
        this.c.info("Error received: %s", WrapUtils.wrapToTag(str));
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportEvent(String str) {
        this.c.info("Event received: " + WrapUtils.wrapToTag(str), new Object[0]);
        Bi bi = this.h;
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3("", str, 1, 0, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportRevenue(Revenue revenue) {
        String str;
        Si si = P2.f5828a;
        si.getClass();
        so soVarA = si.a(revenue);
        if (!soVarA.f6320a) {
            this.c.warning("Passed revenue is not valid. Reason: " + soVarA.b, new Object[0]);
            return;
        }
        Bi bi = this.h;
        Ti ti = new Ti(revenue, this.c);
        Kh kh = this.b;
        bi.getClass();
        U3 u3A = U3.a(LoggerStorage.getOrCreatePublicLogger(kh.b.getApiKey()), ti);
        Gf gf = new Gf(kh.f5829a);
        CounterConfiguration counterConfiguration = new CounterConfiguration(kh.b);
        I8 i8 = kh.c;
        synchronized (kh) {
            str = kh.f;
        }
        bi.a(new Ah(u3A, false, 1, null, new Kh(gf, counterConfiguration, i8, str)));
        this.c.info("Revenue received for productID: " + WrapUtils.wrapToTag(revenue.productID) + " of quantity: " + WrapUtils.wrapToTag(revenue.quantity) + " with price (in micros): " + revenue.priceMicros + " " + revenue.currency, new Object[0]);
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportUnhandledException(Throwable th) {
        Sn snA = Vn.a(th, new V(null, null, this.j.a()), null, (String) this.k.b.a(), (Boolean) this.k.c.a());
        Bi bi = this.h;
        bi.a(bi.a(snA, this.b));
        this.c.info("Unhandled exception received: " + snA, new Object[0]);
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportUserProfile(UserProfile userProfile) {
        String str;
        C2130fo c2130fo = new C2130fo(C2130fo.c);
        Iterator<UserProfileUpdate<? extends InterfaceC2156go>> it = userProfile.getUserProfileUpdates().iterator();
        while (it.hasNext()) {
            InterfaceC2156go userProfileUpdatePatcher = it.next().getUserProfileUpdatePatcher();
            ((Hd) userProfileUpdatePatcher).e = this.c;
            userProfileUpdatePatcher.a(c2130fo);
        }
        C2259ko c2259ko = new C2259ko();
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < c2130fo.f6082a.size(); i++) {
            SparseArray sparseArray = c2130fo.f6082a;
            Iterator it2 = ((HashMap) sparseArray.get(sparseArray.keyAt(i))).values().iterator();
            while (it2.hasNext()) {
                arrayList.add((C2182ho) it2.next());
            }
        }
        c2259ko.f6179a = (C2182ho[]) arrayList.toArray(new C2182ho[arrayList.size()]);
        so soVarA = o.a(c2259ko);
        if (!soVarA.f6320a) {
            this.c.warning("UserInfo wasn't sent because " + soVarA.b, new Object[0]);
            return;
        }
        Bi bi = this.h;
        Kh kh = this.b;
        bi.getClass();
        W5 w5A = U3.a(c2259ko);
        Gf gf = new Gf(kh.f5829a);
        CounterConfiguration counterConfiguration = new CounterConfiguration(kh.b);
        I8 i8 = kh.c;
        synchronized (kh) {
            str = kh.f;
        }
        bi.a(new Ah(w5A, false, 1, null, new Kh(gf, counterConfiguration, i8, str)));
        this.c.info("User profile received", new Object[0]);
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void resumeSession() {
        e(null);
        this.c.info("Resume session", new Object[0]);
    }

    @Override // io.appmetrica.analytics.IReporter, io.appmetrica.analytics.IModuleReporter
    public final void sendEventsBuffer() {
        this.c.info("Send event buffer", new Object[0]);
        Bi bi = this.h;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        U3 u3 = new U3("", "", 256, 0, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void setDataSendingEnabled(boolean z) {
        this.b.b.setDataSendingEnabled(z);
        this.c.info("Updated data sending enabled: %s", Boolean.valueOf(z));
    }

    @Override // io.appmetrica.analytics.IModuleReporter
    public final void setSessionExtra(String str, byte[] bArr) {
        Bi bi = this.h;
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3("", null, 8193, 0, publicLogger);
        if (bArr == null) {
            bArr = new byte[0];
        }
        u3.p = Collections.singletonMap(str, bArr);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void setUserProfileID(String str) {
        String str2;
        Bi bi = this.h;
        Kh kh = this.b;
        bi.getClass();
        U3 u3 = new U3(LoggerStorage.getOrCreatePublicLogger(kh.b.getApiKey()));
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        u3.d = 40962;
        u3.c(str);
        u3.b = u3.e(str);
        Gf gf = new Gf(kh.f5829a);
        CounterConfiguration counterConfiguration = new CounterConfiguration(kh.b);
        I8 i8 = kh.c;
        synchronized (kh) {
            str2 = kh.f;
        }
        bi.a(new Ah(u3, false, 1, null, new Kh(gf, counterConfiguration, i8, str2)));
        this.c.info("Set user profile ID: " + WrapUtils.wrapToTag(str), new Object[0]);
    }

    @Override // io.appmetrica.analytics.IModuleReporter
    public final void reportAdRevenue(AdRevenue adRevenue, boolean z) {
        String str;
        Bi bi = this.h;
        E e = new E(adRevenue, z, this.m, this.c);
        Kh kh = this.b;
        bi.getClass();
        U3 u3A = U3.a(LoggerStorage.getOrCreatePublicLogger(kh.b.getApiKey()), e);
        Gf gf = new Gf(kh.f5829a);
        CounterConfiguration counterConfiguration = new CounterConfiguration(kh.b);
        I8 i8 = kh.c;
        synchronized (kh) {
            str = kh.f;
        }
        bi.a(new Ah(u3A, false, 1, null, new Kh(gf, counterConfiguration, i8, str)));
        this.c.info("AdRevenue Received: AdRevenue{adRevenue=" + adRevenue.adRevenue + ", currency='" + WrapUtils.wrapToTag(adRevenue.currency.getCurrencyCode()) + "', adType=" + WrapUtils.wrapToTag(adRevenue.adType) + ", adNetwork='" + WrapUtils.wrapToTag(adRevenue.adNetwork) + "', adUnitId='" + WrapUtils.wrapToTag(adRevenue.adUnitId) + "', adUnitName='" + WrapUtils.wrapToTag(adRevenue.adUnitName) + "', adPlacementId='" + WrapUtils.wrapToTag(adRevenue.adPlacementId) + "', adPlacementName='" + WrapUtils.wrapToTag(adRevenue.adPlacementName) + "', precision='" + WrapUtils.wrapToTag(adRevenue.precision) + "', payload=" + AbstractC2322nb.b(adRevenue.payload) + ", autoCollected=" + z + "}", new Object[0]);
    }

    @Override // io.appmetrica.analytics.impl.Ka
    public final void b(String str, String str2) {
        this.c.info("Event received: " + WrapUtils.wrapToTag(str) + ". With value: " + WrapUtils.wrapToTag(str2), new Object[0]);
        Bi bi = this.h;
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(str2, str, 1, 0, publicLogger);
        u3.l = EnumC2469t9.JS;
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
    }

    public final void a(Map<String, String> map) {
        if (no.a((Map) map)) {
            return;
        }
        for (Map.Entry<String, String> entry : map.entrySet()) {
            putAppEnvironmentValue(entry.getKey(), entry.getValue());
        }
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportEvent(String str, String str2) {
        this.c.info("Event received: " + WrapUtils.wrapToTag(str) + ". With value: " + WrapUtils.wrapToTag(str2), new Object[0]);
        Bi bi = this.h;
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(str2, str, 1, 0, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportError(String str, String str2) {
        reportError(str, str2, (Throwable) null);
    }

    public final Sn a(Throwable th) {
        Throwable th2;
        StackTraceElement[] stackTrace;
        if (th == null) {
            stackTrace = null;
            th2 = null;
        } else if (th instanceof W1) {
            stackTrace = th.getStackTrace();
            th2 = null;
        } else {
            th2 = th;
            stackTrace = null;
        }
        return Vn.a(th2, new V(null, null, this.j.a()), stackTrace != null ? Arrays.asList(stackTrace) : null, (String) this.k.b.a(), (Boolean) this.k.c.a());
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportError(String str, String str2, Throwable th) {
        B6 b6 = new B6(new Ig(str2, a(th)), str);
        Bi bi = this.h;
        byte[] byteArray = MessageNano.toByteArray(this.f.fromModel(b6));
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(byteArray, str2, 5896, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
        this.c.info("Error received: id: %s, message: %s", WrapUtils.wrapToTag(str), WrapUtils.wrapToTag(str2));
    }

    @Override // io.appmetrica.analytics.impl.Ka
    public final void b(String str) {
        Bi bi = this.h;
        W5 w5A = W5.a(str);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(w5A, kh), kh, 1, (Map) null);
    }

    @Override // io.appmetrica.analytics.plugins.IPluginReporter
    public final void reportUnhandledException(PluginErrorDetails pluginErrorDetails) {
        Sn snA = this.l.a(pluginErrorDetails);
        Bi bi = this.h;
        In in = snA.f5891a;
        String str = in != null ? (String) WrapUtils.getOrDefault(in.f5734a, "") : "";
        byte[] byteArray = MessageNano.toByteArray(this.d.fromModel(snA));
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(byteArray, str, 5891, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
        this.c.info("Crash from plugin received: %s", WrapUtils.wrapToTag(pluginErrorDetails.getMessage()));
    }

    @Override // io.appmetrica.analytics.impl.Ka
    public final boolean b() {
        return this.b.f();
    }

    @Override // io.appmetrica.analytics.IReporter
    public final void reportEvent(String str, Map<String, Object> map) {
        Bi bi = this.h;
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        bi.a(new U3("", str, 1, 0, publicLogger), this.b, 1, map);
        PublicLogger publicLogger2 = this.c;
        StringBuilder sb = new StringBuilder("Event received: ");
        sb.append(WrapUtils.wrapToTag(str));
        sb.append(". With value: ");
        sb.append(WrapUtils.wrapToTag(map == null ? null : map.toString()));
        publicLogger2.info(sb.toString(), new Object[0]);
    }

    @Override // io.appmetrica.analytics.impl.Ya, io.appmetrica.analytics.impl.InterfaceC2014bb
    public final void a(Sn sn) {
        Bi bi = this.h;
        Ah ahA = bi.a(sn, this.b);
        Kh kh = ahA.e;
        Tl tl = bi.e;
        if (tl != null) {
            kh.b.setUuid(((Sl) tl).g());
        } else {
            kh.getClass();
        }
        bi.c.b(ahA);
        this.c.info("Unhandled exception received: " + sn, new Object[0]);
    }

    @Override // io.appmetrica.analytics.plugins.IPluginReporter
    public final void reportError(PluginErrorDetails pluginErrorDetails, String str) {
        Sn snA;
        Oe oe = this.l;
        if (pluginErrorDetails != null) {
            snA = oe.a(pluginErrorDetails);
        } else {
            oe.getClass();
            snA = null;
        }
        Ig ig = new Ig(str, snA);
        Bi bi = this.h;
        byte[] byteArray = MessageNano.toByteArray(this.e.fromModel(ig));
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(byteArray, str, 5896, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
        this.c.info("Error from plugin received: %s", WrapUtils.wrapToTag(str));
    }

    @Override // io.appmetrica.analytics.IModuleReporter
    public final void reportEvent(ModuleEvent moduleEvent) {
        EnumC2469t9 enumC2469t9;
        if (n.contains(Integer.valueOf(moduleEvent.getType()))) {
            return;
        }
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        String value = moduleEvent.getValue();
        String name = moduleEvent.getName();
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(value, name, 8192, moduleEvent.getType(), publicLogger);
        int i = J8.f5744a[moduleEvent.getCategory().ordinal()];
        if (i == 1) {
            enumC2469t9 = EnumC2469t9.NATIVE;
        } else {
            if (i != 2) {
                throw new NoWhenBranchMatchedException();
            }
            enumC2469t9 = EnumC2469t9.SYSTEM;
        }
        u3.l = enumC2469t9;
        u3.c = AbstractC2322nb.b(moduleEvent.getEnvironment());
        if (moduleEvent.getExtras() != null) {
            u3.p = moduleEvent.getExtras();
        }
        this.h.a(u3, this.b, moduleEvent.getServiceDataReporterType(), moduleEvent.getAttributes());
    }

    @Override // io.appmetrica.analytics.impl.Ya, io.appmetrica.analytics.impl.InterfaceC2132g0
    public final void a(V v) {
        C2029c0 c2029c0 = new C2029c0(v, (String) this.k.b.a(), (Boolean) this.k.c.a());
        Bi bi = this.h;
        byte[] byteArray = MessageNano.toByteArray(this.g.fromModel(c2029c0));
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(byteArray, "", 5968, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        String str = null;
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
        PublicLogger publicLogger2 = this.c;
        StringBuilder sb = new StringBuilder("ANR was reported ");
        C2608yn c2608yn = v.f5925a;
        if (c2608yn != null) {
            str = "Thread[name=" + c2608yn.f6419a + ",tid={" + c2608yn.c + ", priority=" + c2608yn.b + ", group=" + c2608yn.d + "}] at " + CollectionsKt.joinToString$default(c2608yn.f, "\n", null, null, 0, null, null, 62, null);
        }
        sb.append(str);
        publicLogger2.info(sb.toString(), new Object[0]);
    }

    @Override // io.appmetrica.analytics.plugins.IPluginReporter
    public final void reportError(String str, String str2, PluginErrorDetails pluginErrorDetails) {
        Sn snA;
        Oe oe = this.l;
        if (pluginErrorDetails != null) {
            snA = oe.a(pluginErrorDetails);
        } else {
            oe.getClass();
            snA = null;
        }
        B6 b6 = new B6(new Ig(str2, snA), str);
        Bi bi = this.h;
        byte[] byteArray = MessageNano.toByteArray(this.f.fromModel(b6));
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(byteArray, str2, 5896, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
        this.c.info("Error with identifier: %s from plugin received: %s", str, WrapUtils.wrapToTag(str2));
    }
}
