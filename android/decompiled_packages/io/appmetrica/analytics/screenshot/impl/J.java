package io.appmetrica.analytics.screenshot.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class J {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6539a;
    public final W b;

    public J(boolean z, W w) {
        this.f6539a = z;
        this.b = w;
    }

    public final W a() {
        return this.b;
    }

    public final boolean b() {
        return this.f6539a;
    }

    public final String toString() {
        return "RemoteScreenshotConfig(enabled=" + this.f6539a + ", config=" + this.b + ')';
    }

    public J() {
        this(new S().f6547a, new W());
    }
}
