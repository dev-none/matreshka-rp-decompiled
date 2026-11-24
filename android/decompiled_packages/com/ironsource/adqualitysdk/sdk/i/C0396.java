package com.ironsource.adqualitysdk.sdk.i;

import android.util.Log;
import com.ironsource.adqualitysdk.sdk.ISAdQualityLogLevel;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Һ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0396 {

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static final String f1471 = StringFog.decrypt("OOeP\n", "dsjO4KDs/9w=\n");

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public boolean f1476;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public String f1479;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public String f1480;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public String f1481;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public String f1482;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public String f1483;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public String f1484;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public String f1485;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public EnumC0398 f1478 = EnumC0398.f1493;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public EnumC0405 f1477 = EnumC0405.f1508;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public long f1475 = 0;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public long f1474 = 0;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public long f1473 = 0;

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public long f1472 = -1;

    public C0396(String str) {
        this.f1485 = str;
        this.f1484 = str;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8510(EnumC0398 enumC0398) {
        String strM8497;
        String strDecrypt;
        this.f1478 = enumC0398;
        EnumC0398 enumC0399 = EnumC0398.f1488;
        if (enumC0398 != enumC0399) {
            this.f1477 = EnumC0405.f1508;
        }
        int iOrdinal = enumC0398.ordinal();
        if (iOrdinal == 1) {
            this.f1475 = System.currentTimeMillis();
            return;
        }
        if (iOrdinal == 2) {
            this.f1474 = System.currentTimeMillis();
            return;
        }
        if (iOrdinal == 3) {
            this.f1473 = System.currentTimeMillis();
        } else if (iOrdinal != 4 && iOrdinal != 5) {
            return;
        }
        if (this.f1484.equals(StringFog.decrypt("HHf+ixIc2w==\n", "SxKc3Xt5rPE=\n"))) {
            return;
        }
        StringBuilder sb = new StringBuilder();
        StringBuilder sb2 = new StringBuilder();
        StringBuilder sb3 = new StringBuilder();
        sb3.append(StringFog.decrypt("wX7cb6teYjLBftxvq15v\n", "7FPxQoZzTx8=\n"));
        sb3.append(this.f1484);
        String strM8850 = AbstractC0970.m8850("4mbUuQIhyrCtd5s=\n", "wgW712xEqcQ=\n", sb3);
        if (this.f1483 != null) {
            strM8850 = strM8850 + this.f1483 + " ";
        }
        sb2.append(strM8850 + StringFog.decrypt("Tun1aBLqQHNO6fVoEuo=\n", "Y8TYRT/HbV4=\n"));
        sb2.append("\n");
        sb.append(sb2.toString());
        String str = null;
        if (this.f1484 == null || (strDecrypt = this.f1482) == null) {
            strM8497 = null;
        } else {
            if (strDecrypt.equals(f1471) && this.f1478 != EnumC0398.f1489) {
                strDecrypt = StringFog.decrypt("2bM1MU5HBNn/uSU=\n", "l9xBESgicLo=\n");
            }
            StringBuilder sb4 = new StringBuilder();
            sb4.append(this.f1484);
            strM8497 = AbstractC0343.m8497("bLuUD+S+SF8/gb8q/ug=\n", "TOjQRMTILS0=\n", sb4, strDecrypt);
        }
        if (strM8497 != null) {
            sb.append(strM8497.concat("\n"));
        }
        if (this.f1481 != null && this.f1480 != null) {
            str = StringFog.decrypt("aWxqK/r9ratTR094jOuqqEpHU3/J/OX4\n", "OighC6yY39g=\n") + this.f1481 + StringFog.decrypt("bHaq\n", "TFuK7S3n5yU=\n") + this.f1480;
        }
        if (str != null) {
            sb.append(str.concat("\n"));
        }
        StringBuilder sb5 = new StringBuilder();
        sb5.append(StringFog.decrypt("PCR56zTumyo=\n", "b1AYn0GdoQo=\n"));
        EnumC0398 enumC03910 = this.f1478;
        sb5.append(enumC03910 == enumC0399 ? StringFog.decrypt("ey7JifVu6Q==\n", "LG+bx7wgrjo=\n") : enumC03910.name());
        sb5.append("\n");
        sb.append(sb5.toString());
        EnumC0398 enumC03911 = this.f1478;
        if (enumC03911 == EnumC0398.f1490 || enumC03911 == EnumC0398.f1489) {
            String strDecrypt2 = StringFog.decrypt("SrA1JwNBkQFyhyAZ\n", "C9RkUmIt+HU=\n");
            AbstractC0323.m8480(strDecrypt2, strDecrypt2, sb.toString(), true);
            return;
        }
        String strM8509 = m8509(this.f1477);
        if (strM8509 != null) {
            sb.append(StringFog.decrypt("Ucet1m6FYEI8\n", "HKLepQ/iBXg=\n") + strM8509);
        }
        String string = sb.toString();
        String strDecrypt3 = StringFog.decrypt("fqOQTLmR6Q1GlIVy\n", "P8fBOdj9gHk=\n");
        if (AbstractC0323.m8474()) {
            Log.w(AbstractC0323.m8476(strDecrypt3), string);
        } else if (AbstractC0323.m8475().shouldPrintLog(ISAdQualityLogLevel.WARNING)) {
            Log.w(AbstractC0323.m8476(strDecrypt3), string);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String m8509(EnumC0405 enumC0405) {
        if (enumC0405 == null) {
            return null;
        }
        switch (enumC0405.ordinal()) {
            case 1:
                return String.format(StringFog.decrypt("BbaziyQ7imBFt+CRLz6KM1Pl4Z0xJcNkRbazsRMRzkdVpP+RNCmKRWSOs44lItl/T6uz3TNwxWQA\nq/aPJSI=\n", "IMWT+EBQqhY=\n"), this.f1484, this.f1482, this.f1479);
            case 2:
                return String.format(StringFog.decrypt("29Vdb44Likqb1A5VpS6KGY2GFE/qLsVI3t8YSOoz30yOyQ9IrySKXoeGCVSvYMlTkMgYX74v2A==\n", "/qZ9PMpAqjw=\n"), this.f1484, this.f1482);
            case 3:
                return StringFog.decrypt("7J+DB+ZJBrPF3oMF6llPpsaXkA6jTkmpxJuJH+xf\n", "qv7qa4MtJsc=\n");
            case 4:
                return StringFog.decrypt("5o5NcTTT+bjPz0dvNNatqYCMS3M/0rq4z50=\n", "oO8kHVG32cw=\n");
            case 5:
                return StringFog.decrypt("rEztccrQiyKFDeJ429fDdolC6nPK1985mA==\n", "6i2EHa+0q1Y=\n");
            case 6:
                return StringFog.decrypt("XcDNyJtj90pt3NTJhjT2CWvb1NSRcA==\n", "CK6mpvQUmWo=\n");
            case 7:
                return StringFog.decrypt("yFA1JObOz6z0Vjoz4N6AvbtRJ3btxZvv6V01Mvo=\n", "mzhUVoOq788=\n");
            default:
                return null;
        }
    }
}
