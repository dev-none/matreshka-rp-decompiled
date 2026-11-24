package com.ironsource.adqualitysdk.sdk.i;

import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.爫, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0986 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0966 f3516;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0189 f3517;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3518;

    public C0986(C0966 c0966, JSONObject jSONObject, C0189 c0189) {
        this.f3516 = c0966;
        this.f3518 = jSONObject;
        this.f3517 = c0189;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        String strM8828 = C0966.m8828(this.f3516, this.f3518);
        m1 m1Var = (m1) this.f3516.f3389.get(strM8828);
        if (m1Var == null) {
            m1Var = new m1(this.f3518);
            this.f3516.f3389.put(strM8828, m1Var);
        } else {
            m1Var.m8383(this.f3518);
        }
        m1Var.f3380 = this.f3517;
    }
}
