package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Sj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5887a;

    public Sj(String str) {
        this.f5887a = str;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportEvent(this.f5887a);
    }
}
