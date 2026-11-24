package io.appmetrica.analytics.impl;

import android.telephony.TelephonyManager;
import io.appmetrica.analytics.coreapi.internal.backport.FunctionWithThrowable;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ql, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2407ql implements FunctionWithThrowable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2431rl f6279a;

    public C2407ql(C2431rl c2431rl) {
        this.f6279a = c2431rl;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.backport.FunctionWithThrowable
    public final Object apply(Object obj) {
        TelephonyManager telephonyManager = (TelephonyManager) obj;
        C2431rl c2431rl = this.f6279a;
        if (c2431rl.b.hasPermission(c2431rl.f6300a, "android.permission.READ_PHONE_STATE")) {
            return Boolean.valueOf(telephonyManager.isNetworkRoaming());
        }
        return null;
    }
}
