package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import android.util.Log;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.ref.WeakReference;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﻤ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC1104 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static WeakReference f3933;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8887(String str, String str2, Throwable th, boolean z) {
        try {
            m8888(str, str2, th, z, false, false);
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8888(String str, String str2, Throwable th, boolean z, boolean z2, boolean z3) {
        try {
            if (z) {
                AbstractC0323.m8481(str, str2, z3);
                if (th != null) {
                    AbstractC0323.m8479(str, str, StringFog.decrypt("psLGODqHH/s=\n", "4qeyWVPrbME=\n"), th, null, z3);
                }
            } else {
                AbstractC0323.m8479(str, str, str2, th, null, z3);
            }
            m8886(str, str2, StringFog.decrypt("LEVLmlwdJioTDQ==\n", "eDcq+Tl/R0k=\n") + str, th, null, null, false, z2, z3);
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8886(String str, String str2, String str3, Throwable th, AbstractC0618 abstractC0618, JSONObject jSONObject, boolean z, boolean z2, boolean z3) {
        String str4;
        String stackTraceString;
        if (z) {
            try {
                String str5 = str3 + StringFog.decrypt("AA==\n", "OuvxnGacTVY=\n") + str;
                AbstractC0323.m8479(str, str, str2 + StringFog.decrypt("rxXmQTLjxA==\n", "jz2FLlaG5Gs=\n") + str5 + StringFog.decrypt("Iw==\n", "ChiZ0kO1eqk=\n"), th, abstractC0618, z3);
                str4 = str5;
            } catch (Throwable unused) {
                return;
            }
        } else {
            str4 = str3;
        }
        C0935 c0935 = (C0935) f3933.get();
        if (c0935 != null) {
            if (abstractC0618 != null) {
                stackTraceString = abstractC0618.toString();
            } else if (th instanceof AbstractC0618) {
                stackTraceString = th.toString();
            } else {
                stackTraceString = Log.getStackTraceString(th);
            }
            c0935.m8810(str, str2, str4, stackTraceString, jSONObject, z2);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8885(String str, String str2, String str3, String str4) {
        try {
            if (TextUtils.isEmpty(str3)) {
                return;
            }
            String str5 = str3 + StringFog.decrypt("yA==\n", "8ols3AahP2U=\n") + str;
            AbstractC0323.m8481(str, StringFog.decrypt("Z1bGcWCqIfBWTJQ=\n", "IiS0HhKKVpk=\n") + str5 + StringFog.decrypt("kfDpsDv76f/F8OiqcA==\n", "sZmHxF6cm54=\n"), false);
            StringBuilder sb = new StringBuilder();
            sb.append(str2);
            sb.append(str4 != null ? "\n".concat(str4) : "");
            AbstractC0323.m8481(str, sb.toString(), false);
            C0935 c0935 = (C0935) f3933.get();
            if (c0935 != null) {
                c0935.m8810(str, str2, str5, str4, null, false);
            }
        } catch (Throwable unused) {
        }
    }
}
