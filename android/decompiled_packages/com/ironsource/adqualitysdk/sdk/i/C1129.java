package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.HashMap;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｚ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1129 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C1072 f3974;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0952 f3975;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ int f3976;

    public C1129(C1072 c1072, int i, C0952 c0952) {
        this.f3974 = c1072;
        this.f3976 = i;
        this.f3975 = c0952;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        HashMap map;
        ArrayList arrayList = new ArrayList();
        C1072 c1072 = this.f3974;
        C0783 c0783 = c1072.f3855;
        String str = c1072.f3856 + StringFog.decrypt("ZA==\n", "TjSIeA+Eb3M=\n");
        int i = this.f3976;
        C0385 c0385 = c0783.f2640;
        c0385.getClass();
        try {
            HashMap mapM8489 = c0385.f1449.m8489(str, i);
            map = new HashMap();
            for (String str2 : mapM8489.keySet()) {
                String str3 = (String) mapM8489.get(str2);
                if (str3 != null && !TextUtils.isEmpty(str3)) {
                    try {
                        map.put(str2, c0385.f1450.m8506(str3));
                    } catch (C0393 unused) {
                    }
                }
            }
        } catch (Throwable unused2) {
            map = null;
        }
        for (String str4 : map.values()) {
            try {
                JSONObject jSONObject = new JSONObject(str4);
                arrayList.add(new C1141(jSONObject.optString(StringFog.decrypt("CRQDCw==\n", "fGFqb/WlV14=\n")), jSONObject.getJSONObject(StringFog.decrypt("hVqcuZ2v7ec=\n", "9TXvzdnOmYY=\n"))));
            } catch (Exception unused3) {
                AbstractC0323.m8479(C1072.m8880(this.f3974), StringFog.decrypt("7RuYFu6w3hbcG5wb\n", "rnr7fovjqnk=\n"), AbstractC0343.m8497("mdLHqc8SH0D63sCgyghdFLnc0a3OGBhRrNjcsYVcS0Co1NyiiwpZWK/YiOU=\n", "2r2yxat8ODQ=\n", new StringBuilder(), str4), null, null, true);
            }
        }
        AbstractC1766n.m8385(new C1138(this, arrayList));
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8569(Throwable th) {
        super.mo8569(th);
        AbstractC1766n.m8385(new C1135(this));
    }
}
