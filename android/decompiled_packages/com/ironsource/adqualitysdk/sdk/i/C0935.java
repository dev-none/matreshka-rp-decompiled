package com.ironsource.adqualitysdk.sdk.i;

import android.os.Handler;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashSet;
import java.util.Iterator;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ⅈ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0935 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0763 f3307;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final Handler f3308;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public C0337 f3309;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final String f3304 = StringFog.decrypt("5EgXIGtzRvrFWwA=\n", "oT5yTh8gI5Q=\n");

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final String f3303 = StringFog.decrypt("/6Ef7PZwtx37pg==\n", "nsJrs4YRwm4=\n");

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static final String f3302 = StringFog.decrypt("JNNjQmKZkyEo1XM=\n", "RbAXHRD84FQ=\n");

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public static final String f3301 = StringFog.decrypt("bKA7T5fRcUZ5pis=\n", "DcNPEPSjFCc=\n");

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public static final String f3300 = StringFog.decrypt("iu/UNj8AMgqf6cQ=\n", "64ygaUx0U3g=\n");

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public static final String f3299 = StringFog.decrypt("0yH3PMNe2w/CJ+c=\n", "skKDY7AqtH8=\n");

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static final String f3298 = StringFog.decrypt("wXtR3MId0hzSd1zmwg==\n", "oBglg6Z4oWg=\n");

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public static final String f3297 = StringFog.decrypt("rs3qL0gUh2Gr8e0EWgGU\n", "z66ecDt18QQ=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final HashSet f3306 = new HashSet();

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final HashSet f3305 = new HashSet();

    public C0935(Handler handler, C0763 c0763) {
        this.f3307 = c0763;
        this.f3308 = handler;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8810(String str, String str2, String str3, String str4, JSONObject jSONObject, boolean z) {
        synchronized (this.f3305) {
            String str5 = str3 + StringFog.decrypt("2Q==\n", "4xf9KlTXf0c=\n") + str2;
            if (!this.f3305.contains(str5) || z || AbstractC0895.m8747().mo8759()) {
                this.f3305.add(str5);
                if (Math.random() * 100.0d >= m8809()) {
                    AbstractC0323.m8471(f3304, StringFog.decrypt("ST7pr4ZmP2RjMLq4l0s+f3846OyCYj5jeXe37IN9P2MqI7q8hmcoLXk/6KmUfDRhaQ==\n", "DVeazOcUWw0=\n"));
                    return;
                }
                this.f3307.getClass();
                JSONObject jSONObject2 = new JSONObject();
                try {
                    jSONObject2.put(StringFog.decrypt("dKP6M/Y=\n", "EdGOUpGGy7c=\n"), str);
                    jSONObject2.put(StringFog.decrypt("eqhECVU=\n", "H9opejK/6iI=\n"), str2);
                    jSONObject2.put(StringFog.decrypt("3G11fnmT\n", "uR8WER32qzE=\n"), str3);
                    if (!TextUtils.isEmpty(str4)) {
                        jSONObject2.put(StringFog.decrypt("jswsLK0=\n", "675fWMZC+dY=\n"), str4);
                    }
                    if (jSONObject != null) {
                        AbstractC0939.m8817(jSONObject2, jSONObject, false);
                    }
                } catch (JSONException e) {
                    String str6 = C0763.f2600;
                    AbstractC0323.m8479(str6, str6, StringFog.decrypt("OZPQCdf/AWAYiMwBhboSdhOTggvArBNlG4Q=\n", "fOGiZqXfYAQ=\n"), e, null, false);
                }
                String strDecrypt = StringFog.decrypt("FCZVSEoFpUM=\n", "YFYKLTh3yjE=\n");
                Iterator it = new HashSet(this.f3306).iterator();
                while (it.hasNext()) {
                    JSONObject jSONObjectMo8566 = ((InterfaceC0652) it.next()).mo8566(strDecrypt, jSONObject2);
                    if (jSONObjectMo8566 != null) {
                        AbstractC0939.m8817(jSONObject2, jSONObjectMo8566, false);
                    }
                }
                this.f3307.m8710(StringFog.decrypt("Wwk0HpWeuNI=\n", "L3lre+fs16A=\n"), jSONObject2);
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static double m8809() {
        JSONObject jSONObject;
        if (((C0896) AbstractC0895.m8747()).f3168) {
            return 100.0d;
        }
        C0896 c0896 = (C0896) AbstractC0895.m8747();
        synchronized (c0896) {
            jSONObject = c0896.f2592;
        }
        return jSONObject.optDouble(StringFog.decrypt("CcIe\n", "faduNbcPcIM=\n"), 5.0d);
    }
}
