package com.pushwoosh.m0;

import com.pushwoosh.internal.network.PushRequest;
import com.pushwoosh.tags.Tags;
import java.util.Iterator;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class w extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final JSONObject f5259a;

    public w(JSONObject jSONObject) {
        this.f5259a = jSONObject;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        Iterator<String> itKeys = this.f5259a.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            String strOptString = this.f5259a.optString(next);
            if (strOptString != null && strOptString.startsWith("#pwinc#")) {
                this.f5259a.put(next, Tags.incrementInt(next, Integer.parseInt(strOptString.substring(7))));
            }
            JSONObject jSONObject2 = this.f5259a;
            jSONObject2.put(next, jSONObject2.opt(next));
        }
        jSONObject.put("tags", this.f5259a);
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "setTags";
    }
}
