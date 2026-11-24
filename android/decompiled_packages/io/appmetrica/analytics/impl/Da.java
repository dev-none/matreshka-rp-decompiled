package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.networktasks.internal.HostRetryInfoProvider;

/* JADX INFO: loaded from: classes7.dex */
public final class Da implements HostRetryInfoProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2095ef f5639a;
    public final EnumC1991ae b;

    public Da(C2095ef c2095ef, EnumC1991ae enumC1991ae) {
        this.f5639a = c2095ef;
        this.b = enumC1991ae;
    }

    public final EnumC1991ae a() {
        return this.b;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.HostRetryInfoProvider
    public final long getLastAttemptTimeSeconds() {
        return this.f5639a.a(this.b, 0L);
    }

    @Override // io.appmetrica.analytics.networktasks.internal.HostRetryInfoProvider
    public final int getNextSendAttemptNumber() {
        return this.f5639a.a(this.b, 1);
    }

    @Override // io.appmetrica.analytics.networktasks.internal.HostRetryInfoProvider
    public final void saveLastAttemptTimeSeconds(long j) {
        this.f5639a.b(this.b, j).b();
    }

    @Override // io.appmetrica.analytics.networktasks.internal.HostRetryInfoProvider
    public final void saveNextSendAttemptNumber(int i) {
        this.f5639a.b(this.b, i).b();
    }
}
