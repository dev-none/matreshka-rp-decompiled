package com.ironsource.adqualitysdk.sdk.i;

import com.five_corp.ad.AdActivity;
import com.five_corp.ad.CreativeType;
import com.five_corp.ad.FiveAd;
import com.five_corp.ad.FiveAdConfig;
import com.five_corp.ad.FiveAdCustomLayout;
import com.five_corp.ad.FiveAdFormat;
import com.five_corp.ad.FiveAdInterface;
import com.five_corp.ad.FiveAdInterstitial;
import com.five_corp.ad.FiveAdInterstitialEventListener;
import com.five_corp.ad.FiveAdListener;
import com.five_corp.ad.FiveAdLoadListener;
import com.five_corp.ad.FiveAdState;
import com.five_corp.ad.FiveAdVideoReward;
import com.five_corp.ad.FiveAdVideoRewardEventListener;
import com.five_corp.ad.FiveAdViewEventListener;
import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.є, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0379 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f1444 = StringFog.decrypt("Z08ujL5GXn1GWDWgj1JUdm5MM6o=\n", "ACpazc42Fxk=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f1443 = StringFog.decrypt("x6y3kwZFwhTEgK2hCkHBNMOskLkAR+4x\n", "oMnD1W8zp1U=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f1442 = StringFog.decrypt("jo3uDco5ziqNofQ/xj3NCoqNzirE\n", "6eiaS6NPq2s=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f1441 = StringFog.decrypt("mNwNF7XVJ+Kb8BcludEkwpzcOiO5wjbKidwtKKzG\n", "/7l5UdyjQqM=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f1440 = StringFog.decrypt("a2RI8wNXBGRoSFLBD1MHRG9kfdE6QBNEYWRI0Bg=\n", "DAE8tWohYSU=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f1439 = StringFog.decrypt("T4s5193pFIVMpyPl0e0XpUuLAfjH6xSqTZw=\n", "KO5NkbSfccQ=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f1438 = StringFog.decrypt("YmJiXdaygNt1Tnhv2raD+3JiWnLMsID0dHU=\n", "EQcWG7/E5Zo=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f1437 = StringFog.decrypt("ymMWd3mzWt/JVQtfd6la6sJo\n", "rQZiMRDFP54=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f1436 = StringFog.decrypt("/IdZfLTJmw//oVhJqdCTAvqbQk+p/po4/pBZU67ajAD6j0g=\n", "m+ItOt2//k4=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f1435 = StringFog.decrypt("zjFFsG4fYAnUJ0WZbxt2\n", "vVQx/AF+BEU=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f1434 = StringFog.decrypt("VLI1LwpIUYRRsi8NL0RVtUK5JAs=\n", "J9dBeWMtJsE=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f1433 = StringFog.decrypt("VSh1IP6/\n", "E0EDRb/bjJg=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f1432 = StringFog.decrypt("V3isOGP2hfxAc7k8\n", "FArJWRef85k=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f1431 = StringFog.decrypt("8pIZtbaxCZnanQa3\n", "tPtv0PfVSvY=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f1430 = StringFog.decrypt("/BAQnkh+UTXJDQmWRXtrL88N\n", "unlm+wkaEkA=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f1429 = StringFog.decrypt("Q5pBO0bn5t1/lkNnUKDx3A6zRWNFz/T7VYZYek3C8cFPgFg=\n", "IPUsFSCOkLg=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f1428 = StringFog.decrypt("m1Qz5ePZsE2vUCT0\n", "3T1FgKK99iI=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f1427 = StringFog.decrypt("7HJXOs/IaOreflM5789E\n", "qhshX46sIYQ=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f1426 = StringFog.decrypt("9iYaNgI0e0jEKh4gNzlGT9Ej\n", "sE9sU0NQMiY=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f1425 = StringFog.decrypt("wG7SPKWnuKD1c8E3gbE=\n", "hgekWeTD9Mk=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f1424 = StringFog.decrypt("ePz0ziV3su9a8O35AWSF9Fo=\n", "PpWCq2QT5IY=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f1423 = StringFog.decrypt("/4PfheIziMzYnsw=\n", "ueqp4KNX27g=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f1422 = StringFog.decrypt("QiXLnJerewdlKPGQpbtSBmE+\n", "BEy9+dbPN2g=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f1421 = StringFog.decrypt("NDMtbwFQnKcXLR58JVq+ghspL28uUbg=\n", "clpbCkA0ys4=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f1420 = StringFog.decrypt("BNq8Lfhv2ncxxw==\n", "Rb79TowGrB4=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f1419 = StringFog.decrypt("w+tWEwr9jLT/51RPHLqbtY7FX3wP4JOnyfBC\n", "oIQ7PWyU+tE=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f1418 = StringFog.decrypt("GyuW1R7i0QMpJ5LDK+/sBDwupcY66OwhNDGU1THj6g==\n", "XULgsF+GmG0=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f1417 = StringFog.decrypt("U28MeJVeawFxYxVPsU1cGnFDDHi6TnEBZnIfc7FI\n", "FQZ6HdQ6PWg=\n");

    public C0379(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        return FiveAd.getSdkSemanticVersion();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f1444, new C0461(this));
        map.put(f1443, new C0460(this));
        map.put(f1442, new C0458(this));
        map.put(f1441, new C0449(this));
        map.put(f1440, new C0436(this));
        map.put(f1439, new C0420(this));
        map.put(f1438, new C0419(this));
        map.put(f1437, new C0409(this));
        map.put(f1436, new C0404(this));
        map.put(f1435, new C0487(this));
        map.put(f1434, new C0470(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:56:0x00c3  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -1836618638:
                if (!str.equals(f1420)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case -1782131271:
                if (!str.equals(f1417)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case -962125644:
                if (!str.equals(f1421)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case -939888073:
                if (!str.equals(f1431)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case -853874964:
                if (!str.equals(f1428)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case -735613671:
                if (!str.equals(f1419)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case -624329424:
                if (!str.equals(f1430)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case -295916403:
                if (!str.equals(f1418)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case -189625759:
                if (!str.equals(f1426)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case -6611420:
                if (!str.equals(f1427)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case 636996201:
                if (!str.equals(f1425)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case 890103511:
                if (!str.equals(f1429)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case 1252059573:
                if (!str.equals(f1424)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case 1508614908:
                if (!str.equals(f1423)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case 1835584239:
                if (!str.equals(f1422)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case 1942443945:
                if (!str.equals(f1432)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 2104624789:
                if (!str.equals(f1433)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return FiveAd.class;
            case 1:
                return CreativeType.class;
            case 2:
                return FiveAdConfig.class;
            case 3:
            case 4:
                return FiveAdCustomLayout.class;
            case 5:
                return FiveAdFormat.class;
            case 6:
                return FiveAdInterface.class;
            case 7:
                return FiveAdInterstitial.class;
            case 8:
                return FiveAdListener.class;
            case 9:
                return FiveAdVideoReward.class;
            case 10:
                return FiveAdState.class;
            case 11:
                return FiveAdLoadListener.class;
            case 12:
                return FiveAdViewEventListener.class;
            case 13:
            case 14:
                return AdActivity.class;
            case 15:
                return FiveAdInterstitialEventListener.class;
            case 16:
                return FiveAdVideoRewardEventListener.class;
            default:
                return null;
        }
    }
}
