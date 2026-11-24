package io.appmetrica.analytics.impl;

import android.content.Context;
import android.content.pm.ServiceInfo;
import io.appmetrica.analytics.coreutils.internal.services.PackageManagerUtils;
import io.appmetrica.analytics.internal.AppMetricaService;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.j6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2215j6 extends Ug {
    public final Context f;
    public final Ah g;
    public final C2591y6 h;
    public final U1 i;
    public final C2491u6 j;

    public C2215j6(Context context, C2361p0 c2361p0, InterfaceC2076dl interfaceC2076dl, Ah ah) {
        super(c2361p0, interfaceC2076dl, ah);
        this.f = context;
        this.g = ah;
        this.h = C2213j4.l().i();
        this.i = C2213j4.l().f();
        this.j = new C2491u6(context);
    }

    @Override // io.appmetrica.analytics.impl.Ch
    public final synchronized void a() {
        if (this.c) {
            return;
        }
        this.c = true;
        String strA = this.h.f6410a.a();
        U1 u1 = this.i;
        Context context = this.f;
        u1.getClass();
        ServiceInfo serviceInfo = PackageManagerUtils.getServiceInfo(context, AppMetricaService.class);
        if (Intrinsics.areEqual(strA, serviceInfo != null ? serviceInfo.processName : null)) {
            this.j.a(this.g);
        } else {
            this.f5627a.c();
            this.c = false;
            super.a();
        }
    }

    @Override // io.appmetrica.analytics.impl.Ch
    public final boolean c() {
        this.j.a(this.g);
        return false;
    }

    @Override // io.appmetrica.analytics.impl.Ch, java.util.concurrent.Callable
    public final /* bridge */ /* synthetic */ Object call() {
        a();
        return Unit.INSTANCE;
    }
}
