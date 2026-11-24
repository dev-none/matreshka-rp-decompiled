package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public abstract class q {
    public static boolean a(String str) {
        if (str == null) {
            gb.a("AdResponseParser: Null data");
            return false;
        }
        String strTrim = str.trim();
        if (strTrim.length() == 0) {
            gb.a("AdResponseParser: Empty data");
            return false;
        }
        if (b(strTrim)) {
            gb.a("AdResponseParser: Vast is received");
            return true;
        }
        if (strTrim.startsWith("{") && strTrim.endsWith("}")) {
            gb.a("AdResponseParser: JSON is received");
            return true;
        }
        gb.a("AdResponseParser: Unsupported data is received");
        return false;
    }

    public static boolean b(String str) {
        String strTrim = str.trim();
        return strTrim.startsWith("<VAST") || strTrim.startsWith("<?xml");
    }

    public abstract t a(String str, u uVar, t tVar, j jVar, h6.a aVar, h6 h6Var, List list, n nVar, Context context);

    public static JSONObject a(String str, h6.a aVar, h6 h6Var, List list, n nVar) {
        return a(str, aVar, h6Var, list, nVar, p.c);
    }

    public static JSONObject a(String str, h6.a aVar, h6 h6Var, List list, n nVar, p pVar) {
        String strTrim = str != null ? str.trim() : null;
        if (strTrim != null && !"".equals(strTrim)) {
            gb.a("AdResponseParser: Converting to JSON...");
            try {
                JSONObject jSONObject = new JSONObject(strTrim);
                a(jSONObject);
                if (!a(jSONObject, pVar)) {
                    gb.a("AdResponseParser: Invalid json version");
                    nVar.a(m.k);
                    return null;
                }
                a(list, jSONObject, pVar);
                boolean zOptBoolean = jSONObject.optBoolean("sdk_ms", false);
                aVar.a(zOptBoolean);
                h6Var.a(zOptBoolean);
                a2.e.a(jSONObject.optLong("timestamp", 0L));
                gb.a("AdResponseParser: Done");
                return jSONObject;
            } catch (Throwable th) {
                gb.a("AdResponseParser: Parsing ad response error: " + th.getMessage());
                nVar.a(m.k);
                pVar.a(3001, "Get Json, exception=" + eb.b(th) + ", data=" + str);
                return null;
            }
        }
        gb.a("AdResponseParser: Parsing ad response: empty data");
        nVar.a(m.j);
        pVar.a(3002, "Input json is empty, data=" + str);
        return null;
    }

    public static void a(List list, JSONObject jSONObject, p pVar) {
        if (list == null) {
            return;
        }
        p pVarA = pVar.a("hosts");
        try {
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("hosts");
            if (jSONArrayOptJSONArray != null) {
                int length = jSONArrayOptJSONArray.length();
                for (int i = 0; i < length; i++) {
                    String strOptString = jSONArrayOptJSONArray.optString(i, null);
                    if (TextUtils.isEmpty(strOptString)) {
                        gb.a("AdResponseParser: Invalid host-string at position " + i);
                    } else {
                        list.add(strOptString);
                    }
                }
            }
        } catch (Throwable th) {
            gb.a("AdResponseParser Error: Exception while handling hosts");
            pVarA.b(3001, "Handle hosts: exception=" + eb.b(th));
        }
    }

    public static void a(JSONObject jSONObject) {
        if (!gb.f4640a && jSONObject.optBoolean("sdk_debug_mode", false)) {
            gb.f4640a = true;
        }
    }

    public static boolean a(JSONObject jSONObject, p pVar) {
        try {
            String string = jSONObject.getString("version");
            gb.a("AdResponseParser: JSON version " + string);
            int iIndexOf = string.indexOf(".");
            if (iIndexOf > 0 && Integer.parseInt(string.substring(0, iIndexOf), 10) == 2) {
                return true;
            }
            pVar.a(3003, "Unsupported version=" + string);
        } catch (Throwable th) {
            gb.a("AdResponseParser Error: Check version failed - " + th.getMessage());
            pVar.a(3001, "Check version exception: " + eb.a(th));
        }
        return false;
    }
}
