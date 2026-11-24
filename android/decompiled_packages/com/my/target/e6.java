package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import com.my.tracker.ads.AdFormat;
import io.sentry.protocol.Message;
import java.util.Iterator;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class e6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final a f4607a;
    public final u b;
    public final j c;
    public final Context d;
    public final db e;

    public interface a {
        t a(JSONObject jSONObject, u uVar, j jVar, n nVar, Context context);
    }

    public e6(a aVar, u uVar, j jVar, Context context) {
        this.f4607a = aVar;
        this.b = uVar;
        this.c = jVar;
        this.d = context;
        this.e = db.a(uVar, jVar, context);
    }

    public static e6 a(a aVar, u uVar, j jVar, Context context) {
        return new e6(aVar, uVar, jVar, context);
    }

    public x5 b(JSONObject jSONObject, n nVar) {
        y5 y5VarA;
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("networks");
        if (jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() <= 0) {
            nVar.a(m.u);
            return null;
        }
        x5 x5VarC = x5.c();
        int iOptInt = jSONObject.optInt("refreshTimeout", x5VarC.a());
        if (iOptInt >= 0) {
            x5VarC.a(iOptInt);
        } else {
            a("Bad value", "refreshTimeout < 0");
        }
        int length = jSONArrayOptJSONArray.length();
        for (int i = 0; i < length; i++) {
            JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i);
            if (jSONObjectOptJSONObject != null && (y5VarA = a(jSONObjectOptJSONObject, nVar)) != null) {
                x5VarC.a(y5VarA);
            }
        }
        if (x5VarC.b()) {
            return x5VarC;
        }
        nVar.a(m.u);
        return null;
    }

    public final y5 a(JSONObject jSONObject, n nVar) {
        JSONObject jSONObjectOptJSONObject;
        String strOptString = jSONObject.optString("name");
        if (TextUtils.isEmpty(strOptString)) {
            a("Required field", "no name in mediationAdNetwork");
            return null;
        }
        String strOptString2 = jSONObject.optString("placementId");
        if (TextUtils.isEmpty(strOptString2)) {
            a("Required field", "no placementId for " + strOptString + " mediationAdNetwork");
            return null;
        }
        String strOptString3 = jSONObject.optString("adapter");
        if (TextUtils.isEmpty(strOptString3)) {
            a("Required field", "no adapter for " + strOptString + " mediationAdNetwork");
            return null;
        }
        y5 y5VarA = y5.a(strOptString, strOptString2, strOptString3);
        if (y5VarA.j() && (jSONObjectOptJSONObject = jSONObject.optJSONObject(AdFormat.BANNER)) != null) {
            y5VarA.a(this.f4607a.a(jSONObjectOptJSONObject, this.b, this.c, nVar, this.d));
        }
        String strOptString4 = jSONObject.optString("payload");
        if (!TextUtils.isEmpty(strOptString4)) {
            y5VarA.a(strOptString4);
        }
        int iOptInt = jSONObject.optInt("timeout", y5VarA.i());
        if (iOptInt > 0) {
            y5VarA.a(iOptInt);
        } else {
            a("Bad value", "timeout <= 0 for " + strOptString + " mediationAdNetwork");
        }
        y5VarA.a((float) jSONObject.optDouble("priority", y5VarA.f()));
        JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject(Message.JsonKeys.PARAMS);
        if (jSONObjectOptJSONObject2 != null) {
            Iterator<String> itKeys = jSONObjectOptJSONObject2.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                if (!TextUtils.isEmpty(next)) {
                    y5VarA.a(next, jSONObjectOptJSONObject2.optString(next));
                }
            }
        }
        this.e.a(y5VarA.h(), jSONObject, strOptString, -1.0f);
        return y5VarA;
    }

    public final void a(String str, String str2) {
        String str3 = this.b.f4826a;
        q5 q5VarA = q5.a(str).f(str2).a(this.c.i());
        if (str3 == null) {
            str3 = this.b.b;
        }
        q5VarA.c(str3).b(this.d);
    }
}
