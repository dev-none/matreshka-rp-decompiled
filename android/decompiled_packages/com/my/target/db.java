package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import com.google.android.gms.auth.api.proxy.AuthApiStatusCodes;
import com.my.tracker.ads.AdFormat;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class db {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f4597a;
    public final u b;
    public final j c;
    public String d;
    public boolean e = true;
    public int f = 1;

    public db(u uVar, j jVar, Context context) {
        this.b = uVar;
        this.c = jVar;
        this.f4597a = context;
    }

    public static db a(u uVar, j jVar, Context context) {
        return new db(uVar, jVar, context);
    }

    public final ya b(JSONObject jSONObject, String str, float f, i0 i0Var) {
        int i;
        int iOptInt = jSONObject.optInt("viewablePercent", -1);
        if (iOptInt < 0 || iOptInt > 100) {
            a("Bad value", "failed to parse viewabilityStat: invalid viewable percent value");
            i0Var.a("viewablePercent").b(3007, Integer.toString(iOptInt));
            return null;
        }
        String strA = n5.a(jSONObject, "target");
        if (TextUtils.isEmpty(strA)) {
            i = this.f;
        } else if ("video".equals(strA)) {
            i = 2;
        } else {
            if (!AdFormat.BANNER.equals(strA)) {
                a("Bad value", "unknown viewability stat target value: '" + strA + "'");
                i0Var.a("target").b(3007, strA);
                return null;
            }
            i = 1;
        }
        if (jSONObject.has("ovv")) {
            o8 o8VarA = o8.a(str, iOptInt, i);
            o8VarA.b(jSONObject.optBoolean("ovv", false));
            if (jSONObject.has("pvalue")) {
                float fOptDouble = (float) jSONObject.optDouble("pvalue", o8VarA.e());
                if (fOptDouble >= 0.0f && fOptDouble <= 100.0f) {
                    if (f > 0.0f) {
                        o8VarA.b((fOptDouble * f) / 100.0f);
                        return o8VarA;
                    }
                    o8VarA.a(fOptDouble);
                    return o8VarA;
                }
            }
            if (jSONObject.has("value")) {
                float fOptDouble2 = (float) jSONObject.optDouble("value", o8VarA.f());
                if (fOptDouble2 >= 0.0f) {
                    o8VarA.b(fOptDouble2);
                    return o8VarA;
                }
            }
        }
        float fOptDouble3 = (float) jSONObject.optDouble("duration", -1.0d);
        if (fOptDouble3 >= 0.0f) {
            return t6.a(str, fOptDouble3, iOptInt, jSONObject.optBoolean("mrc", true), i);
        }
        a("Bad value", "failed to parse viewabilityStat: no ovv or wrong duration");
        i0 i0VarA = i0Var.a("duration");
        if (jSONObject.has("duration")) {
            i0VarA.b(3007, Float.toString(fOptDouble3));
        } else {
            i0VarA.c(AuthApiStatusCodes.AUTH_APP_CERT_ERROR);
        }
        return null;
    }

    public void a(Boolean bool) {
        this.e = bool.booleanValue();
    }

    public void a(za zaVar, JSONObject jSONObject, String str, float f) {
        a(zaVar, jSONObject, str, f, i0.d);
    }

    public void a(za zaVar, JSONObject jSONObject, String str, float f, i0 i0Var) {
        int length;
        zaVar.a(this.b.m(), f);
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("statistics");
        if (jSONArrayOptJSONArray != null && (length = jSONArrayOptJSONArray.length()) > 0) {
            i0 i0VarA = i0Var.a("statistics");
            this.d = str;
            for (int i = 0; i < length; i++) {
                JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i);
                i0 i0VarB = i0VarA.b(i);
                if (jSONObjectOptJSONObject == null) {
                    i0VarB.c(3007);
                } else {
                    ya yaVarA = a(jSONObjectOptJSONObject, f, i0VarB);
                    if (yaVarA != null) {
                        zaVar.a(yaVarA);
                    }
                }
            }
        }
    }

    public w8 a(JSONObject jSONObject, String str, float f, i0 i0Var) {
        w8 w8VarA = w8.a(str);
        if (jSONObject.has("pvalue")) {
            float fOptDouble = (float) jSONObject.optDouble("pvalue", w8VarA.d());
            if (fOptDouble >= 0.0f && fOptDouble <= 100.0f) {
                if (f > 0.0f) {
                    w8VarA.b((fOptDouble * f) / 100.0f);
                    return w8VarA;
                }
                w8VarA.a(fOptDouble);
                return w8VarA;
            }
            i0Var.a("pvalue").a(3007, Float.toString(fOptDouble));
        }
        if (jSONObject.has("value")) {
            float fOptDouble2 = (float) jSONObject.optDouble("value", w8VarA.e());
            if (fOptDouble2 >= 0.0f) {
                w8VarA.b(fOptDouble2);
                return w8VarA;
            }
            i0Var.a("value").a(3007, Float.toString(fOptDouble2));
        }
        i0Var.a(3007);
        return null;
    }

    public ya a(JSONObject jSONObject, float f) {
        return a(jSONObject, f, i0.d);
    }

    public ya a(JSONObject jSONObject, float f, i0 i0Var) {
        ya yaVarA;
        String strOptString = jSONObject.optString("type");
        String strOptString2 = jSONObject.optString("url");
        if (!lb.e(strOptString2)) {
            a("Required field", "failed to parse stat url: url is empty or broken");
            i0Var.a("url").a(3007, strOptString2);
            return null;
        }
        if (TextUtils.isEmpty(strOptString)) {
            a("Required field", "failed to parse stat: no type");
            i0Var.a("type").a(AuthApiStatusCodes.AUTH_APP_CERT_ERROR);
            return null;
        }
        strOptString.getClass();
        strOptString.hashCode();
        switch (strOptString) {
            case "orientation":
                yaVarA = a(jSONObject, strOptString2, i0Var);
                break;
            case "playheadViewabilityValue":
                yaVarA = b(jSONObject, strOptString2, f, i0Var);
                break;
            case "playheadReachedValue":
                yaVarA = a(jSONObject, strOptString2, f, i0Var);
                break;
            default:
                yaVarA = ya.a(strOptString, strOptString2);
                break;
        }
        if (yaVarA != null) {
            yaVarA.a(jSONObject.optBoolean("needDecodeUrl", yaVarA.c()));
        }
        return yaVarA;
    }

    public void a(int i) {
        this.f = i;
    }

    public void a(String str, String str2) {
        if (this.e) {
            String str3 = this.b.f4826a;
            q5 q5VarD = q5.a(str).f(str2).a(this.c.i()).d(this.d);
            if (str3 == null) {
                str3 = this.b.b;
            }
            q5VarD.c(str3).b(this.f4597a);
        }
    }

    public final n8 a(JSONObject jSONObject, String str, i0 i0Var) {
        if (jSONObject.has("view")) {
            return n8.b(str, jSONObject.optString("view"));
        }
        i0Var.a("view").c(AuthApiStatusCodes.AUTH_APP_CERT_ERROR);
        return null;
    }
}
