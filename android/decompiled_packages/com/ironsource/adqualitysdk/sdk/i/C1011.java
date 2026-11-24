package com.ironsource.adqualitysdk.sdk.i;

import java.util.HashSet;
import java.util.Iterator;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.כֿ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1011 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0935 f3651;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3652;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f3653;

    public C1011(C0935 c0935, String str, JSONObject jSONObject) {
        this.f3651 = c0935;
        this.f3653 = str;
        this.f3652 = jSONObject;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0935 c0935 = this.f3651;
        String str = this.f3653;
        JSONObject jSONObject = this.f3652;
        c0935.getClass();
        Iterator it = new HashSet(c0935.f3306).iterator();
        while (it.hasNext()) {
            JSONObject jSONObjectMo8566 = ((InterfaceC0652) it.next()).mo8566(str, jSONObject);
            if (jSONObjectMo8566 != null) {
                AbstractC0939.m8817(jSONObject, jSONObjectMo8566, false);
            }
        }
        JSONObject jSONObject2 = new JSONObject();
        try {
            String str2 = AbstractC1033.f3763;
            jSONObject2.put(str2, jSONObject.remove(str2));
            String str3 = AbstractC1033.f3717;
            jSONObject2.put(str3, jSONObject.remove(str3));
        } catch (JSONException unused) {
        }
        c0935.f3307.m8711(str, jSONObject, jSONObject2, new C0980(c0935, str));
    }
}
