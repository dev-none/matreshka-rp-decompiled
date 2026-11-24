package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᖾ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0748 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C0747 f2566;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0905 f2567;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONArray f2568;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ boolean f2569;

    public C0748(C0747 c0747, boolean z, JSONArray jSONArray, C0905 c0905) {
        this.f2566 = c0747;
        this.f2569 = z;
        this.f2568 = jSONArray;
        this.f2567 = c0905;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() throws JSONException {
        JSONObject jSONObjectMo8468 = this.f2566.mo8468(null, this.f2569, false, false);
        try {
            jSONObjectMo8468.put(StringFog.decrypt("Nk20/BlS\n", "UzvRkm0hT30=\n"), this.f2568);
        } catch (JSONException e) {
            String strDecrypt = StringFog.decrypt("DtInkXyQUj08+TCYa5B8OyHZNJxxi0k=\n", "T7xG/QXkO14=\n");
            AbstractC0323.m8479(strDecrypt, strDecrypt, StringFog.decrypt("Pq1xhU7SQFoevneDUpUDTQ26bZ5xl1dJ\n", "e98D6jzyIyg=\n"), e, null, false);
        }
        AbstractC1766n.m8385(new C0749(this, jSONObjectMo8468));
    }
}
