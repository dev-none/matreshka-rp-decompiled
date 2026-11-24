package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴝ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0782 implements InterfaceC0489 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0763 f2638;

    public C0782(C0763 c0763) {
        this.f2638 = c0763;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static JSONObject m8720(C0782 c0782, Activity activity) {
        c0782.getClass();
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(StringFog.decrypt("dUVtW3tPVw==\n", "FCYZFRoiMhs=\n"), activity.getClass().getName());
            return jSONObject;
        } catch (JSONException unused) {
            AbstractC0323.m8470(StringFog.decrypt("2vFz6Y6NfvDo\n", "m58Shff5F5M=\n"), StringFog.decrypt("XWIl1qbImCN8eTne9ImaM3FmPs2tyJcmdXU=\n", "GBBXudTo+Uc=\n"));
            return jSONObject;
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0489
    /* JADX INFO: renamed from: ﾇ */
    public final void mo8548(Activity activity) {
        AbstractC1766n.m8385(new C0786(this, activity));
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0489
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8549(Activity activity) {
        AbstractC1766n.m8385(new C0788(this, activity));
    }
}
