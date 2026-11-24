package com.ironsource.adqualitysdk.sdk.i;

import android.os.Handler;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.з, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0365 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0331 f1364;

    public C0365(C0331 c0331) {
        this.f1364 = c0331;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C1003 c1003 = this.f1364.f1211;
        if (c1003 != null) {
            Handler handler = c1003.f3630;
            if (handler != null) {
                handler.removeCallbacksAndMessages(null);
            }
            c1003.f3630 = null;
            this.f1364.f1211 = null;
        }
        this.f1364.getClass();
        HashMap map = this.f1364.f1212;
        if (map != null) {
            map.clear();
        }
    }
}
