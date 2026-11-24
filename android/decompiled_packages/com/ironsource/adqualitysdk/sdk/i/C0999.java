package com.ironsource.adqualitysdk.sdk.i;

import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.טּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0999 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ C0966 f3540;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C0730 f3541;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0219 f3542;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0434 f3543;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3544;

    public C0999(C0966 c0966, JSONObject jSONObject, C0434 c0434, C0219 c0219, C0730 c0730) {
        this.f3540 = c0966;
        this.f3544 = jSONObject;
        this.f3543 = c0434;
        this.f3542 = c0219;
        this.f3541 = c0730;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        String strM8828 = C0966.m8828(this.f3540, this.f3544);
        C1006 c1006 = (C1006) this.f3540.f3390.get(strM8828);
        if (c1006 == null) {
            c1006 = new C1006(this.f3544, this.f3543);
            this.f3540.f3390.put(strM8828, c1006);
        } else {
            c1006.f1197 = this.f3543;
            C1015 c1015 = new C1015(this.f3544);
            c1006.f1196 = c1015;
            c1006.f3637 = c1015;
            AbstractC1766n.m8385(new C1098(c1006));
        }
        c1006.f3380 = this.f3542;
        c1006.f3643 = this.f3541;
    }
}
