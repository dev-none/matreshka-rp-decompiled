package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Tj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5909a;
    public final /* synthetic */ String b;

    public Tj(String str, String str2) {
        this.f5909a = str;
        this.b = str2;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportEvent(this.f5909a, this.b);
    }
}
