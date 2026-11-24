package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᗁ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0751 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final /* synthetic */ C0747 f2573;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ C0871 f2574;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ boolean f2575;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f2576;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f2577;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f2578;

    public C0751(C0747 c0747, String str, JSONObject jSONObject, JSONObject jSONObject2, boolean z, C0871 c0871) {
        this.f2573 = c0747;
        this.f2578 = str;
        this.f2577 = jSONObject;
        this.f2576 = jSONObject2;
        this.f2575 = z;
        this.f2574 = c0871;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() throws JSONException {
        if (this.f2578.equals(StringFog.decrypt("s21X7Vqgz4G0aWnsSw==\n", "xx0Inj/TvN4=\n"))) {
            this.f2573.f2563++;
        }
        C0747 c0747 = this.f2573;
        int i = c0747.f2562;
        c0747.f2562 = i + 1;
        JSONObject jSONObjectM8815 = AbstractC0939.m8815(this.f2577, false);
        jSONObjectM8815.put(StringFog.decrypt("NuoyKg==\n", "WItfTz53dsM=\n"), this.f2578);
        jSONObjectM8815.put(StringFog.decrypt("y/E=\n", "rp9W4rpMTuM=\n"), i);
        String strDecrypt = StringFog.decrypt("24UFd37waPnE\n", "r/dkFBuSCZo=\n");
        JSONObject jSONObject = this.f2576;
        if (jSONObject != null) {
            strDecrypt = jSONObject.optString(AbstractC1033.f3763);
            String str = AbstractC1033.f3717;
            jSONObjectM8815.put(str, this.f2576.optString(str, null));
        }
        if (TextUtils.isEmpty(strDecrypt)) {
            strDecrypt = StringFog.decrypt("MjZ3Mw==\n", "XFkZVj9wxIM=\n");
        }
        jSONObjectM8815.put(AbstractC1033.f3762, strDecrypt);
        String str2 = AbstractC1033.f3761;
        if (!jSONObjectM8815.has(str2)) {
            jSONObjectM8815.put(str2, strDecrypt);
        }
        AbstractC1766n.m8385(new C0756(this, this.f2573.mo8468(jSONObjectM8815, this.f2575, true, this.f2578.equals(StringFog.decrypt("2bkTQ5vYXA==\n", "rclMKvWxKHY=\n")))));
    }
}
