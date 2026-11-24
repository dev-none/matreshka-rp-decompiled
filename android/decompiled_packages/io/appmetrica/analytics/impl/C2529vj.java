package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.vj, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2529vj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6373a;
    public final /* synthetic */ String b;
    public final /* synthetic */ Throwable c;

    public C2529vj(String str, String str2, Throwable th) {
        this.f6373a = str;
        this.b = str2;
        this.c = th;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportError(this.f6373a, this.b, this.c);
    }
}
