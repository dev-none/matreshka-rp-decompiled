package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.TimeUnit;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᖬ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0742 extends AbstractC0759 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final String f2552 = StringFog.decrypt("NcCZ\n", "RrTqRjOHtug=\n");

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final String f2551 = StringFog.decrypt("9uQ=\n", "gpfh0v1C/EM=\n");

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static final String f2550 = StringFog.decrypt("pEw=\n", "0TiuRGeoqCs=\n");

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public static final String f2549 = StringFog.decrypt("iwVqoQ==\n", "5mgL11lZUCg=\n");

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final int f2555 = (int) TimeUnit.SECONDS.toMillis(120);

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final String f2554 = StringFog.decrypt("F8SkpoOAnQ==\n", "Z7bL0uzu7lE=\n");

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final String f2553 = StringFog.decrypt("Sx3rLMUtOWJd\n", "LnGOT7FfVgw=\n");

    public C0742(C0941 c0941) {
        this.f2591 = c0941;
    }

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final String m8676() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(StringFog.decrypt("cf1W\n", "BI86S8qYGlQ=\n"));
        return jSONObjectOptJSONObject != null ? jSONObjectOptJSONObject.optString(StringFog.decrypt("gQ==\n", "5B0x+/273qo=\n"), this.f2553) : this.f2553;
    }

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final long m8677() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optLong(f2550, 0L);
    }

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final long m8678() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optLong(f2551, 0L);
    }

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final int m8679() {
        JSONObject jSONObject;
        if (((C0896) AbstractC0895.m8747()).f3168) {
            synchronized (this) {
                jSONObject = this.f2592;
            }
            if (jSONObject.optBoolean(StringFog.decrypt("dTKIrw==\n", "EVvpyMoH4hI=\n"), false)) {
                return m8683();
            }
        }
        return m8687().optInt(StringFog.decrypt("0Xdu\n", "vAEdoXw8vXc=\n"), 9850);
    }

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final int m8680() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optInt(StringFog.decrypt("lTiJ\n", "+F35FdKCfvI=\n"), 40);
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final HashMap m8681() {
        JSONObject jSONObject;
        HashMap map = new HashMap();
        synchronized (this) {
            jSONObject = this.f2592;
        }
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(StringFog.decrypt("yB7MvA==\n", "rmqlyDla3Ng=\n"));
        if (jSONObjectOptJSONObject != null) {
            Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                int iOptInt = jSONObjectOptJSONObject.optInt(next, -1);
                if (iOptInt >= 0) {
                    map.put(next, Integer.valueOf(iOptInt));
                }
            }
        }
        return map;
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final List m8682() {
        JSONObject jSONObject;
        C0941 c0941 = this.f2591;
        JSONObject jSONObject2 = c0941.f3319;
        String str = c0941.f3320;
        List arrayList = new ArrayList();
        String str2 = AbstractC0939.f3313;
        JSONArray jSONArrayOptJSONArray = jSONObject2.optJSONArray(str);
        if (jSONArrayOptJSONArray != null) {
            arrayList = AbstractC0939.m8813(jSONArrayOptJSONArray);
        }
        synchronized (this) {
            jSONObject = this.f2592;
        }
        String strDecrypt = StringFog.decrypt("UC/4\n", "NVuAVTHzoak=\n");
        List arrayList2 = new ArrayList();
        JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray(strDecrypt);
        if (jSONArrayOptJSONArray2 != null) {
            arrayList2 = AbstractC0939.m8813(jSONArrayOptJSONArray2);
        }
        arrayList.addAll(arrayList2);
        return arrayList;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final int m8683() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optInt(StringFog.decrypt("WBnHe8T/gw==\n", "PHCmHKmJ8OA=\n"), 1000000);
    }
}
