package io.appmetrica.analytics.screenshot.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class W {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2638e f6549a;
    public final a0 b;
    public final C2649p c;

    public W(C2638e c2638e, a0 a0Var, C2649p c2649p) {
        this.f6549a = c2638e;
        this.b = a0Var;
        this.c = c2649p;
    }

    public final C2638e a() {
        return this.f6549a;
    }

    public final C2649p b() {
        return this.c;
    }

    public final a0 c() {
        return this.b;
    }

    public final String toString() {
        return "ScreenshotConfig(apiCaptorConfig=" + this.f6549a + ", serviceCaptorConfig=" + this.b + ", contentObserverCaptorConfig=" + this.c + ')';
    }

    public W() {
        this(new C2638e(), new a0(), new C2649p());
    }
}
