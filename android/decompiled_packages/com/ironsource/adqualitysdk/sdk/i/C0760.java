package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᘣ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0760 implements Comparable {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C1141 f2593;

    public C0760(C1141 c1141) {
        this.f2593 = c1141;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        JSONObject jSONObject;
        C0760 c0760 = (C0760) obj;
        synchronized (this) {
            jSONObject = this.f2593.f3993;
        }
        long jOptLong = jSONObject.optLong(StringFog.decrypt("86g=\n", "h9v5hfMUX6g=\n"));
        long jM8692 = c0760.m8692();
        if (jOptLong < jM8692) {
            return -1;
        }
        if (jOptLong != jM8692) {
            return 1;
        }
        long jM8690 = m8690();
        long jM8691 = c0760.m8690();
        if (jM8690 < jM8691) {
            return -1;
        }
        return jM8690 == jM8691 ? 0 : 1;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || C0760.class != obj.getClass()) {
            return false;
        }
        return this.f2593.f3992.equals(((C0760) obj).f2593.f3992);
    }

    public final int hashCode() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2593.f3993;
        }
        if (jSONObject != null) {
            return m8691().hashCode();
        }
        return 0;
    }

    public final String toString() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2593.f3993;
        }
        return jSONObject.toString();
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final String m8689() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2593.f3993;
        }
        return jSONObject.optString(StringFog.decrypt("HHL3\n", "aRuTIAlfVb4=\n"), null);
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final long m8690() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2593.f3993;
        }
        return jSONObject.optInt(StringFog.decrypt("TkE=\n", "Ky8nFERNSXI=\n"));
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized JSONObject m8691() {
        return this.f2593.f3993;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8693(int i, HashMap map) {
        JSONObject jSONObject = this.f2593.f3993;
        if (jSONObject != null) {
            AbstractC0939.m8816(jSONObject, i, map);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final long m8692() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2593.f3993;
        }
        return jSONObject.optLong(StringFog.decrypt("86g=\n", "h9v5hfMUX6g=\n"));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8694(String str) {
        JSONObject jSONObject;
        try {
            synchronized (this) {
                jSONObject = this.f2593.f3993;
            }
            jSONObject.put(StringFog.decrypt("PS6M\n", "SEfozgcTL7g=\n"), str);
        } catch (JSONException unused) {
        }
    }
}
