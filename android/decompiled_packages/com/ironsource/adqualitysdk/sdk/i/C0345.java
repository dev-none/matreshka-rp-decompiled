package com.ironsource.adqualitysdk.sdk.i;

import android.os.SystemClock;
import com.ironsource.adqualitysdk.sdk.ISAdQualityInitError;
import com.ironsource.adqualitysdk.sdk.ISAdQualityInitListener;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ϛ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0345 implements ISAdQualityInitListener {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0324 f1328;

    public C0345(C0324 c0324) {
        this.f1328 = c0324;
    }

    @Override // com.ironsource.adqualitysdk.sdk.ISAdQualityInitListener
    public final void adQualitySdkInitFailed(ISAdQualityInitError iSAdQualityInitError, String str) {
        C0964 c0964 = this.f1328.f1190.f3999;
        c0964.m8827(c0964.f3387, iSAdQualityInitError, str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.ISAdQualityInitListener
    public final void adQualitySdkInitSuccess() {
        long j;
        C0964 c0964 = this.f1328.f1190.f3999;
        if (c0964.f3383) {
            String strDecrypt = StringFog.decrypt("lpof+GSpxVOojRvEbqLfVKidD8thpc1EnA==\n", "9/5upw3HrCc=\n");
            JSONObject jSONObject = new JSONObject();
            try {
                String strDecrypt2 = StringFog.decrypt("txGB\n", "3nX13wmJWOA=\n");
                synchronized (c0964) {
                    j = c0964.f3385;
                }
                if (j > 0) {
                    String str = AbstractC0202.f862;
                    jSONObject.put(strDecrypt2, SystemClock.elapsedRealtime() - j);
                }
            } catch (JSONException unused) {
            }
            if (c0964.f3384.compareAndSet(false, true)) {
                AbstractC1766n.m8388(new C0978(c0964, strDecrypt, jSONObject));
            }
        }
        AbstractC1766n.m8384(new C0981(c0964));
    }
}
