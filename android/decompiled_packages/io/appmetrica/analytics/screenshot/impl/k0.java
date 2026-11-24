package io.appmetrica.analytics.screenshot.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class k0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final h0 f6568a;
    public final l0 b;
    public final i0 c;

    public k0(h0 h0Var, l0 l0Var, i0 i0Var) {
        this.f6568a = h0Var;
        this.b = l0Var;
        this.c = i0Var;
    }

    public final h0 a() {
        return this.f6568a;
    }

    public final i0 b() {
        return this.c;
    }

    public final l0 c() {
        return this.b;
    }

    public final String toString() {
        return "ServiceSideScreenshotConfig(apiCaptorConfig=" + this.f6568a + ", serviceCaptorConfig=" + this.b + ", contentObserverCaptorConfig=" + this.c + ')';
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public k0(W w) {
        C2638e c2638eA = w.a();
        h0 h0Var = c2638eA != null ? new h0(c2638eA) : null;
        a0 a0VarC = w.c();
        l0 l0Var = a0VarC != null ? new l0(a0VarC) : null;
        C2649p c2649pB = w.b();
        this(h0Var, l0Var, c2649pB != null ? new i0(c2649pB) : null);
    }
}
