package com.ironsource.adqualitysdk.sdk.i;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʖ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0273 extends BroadcastReceiver {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ C1137 f981;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ List f982;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f983;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0704 f984;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0944 f985;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ boolean f986;

    public C0273(C1137 c1137, C0944 c0944, C1013 c1013, C0704 c0704, List list, boolean z) {
        this.f981 = c1137;
        this.f986 = z;
        this.f985 = c0944;
        this.f984 = c0704;
        this.f983 = c1013;
        this.f982 = list;
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        try {
            if (!this.f986) {
                AbstractC1766n.m8385(new C0287(this, context, intent));
                return;
            }
            C0944 c0944 = this.f985;
            C0704 c0704 = this.f984;
            C1013 c1013 = this.f983;
            ArrayList arrayListM8913 = C1137.m8913(this.f981, this.f982, new Object[]{this, context, intent});
            c0944.getClass();
            c0944.m8820(c0704, c0704.f2434, c1013, arrayListM8913);
        } catch (Throwable th) {
            AbstractC1104.m8887(this.f983.m8859(), StringFog.decrypt("kJtyGVH0Rtr1q3IZQrBM1aadUhNAsUbCsJsgH02nRtCwyQ==\n", "1ekAdiPUL7Q=\n") + this.f985.f3335, th, false);
        }
    }
}
