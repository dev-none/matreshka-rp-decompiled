package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﮐ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1040 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1006 f3775;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Activity f3776;

    public C1040(C1006 c1006, Activity activity) {
        this.f3775 = c1006;
        this.f3776 = activity;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        if (C1006.m8854(this.f3775, this.f3776)) {
            AbstractC1766n.m8388(new C1050(this));
            C1006 c1006 = this.f3775;
            c1006.f3639 = false;
            c1006.f3640 = true;
            if ((!c1006.f3641 || c1006.f3638) && !this.f3776.isFinishing()) {
                C1006 c1007 = this.f3775;
                Activity activity = this.f3776;
                c1007.getClass();
                String hexString = Integer.toHexString(activity.hashCode());
                if (c1007.f3641) {
                    JSONObject jSONObject = new JSONObject();
                    try {
                        jSONObject.put(AbstractC1033.f3714, true);
                    } catch (JSONException e) {
                        AbstractC0323.m8470(C1006.f3636, StringFog.decrypt("Tf4/myjEtgZs5SOTeoC4LGf4HpE0gPcWZ6wnhzWK7UI=\n", "CIxN9Frk12I=\n") + e.getLocalizedMessage());
                    }
                    c1007.m8486(jSONObject, activity, hexString);
                } else {
                    c1007.f3641 = true;
                    c1007.m8486(new JSONObject(), activity, hexString);
                }
            }
            this.f3775.f3638 = false;
        }
    }
}
