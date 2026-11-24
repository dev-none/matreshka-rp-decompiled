package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ꮀ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0588 {

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final HashMap f2090;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final HashMap f2091;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final ArrayList f2092;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final ArrayList f2093;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final boolean f2094;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String f2095;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String f2096;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f2097;

    static {
        StringFog.decrypt("AJpoyqfS3bIPnHXYq9s=\n", "TPMbvsK8uMA=\n");
        StringFog.decrypt("NRzIAkw=\n", "Rmm4Zz6RrQg=\n");
        StringFog.decrypt("hOjUOgt++r8=\n", "5YqnTnkfmcs=\n");
        StringFog.decrypt("HY8T234big==\n", "cOp+uRtp+bA=\n");
        StringFog.decrypt("K/6sv4U=\n", "WJvYyvWjys8=\n");
        StringFog.decrypt("rx4f30H9\n", "ymh6sTWObeQ=\n");
        StringFog.decrypt("ZB9VcYx46A==\n", "CXohGeMcm6g=\n");
    }

    public C0588(String str, String str2, JSONObject jSONObject) {
        ArrayList arrayList;
        ArrayList arrayList2;
        HashMap linkedHashMap;
        this.f2097 = AbstractC0289.m8467(str2);
        this.f2096 = AbstractC0289.m8467(str);
        this.f2095 = AbstractC0289.m8467(jSONObject.optString(StringFog.decrypt("9y9brP8=\n", "hForyY21THw=\n")));
        this.f2094 = jSONObject.optBoolean(StringFog.decrypt("BQxeR20wMnU=\n", "ZG4tMx9RUQE=\n"));
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(StringFog.decrypt("1cyYBGkc3g==\n", "uKn1ZgxurRI=\n"));
        HashMap linkedHashMap2 = null;
        if (jSONArrayOptJSONArray != null) {
            arrayList = new ArrayList();
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                String strM8467 = AbstractC0289.m8467(jSONArrayOptJSONArray.optString(i));
                if (strM8467 != null) {
                    arrayList.add(strM8467);
                }
            }
        } else {
            arrayList = null;
        }
        this.f2093 = arrayList == null ? new ArrayList() : arrayList;
        JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray(StringFog.decrypt("jo9ElJ4=\n", "/eow4e4sYJM=\n"));
        if (jSONArrayOptJSONArray2 != null) {
            arrayList2 = new ArrayList();
            for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                arrayList2.add(new C0580(jSONArrayOptJSONArray2.optJSONObject(i2)));
            }
        } else {
            arrayList2 = null;
        }
        this.f2092 = arrayList2 == null ? new ArrayList() : arrayList2;
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(StringFog.decrypt("7+zVz/o2\n", "ipqwoY5FeIk=\n"));
        if (jSONObjectOptJSONObject != null) {
            linkedHashMap = new LinkedHashMap();
            Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                linkedHashMap.put(next, new C1035(jSONObjectOptJSONObject.optJSONObject(next)));
            }
        } else {
            linkedHashMap = null;
        }
        this.f2091 = linkedHashMap == null ? new HashMap() : linkedHashMap;
        C0944[] c0944Arr = {null};
        JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject(StringFog.decrypt("TgUYieDVlw==\n", "I2Bs4Y+x5NE=\n"));
        if (jSONObjectOptJSONObject2 != null) {
            linkedHashMap2 = new LinkedHashMap();
            Iterator<String> itKeys2 = jSONObjectOptJSONObject2.keys();
            while (itKeys2.hasNext()) {
                String next2 = itKeys2.next();
                C0944 c0944 = new C0944(this, next2, jSONObjectOptJSONObject2.optJSONObject(next2), c0944Arr[0]);
                c0944Arr[0] = c0944;
                linkedHashMap2.put(next2, c0944);
            }
        }
        this.f2090 = linkedHashMap2 == null ? new HashMap() : linkedHashMap2;
    }

    public final String toString() {
        ArrayList arrayList = new ArrayList(this.f2090.values());
        Collections.sort(arrayList, new C0594());
        StringBuilder sb = new StringBuilder();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            sb.append(((C0944) it.next()).toString());
            sb.append("\n\n");
        }
        return sb.toString();
    }
}
