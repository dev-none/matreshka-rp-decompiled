package io.appmetrica.analytics.impl;

import com.android.installreferrer.api.InstallReferrerClient;
import com.android.installreferrer.api.InstallReferrerStateListener;
import com.android.installreferrer.api.ReferrerDetails;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.mg, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2302mg implements InstallReferrerStateListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2327ng f6209a;
    public final /* synthetic */ InterfaceC2576xg b;

    public C2302mg(C2327ng c2327ng, InterfaceC2576xg interfaceC2576xg) {
        this.f6209a = c2327ng;
        this.b = interfaceC2576xg;
    }

    public static final void a(C2327ng c2327ng, InterfaceC2576xg interfaceC2576xg) {
        InstallReferrerClient installReferrerClient;
        try {
            try {
                ReferrerDetails installReferrer = c2327ng.b.getInstallReferrer();
                interfaceC2576xg.a(new C2451sg(installReferrer.getInstallReferrer(), installReferrer.getReferrerClickTimestampSeconds(), installReferrer.getInstallBeginTimestampSeconds(), EnumC2426rg.c));
                installReferrerClient = c2327ng.b;
            } catch (Throwable unused) {
                return;
            }
        } catch (Throwable th) {
            try {
                interfaceC2576xg.a(th);
                installReferrerClient = c2327ng.b;
            } catch (Throwable th2) {
                try {
                    c2327ng.b.endConnection();
                    throw th2;
                } catch (Throwable unused2) {
                    throw th2;
                }
            }
        }
        installReferrerClient.endConnection();
    }

    @Override // com.android.installreferrer.api.InstallReferrerStateListener
    public final void onInstallReferrerServiceDisconnected() {
    }

    @Override // com.android.installreferrer.api.InstallReferrerStateListener
    public final void onInstallReferrerSetupFinished(int i) {
        if (i == 0) {
            final C2327ng c2327ng = this.f6209a;
            ICommonExecutor iCommonExecutor = c2327ng.f6226a;
            final InterfaceC2576xg interfaceC2576xg = this.b;
            iCommonExecutor.execute(new Runnable() { // from class: io.appmetrica.analytics.impl.mg$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    C2302mg.a(c2327ng, interfaceC2576xg);
                }
            });
            return;
        }
        this.f6209a.a(this.b, new IllegalStateException("Referrer check failed with error " + i));
    }
}
