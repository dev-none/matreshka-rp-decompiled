package io.appmetrica.analytics.impl;

import io.sentry.protocol.SentryThread;
import java.util.Arrays;

/* JADX INFO: loaded from: classes7.dex */
public final class O4 implements InterfaceC2087e7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5816a;
    public final String b;

    public O4(X4 x4) {
        this.f5816a = String.format("component_%s.db", Arrays.copyOf(new Object[]{x4.d() ? SentryThread.JsonKeys.MAIN : x4.b()}, 1));
        this.b = "db_metrica_" + x4;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2087e7
    public final String a() {
        return this.b;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2087e7
    public final String b() {
        return this.f5816a;
    }
}
