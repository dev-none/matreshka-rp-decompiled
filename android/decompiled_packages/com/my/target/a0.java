package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class a0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final u f4519a;
    public final j b;
    public final Context c;
    public final db d;

    public a0(u uVar, j jVar, Context context) {
        this.f4519a = uVar;
        this.b = jVar;
        this.c = context;
        this.d = db.a(uVar, jVar, context);
    }

    public static a0 a(u uVar, j jVar, Context context) {
        return new a0(uVar, jVar, context);
    }

    public u a(JSONObject jSONObject, n nVar) {
        JSONObject jSONObjectOptJSONObject;
        ya yaVarA;
        int iB = this.f4519a.B();
        Boolean boolValueOf = null;
        if (iB >= 5) {
            nVar.a(m.i);
            gb.a("AdditionalDataParser: Got additional data, but max redirects limit exceeded");
            return null;
        }
        int iOptInt = jSONObject.optInt("id", this.f4519a.s());
        String strOptString = jSONObject.optString("url");
        if (TextUtils.isEmpty(strOptString)) {
            nVar.a(m.n);
            a("Required field", "No url in additionalData Id = " + iOptInt);
            return null;
        }
        u uVarB = u.b(strOptString);
        uVarB.e(iB + 1);
        uVarB.c(iOptInt);
        uVarB.b(jSONObject.optBoolean("doAfter", uVarB.F()));
        uVarB.b(jSONObject.optInt("doOnEmptyResponseFromId", uVarB.r()));
        uVarB.c(jSONObject.optBoolean("isMidrollPoint", uVarB.H()));
        float fE = this.f4519a.e();
        if (fE < 0.0f) {
            fE = (float) jSONObject.optDouble("allowCloseDelay", uVarB.e());
        }
        uVarB.a(fE);
        Boolean boolD = this.f4519a.d();
        if (boolD == null) {
            boolD = jSONObject.has("allowClose") ? Boolean.valueOf(jSONObject.optBoolean("allowClose")) : null;
        }
        uVarB.b(boolD);
        Boolean boolF = this.f4519a.f();
        if (boolF == null) {
            boolF = jSONObject.has("hasPause") ? Boolean.valueOf(jSONObject.optBoolean("hasPause")) : null;
        }
        uVarB.c(boolF);
        Boolean boolH = this.f4519a.h();
        if (boolH == null) {
            boolH = jSONObject.has("allowSeek") ? Boolean.valueOf(jSONObject.optBoolean("allowSeek")) : null;
        }
        uVarB.e(boolH);
        Boolean boolI = this.f4519a.i();
        if (boolI == null) {
            boolI = jSONObject.has("allowSkip") ? Boolean.valueOf(jSONObject.optBoolean("allowSkip")) : null;
        }
        uVarB.f(boolI);
        Boolean boolJ = this.f4519a.j();
        if (boolJ == null) {
            boolJ = jSONObject.has("allowTrackChange") ? Boolean.valueOf(jSONObject.optBoolean("allowTrackChange")) : null;
        }
        uVarB.g(boolJ);
        Boolean boolX = this.f4519a.x();
        if (boolX == null) {
            boolX = jSONObject.has("openInBrowser") ? Boolean.valueOf(jSONObject.optBoolean("openInBrowser")) : null;
        }
        uVarB.l(boolX);
        Boolean boolQ = this.f4519a.q();
        if (boolQ == null) {
            boolQ = jSONObject.has("directLink") ? Boolean.valueOf(jSONObject.optBoolean("directLink")) : null;
        }
        uVarB.j(boolQ);
        Boolean boolG = this.f4519a.g();
        if (boolG == null) {
            boolG = jSONObject.has("allowReplay") ? Boolean.valueOf(jSONObject.optBoolean("allowReplay")) : null;
        }
        uVarB.d(boolG);
        Boolean boolC = this.f4519a.c();
        if (boolC == null) {
            boolC = jSONObject.has("allowBackButton") ? Boolean.valueOf(jSONObject.optBoolean("allowBackButton")) : null;
        }
        uVarB.a(boolC);
        Boolean boolK = this.f4519a.k();
        if (boolK == null) {
            boolK = jSONObject.has("automute") ? Boolean.valueOf(jSONObject.optBoolean("automute")) : null;
        }
        uVarB.h(boolK);
        Boolean boolL = this.f4519a.l();
        if (boolL == null) {
            boolL = jSONObject.has("autoplay") ? Boolean.valueOf(jSONObject.optBoolean("autoplay")) : null;
        }
        uVarB.i(boolL);
        int iC = this.f4519a.C();
        if (iC < 0) {
            iC = jSONObject.optInt("style", uVarB.C());
        }
        uVarB.f(iC);
        int iN = this.f4519a.n();
        if (iN < 0) {
            iN = jSONObject.optInt("clickArea", uVarB.n());
        }
        uVarB.a(iN);
        Boolean boolG2 = this.f4519a.G();
        if (boolG2 != null) {
            boolValueOf = boolG2;
        } else if (jSONObject.has("logErrors")) {
            boolValueOf = Boolean.valueOf(jSONObject.optBoolean("logErrors"));
        }
        uVarB.k(boolValueOf);
        float fY = this.f4519a.y();
        if (fY < 0.0f && jSONObject.has("point")) {
            fY = (float) jSONObject.optDouble("point");
            if (fY < 0.0f) {
                a("Bad value", "Wrong value -1.0 for point in additionalData object");
                fY = -1.0f;
            }
        }
        uVarB.b(fY);
        float fZ = this.f4519a.z();
        if (fZ < 0.0f && jSONObject.has("pointP")) {
            fZ = (float) jSONObject.optDouble("pointP");
            if (fZ < 0.0f || fZ > 100.0f) {
                a("Bad value", "Wrong value " + fZ + " for pointP in additionalData object");
                fZ = -1.0f;
            }
        }
        uVarB.c(fZ);
        uVarB.a(this.f4519a.t());
        uVarB.a(a(this.f4519a.v(), jSONObject.optJSONObject("omdata")));
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("serviceStatistics");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                JSONObject jSONObjectOptJSONObject2 = jSONArrayOptJSONArray.optJSONObject(i);
                if (jSONObjectOptJSONObject2 != null && (yaVarA = this.d.a(jSONObjectOptJSONObject2, -1.0f)) != null) {
                    uVarB.a(yaVarA);
                }
            }
        }
        this.d.a(uVarB.m(), jSONObject, String.valueOf(uVarB.s()), -1.0f);
        c cVarA = this.f4519a.a();
        if (cVarA == null && (jSONObjectOptJSONObject = jSONObject.optJSONObject("adChoices")) != null) {
            cVarA = h.a().a(jSONObjectOptJSONObject, (String) null, uVarB.f4826a, this.b.i(), boolValueOf != null ? boolValueOf.booleanValue() : true, i0.d, this.c);
        }
        uVarB.a(cVarA);
        String strB = this.f4519a.b();
        if (strB == null && jSONObject.has("advertisingLabel")) {
            strB = jSONObject.optString("advertisingLabel");
        }
        uVarB.c(strB);
        return uVarB;
    }

    public final j8 a(j8 j8Var, JSONObject jSONObject) {
        return jSONObject == null ? j8Var : k8.a(this.b, this.f4519a.b, true, this.c).a(j8Var, jSONObject);
    }

    public final void a(String str, String str2) {
        String str3 = this.f4519a.f4826a;
        q5 q5VarA = q5.a(str).f(str2).a(this.b.i());
        if (str3 == null) {
            str3 = this.f4519a.b;
        }
        q5VarA.c(str3).b(this.c);
    }
}
