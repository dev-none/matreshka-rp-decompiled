package com.pushwoosh.j;

import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.network.PushRequest;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Locale;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class a extends PushRequest {
    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        jSONObject.put("language", Locale.getDefault().getLanguage());
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "getInApps";
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v2, types: [java.util.ArrayList] */
    @Override // com.pushwoosh.internal.network.PushRequest
    public final Object parseResponse(JSONObject jSONObject) throws JSONException {
        Object arrayList = Collections.EMPTY_LIST;
        if (jSONObject.has("inApps")) {
            JSONArray jSONArray = jSONObject.getJSONArray("inApps");
            arrayList = new ArrayList(jSONArray.length());
            for (int i = 0; i < jSONArray.length(); i++) {
                arrayList.add(new Resource(jSONArray.getJSONObject(i)));
            }
        }
        return arrayList;
    }
}
