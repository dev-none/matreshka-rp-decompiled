package io.appmetrica.analytics.screenshot.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class j0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6566a;
    public final k0 b;

    public j0(boolean z, k0 k0Var) {
        this.f6566a = z;
        this.b = k0Var;
    }

    public final k0 a() {
        return this.b;
    }

    public final boolean b() {
        return this.f6566a;
    }

    public final String toString() {
        return "ServiceSideRemoteScreenshotConfig(enabled=" + this.f6566a + ", config=" + this.b + ')';
    }

    public j0() {
        this(new J());
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public j0(J j) {
        boolean zB = j.b();
        W wA = j.a();
        this(zB, wA != null ? new k0(wA) : null);
    }
}
