package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class oa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final u f4759a;
    public final j b;
    public final Context c;
    public final g1 d;
    public boolean e = true;

    public oa(u uVar, j jVar, Context context) {
        this.f4759a = uVar;
        this.b = jVar;
        this.c = context;
        this.d = g1.a(uVar, jVar, context);
    }

    public static oa a(u uVar, j jVar, Context context) {
        return new oa(uVar, jVar, context);
    }

    public boolean a(JSONObject jSONObject, na naVar, String str, n nVar) {
        this.d.a(jSONObject, naVar);
        this.e = naVar.J();
        if (!"html".equals(naVar.C())) {
            gb.a("StandardAdBannerParser: Standard banner with unsupported type " + naVar.C());
            return false;
        }
        if (jSONObject.has("timeout")) {
            int iOptInt = jSONObject.optInt("timeout");
            if (iOptInt >= 5) {
                naVar.e(iOptInt);
            } else {
                a("Required field", "Wrong banner timeout: " + iOptInt, naVar.r());
            }
        }
        String strA = g1.a(jSONObject, nVar);
        if (TextUtils.isEmpty(strA)) {
            nVar.a(m.q);
            a("Required field", "Banner has no source field", naVar.r());
            return false;
        }
        if (!TextUtils.isEmpty(str)) {
            naVar.t(str);
            String strA2 = g1.a(str, strA);
            if (strA2 != null) {
                naVar.u(strA2);
                naVar.r("mraid");
                strA = strA2;
            }
        }
        if (naVar.u() != null) {
            strA = l8.a(strA);
        }
        naVar.u(strA);
        return true;
    }

    public final void a(String str, String str2, String str3) {
        if (this.e) {
            String str4 = this.f4759a.f4826a;
            q5 q5VarD = q5.a(str).f(str2).a(this.b.i()).d(str3);
            if (str4 == null) {
                str4 = this.f4759a.b;
            }
            q5VarD.c(str4).b(this.c);
        }
    }
}
