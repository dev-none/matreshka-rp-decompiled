package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.wj, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2554wj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Throwable f6390a;

    public C2554wj(Throwable th) {
        this.f6390a = th;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportUnhandledException(this.f6390a);
    }
}
