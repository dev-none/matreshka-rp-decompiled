package com.ironsource.adqualitysdk.sdk.i;

import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.ref.WeakReference;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class J0 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ K0 f217;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Object f218;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f219;

    public J0(K0 k0, String str, Object obj) {
        this.f217 = k0;
        this.f219 = str;
        this.f218 = obj;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        WeakReference weakReference;
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(AbstractC1033.f3746, this.f217.f223);
            jSONObject.put(AbstractC1033.f3745, StringFog.decrypt("7SIo\n", "mlRLSwZDfMQ=\n"));
            jSONObject.put(AbstractC1033.f3757, this.f219);
            if (this.f217.f222) {
                jSONObject.put(AbstractC1033.f3756, true);
            }
        } catch (JSONException e) {
            AbstractC0323.m8470(StringFog.decrypt("mfy3nNwjXy+q0bSk0SpNHA==\n", "zpnVyrVGKG4=\n"), StringFog.decrypt("cnE44ALcsklSYj7mHpvxWFtqKeRQlqJUWTlq\n", "NwNKj3D80Ts=\n") + e.getLocalizedMessage());
        }
        K0 k0 = this.f217;
        M0 m0 = k0.f221.f226;
        WebView webView = k0.f224;
        Y0 y0 = m0.f232;
        m0.mo8362(jSONObject, webView, (y0 == null || (weakReference = y0.f347.f248) == null) ? null : (Q0) weakReference.get(), this.f218);
    }
}
