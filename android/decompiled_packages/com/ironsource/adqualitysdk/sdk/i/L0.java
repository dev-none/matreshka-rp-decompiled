package com.ironsource.adqualitysdk.sdk.i;

import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.ref.WeakReference;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class L0 implements InterfaceC0252 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ M0 f226;

    public L0(M0 m0) {
        this.f226 = m0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0252
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void mo8330(WebView webView, String str, String str2) {
        WeakReference weakReference;
        String strSubstring = str2.substring(0, str2.indexOf(63));
        String strSubstring2 = str2.substring(str2.indexOf(63) + 1);
        if (strSubstring.equals(StringFog.decrypt("sNUqb9Ok\n", "w6FIDLLBj3I=\n"))) {
            this.f226.m8334(webView);
            return;
        }
        if (strSubstring.equals(StringFog.decrypt("X/WfS831\n", "LIH9KKyXUbw=\n"))) {
            JSONObject jSONObjectM8332 = M0.m8332(this.f226, strSubstring2);
            M0 m0 = this.f226;
            m0.mo8335(jSONObjectM8332, webView, m0.mo8336(webView));
            return;
        }
        if (strSubstring.equals(StringFog.decrypt("dD3hMAQz\n", "B0mDU2VSDaY=\n"))) {
            JSONObject jSONObjectM8333 = M0.m8332(this.f226, strSubstring2);
            M0 m1 = this.f226;
            Y0 y0 = m1.f232;
            m1.mo8356(jSONObjectM8333, webView, (y0 == null || (weakReference = y0.f347.f248) == null) ? null : (Q0) weakReference.get(), this.f226.mo8336(webView));
            return;
        }
        if (strSubstring.equals(StringFog.decrypt("FRpYXCOF\n", "Zm46P0LmCPw=\n"))) {
            JSONObject jSONObjectM8334 = M0.m8332(this.f226, strSubstring2);
            jSONObjectM8334.remove(AbstractC1033.f3758);
            M0 m2 = this.f226;
            m2.mo8351(jSONObjectM8334, webView, m2.mo8336(webView));
            return;
        }
        if (strSubstring.equals(StringFog.decrypt("icMNkj1I\n", "+rdv8Vws6A0=\n"))) {
            JSONObject jSONObjectM8335 = M0.m8332(this.f226, strSubstring2);
            try {
                AbstractC1104.m8885(jSONObjectM8335.optString(StringFog.decrypt("20DF\n", "ryGi6q2Zpsw=\n")), jSONObjectM8335.optString(StringFog.decrypt("wO6iKzs=\n", "pZzPWFybNO8=\n")), jSONObjectM8335.optString(StringFog.decrypt("Eqxbb1ur\n", "d944AD/OUNM=\n")), jSONObjectM8335.optString(StringFog.decrypt("vY+Q8cQ=\n", "2P3jha9eOq0=\n")));
            } catch (Throwable unused) {
            }
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0252
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void mo8331(WebView webView, String str, boolean z) {
        AbstractC1766n.m8388(new I0(this, webView, str, z));
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0252
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void mo8328(WebView webView) {
        this.f226.m8334(webView);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0252
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void mo8329(WebView webView, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(AbstractC1033.f3754, str);
            jSONObject.put(AbstractC1033.f3753, AbstractC1033.f3752);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(AbstractC1033.f3755, jSONObject);
            M0 m0 = this.f226;
            m0.mo8360(jSONObject2, webView, this, m0.mo8336(webView));
        } catch (Exception e) {
            AbstractC1104.m8887(StringFog.decrypt("ND1qJz+vRzEHEGkfMqZVAg==\n", "Y1gIcVbKMHA=\n"), StringFog.decrypt("75K9KLsRy+nPgbsup1aI7MmD7yK/VMbvioq8KKc=\n", "quDPR8kxqJs=\n"), (Throwable) e, false);
        }
    }
}
