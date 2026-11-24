package com.pushwoosh.m0;

import com.pushwoosh.internal.network.PushRequest;
import java.util.Iterator;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class v extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final JSONObject f5258a;
    public final String b;

    public v(String str, JSONObject jSONObject) {
        this.f5258a = jSONObject;
        this.b = str;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        Iterator<String> itKeys = this.f5258a.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            JSONObject jSONObject2 = this.f5258a;
            jSONObject2.put(next, jSONObject2.opt(next));
        }
        jSONObject.put("tags", this.f5258a);
        jSONObject.put("email", this.b);
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "setEmailTags";
    }
}
