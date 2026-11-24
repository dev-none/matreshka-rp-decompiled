package io.appmetrica.analytics.impl;

import android.os.Handler;
import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;

/* JADX INFO: loaded from: classes7.dex */
public interface Ia {
    C2265l4 a();

    void a(AppMetricaConfig appMetricaConfig, InterfaceC1988ab interfaceC1988ab);

    Handler b();

    C2005b2 c();

    C2421rb d();

    ICommonExecutor getDefaultExecutor();
}
