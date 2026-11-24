package com.pushwoosh.j;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5225a;
    public final String b;
    public final String c;

    public g(JSONObject jSONObject) {
        this.f5225a = jSONObject.optString("code");
        this.b = jSONObject.optString("richmedia");
        this.c = jSONObject.optString("message_hash");
    }
}
