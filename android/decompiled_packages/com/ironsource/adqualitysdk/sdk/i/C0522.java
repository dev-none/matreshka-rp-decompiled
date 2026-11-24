package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.গ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0522 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f1833;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0929 f1834;

    public C0522(C0418 c0418, C0929 c0929) {
        this.f1833 = c0418;
        this.f1834 = c0929;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() throws JSONException {
        JSONObject jSONObject = (JSONObject) C0418.m8517(this.f1833).get(this.f1834.f3284.f2309);
        jSONObject.put(StringFog.decrypt("c28ksg==\n", "GgFNxgSQOWI=\n"), false);
        jSONObject.put(StringFog.decrypt("O4s=\n", "XvMoirOnnxE=\n"), true);
    }
}
