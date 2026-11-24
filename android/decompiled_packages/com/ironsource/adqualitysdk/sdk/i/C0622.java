package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collections;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒃ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0622 implements InterfaceC0489 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f2167;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ ArrayList f2168;

    public C0622(C1013 c1013, ArrayList arrayList) {
        this.f2167 = c1013;
        this.f2168 = arrayList;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0489
    /* JADX INFO: renamed from: ﾇ */
    public final void mo8548(Activity activity) {
        String strDecrypt = StringFog.decrypt("P54zxXViD5c1gwHFZHIY\n", "UPB1qhYXfMU=\n");
        if (C1013.m8857(this.f2167, activity, this.f2168)) {
            String strM8497 = AbstractC0343.m8497("jXnq7YklToiAYOnfgyheieI=\n", "zAmaq+ZGO/s=\n", new StringBuilder(), strDecrypt);
            C1013.m8856(this.f2167, strM8497, true, false, Collections.singletonList(activity));
            AbstractC1766n.m8385(new C0663(this, strM8497, activity));
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0489
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8549(Activity activity) {
        String strDecrypt = StringFog.decrypt("hPawAIkW8+mE64I=\n", "65j2b+pjgKU=\n");
        if (C1013.m8857(this.f2167, activity, this.f2168)) {
            String strM8497 = AbstractC0343.m8497("jXnq7YklToiAYOnfgyheieI=\n", "zAmaq+ZGO/s=\n", new StringBuilder(), strDecrypt);
            C1013.m8856(this.f2167, strM8497, true, false, Collections.singletonList(activity));
            AbstractC1766n.m8385(new C0663(this, strM8497, activity));
        }
    }
}
