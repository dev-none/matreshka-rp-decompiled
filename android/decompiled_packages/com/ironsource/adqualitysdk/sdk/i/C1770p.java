package com.ironsource.adqualitysdk.sdk.i;

import android.os.Handler;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.p, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1770p {

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final String f472 = StringFog.decrypt("tsLB8V41VPmS+NX6TilH+4zC1vFf\n", "4quslC1BNZQ=\n");

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final int f473;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public long f474;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public long f475;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public long f476;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public long f477;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public Boolean f478 = null;

    public C1770p(int i) {
        this.f473 = i;
        AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
        C1768o c1768o = new C1768o(this);
        C0896 c0896 = (C0896) abstractC0895M8747;
        Handler handler = c0896.f3179;
        if (handler != null) {
            handler.post(new C0949(c0896, c1768o));
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final void m8408(JSONObject jSONObject) {
        boolean z;
        long jOptLong;
        try {
            if (jSONObject.optInt(StringFog.decrypt("kACK\n", "42nuKP1r3Ng=\n"), 1) == this.f473 || Math.abs((this.f476 - this.f477) - (jSONObject.optLong(StringFog.decrypt("EJwv\n", "dOhcwwzng2A=\n")) - jSONObject.optLong(StringFog.decrypt("ERc=\n", "ZGOfvRKzpMQ=\n")))) <= 10) {
                long jOptLong2 = jSONObject.optLong(StringFog.decrypt("+xY=\n", "jmKEoyC71Do=\n")) + this.f475;
                jSONObject.put(StringFog.decrypt("y9p5\n", "vq4WTMP7E+k=\n"), this.f475);
                z = true;
                jOptLong = jOptLong2;
            } else {
                jOptLong = jSONObject.optLong(StringFog.decrypt("Fyzz\n", "c1iACEECEeA=\n")) + this.f474;
                jSONObject.put(StringFog.decrypt("8BWC\n", "hGbtkUjKmbE=\n"), this.f474);
                z = false;
            }
            jSONObject.put(AbstractC1033.f3758, jOptLong);
            if (!this.f478.booleanValue()) {
                jSONObject.put(StringFog.decrypt("4/yq\n", "l4/ZUxzKq3o=\n"), false);
            }
            m8409(jSONObject, z);
            m8410(jSONObject, z);
        } catch (JSONException unused) {
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean m8411(JSONObject jSONObject) {
        if (!jSONObject.has(StringFog.decrypt("vqhq\n", "y9wF6tpBQdI=\n")) && !jSONObject.has(StringFog.decrypt("dm0U\n", "Ah57pr5yqCI=\n")) && this.f478 != null) {
            try {
                m8408(jSONObject);
                return true;
            } catch (Exception e) {
                AbstractC1104.m8887(f472, StringFog.decrypt("cBG8cmS6M1ZbAKZvefQpVVwNqT1z7CVBQQ==\n", "NWPOHRaaQC8=\n"), (Throwable) e, false);
            }
        }
        return false;
    }

    /* JADX WARN: Code duplicated, block: B:12:0x0044  */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8410(JSONObject jSONObject, boolean z) {
        Long lValueOf;
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(StringFog.decrypt("ZCukXVeXTVVg\n", "CErXKQP4ODY=\n"));
            if (jSONObjectOptJSONObject != null) {
                if (z) {
                    long jOptLong = jSONObjectOptJSONObject.optLong(StringFog.decrypt("xg==\n", "s/UuWnBiWjg=\n"));
                    if (jOptLong > 0) {
                        lValueOf = Long.valueOf(jOptLong + this.f475);
                    } else {
                        lValueOf = null;
                    }
                } else {
                    long jOptLong2 = jSONObjectOptJSONObject.optLong(StringFog.decrypt("kg==\n", "5tPK7Xhow6A=\n"));
                    if (jOptLong2 > 0) {
                        lValueOf = Long.valueOf(jOptLong2 + this.f474);
                    } else {
                        lValueOf = null;
                    }
                }
                if (lValueOf != null) {
                    jSONObjectOptJSONObject.put(StringFog.decrypt("8Q==\n", "hVPeiXgCSyc=\n"), lValueOf);
                }
            }
        } catch (JSONException unused) {
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final void m8409(JSONObject jSONObject, boolean z) {
        long jOptLong;
        long j;
        if (jSONObject.has(StringFog.decrypt("XKbw\n", "L9KDJoUhkQM=\n"))) {
            if (z) {
                jOptLong = jSONObject.optLong(StringFog.decrypt("MDQz\n", "Q0FH9MwuF98=\n"));
                j = this.f475;
            } else {
                jOptLong = jSONObject.optLong(StringFog.decrypt("oleN\n", "0SP+A2U+rV4=\n"));
                j = this.f474;
            }
            try {
                jSONObject.put(StringFog.decrypt("rbAx\n", "3sRCWAPB6Ys=\n"), jOptLong + j);
            } catch (JSONException unused) {
            }
        }
    }
}
