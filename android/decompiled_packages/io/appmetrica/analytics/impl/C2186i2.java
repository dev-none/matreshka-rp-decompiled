package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.appsetid.internal.AppSetIdListener;
import io.appmetrica.analytics.coreapi.internal.identifiers.AppSetId;
import io.appmetrica.analytics.coreapi.internal.identifiers.AppSetIdScope;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.i2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2186i2 implements AppSetIdListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2211j2 f6122a;

    public C2186i2(C2211j2 c2211j2) {
        this.f6122a = c2211j2;
    }

    @Override // io.appmetrica.analytics.appsetid.internal.AppSetIdListener
    public final void onAppSetIdRetrieved(String str, AppSetIdScope appSetIdScope) {
        this.f6122a.c = new AppSetId(str, appSetIdScope);
        this.f6122a.d.countDown();
    }

    @Override // io.appmetrica.analytics.appsetid.internal.AppSetIdListener
    public final void onFailure(Throwable th) {
        this.f6122a.d.countDown();
    }
}
