package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ⅽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0946 extends AbstractC0912 implements InterfaceC0462 {

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public JSONObject f3356;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public String f3358;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public boolean f3359;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public String f3362;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static final String f3355 = StringFog.decrypt("NoM8Iv2ybs8Vojk//Q==\n", "e+ZYS5zGB6A=\n");

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public static final String f3354 = StringFog.decrypt("AwwSdIy389ETHQlFrbjw0Q==\n", "cGlmN+PZnbQ=\n");

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public static final String f3353 = StringFog.decrypt("tkOAcx7M+3myUptCP8P4eQ==\n", "0Sb0MHGilRw=\n");

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public static final String f3352 = StringFog.decrypt("xzQATroqMefANBBNujov6cY6OmKyKw==\n", "tFF0A99OWIY=\n");

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static final String f3351 = StringFog.decrypt("kVhS5/SPRMCCWELk9J9azoRWaMv8jg==\n", "9j0mqpHrLaE=\n");

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public static final String f3350 = StringFog.decrypt("wn98H481ss3UdH07\n", "sRoIXutn17s=\n");

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public static final String f3349 = StringFog.decrypt("nMOYRL80+zCeyJlg\n", "+6bsBdtmnkY=\n");

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static final String f3348 = StringFog.decrypt("wGYU/qY5dvPfcAPFsBpt3tc=\n", "swNgt9V/A58=\n");

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public static final String f3347 = StringFog.decrypt("NXjJJulF5NQ+bt4d/2b/+TY=\n", "Uh29b5oDkbg=\n");

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f3346 = StringFog.decrypt("wrQjAp8swK/ctDkmuik=\n", "sdFXUvNNo8o=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f3345 = StringFog.decrypt("kYIfLKtkH56bggUIjmE=\n", "9udrfMcFfPs=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f3344 = StringFog.decrypt("f51zfqnQjbV4l2o=\n", "DPgHN9qT+MY=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f3343 = StringFog.decrypt("dkSTJ469caxlToo=\n", "ESHnbv3+BN8=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f3342 = StringFog.decrypt("hNFDe+ymJdWa8FZM+A==\n", "97Q3OJnVUbo=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f3341 = StringFog.decrypt("+N/DLvtb8bjy/tYZ7w==\n", "n7q3bY4ohdc=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f3340 = StringFog.decrypt("FD1BVAYRAFYQOUZiMQgEXAcWVHsR\n", "c1g1FnR+YTI=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f3339 = StringFog.decrypt("AH9choQE\n", "dBAW9etqfN0=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public String f3361 = "";

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public double f3360 = -1.0d;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public boolean f3357 = false;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final JSONObject m8822() {
        JSONObject jSONObject = new JSONObject();
        JSONObject jSONObject2 = new JSONObject();
        try {
            jSONObject2.put(AbstractC1033.f3762, this.f3362);
            double d = this.f3360;
            if (d > -1.0d) {
                jSONObject2.put(AbstractC1033.f3712, d);
            }
            jSONObject2.put(AbstractC1033.f3711, this.f3358);
            JSONObject jSONObject3 = this.f3356;
            if (jSONObject3 != null) {
                jSONObject2.put(AbstractC1033.f3709, jSONObject3);
            }
        } catch (JSONException unused) {
        }
        try {
            if (jSONObject2.length() > 0) {
                if (this.f3357) {
                    jSONObject2.put(AbstractC1033.f3710, true);
                }
                jSONObject.put(AbstractC1033.f3713, jSONObject2);
            }
        } catch (JSONException unused2) {
        }
        return jSONObject;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String m8823() {
        String strDecrypt = this.f3359 ? StringFog.decrypt("D2Mjjpm/m7EMeA==\n", "aRZP4urc6dQ=\n") : StringFog.decrypt("v47uCGKg\n", "3e+AZgfSiEs=\n");
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("21J7oLAaUGHYGQ==\n", "tjcfydFuOQ4=\n"));
        sb.append(this.f3361);
        return AbstractC0343.m8497("7Q==\n", "w7RjSpTqJYk=\n", sb, strDecrypt);
    }

    /* JADX WARN: Code duplicated, block: B:54:0x00b9  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0462
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8326(C1013 c1013, String str, ArrayList arrayList, C0566 c0566, C0704 c0704) {
        byte b;
        try {
            switch (str.hashCode()) {
                case -2010356102:
                    if (!str.equals(f3340)) {
                        b = -1;
                    } else {
                        b = Ascii.SO;
                    }
                    break;
                case -1879931215:
                    if (!str.equals(f3341)) {
                        b = -1;
                    } else {
                        b = Ascii.CR;
                    }
                    break;
                case -1679773410:
                    if (!str.equals(f3346)) {
                        b = -1;
                    } else {
                        b = 8;
                    }
                    break;
                case -1457409854:
                    if (!str.equals(f3353)) {
                        b = -1;
                    } else {
                        b = 1;
                    }
                    break;
                case -1105800003:
                    if (!str.equals(f3342)) {
                        b = -1;
                    } else {
                        b = Ascii.FF;
                    }
                    break;
                case -1033133001:
                    if (!str.equals(f3350)) {
                        b = -1;
                    } else {
                        b = 4;
                    }
                    break;
                case -869156349:
                    if (!str.equals(f3339)) {
                        b = -1;
                    } else {
                        b = Ascii.SI;
                    }
                    break;
                case -303276684:
                    if (!str.equals(f3351)) {
                        b = -1;
                    } else {
                        b = 3;
                    }
                    break;
                case 91962794:
                    if (!str.equals(f3345)) {
                        b = -1;
                    } else {
                        b = 9;
                    }
                    break;
                case 701278346:
                    if (!str.equals(f3348)) {
                        b = -1;
                    } else {
                        b = 6;
                    }
                    break;
                case 1006114614:
                    if (!str.equals(f3354)) {
                        b = -1;
                    } else {
                        b = 0;
                    }
                    break;
                case 1009851624:
                    if (!str.equals(f3352)) {
                        b = -1;
                    } else {
                        b = 2;
                    }
                    break;
                case 1314266045:
                    if (!str.equals(f3344)) {
                        b = -1;
                    } else {
                        b = 10;
                    }
                    break;
                case 1402845873:
                    if (!str.equals(f3343)) {
                        b = -1;
                    } else {
                        b = Ascii.VT;
                    }
                    break;
                case 1641431166:
                    if (!str.equals(f3347)) {
                        b = -1;
                    } else {
                        b = 7;
                    }
                    break;
                case 1712841667:
                    if (!str.equals(f3349)) {
                        b = -1;
                    } else {
                        b = 5;
                    }
                    break;
                default:
                    b = -1;
                    break;
            }
            switch (b) {
                case 0:
                    this.f3362 = (String) AbstractC0912.m8788(arrayList, 0, String.class);
                    return null;
                case 1:
                    return this.f3362;
                case 2:
                    this.f3361 = (String) AbstractC0912.m8788(arrayList, 0, String.class);
                    return null;
                case 3:
                    return this.f3361;
                case 4:
                    this.f3360 = ((Double) AbstractC0912.m8788(arrayList, 0, Double.class)).doubleValue();
                    return null;
                case 5:
                    return Double.valueOf(this.f3360);
                case 6:
                    this.f3359 = ((Boolean) AbstractC0912.m8788(arrayList, 0, Boolean.class)).booleanValue();
                    return null;
                case 7:
                    return Boolean.valueOf(this.f3359);
                case 8:
                    this.f3358 = (String) AbstractC0912.m8788(arrayList, 0, String.class);
                    return null;
                case 9:
                    return this.f3358;
                case 10:
                    this.f3357 = ((Boolean) AbstractC0912.m8788(arrayList, 0, Boolean.class)).booleanValue();
                    return null;
                case 11:
                    return Boolean.valueOf(this.f3357);
                case 12:
                    this.f3356 = (JSONObject) AbstractC0912.m8788(arrayList, 0, JSONObject.class);
                    return null;
                case 13:
                    return this.f3356;
                case 14:
                    return m8823();
                case 15:
                    return m8822();
                default:
                    new C1742c0(c1013, c0704, f3355, str).m8596(c1013.m8859());
                    return null;
            }
        } catch (Exception e) {
            AbstractC0728.m8662(c1013.m8859(), AbstractC0970.m8850("EQ==\n", "NhDYY9jumX4=\n", AbstractC0502.m8559("zWS2YdqgzU7heqEuzfjfRf1irWDPoPdD7H+lesHv1GLpYqUuxuHOT/5z5GPN9NJJ7Dbj\n", "iBbEDqiAuiY=\n", new StringBuilder(), str)), e, null);
        }
    }
}
