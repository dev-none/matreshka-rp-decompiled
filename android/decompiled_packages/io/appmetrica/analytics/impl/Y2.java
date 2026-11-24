package io.appmetrica.analytics.impl;

import android.content.Intent;
import io.appmetrica.analytics.coreapi.internal.backport.Consumer;
import io.appmetrica.analytics.coreapi.internal.servicecomponents.batteryinfo.BatteryInfo;
import io.appmetrica.analytics.coreapi.internal.servicecomponents.batteryinfo.ChargeType;

/* JADX INFO: loaded from: classes7.dex */
public final class Y2 implements Consumer {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Z2 f5964a;

    public Y2(Z2 z2) {
        this.f5964a = z2;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.backport.Consumer
    public final void consume(Object obj) {
        Intent intent = (Intent) obj;
        BatteryInfo batteryInfo = this.f5964a.b;
        ChargeType chargeType = batteryInfo == null ? null : batteryInfo.chargeType;
        this.f5964a.getClass();
        BatteryInfo batteryInfoA = Z2.a(intent);
        this.f5964a.b = batteryInfoA;
        if (chargeType != batteryInfoA.chargeType) {
            this.f5964a.f5979a.execute(new X2(this, batteryInfoA));
        }
    }
}
