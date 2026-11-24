package com.ironsource.adqualitysdk.sdk.i;

import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class U0 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ V0 f260;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ WebView f261;

    public U0(V0 v0, WebView webView) {
        this.f260 = v0;
        this.f261 = webView;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        String strReplace;
        JSONObject jSONObject;
        V0 v0 = this.f260;
        v0.getClass();
        String str = V0.f263.f255;
        try {
            String strDecrypt = StringFog.decrypt("SZDS/8L5MJ9Nndrj1/IyhleWxg==\n", "EsubsYi8c8s=\n");
            C0406 c0406 = ((C0896) AbstractC0895.m8747()).f3176;
            synchronized (c0406) {
                jSONObject = c0406.f2592;
            }
            String strReplace2 = str.replace(strDecrypt, jSONObject.optString(StringFog.decrypt("+shy\n", "kKEcOL4Zvwg=\n"), c0406.f1509)).replace(StringFog.decrypt("eL6J4MIoyvR8r5ny0g==\n", "I+XKr49lhbo=\n"), V0.f263.f254);
            strReplace = (v0.f265 ? strReplace2.replace(StringFog.decrypt("m5axDTlXIn2KnqkI\n", "wM30VW0FYyI=\n"), V0.f263.f253) : strReplace2.replace(StringFog.decrypt("9n2v06Dzeu7ndbfW\n", "rSbqi/ShO7E=\n"), "")).replace(StringFog.decrypt("a0QoD9t0WiJkUDkf32lCPA==\n", "MB9rQJU6H2E=\n"), v0.f266);
        } catch (Throwable th) {
            AbstractC0323.m8470(V0.f264, StringFog.decrypt("KZZg5zDTRVVMg3f8CIB4VCWKeO0hhxYb\n", "bOQSiELzLDs=\n") + th.getLocalizedMessage());
            strReplace = str;
        }
        AbstractC1766n.m8384(new T0(this, AbstractC0389.m8504(strReplace.getBytes())));
    }
}
