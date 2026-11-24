package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ډ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0471 implements InterfaceC1079 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0324 f1741;

    public C0471(C0324 c0324) {
        this.f1741 = c0324;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1079
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8401() {
        String strM8660;
        C0964 c0964 = this.f1741.f1190.f3999;
        long jM8677 = ((C0896) AbstractC0895.m8747()).f3177.m8677();
        synchronized (c0964) {
            if (c0964.f3385 <= 0 && jM8677 > 0) {
                c0964.f3385 = jM8677;
            }
        }
        AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
        C0719 c0719 = this.f1741.f1190.f4000;
        C0941 c0941 = ((C0896) abstractC0895M8747).f2591;
        c0941.getClass();
        String strDecrypt = StringFog.decrypt("kaAB/zqUAUWO\n", "5dJgnF/2YCY=\n");
        String strDecrypt2 = StringFog.decrypt("3SXX\n", "6gvnfb5Jg1c=\n");
        C0974 c0974 = new C0974(c0941);
        c0719.getClass();
        C0673 c0673 = new C0673(strDecrypt, strDecrypt2);
        if (((C0896) AbstractC0895.m8747()).f3176.m8511()) {
            String strM8512 = ((C0896) AbstractC0895.m8747()).f3176.m8512(strDecrypt);
            if (TextUtils.isEmpty(strM8512)) {
                strM8660 = null;
            } else {
                c0673 = new C0672(strDecrypt, strDecrypt2, strM8512);
                strM8660 = c0719.m8660(c0673, c0974);
            }
        } else {
            strM8660 = c0719.m8660(c0673, c0974);
        }
        if (TextUtils.isEmpty(strM8660)) {
            return;
        }
        try {
            c0941.f3319 = new JSONObject(strM8660);
        } catch (JSONException unused) {
        }
    }
}
