package io.appmetrica.analytics.impl;

import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class Ao {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Do f5602a;
    public final Do b;
    public final Bo c;
    public JSONObject d;

    public Ao(Do r1, Do r2, Bo bo) {
        this.f5602a = r1;
        this.b = r2;
        this.c = bo;
    }

    public final synchronized JSONObject a() {
        JSONObject jSONObject;
        if (this.d == null) {
            JSONObject jSONObjectA = this.c.a(a(this.f5602a), a(this.b));
            this.d = jSONObjectA;
            a(jSONObjectA);
        }
        jSONObject = this.d;
        if (jSONObject == null) {
            Intrinsics.throwUninitializedPropertyAccessException("fileContents");
            jSONObject = null;
        }
        return jSONObject;
    }

    public static JSONObject a(Do r1) {
        try {
            String strA = r1.a();
            return strA != null ? new JSONObject(strA) : new JSONObject();
        } catch (Throwable unused) {
            return new JSONObject();
        }
    }

    public final synchronized void a(JSONObject jSONObject) {
        String string = jSONObject.toString();
        try {
            this.f5602a.a(string);
        } catch (Throwable unused) {
        }
        try {
            this.b.a(string);
        } catch (Throwable unused2) {
        }
    }
}
