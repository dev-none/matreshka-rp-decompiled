package io.appmetrica.analytics.screenshot.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class l0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6570a;
    public final long b;

    public l0(boolean z, long j) {
        this.f6570a = z;
        this.b = j;
    }

    public final long a() {
        return this.b;
    }

    public final boolean b() {
        return this.f6570a;
    }

    public final String toString() {
        return "ServiceSideServiceCaptorConfig(enabled=" + this.f6570a + ", delaySeconds=" + this.b + ')';
    }

    public l0(a0 a0Var) {
        this(a0Var.b(), a0Var.a());
    }
}
