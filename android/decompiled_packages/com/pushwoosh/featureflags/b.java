package com.pushwoosh.featureflags;

import io.flutter.plugins.firebase.analytics.Constants;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public abstract class b {
    public static Map a(JSONObject jSONObject) throws JSONException {
        HashMap map = new HashMap();
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            JSONObject jSONObject2 = jSONObject.getJSONObject(next);
            Object objOpt = jSONObject2.opt("rule_id");
            JSONObject jSONObjectOptJSONObject = jSONObject2.optJSONObject("properties");
            boolean z = jSONObject2.getBoolean(Constants.ENABLED);
            String str = objOpt instanceof String ? (String) objOpt : "";
            if (jSONObjectOptJSONObject == null) {
                jSONObjectOptJSONObject = new JSONObject();
            }
            map.put(next, new FeatureFlag(next, z, str, jSONObjectOptJSONObject));
        }
        return Collections.unmodifiableMap(map);
    }
}
