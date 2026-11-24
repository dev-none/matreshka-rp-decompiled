package com.pushwoosh.inapp.ui;

import androidx.media3.extractor.text.ttml.TtmlNode;
import com.pravera.flutter_foreground_task.PreferencesKey;
import io.appmetrica.analytics.impl.H2;
import java.util.Iterator;
import java.util.Set;
import kotlin.collections.SetsKt;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public abstract class i0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Set f5131a = SetsKt.setOf((Object[]) new String[]{H2.g, TtmlNode.ATTR_TTS_COLOR, "image", "poster", "fallback"});
    public static final Set b = SetsKt.setOf((Object[]) new String[]{PreferencesKey.NOTIFICATION_CONTENT_BUTTONS, "items"});

    public static boolean a(JSONObject jSONObject, JSONObject jSONObject2) throws JSONException {
        JSONObject jSONObjectOptJSONObject;
        Object jSONObject3;
        Iterator<String> itKeys = jSONObject2.keys();
        Intrinsics.checkNotNullExpressionValue(itKeys, "dark.keys()");
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            Object objOpt = jSONObject2.opt(next);
            Object objOpt2 = jSONObject.opt(next);
            if (objOpt != null && !Intrinsics.areEqual(objOpt, JSONObject.NULL)) {
                if (b.contains(next)) {
                    if (!(objOpt instanceof JSONArray) || !(objOpt2 instanceof JSONArray)) {
                        return false;
                    }
                    JSONArray jSONArray = (JSONArray) objOpt;
                    JSONArray jSONArray2 = (JSONArray) objOpt2;
                    if (jSONArray.length() != jSONArray2.length()) {
                        return false;
                    }
                    int length = jSONArray.length();
                    for (int i = 0; i < length; i++) {
                        JSONObject jSONObjectOptJSONObject2 = jSONArray.optJSONObject(i);
                        if (jSONObjectOptJSONObject2 == null || (jSONObjectOptJSONObject = jSONArray2.optJSONObject(i)) == null || !a(jSONObjectOptJSONObject, jSONObjectOptJSONObject2)) {
                            return false;
                        }
                    }
                } else if (objOpt2 instanceof JSONObject) {
                    if ((objOpt instanceof JSONObject) && !a((JSONObject) objOpt2, (JSONObject) objOpt)) {
                        return false;
                    }
                } else if (f5131a.contains(next)) {
                    if (objOpt instanceof JSONArray) {
                        jSONObject3 = new JSONArray(objOpt.toString());
                    } else {
                        if (objOpt instanceof JSONObject) {
                            jSONObject3 = new JSONObject(objOpt.toString());
                        }
                        jSONObject.put(next, objOpt);
                    }
                    objOpt = jSONObject3;
                    jSONObject.put(next, objOpt);
                }
            }
        }
        return true;
    }
}
