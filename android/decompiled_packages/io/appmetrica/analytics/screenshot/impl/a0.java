package io.appmetrica.analytics.screenshot.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class a0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6554a;
    public final long b;

    public a0(boolean z, long j) {
        this.f6554a = z;
        this.b = j;
    }

    public final long a() {
        return this.b;
    }

    public final boolean b() {
        return this.f6554a;
    }

    public final String toString() {
        return "ServiceCaptorConfig(enabled=" + this.f6554a + ", delaySeconds=" + this.b + ')';
    }

    public a0() {
        this(new P().f6545a, new P().b);
    }
}
