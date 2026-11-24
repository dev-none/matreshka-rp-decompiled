package io.appmetrica.analytics.impl;

import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class Z8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final zo f5982a;

    public Z8(zo zoVar) {
        this.f5982a = zoVar;
    }

    public final void a(int i, long j) throws JSONException {
        JSONObject jSONObjectOptJSONObject;
        zo zoVar = this.f5982a;
        synchronized (zoVar) {
            jSONObjectOptJSONObject = zoVar.f6438a.a().optJSONObject("numbers_of_type");
        }
        if (jSONObjectOptJSONObject == null) {
            jSONObjectOptJSONObject = new JSONObject();
        }
        jSONObjectOptJSONObject.put(String.valueOf(i), j);
        this.f5982a.a(jSONObjectOptJSONObject);
    }
}
