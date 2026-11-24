package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import io.sentry.protocol.Message;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class k8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f4680a;
    public final j b;
    public final String c;
    public final Context d;

    public k8(j jVar, String str, boolean z, Context context) {
        this.b = jVar;
        this.c = str;
        this.f4680a = z;
        this.d = context;
    }

    public static k8 a(j jVar, String str, boolean z, Context context) {
        return new k8(jVar, str, z, context);
    }

    public j8 a(j8 j8Var, JSONObject jSONObject) {
        if (j8Var == null) {
            String strOptString = jSONObject.optString("customReferenceData", null);
            if (strOptString != null && strOptString.length() > 256) {
                a("Bad value", "customReferenceData more then 256 symbols");
                strOptString = null;
            }
            j8Var = j8.a(jSONObject.optString("contentUrl", null), strOptString);
        }
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("resources");
        if (jSONArrayOptJSONArray != null) {
            a(jSONArrayOptJSONArray, j8Var);
        }
        return j8Var;
    }

    public final void a(JSONArray jSONArray, j8 j8Var) {
        ob obVarA;
        int length = jSONArray.length();
        for (int i = 0; i < length; i++) {
            JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
            if (jSONObjectOptJSONObject != null) {
                if (!jSONObjectOptJSONObject.has("url")) {
                    a("Required field", "VerificationScriptResource has no url");
                } else {
                    String strOptString = jSONObjectOptJSONObject.optString("url");
                    if (jSONObjectOptJSONObject.has("vendorKey") && jSONObjectOptJSONObject.has(Message.JsonKeys.PARAMS)) {
                        String strOptString2 = jSONObjectOptJSONObject.optString("vendorKey");
                        String strOptString3 = jSONObjectOptJSONObject.optString(Message.JsonKeys.PARAMS);
                        if (TextUtils.isEmpty(strOptString2) || TextUtils.isEmpty(strOptString3)) {
                            gb.a("VerificationScriptResource has empty param: vendorKey=" + strOptString2 + ", verificationParameters=" + strOptString3);
                        } else {
                            obVarA = ob.a(strOptString, strOptString2, strOptString3);
                        }
                    } else {
                        obVarA = ob.a(strOptString);
                    }
                    j8Var.c.add(obVarA);
                }
            }
        }
    }

    public final void a(String str, String str2) {
        if (this.f4680a) {
            q5.a(str).f(str2).a(this.b.i()).c(this.c).b(this.d);
        }
    }
}
