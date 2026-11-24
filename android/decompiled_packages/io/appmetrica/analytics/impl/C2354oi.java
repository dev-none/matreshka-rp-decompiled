package io.appmetrica.analytics.impl;

import android.content.Context;
import android.os.Handler;
import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.ReporterConfig;
import io.appmetrica.analytics.coreutils.internal.ApiKeyUtils;
import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import io.appmetrica.analytics.logger.appmetrica.internal.ImportantLogger;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.LinkedHashMap;
import java.util.List;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.oi, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2354oi implements Za {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6242a;
    public final Gf b;
    public final Bi c;
    public final Handler d;
    public final Sl e;
    public final C2622zc f;
    public final LinkedHashMap g;
    public final Gn h;
    public final List i;
    public C2348oc j;
    public C2441s6 k;

    public C2354oi(Context context, Gf gf, Bi bi, Handler handler, Sl sl) {
        this.f6242a = context;
        this.b = gf;
        this.c = bi;
        this.d = handler;
        this.e = sl;
        this.f = new C2622zc(context, gf, bi, sl);
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        this.g = linkedHashMap;
        this.h = new Gn(new C2404qi(linkedHashMap));
        this.i = CollectionsKt.listOf((Object[]) new String[]{"20799a27-fa80-4b36-b2db-0f8141f24180", "0e5e9c33-f8c3-4568-86c5-2e4f57523f72"});
    }

    @Override // io.appmetrica.analytics.impl.Za, io.appmetrica.analytics.impl.InterfaceC1988ab
    public final Za a() {
        return this;
    }

    public final C2354oi b() {
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Za
    /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
    public final synchronized C2348oc b(AppMetricaConfig appMetricaConfig, PublicLogger publicLogger, C2261l0 c2261l0) {
        C2348oc c2348oc;
        c2348oc = this.j;
        if (c2348oc != null) {
            C2622zc c2622zc = this.f;
            c2622zc.getClass();
            publicLogger.info("Update anonymous config with value " + appMetricaConfig.toJson(), new Object[0]);
            c2622zc.f.b.applyFromAnonymousConfig(appMetricaConfig);
        } else {
            this.h.a(appMetricaConfig.apiKey);
            C2622zc c2622zc2 = this.f;
            c2622zc2.getClass();
            publicLogger.info("Update anonymous config with value " + appMetricaConfig.toJson(), new Object[0]);
            c2622zc2.f.b.applyFromAnonymousConfig(appMetricaConfig);
            c2348oc = new C2348oc(this.f);
            c2348oc.i = new C2521vb(this.d, c2348oc);
            Sl sl = this.e;
            Kh kh = c2348oc.b;
            if (sl != null) {
                kh.b.setUuid(sl.g());
            } else {
                kh.getClass();
            }
            c2348oc.a(appMetricaConfig, c2261l0);
            c2348oc.k();
            this.c.f.c = new C2329ni(c2348oc);
            this.g.put(appMetricaConfig.apiKey, c2348oc);
            this.j = c2348oc;
        }
        return c2348oc;
    }

    @Override // io.appmetrica.analytics.impl.Za
    /* JADX INFO: renamed from: d, reason: merged with bridge method [inline-methods] */
    public final synchronized C2348oc a(AppMetricaConfig appMetricaConfig, PublicLogger publicLogger, C2261l0 c2261l0) {
        C2348oc c2348oc;
        c2348oc = this.j;
        if (c2348oc != null) {
            this.f.a(appMetricaConfig, publicLogger);
            c2348oc.a(appMetricaConfig, c2261l0);
            C2213j4.l().getClass();
            this.g.put(appMetricaConfig.apiKey, c2348oc);
        } else {
            this.h.a(appMetricaConfig.apiKey);
            this.f.a(appMetricaConfig, publicLogger);
            c2348oc = new C2348oc(this.f);
            c2348oc.i = new C2521vb(this.d, c2348oc);
            Sl sl = this.e;
            Kh kh = c2348oc.b;
            if (sl != null) {
                kh.b.setUuid(sl.g());
            } else {
                kh.getClass();
            }
            c2348oc.a(appMetricaConfig, c2261l0);
            c2348oc.k();
            this.c.f.c = new C2329ni(c2348oc);
            this.g.put(appMetricaConfig.apiKey, c2348oc);
            C2213j4.l().getClass();
            this.j = c2348oc;
        }
        return c2348oc;
    }

    @Override // io.appmetrica.analytics.impl.Za
    public final synchronized Ya b(ReporterConfig reporterConfig) {
        Ya ya;
        Ya ya2 = (Ya) this.g.get(reporterConfig.apiKey);
        ya = ya2;
        if (ya2 == null) {
            if (!this.i.contains(reporterConfig.apiKey)) {
                this.e.i();
            }
            Context context = this.f6242a;
            Fc fc = new Fc(context, this.b, reporterConfig, this.c, new T9(context));
            fc.i = new C2521vb(this.d, fc);
            Sl sl = this.e;
            Kh kh = fc.b;
            if (sl != null) {
                kh.b.setUuid(sl.g());
            } else {
                kh.getClass();
            }
            fc.k();
            this.g.put(reporterConfig.apiKey, fc);
            ya = fc;
        }
        return ya;
    }

    @Override // io.appmetrica.analytics.impl.Za
    public final synchronized void a(ReporterConfig reporterConfig) {
        if (this.g.containsKey(reporterConfig.apiKey)) {
            LoggerStorage.getOrCreatePublicLogger(reporterConfig.apiKey).warning("Reporter with apiKey=%s already exists.", ApiKeyUtils.createPartialApiKey(reporterConfig.apiKey));
        } else {
            b(reporterConfig);
            ImportantLogger.INSTANCE.info("AppMetrica", "Activate reporter with APIKey " + ApiKeyUtils.createPartialApiKey(reporterConfig.apiKey), new Object[0]);
        }
    }

    @Override // io.appmetrica.analytics.impl.Za
    public final synchronized InterfaceC2014bb a(AppMetricaConfig appMetricaConfig) {
        C2441s6 c2441s6;
        c2441s6 = this.k;
        if (c2441s6 != null) {
            c2441s6.a(appMetricaConfig);
        } else {
            C2441s6 c2441s7 = new C2441s6(new C2466t6(this.b, this.f.e, this.c, appMetricaConfig));
            this.k = c2441s7;
            c2441s6 = c2441s7;
        }
        return c2441s6;
    }
}
