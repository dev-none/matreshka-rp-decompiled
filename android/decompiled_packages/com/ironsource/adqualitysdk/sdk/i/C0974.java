package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.丶, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0974 implements InterfaceC1023 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0941 f3415;

    public C0974(C0941 c0941) {
        this.f3415 = c0941;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1023
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8595(String str) {
        C0941 c0941 = this.f3415;
        c0941.getClass();
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            c0941.f3319 = new JSONObject(str);
        } catch (JSONException unused) {
        }
    }
}
