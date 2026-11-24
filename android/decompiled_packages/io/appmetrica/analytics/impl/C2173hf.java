package io.appmetrica.analytics.impl;

import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.hf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2173hf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6111a;
    public final JSONObject b;
    public final Y7 c;

    public C2173hf(String str, JSONObject jSONObject, Y7 y7) {
        this.f6111a = str;
        this.b = jSONObject;
        this.c = y7;
    }

    public final String toString() {
        return "Candidate{trackingId='" + this.f6111a + "', additionalParams=" + this.b + ", source=" + this.c + '}';
    }
}
