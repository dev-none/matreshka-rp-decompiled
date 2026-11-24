package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.uj, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2504uj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6354a;
    public final /* synthetic */ Throwable b;

    public C2504uj(String str, Throwable th) {
        this.f6354a = str;
        this.b = th;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportError(this.f6354a, this.b);
    }
}
