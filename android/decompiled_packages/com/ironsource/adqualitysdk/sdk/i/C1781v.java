package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.os.Handler;
import android.os.Looper;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.v, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1781v {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static C1781v f520;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public HashMap f522;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final HashMap f523 = new HashMap();

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final Handler f521 = new Handler(Looper.getMainLooper());

    static {
        StringFog.decrypt("dFZqg9yC4ANlWmuJ26jRDnBc\n", "ADkf4LTGhXc=\n");
        StringFog.decrypt("c+CN\n", "EpThZ/JU83M=\n");
        StringFog.decrypt("56k=\n", "lcVcn0ZWE8c=\n");
        StringFog.decrypt("GigE\n", "dEdq6ndn1K0=\n");
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static synchronized C1781v m8425() {
        if (f520 == null) {
            f520 = new C1781v();
        }
        return f520;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized boolean m8428(Activity activity) {
        return EnumC1779u.f516 == m8429(activity);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized EnumC1779u m8429(Activity activity) {
        if (activity != null) {
            String name = activity.getClass().getName();
            if (m8427().containsKey(name)) {
                return (EnumC1779u) m8427().get(name);
            }
            if (m8430().containsKey(name)) {
                return (EnumC1779u) m8430().get(name);
            }
        }
        return EnumC1779u.m8424(AbstractC0895.m8747().mo8761());
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized HashMap m8427() {
        return new HashMap(this.f523);
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final synchronized boolean m8426(Activity activity) {
        return EnumC1779u.f515 == m8429(activity);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized Map m8430() {
        JSONObject jSONObjectOptJSONObject;
        if (this.f522 == null) {
            this.f522 = new HashMap();
            C0941 c0941 = ((C0896) AbstractC0895.m8747()).f2591;
            if (c0941 != null) {
                jSONObjectOptJSONObject = c0941.f3319.optJSONObject(C0941.f3316);
                if (jSONObjectOptJSONObject == null) {
                    jSONObjectOptJSONObject = c0941.f3318;
                }
            } else {
                jSONObjectOptJSONObject = null;
            }
            if (jSONObjectOptJSONObject != null) {
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    linkedHashMap.put(next, EnumC1779u.m8424(jSONObjectOptJSONObject.optString(next)));
                }
                this.f522 = linkedHashMap;
            }
        }
        return this.f522;
    }
}
