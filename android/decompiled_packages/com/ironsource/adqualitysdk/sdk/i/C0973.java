package com.ironsource.adqualitysdk.sdk.i;

import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.丫, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0973 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C0966 f3411;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C1156 f3412;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0433 f3413;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3414;

    public C0973(C0966 c0966, JSONObject jSONObject, C0433 c0433, C1156 c1156) {
        this.f3411 = c0966;
        this.f3414 = jSONObject;
        this.f3413 = c0433;
        this.f3412 = c1156;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        String strM8828 = C0966.m8828(this.f3411, this.f3414);
        C1767n0 c1767n0 = (C1767n0) this.f3411.f3388.get(strM8828);
        if (c1767n0 == null) {
            c1767n0 = new C1767n0(this.f3414, this.f3413);
            this.f3411.f3388.put(strM8828, c1767n0);
        } else {
            JSONObject jSONObject = this.f3414;
            C0433 c0433 = this.f3413;
            c1767n0.f461 = new C1765m0(jSONObject);
            c1767n0.f467 = c0433;
        }
        c1767n0.f3380 = this.f3412;
    }
}
