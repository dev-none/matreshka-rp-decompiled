package io.appmetrica.analytics.impl;

import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.e0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2080e0 implements En {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2106f0 f6053a;

    public C2080e0(C2106f0 c2106f0) {
        this.f6053a = c2106f0;
    }

    @Override // io.appmetrica.analytics.impl.En
    public final Thread a() {
        return this.f6053a.b;
    }

    @Override // io.appmetrica.analytics.impl.En
    public final StackTraceElement[] b() {
        C2106f0 c2106f0 = this.f6053a;
        return (StackTraceElement[]) c2106f0.f6068a.get(c2106f0.b);
    }

    @Override // io.appmetrica.analytics.impl.En
    public final Map<Thread, StackTraceElement[]> c() {
        return this.f6053a.f6068a;
    }
}
