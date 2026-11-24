package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.AppMetricaConfig;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.o2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2338o2 {
    public static final boolean a(Throwable th) {
        return true;
    }

    public final Ma a(Context context, AppMetricaConfig appMetricaConfig, InterfaceC1988ab interfaceC1988ab) {
        return new Gh(new C2298mc(interfaceC1988ab, appMetricaConfig), new InterfaceC2367p6() { // from class: io.appmetrica.analytics.impl.o2$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.impl.InterfaceC2367p6
            public final boolean a(Throwable th) {
                return C2338o2.a(th);
            }
        }, appMetricaConfig.crashTransformer, new T9(context));
    }
}
