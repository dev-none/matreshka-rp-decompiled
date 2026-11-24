package io.appmetrica.analytics.impl;

import android.content.Context;
import com.android.installreferrer.api.InstallReferrerClient;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ng, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2327ng implements Va {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ICommonExecutor f6226a;
    public final InstallReferrerClient b;

    public C2327ng(Context context, ICommonExecutor iCommonExecutor) {
        this.f6226a = iCommonExecutor;
        this.b = InstallReferrerClient.newBuilder(context).build();
    }

    public static final void b(InterfaceC2576xg interfaceC2576xg, Throwable th) {
        interfaceC2576xg.a(th);
    }

    @Override // io.appmetrica.analytics.impl.Va
    public final void a(InterfaceC2576xg interfaceC2576xg) throws Throwable {
        this.b.startConnection(new C2302mg(this, interfaceC2576xg));
    }

    public final void a(final InterfaceC2576xg interfaceC2576xg, final Throwable th) {
        this.f6226a.execute(new Runnable() { // from class: io.appmetrica.analytics.impl.ng$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                C2327ng.b(interfaceC2576xg, th);
            }
        });
    }
}
