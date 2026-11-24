package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｕ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1127 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1101 f3969;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ int f3970;

    public C1127(C1101 c1101, int i) {
        this.f3969 = c1101;
        this.f3970 = i;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        int iOptInt;
        JSONObject jSONObject;
        C0764 c0764 = this.f3969.f3930;
        if (this.f3970 >= c0764.f2618.m8707().m8680()) {
            iOptInt = 0;
        } else {
            C0763 c0763 = c0764.f2618;
            if (c0763.m8707() == null || ((C0896) AbstractC0895.m8747()).f3168) {
                iOptInt = 100;
            } else {
                C0742 c0742M8707 = c0763.m8707();
                synchronized (c0742M8707) {
                    jSONObject = c0742M8707.f2592;
                }
                iOptInt = jSONObject.optInt(StringFog.decrypt("qhbD\n", "z2W3UOEVYUs=\n"), c0742M8707.f2555);
            }
        }
        C0763 c0765 = c0764.f2618;
        c0765.f2612.removeCallbacksAndMessages(null);
        c0765.f2612.postDelayed(new C0962(c0765), iOptInt);
    }
}
