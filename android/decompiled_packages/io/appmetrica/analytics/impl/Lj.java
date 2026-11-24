package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Lj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5778a;
    public final /* synthetic */ byte[] b;

    public Lj(String str, byte[] bArr) {
        this.f5778a = str;
        this.b = bArr;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.setSessionExtra(this.f5778a, this.b);
    }
}
