package com.my.target;

import android.content.Context;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class sa extends q implements e6.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f4817a;

    public final na b(JSONObject jSONObject, u uVar, j jVar, n nVar, Context context) {
        oa oaVarA = oa.a(uVar, jVar, context);
        na naVarO = na.O();
        if (oaVarA.a(jSONObject, naVarO, this.f4817a, nVar)) {
            return naVarO;
        }
        return null;
    }

    public static q a() {
        return new sa();
    }

    @Override // com.my.target.e6.a
    public t a(JSONObject jSONObject, u uVar, j jVar, n nVar, Context context) {
        try {
            JSONArray jSONArray = new JSONArray();
            jSONArray.put(jSONObject);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("banners", jSONArray);
            new JSONObject().put(jVar.h(), jSONObject2);
            ua uaVarE = ua.e();
            na naVarB = b(jSONObject, uVar, jVar, nVar, context);
            if (naVarB == null) {
                nVar.a(m.r);
                return null;
            }
            uaVarE.a(naVarB);
            return uaVarE;
        } catch (Throwable unused) {
            nVar.a(m.k);
            return null;
        }
    }

    @Override // com.my.target.q
    public ua a(String str, u uVar, ua uaVar, j jVar, h6.a aVar, h6 h6Var, List list, n nVar, Context context) {
        n nVar2;
        JSONObject jSONObjectOptJSONObject;
        JSONObject jSONObjectOptJSONObject2;
        x5 x5VarB;
        JSONObject jSONObjectA = q.a(str, aVar, h6Var, list, nVar);
        if (jSONObjectA == null) {
            nVar.a(m.j);
            return null;
        }
        if (uaVar == null) {
            uaVar = ua.e();
        }
        this.f4817a = jSONObjectA.optString("mraid.js");
        JSONObject jSONObjectA2 = a(jSONObjectA, jVar.h());
        if (jSONObjectA2 == null) {
            if (jVar.k() && (jSONObjectOptJSONObject2 = jSONObjectA.optJSONObject("mediation")) != null && (x5VarB = e6.a(this, uVar, jVar, context).b(jSONObjectOptJSONObject2, nVar)) != null) {
                uaVar.a(x5VarB);
                return uaVar;
            }
            nVar.a(m.m);
            return null;
        }
        JSONArray jSONArrayOptJSONArray = jSONObjectA2.optJSONArray("banners");
        if (jSONArrayOptJSONArray != null && jSONArrayOptJSONArray.length() > 0) {
            va.a().a(jSONObjectA2, uaVar);
            if (jSONArrayOptJSONArray.length() <= 0 || (jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(0)) == null) {
                nVar2 = nVar;
            } else {
                nVar2 = nVar;
                na naVarB = b(jSONObjectOptJSONObject, uVar, jVar, nVar2, context);
                if (naVarB != null) {
                    uaVar.a(naVarB);
                    return uaVar;
                }
            }
            nVar2.a(m.r);
            return null;
        }
        nVar.a(m.r);
        return null;
    }

    private JSONObject a(JSONObject jSONObject, String str) {
        str.getClass();
        str.hashCode();
        switch (str) {
            case "standard_320x50":
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("standard");
                return jSONObjectOptJSONObject != null ? jSONObjectOptJSONObject : jSONObject.optJSONObject("standard_320x50");
            case "standard_728x90":
                JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject("standard");
                return jSONObjectOptJSONObject2 != null ? jSONObjectOptJSONObject2 : jSONObject.optJSONObject("standard_728x90");
            case "standard":
                JSONObject jSONObjectOptJSONObject3 = jSONObject.optJSONObject("standard");
                if (jSONObjectOptJSONObject3 == null) {
                    jSONObjectOptJSONObject3 = jSONObject.optJSONObject("standard_320x50");
                }
                return jSONObjectOptJSONObject3 != null ? jSONObjectOptJSONObject3 : jSONObject.optJSONObject("standard_728x90");
            default:
                return jSONObject.optJSONObject(str);
        }
    }
}
