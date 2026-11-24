package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.networktasks.internal.BaseRequestConfig;

/* JADX INFO: loaded from: classes7.dex */
public abstract class N4 extends AbstractC2515v5 {
    public N4(BaseRequestConfig.ComponentLoader<Object, Object, S5> componentLoader, C2231jm c2231jm, BaseRequestConfig.BaseRequestArguments<C2514v4, Object> baseRequestArguments) {
        super(componentLoader, c2231jm, baseRequestArguments);
    }

    @Override // io.appmetrica.analytics.impl.AbstractC2515v5
    public final void a(Object obj) {
        C2514v4 c2514v4 = (C2514v4) obj;
        synchronized (this) {
            super.a((Object) c2514v4);
        }
    }

    public final synchronized void a(C2514v4 c2514v4) {
        super.a((Object) c2514v4);
    }
}
