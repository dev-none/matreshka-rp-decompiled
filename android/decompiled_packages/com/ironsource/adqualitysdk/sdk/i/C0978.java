package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.亅, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0978 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0964 f3418;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3419;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f3420;

    public C0978(C0964 c0964, String str, JSONObject jSONObject) {
        this.f3418 = c0964;
        this.f3420 = str;
        this.f3419 = jSONObject;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0964 c0964 = this.f3418;
        String str = this.f3420;
        JSONObject jSONObject = this.f3419;
        if (c0964.f3382) {
            return;
        }
        C0763 c0763 = c0964.f3386.f1796.f4002;
        if (c0763 != null) {
            c0763.m8710(str, jSONObject);
            return;
        }
        AbstractC0323.m8470(C1142.f3996, str + StringFog.decrypt("7lDbzmJQJGi6HpmaI00gardK3dkxAzZnvR7a1TYDInSrX8DfJg==\n", "zj60ukIjQQY=\n"));
    }
}
