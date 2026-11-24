package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.o, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1768o implements InterfaceC1079 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1770p f469;

    public C1768o(C1770p c1770p) {
        this.f469 = c1770p;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1079
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void mo8401() {
        JSONObject jSONObject;
        C0742 c0742 = ((C0896) AbstractC0895.m8747()).f3177;
        synchronized (c0742) {
            jSONObject = c0742.f2592;
        }
        long jOptLong = jSONObject.optLong(C0742.f2552, 0L);
        if (jOptLong == 0) {
            this.f469.f478 = Boolean.FALSE;
            jOptLong = c0742.m8678();
            AbstractC1104.m8887(StringFog.decrypt("eTCZmj2CefZdCo2RLZ5q9EMwjpo8\n", "LVn0/072GJs=\n"), StringFog.decrypt("iB6rZQf0KD7tC7x+Ab0vN+0fvHgDsTNwuQW0bwagID29\n", "zWzZCnXUQVA=\n"), (Throwable) null, false);
        } else {
            this.f469.f478 = Boolean.TRUE;
        }
        this.f469.f477 = c0742.m8677();
        this.f469.f476 = c0742.m8678();
        C1770p c1770p = this.f469;
        c1770p.f475 = jOptLong - c1770p.f477;
        c1770p.f474 = jOptLong - c1770p.f476;
    }
}
