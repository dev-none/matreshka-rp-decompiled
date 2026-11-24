package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Dj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ boolean f5643a;

    public Dj(boolean z) {
        this.f5643a = z;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.setDataSendingEnabled(this.f5643a);
    }
}
