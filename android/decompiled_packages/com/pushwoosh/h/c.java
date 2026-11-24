package com.pushwoosh.h;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public abstract class c {
    public static void a(JSONObject jSONObject, Map map, Map map2) throws JSONException {
        ArrayList<String> arrayList = new ArrayList();
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            arrayList.add(itKeys.next());
        }
        for (String str : arrayList) {
            Object obj = jSONObject.get(str);
            if (obj instanceof String) {
                jSONObject.put(str, d.a(d.a(d.a(d.a(d.a((String) obj, d.f5089a, map), d.b, map2), d.c, map), d.d, map2), d.e, map2));
            } else if (obj instanceof JSONObject) {
                a((JSONObject) obj, map, map2);
            } else if (obj instanceof JSONArray) {
                a((JSONArray) obj, map, map2);
            }
        }
    }

    public static void a(JSONArray jSONArray, Map map, Map map2) throws JSONException {
        for (int i = 0; i < jSONArray.length(); i++) {
            Object obj = jSONArray.get(i);
            if (obj instanceof String) {
                jSONArray.put(i, d.a(d.a(d.a(d.a(d.a((String) obj, d.f5089a, map), d.b, map2), d.c, map), d.d, map2), d.e, map2));
            } else if (obj instanceof JSONObject) {
                a((JSONObject) obj, map, map2);
            } else if (obj instanceof JSONArray) {
                a((JSONArray) obj, map, map2);
            }
        }
    }
}
