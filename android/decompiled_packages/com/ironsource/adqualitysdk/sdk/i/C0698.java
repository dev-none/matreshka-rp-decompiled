package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᔅ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0698 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String f2420;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f2421;

    public C0698(String str, String str2) {
        if (str == null || str.trim().isEmpty()) {
            throw new IllegalArgumentException(StringFog.decrypt("yJs2gBXoBqXysBOADvgHoruxEtRD7xH2+bMczgg=\n", "m999oGONdNY=\n"));
        }
        if (str2 == null || str2.trim().isEmpty()) {
            throw new IllegalArgumentException(StringFog.decrypt("K0xa0/dP4XMLT0LT036yb0pSRYeeaaQ7CFBLndU=\n", "ajwq874LwRs=\n"));
        }
        this.f2421 = str;
        this.f2420 = str2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C0698)) {
            return false;
        }
        C0698 c0698 = (C0698) obj;
        c0698.getClass();
        return this.f2421.equals(c0698.f2421) && this.f2420.equals(c0698.f2420);
    }

    public final int hashCode() {
        Long l = 300000L;
        return l.hashCode() + ((((((this.f2420.hashCode() + (this.f2421.hashCode() * 31)) * 31) + 2) * 31) + 2) * 31);
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("EEqLmgYmdv06SpqsGy1c9SRUm4sfFV/uMEaHgUlk\n", "Qy/o73RDOpw=\n"));
        sb.append(this.f2421);
        sb.append('\'');
        sb.append(StringFog.decrypt("2eInaEBTVD+UsS4lFw==\n", "9cJGGDAaMHc=\n"));
        sb.append(this.f2420);
        sb.append('\'');
        sb.append(StringFog.decrypt("Fcuv7GLAU4BLhuI=\n", "OevfgAO0Ne8=\n"));
        sb.append(2);
        sb.append(StringFog.decrypt("yp5bbAKUCImVzVFsAbADnIOD\n", "5r44A2/keuw=\n"));
        sb.append(2);
        return AbstractC0343.m8497("HfFOD5/UfVBUolcPivBHVlSmbh3a\n", "MdEjbueAFD0=\n", sb, "300000}");
    }
}
