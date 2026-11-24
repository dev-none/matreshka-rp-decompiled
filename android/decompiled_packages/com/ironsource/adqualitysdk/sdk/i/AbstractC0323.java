package com.ironsource.adqualitysdk.sdk.i;

import android.util.Log;
import com.ironsource.adqualitysdk.sdk.ISAdQualityLogLevel;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Λ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0323 {
    static {
        StringFog.decrypt("OjZHTduy5aEQIQhi7Izlsh8tXFo=\n", "c0QoI4jdkNM=\n");
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static void m8470(String str, String str2) {
        m8479(str, str, str2, null, null, false);
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static void m8471(String str, String str2) {
        m8478(str, str, str2, null, false);
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static boolean m8474() {
        boolean z;
        C1142 c1142M8930 = C1142.m8930();
        synchronized (c1142M8930) {
            z = c1142M8930.f4009;
        }
        return z;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static ISAdQualityLogLevel m8475() {
        ISAdQualityLogLevel iSAdQualityLogLevel;
        C1142 c1142M8930 = C1142.m8930();
        synchronized (c1142M8930) {
            iSAdQualityLogLevel = c1142M8930.f4008;
        }
        return iSAdQualityLogLevel;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static void m8472(String str, String str2) {
        m8479(str, str, str2, null, null, true);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8481(String str, String str2, boolean z) {
        m8479(str, str, str2, null, null, z);
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static void m8473(String str, String str2, String str3, boolean z) {
        if (m8474()) {
            Log.v(m8476(str), str3);
        } else if (z && m8475().shouldPrintLog(ISAdQualityLogLevel.VERBOSE)) {
            Log.v(m8476(str2), str3);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8479(String str, String str2, String str3, Throwable th, AbstractC0618 abstractC0618, boolean z) {
        if (m8474()) {
            String strM8476 = m8476(str);
            if (abstractC0618 != null) {
                str3 = str3 + "\n" + abstractC0618;
            }
            Log.e(strM8476, str3, th);
            return;
        }
        if (z && m8475().shouldPrintLog(ISAdQualityLogLevel.ERROR)) {
            String strM8477 = m8476(str2);
            if (abstractC0618 != null) {
                str3 = str3 + "\n" + abstractC0618;
            }
            Log.e(strM8477, str3, th);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8480(String str, String str2, String str3, boolean z) {
        if (m8474()) {
            Log.i(m8476(str), str3);
        } else if (z && m8475().shouldPrintLog(ISAdQualityLogLevel.INFO)) {
            Log.i(m8476(str2), str3);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8477(String str, String str2) {
        m8478(str, str, str2, null, true);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8478(String str, String str2, String str3, Object obj, boolean z) {
        if (obj != null) {
            str3 = str3 + "\n" + obj.toString();
        }
        if (m8474()) {
            Log.d(m8476(str), str3);
        } else if (z && m8475().shouldPrintLog(ISAdQualityLogLevel.DEBUG)) {
            Log.d(m8476(str2), str3);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8476(String str) {
        return AbstractC0343.m8497("kRYdZI/kcVu7AVJLuNpxSLQNBnPmqw==\n", "2GRyCtyLBCk=\n", new StringBuilder(), str);
    }
}
