package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.parsing.JsonUtils;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.vf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2525vf implements Z7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6371a;
    public final JSONObject b;
    public final boolean c;
    public final boolean d;
    public final Y7 e;

    public C2525vf(String str, JSONObject jSONObject, boolean z, boolean z2, Y7 y7) {
        this.f6371a = str;
        this.b = jSONObject;
        this.c = z;
        this.d = z2;
        this.e = y7;
    }

    @Override // io.appmetrica.analytics.impl.Z7
    public final Y7 a() {
        return this.e;
    }

    public final JSONObject b() {
        if (!this.c) {
            return null;
        }
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("trackingId", this.f6371a);
            if (this.b.length() > 0) {
                jSONObject.put("additionalParams", this.b);
            }
        } catch (Throwable unused) {
        }
        return jSONObject;
    }

    public final JSONObject c() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("trackingId", this.f6371a);
            jSONObject.put("additionalParams", this.b);
            jSONObject.put("wasSet", this.c);
            jSONObject.put("autoTracking", this.d);
            jSONObject.put("source", this.e.f5967a);
        } catch (Throwable unused) {
        }
        return jSONObject;
    }

    public final String toString() {
        return "PreloadInfoState{trackingId='" + this.f6371a + "', additionalParameters=" + this.b + ", wasSet=" + this.c + ", autoTrackingEnabled=" + this.d + ", source=" + this.e + '}';
    }

    public static C2525vf a(JSONObject jSONObject) {
        Y7 y7;
        String strOptStringOrNull = JsonUtils.optStringOrNull(jSONObject, "trackingId");
        JSONObject jSONObjectOptJsonObjectOrDefault = JsonUtils.optJsonObjectOrDefault(jSONObject, "additionalParams", new JSONObject());
        int i = 0;
        boolean zOptBooleanOrDefault = JsonUtils.optBooleanOrDefault(jSONObject, "wasSet", false);
        boolean zOptBooleanOrDefault2 = JsonUtils.optBooleanOrDefault(jSONObject, "autoTracking", false);
        String strOptStringOrNull2 = JsonUtils.optStringOrNull(jSONObject, "source");
        Y7[] y7ArrValues = Y7.values();
        int length = y7ArrValues.length;
        while (true) {
            if (i >= length) {
                y7 = null;
                break;
            }
            y7 = y7ArrValues[i];
            if (Intrinsics.areEqual(y7.f5967a, strOptStringOrNull2)) {
                break;
            }
            i++;
        }
        if (y7 == null) {
            y7 = Y7.b;
        }
        return new C2525vf(strOptStringOrNull, jSONObjectOptJsonObjectOrDefault, zOptBooleanOrDefault, zOptBooleanOrDefault2, y7);
    }
}
