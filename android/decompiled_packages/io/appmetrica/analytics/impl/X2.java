package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.servicecomponents.batteryinfo.BatteryInfo;
import io.appmetrica.analytics.coreapi.internal.servicecomponents.batteryinfo.ChargeType;
import io.appmetrica.analytics.coreapi.internal.servicecomponents.batteryinfo.ChargeTypeChangeListener;
import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;
import java.util.Iterator;

/* JADX INFO: loaded from: classes7.dex */
public final class X2 extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ BatteryInfo f5950a;
    public final /* synthetic */ Y2 b;

    public X2(Y2 y2, BatteryInfo batteryInfo) {
        this.b = y2;
        this.f5950a = batteryInfo;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        Z2 z2 = this.b.f5964a;
        ChargeType chargeType = this.f5950a.chargeType;
        ChargeType chargeType2 = Z2.d;
        synchronized (z2) {
            Iterator it = z2.c.iterator();
            while (it.hasNext()) {
                ((ChargeTypeChangeListener) it.next()).onChargeTypeChanged(chargeType);
            }
        }
    }
}
