package com.ironsource.adqualitysdk.sdk.i;

import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᘅ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0756 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0751 f2586;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f2587;

    public C0756(C0751 c0751, JSONObject jSONObject) {
        this.f2586 = c0751;
        this.f2587 = jSONObject;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0871 c0871 = this.f2586.f2574;
        JSONObject jSONObject = this.f2587;
        c0871.f3124.f2605.m8411(jSONObject);
        C0763 c0763 = c0871.f3124;
        C0873 c0873 = new C0873(c0871);
        synchronized (c0763.f2614) {
        }
        c0763.m8712(jSONObject);
        c0763.f2614.getClass();
        C1141 c1141 = new C1141(jSONObject);
        C0760 c0760 = new C0760(c1141);
        C0742 c0742M8707 = c0763.m8707();
        c0760.m8693(c0742M8707.m8679(), c0742M8707.m8681());
        c0763.f2614.m8881(c1141, c0873);
        c0763.m8705(c0760.m8691());
    }
}
