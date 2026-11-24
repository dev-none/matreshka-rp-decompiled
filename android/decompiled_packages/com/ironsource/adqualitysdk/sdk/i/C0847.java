package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵧ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0847 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public boolean f3057;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public boolean f3058;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public boolean f3059;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Object f3060;

    public C0847(Object obj) {
        this.f3060 = obj;
    }

    public final String toString() {
        if (this.f3060 instanceof String) {
            StringBuilder sb = new StringBuilder();
            sb.append(StringFog.decrypt("Wg==\n", "eGeUleBzHTU=\n"));
            sb.append(this.f3060);
            return AbstractC0970.m8850("Kg==\n", "CDz2lmto8RQ=\n", sb);
        }
        return this.f3060 + "";
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final Number m8736() {
        Object obj = this.f3060;
        if (obj instanceof Integer) {
            return (Integer) obj;
        }
        if (obj instanceof Long) {
            return (Long) obj;
        }
        if (obj instanceof Double) {
            return (Double) obj;
        }
        return null;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean m8737() {
        Object obj = this.f3060;
        if (obj == null) {
            return false;
        }
        if (obj instanceof Boolean) {
            return ((Boolean) obj).booleanValue();
        }
        if (obj instanceof Integer) {
            return ((Integer) obj).intValue() != 0;
        }
        if (obj instanceof Long) {
            return ((Long) obj).longValue() != 0;
        }
        if (obj instanceof Double) {
            return ((Double) obj).doubleValue() != 0.0d;
        }
        if (obj instanceof String) {
            return !TextUtils.isEmpty((String) obj);
        }
        return true;
    }
}
