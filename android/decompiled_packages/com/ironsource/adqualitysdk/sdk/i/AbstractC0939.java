package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ⅼ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0939 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final String f3313 = StringFog.decrypt("XxVMMKiic0tm\n", "FUYDfv3WGic=\n");

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static JSONObject m8815(JSONObject jSONObject, boolean z) {
        if (jSONObject != null) {
            try {
                JSONObject jSONObject2 = new JSONObject(jSONObject.toString());
                if (z) {
                    jSONObject2.remove(AbstractC1033.f3758);
                }
                return jSONObject2;
            } catch (JSONException unused) {
            }
        }
        return new JSONObject();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8817(JSONObject jSONObject, JSONObject jSONObject2, boolean z) {
        if (jSONObject == null || jSONObject2 == null) {
            return;
        }
        Iterator<String> itKeys = jSONObject2.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            try {
                jSONObject.put(next, jSONObject2.opt(next));
            } catch (JSONException unused) {
            }
        }
        if (z) {
            jSONObject.remove(AbstractC1033.f3758);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static List m8813(JSONArray jSONArray) {
        if (jSONArray == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < jSONArray.length(); i++) {
            Object objOpt = jSONArray.opt(i);
            if (objOpt != null) {
                arrayList.add(objOpt);
            }
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8816(JSONObject jSONObject, int i, HashMap map) {
        try {
            JSONArray jSONArrayNames = jSONObject.names();
            if (jSONArrayNames != null) {
                for (int i2 = 0; i2 < jSONArrayNames.length(); i2++) {
                    String strOptString = jSONArrayNames.optString(i2);
                    Object obj = null;
                    Integer num = map != null ? (Integer) map.get(strOptString) : null;
                    String strM8811 = m8811(jSONObject.opt(strOptString), num != null ? num.intValue() : i);
                    if (strM8811 != null) {
                        if (!strM8811.equals("")) {
                            obj = strM8811;
                        }
                        jSONObject.put(strOptString, obj);
                    }
                }
            }
        } catch (JSONException e) {
            String str = f3313;
            AbstractC0323.m8479(str, str, StringFog.decrypt("vTy/sykDrOyUJ6m9L0q06tgkvrM1\n", "+E7N3Fsj2o0=\n"), e, null, false);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8811(Object obj, int i) throws JSONException {
        if (obj instanceof JSONObject) {
            m8816((JSONObject) obj, i, (HashMap) null);
        } else {
            if (obj instanceof JSONArray) {
                JSONArray jSONArray = (JSONArray) obj;
                for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                    String strM8811 = m8811(jSONArray.opt(i2), i);
                    if (strM8811 != null) {
                        jSONArray.put(i2, strM8811);
                    }
                }
            } else if (obj instanceof String) {
                String str = (String) obj;
                if (str.length() <= i) {
                    return str;
                }
                StringBuilder sb = new StringBuilder();
                sb.append(str.substring(0, i));
                return AbstractC0970.m8850("XS1qGN4Ts94QYjBVzkg=\n", "cwNEMKphxrA=\n", sb);
            }
        }
        return null;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static LinkedHashMap m8812(JSONObject jSONObject, C0671 c0671) {
        AbstractC0904 abstractC0904M8838;
        if (jSONObject == null) {
            return null;
        }
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            c0671.getClass();
            try {
                String strOptString = jSONObject.optString(next);
                if (jSONObject.opt(next) instanceof String) {
                    strOptString = StringFog.decrypt("pQ==\n", "h0CuNpMNi4A=\n") + strOptString + StringFog.decrypt("pA==\n", "hmyjLfk4mg8=\n");
                }
                abstractC0904M8838 = new C0968().m8838(AbstractC0637.m8607(c0671.f2316.f2309, strOptString, strOptString));
            } catch (Throwable th) {
                String str = c0671.f2316.f2309;
                StringBuilder sbM8559 = AbstractC0502.m8559("WJrOsvZZIihvm9Wz41k=\n", "Hei83YR5Ukk=\n", new StringBuilder(), next);
                sbM8559.append(StringFog.decrypt("qRCpw6weyTY=\n", "iXPGrd9q8xY=\n"));
                sbM8559.append(jSONObject.optString(next));
                AbstractC0728.m8662(str, sbM8559.toString(), th, null);
                abstractC0904M8838 = null;
            }
            linkedHashMap.put(next, abstractC0904M8838);
        }
        return linkedHashMap;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static JSONObject m8814(int i, int i2, long j, long j2) {
        JSONObject jSONObject = new JSONObject();
        try {
            if (j > -1) {
                jSONObject.put(StringFog.decrypt("rg==\n", "1tbCjpYGNRQ=\n"), i);
                jSONObject.put(StringFog.decrypt("tw==\n", "zpI+vK6TTyQ=\n"), i2);
                jSONObject.put(StringFog.decrypt("wA==\n", "tLQG2Fgb/UI=\n"), j);
                jSONObject.put(StringFog.decrypt("Rg==\n", "M2aN0C1fiiU=\n"), j2);
                return jSONObject;
            }
            jSONObject.put(StringFog.decrypt("KQ==\n", "UUAHHGql/lw=\n"), -1);
            jSONObject.put(StringFog.decrypt("kw==\n", "6kegDbDBmQg=\n"), -1);
            jSONObject.put(StringFog.decrypt("Rg==\n", "MvjT1EyrmiU=\n"), -1);
            jSONObject.put(StringFog.decrypt("hA==\n", "8YXl33XjcaE=\n"), -1);
            return jSONObject;
        } catch (JSONException e) {
            String str = f3313;
            AbstractC0323.m8479(str, str, StringFog.decrypt("LlyxGFBRFkAOT7ceTBZVXgpdtyNNBBZaS0SwGEw=\n", "ay7DdyJxdTI=\n"), e, null, false);
            return jSONObject;
        }
    }
}
