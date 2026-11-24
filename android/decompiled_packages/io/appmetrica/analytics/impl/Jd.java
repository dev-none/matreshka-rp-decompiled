package io.appmetrica.analytics.impl;

import android.os.Bundle;
import io.appmetrica.analytics.coreapi.internal.backport.Consumer;
import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.Set;

/* JADX INFO: loaded from: classes7.dex */
public final class Jd implements Consumer {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Xg f5746a;
    public final F0 b;
    public final Sd c;

    public Jd(Xg xg, F0 f0, Sd sd) {
        this.f5746a = xg;
        this.b = f0;
        this.c = sd;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.backport.Consumer
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void consume(String str) {
        Xg xg = this.f5746a;
        F0 f0 = this.b;
        String str2 = f0.f5668a;
        String str3 = f0.b;
        Integer numValueOf = Integer.valueOf(f0.d);
        F0 f1 = this.b;
        X3 x3 = new X3(str2, str3, numValueOf, f1.e, f1.c);
        Sd sd = this.c;
        EnumC2195ib enumC2195ib = sd.b;
        E0 e0 = sd.f5883a;
        String str4 = e0.c;
        PublicLogger orCreatePublicLogger = LoggerStorage.getOrCreatePublicLogger(e0.f.f5668a);
        Set set = D9.f5638a;
        Bundle bundle = new Bundle();
        bundle.putString("payload_crash_id", str4);
        U3 u3 = new U3("", "", enumC2195ib.f6131a, orCreatePublicLogger);
        if (str != null) {
            u3.f(str);
        }
        u3.m = bundle;
        u3.c = sd.f5883a.f.f;
        xg.a(x3, u3, new C2539w4(new C2077dm(), new C2514v4(), null));
    }
}
