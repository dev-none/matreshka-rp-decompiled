package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.s, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1775s {

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static volatile boolean f495;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public static volatile C1775s f496;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static final String f499 = StringFog.decrypt("reACdA==\n", "2ZJ3EUq2F8g=\n");

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public static final String f498 = StringFog.decrypt("o+i+ebI=\n", "xYnSCtcKbOg=\n");

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public static final List f497 = Arrays.asList(StringFog.decrypt("nx4=\n", "9niG8tBYpfw=\n"), StringFog.decrypt("by7Usw==\n", "CkKn1ql4DkU=\n"), StringFog.decrypt("+1djWA==\n", "lSIPNDZjxas=\n"), StringFog.decrypt("Q4T1W5fZ\n", "MeGBLuW3nAY=\n"), StringFog.decrypt("DgmiSj4=\n", "fXzSL0yQYO8=\n"), StringFog.decrypt("KgQr\n", "XnZS+VmQ2mY=\n"), StringFog.decrypt("9+aRwCI=\n", "lIflo0os5XI=\n"));

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final r[] f505 = new r[128];

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final r[] f504 = new r[128];

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final HashMap f503 = new HashMap();

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final HashMap f502 = new HashMap();

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final HashMap f501 = new HashMap();

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final HashMap f500 = new HashMap();

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean f506 = f495;

    public C1775s() {
        String strDecrypt = StringFog.decrypt("s//qLQFnJxi3+ew7AzFwbM/u6T0=\n", "ksLWEypKDTc=\n");
        for (int i = 0; i < strDecrypt.length(); i++) {
            char cCharAt = strDecrypt.charAt(i);
            this.f505[cCharAt] = new r(EnumC1772q.f486, String.valueOf(cCharAt));
        }
        for (String str : Arrays.asList(StringFog.decrypt("eAA=\n", "RT2tn25Llck=\n"), StringFog.decrypt("1PY=\n", "9cvh12/l4E4=\n"), StringFog.decrypt("n04=\n", "o3MuvqcpjQ0=\n"), StringFog.decrypt("dV4=\n", "S2OH0qmjlqk=\n"), StringFog.decrypt("5Og=\n", "z8MwwhEHN40=\n"), StringFog.decrypt("aCg=\n", "RQVCV77srrA=\n"), StringFog.decrypt("7+4=\n", "k5LTGamCddE=\n"), StringFog.decrypt("Ai0=\n", "JAuEs+Ad1Bw=\n"))) {
            this.f504[str.charAt(0)] = new r(EnumC1772q.f486, str);
        }
        for (String str2 : f497) {
            this.f503.put(str2, new r(EnumC1772q.f488, str2));
        }
        HashMap map = this.f503;
        String strDecrypt2 = StringFog.decrypt("ULnPOw==\n", "JMu6XmfE8Ts=\n");
        EnumC1772q enumC1772q = EnumC1772q.f482;
        map.put(strDecrypt2, new r(enumC1772q, StringFog.decrypt("PPCA/g==\n", "SIL1mwa6hVA=\n")));
        this.f503.put(StringFog.decrypt("GvVyytg=\n", "fJQeub1c4Rc=\n"), new r(enumC1772q, StringFog.decrypt("FizDIV8=\n", "cE2vUjrNGpQ=\n")));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static synchronized void m8416() {
        C1775s c1775s = f496;
        f496 = null;
        if (c1775s != null) {
            c1775s.m8420();
        }
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final synchronized r m8417(String str) {
        EnumC1772q enumC1772q;
        if (this.f506) {
            return m8423(this.f503, EnumC1772q.f487, str);
        }
        if (f499.equals(str) || f498.equals(str)) {
            enumC1772q = EnumC1772q.f482;
        } else {
            enumC1772q = f497.contains(str) ? EnumC1772q.f488 : EnumC1772q.f487;
        }
        return new r(enumC1772q, str);
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final synchronized r m8418(String str) {
        return m8423(this.f502, EnumC1772q.f485, str);
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized void m8420() {
        this.f503.clear();
        this.f502.clear();
        this.f501.clear();
        this.f500.clear();
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized r m8419(String str) {
        return m8423(this.f501, EnumC1772q.f484, str);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final r m8421(char c, char c2) {
        if (!this.f506) {
            return new r(EnumC1772q.f486, "" + c + c2);
        }
        return this.f504[c];
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized r m8422(String str) {
        return m8423(this.f501, EnumC1772q.f483, str);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final r m8423(HashMap map, EnumC1772q enumC1772q, String str) {
        if (!this.f506) {
            return new r(enumC1772q, str);
        }
        r rVar = (r) map.get(str);
        if (rVar != null) {
            return rVar;
        }
        r rVar2 = new r(enumC1772q, str);
        map.put(str, rVar2);
        return rVar2;
    }
}
