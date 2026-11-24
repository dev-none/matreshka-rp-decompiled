package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Map;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᓭ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0674 extends AbstractC0912 implements InterfaceC0681, InterfaceC0462 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final InterfaceC0681 f2329;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final Object f2330;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final Map f2331;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final Collection f2332;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Field f2333;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final String f2328 = StringFog.decrypt("ObDbp+ZgKJcTvtWL6GQC\n", "dtKxwoUUbv4=\n");

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final String f2327 = StringFog.decrypt("rKHJ54SX4HY=\n", "y8S9seX7lRM=\n");

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static final String f2326 = StringFog.decrypt("TgHay5Am1Oc=\n", "PWSunfFKoYI=\n");

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public static final String f2325 = StringFog.decrypt("A3Aan1IMtQ==\n", "agNc9jdg0Vs=\n");

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public static final String f2324 = StringFog.decrypt("yDe4PGh1828=\n", "r1LMegEQnws=\n");

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public static final String f2323 = StringFog.decrypt("4aFkMXix9Gb8u0gw\n", "iNInXhTdkQU=\n");

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static final String f2322 = StringFog.decrypt("cb0q0rICdvF1rDf+sw==\n", "Fthekd1uGpQ=\n");

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public static final String f2321 = StringFog.decrypt("zNm9DmQ=\n", "parwbxSwX40=\n");

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public static final String f2320 = StringFog.decrypt("xhXINDVy\n", "oXC8eVQCF0g=\n");

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static final String f2319 = StringFog.decrypt("weEwA7LjjTfS\n", "poREU9OR6Fk=\n");

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public static final String f2318 = StringFog.decrypt("aqp1T0KTM+pjrGQ=\n", "Dc8BBizgR4s=\n");

    public C0674(Field field, Object obj, InterfaceC0681 interfaceC0681) {
        this.f2333 = field;
        this.f2330 = obj;
        this.f2329 = interfaceC0681;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Object m8615() {
        Field field = this.f2333;
        if (field != null) {
            try {
                return field.get(this.f2330);
            } catch (Exception unused) {
                return null;
            }
        }
        if (this.f2332 == null && this.f2331 == null) {
            return null;
        }
        return this.f2330;
    }

    public C0674(Collection collection, Object obj, InterfaceC0681 interfaceC0681) {
        this.f2332 = collection;
        this.f2330 = obj;
        this.f2329 = interfaceC0681;
    }

    /* JADX WARN: Code duplicated, block: B:36:0x0072  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0462
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8326(C1013 c1013, String str, ArrayList arrayList, C0566 c0566, C0704 c0704) {
        byte b;
        try {
            boolean z = true;
            switch (str.hashCode()) {
                case -2039060844:
                    if (!str.equals(f2322)) {
                        b = -1;
                    } else {
                        b = 5;
                    }
                    break;
                case -1661939189:
                    if (!str.equals(f2318)) {
                        b = -1;
                    } else {
                        b = 9;
                    }
                    break;
                case -1249356250:
                    if (!str.equals(f2320)) {
                        b = -1;
                    } else {
                        b = 7;
                    }
                    break;
                case 100472786:
                    if (!str.equals(f2321)) {
                        b = -1;
                    } else {
                        b = 6;
                    }
                    break;
                case 429960040:
                    if (!str.equals(f2323)) {
                        b = -1;
                    } else {
                        b = 4;
                    }
                    break;
                case 700591008:
                    if (!str.equals(f2319)) {
                        b = -1;
                    } else {
                        b = 8;
                    }
                    break;
                case 1406685743:
                    if (!str.equals(f2326)) {
                        b = -1;
                    } else {
                        b = 1;
                    }
                    break;
                case 1953253188:
                    if (!str.equals(f2324)) {
                        b = -1;
                    } else {
                        b = 3;
                    }
                    break;
                case 1967798203:
                    if (!str.equals(f2327)) {
                        b = -1;
                    } else {
                        b = 0;
                    }
                    break;
                case 2058833392:
                    if (!str.equals(f2325)) {
                        b = -1;
                    } else {
                        b = 2;
                    }
                    break;
                default:
                    b = -1;
                    break;
            }
            switch (b) {
                case 0:
                    return m8615();
                case 1:
                    Object objM8788 = AbstractC0912.m8788(arrayList, 0, Object.class);
                    Field field = this.f2333;
                    if (field != null) {
                        try {
                            field.set(this.f2330, objM8788);
                            break;
                        } catch (Exception unused) {
                        }
                    }
                    return null;
                case 2:
                    if (this.f2333 == null) {
                        z = false;
                    }
                    return Boolean.valueOf(z);
                case 3:
                    return this.f2333;
                case 4:
                    if (this.f2332 == null) {
                        z = false;
                    }
                    return Boolean.valueOf(z);
                case 5:
                    return this.f2332;
                case 6:
                    if (this.f2331 == null) {
                        z = false;
                    }
                    return Boolean.valueOf(z);
                case 7:
                    return this.f2331;
                case 8:
                    return this.f2329;
                case 9:
                    return this.f2330;
                default:
                    new C1742c0(c1013, c0704, f2328, str).m8596(c1013.m8859());
                    return null;
            }
        } catch (Exception e) {
            AbstractC0728.m8662(c1013.m8859(), AbstractC0970.m8850("gA==\n", "p1jOiEOglGo=\n", AbstractC0502.m8559("tkumoNzhXSaaVbHvy7lPLYZNvaHJ4WUsmVy3u+ioTyKXcLm/wuFEL4dQoqqOrE86m1aw74k=\n", "8znUz67BKk4=\n", new StringBuilder(), str)), e, null);
        }
    }

    public C0674(Map map, Object obj, InterfaceC0681 interfaceC0681) {
        this.f2331 = map;
        this.f2330 = obj;
        this.f2329 = interfaceC0681;
    }
}
