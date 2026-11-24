package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Pj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5840a;
    public final /* synthetic */ String b;

    public Pj(String str, String str2) {
        this.f5840a = str;
        this.b = str2;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.putAppEnvironmentValue(this.f5840a, this.b);
    }
}
