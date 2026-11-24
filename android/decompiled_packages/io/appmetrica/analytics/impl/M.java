package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.backport.Provider;

/* JADX INFO: loaded from: classes7.dex */
public final class M implements Provider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Context f5782a;
    public final /* synthetic */ Li b;
    public final /* synthetic */ N c;

    public M(N n, Context context, Li li) {
        this.c = n;
        this.f5782a = context;
        this.b = li;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.backport.Provider
    public final Object get() {
        return this.c.f5798a.a(this.f5782a, this.b);
    }
}
