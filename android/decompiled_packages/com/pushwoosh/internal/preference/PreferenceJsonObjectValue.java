package com.pushwoosh.internal.preference;

import android.content.SharedPreferences;
import com.pushwoosh.internal.utils.JsonUtils;
import com.pushwoosh.internal.utils.PWLog;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class PreferenceJsonObjectValue implements PreferenceValue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SharedPreferences f5210a;
    private final String b;
    private JSONObject c;

    public PreferenceJsonObjectValue(SharedPreferences sharedPreferences, String str) {
        this.b = str;
        this.f5210a = sharedPreferences;
        String string = null;
        if (sharedPreferences != null) {
            try {
                string = sharedPreferences.getString(str, null);
            } catch (Exception e) {
                PWLog.exception(e);
                return;
            }
        }
        if (string != null) {
            this.c = new JSONObject(string);
        }
    }

    public JSONObject get() {
        return this.c;
    }

    public void merge(JSONObject jSONObject) {
        JSONObject jSONObject2 = this.c;
        if (jSONObject2 == null) {
            jSONObject2 = new JSONObject();
        }
        JsonUtils.mergeJson(jSONObject, jSONObject2);
        set(jSONObject2);
    }

    public void set(JSONObject jSONObject) {
        JSONObject jSONObject2;
        SharedPreferences sharedPreferences = this.f5210a;
        if (sharedPreferences == null) {
            PWLog.error("Incorrect state of the app preferences is null");
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        JSONObject jSONObject3 = null;
        if (jSONObject != null) {
            try {
                JSONArray jSONArrayNames = jSONObject.names();
                if (jSONArrayNames == null) {
                    jSONObject2 = new JSONObject();
                } else {
                    ArrayList arrayList = new ArrayList();
                    for (int i = 0; i < jSONArrayNames.length(); i++) {
                        arrayList.add(jSONArrayNames.getString(i));
                    }
                    jSONObject2 = new JSONObject(jSONObject, (String[]) arrayList.toArray(new String[0]));
                }
            } catch (JSONException e) {
                PWLog.error("PreferenceJsonObjectValue", "Failed to copy JSON object for key: " + this.b, e);
                jSONObject2 = null;
            }
            if (jSONObject2 != null) {
                editorEdit.putString(this.b, jSONObject2.toString());
            } else {
                editorEdit.putString(this.b, null);
            }
            jSONObject3 = jSONObject2;
        } else {
            editorEdit.putString(this.b, null);
        }
        editorEdit.apply();
        this.c = jSONObject3;
    }
}
