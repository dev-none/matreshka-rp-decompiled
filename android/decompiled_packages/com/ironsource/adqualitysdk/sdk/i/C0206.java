package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import com.ogury.ad.OguryInterstitialAd;
import com.ogury.ad.OguryInterstitialAdListener;
import com.ogury.ad.OguryReward;
import com.ogury.ad.OguryRewardedAd;
import com.ogury.ad.OguryRewardedAdListener;
import com.ogury.ad.interstitial.ui.InterstitialActivity;
import com.ogury.sdk.Ogury;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ŗ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0206 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f873 = StringFog.decrypt("ccMKMcVPXmxx0hcMwlpXX2bqFwvfXlV7cA==\n", "AqZ+eKs7Ox4=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f872 = StringFog.decrypt("NmmlxN6Oy2shabXX37XDajFpv/PJ\n", "RQzRlrv5qhk=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f871 = StringFog.decrypt("Xb8thGIw5dhH/iHOIz7+3luiM95kI/nLUv41wyMe/t5bojPeZCP5y1KRI95kIfneRw==\n", "PtBAqg1XkKo=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f870 = StringFog.decrypt("ucDSdDw7SlmEx8d9DytKWYbH0mg=\n", "8K6mEU5IPjA=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f869 = StringFog.decrypt("hWDGJb4=\n", "ygezV8dQJ4o=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f868 = StringFog.decrypt("fsdL9F1BC7FU0k3yTXwMpF3hWg==\n", "MaA+hiQIZcU=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f867 = StringFog.decrypt("P5V72dHKtD8VgH3fwfezKhyzaufB8K4uHpd8\n", "cPIOq6iD2ks=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f866 = StringFog.decrypt("VXB4nf4u0ZN7ZWmK4z3Q\n", "GhcN74d8tOQ=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f865 = StringFog.decrypt("TdBRqYs6xftjxUC+linEwGvEUL6cDdI=\n", "Arck2/JooIw=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f864 = StringFog.decrypt("T7fqiCj/d/Fhovs=\n", "ANCf+lGtEoY=\n");

    public C0206(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        try {
            return Ogury.getSdkVersion();
        } catch (Throwable unused) {
            return null;
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f873, new C0220(this));
        map.put(f872, new C0215(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:29:0x0058  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -1704786309:
                if (!str.equals(f870)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case -734879533:
                if (!str.equals(f864)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 76142724:
                if (!str.equals(f869)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 82913255:
                if (!str.equals(f867)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case 186993737:
                if (!str.equals(f865)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case 1169123445:
                if (!str.equals(f866)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 1789379091:
                if (!str.equals(f868)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case 1866202823:
                if (!str.equals(f871)) {
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
            case 1:
                return InterstitialActivity.class;
            case 2:
                return Ogury.class;
            case 3:
                return OguryInterstitialAd.class;
            case 4:
                return OguryInterstitialAdListener.class;
            case 5:
                return OguryRewardedAd.class;
            case 6:
                return OguryRewardedAdListener.class;
            case 7:
                return OguryReward.class;
            default:
                return null;
        }
    }
}
