package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.libraries.ads.mobile.sdk.MobileAds;
import com.google.android.libraries.ads.mobile.sdk.appopen.AppOpenAd;
import com.google.android.libraries.ads.mobile.sdk.appopen.AppOpenAdEventCallback;
import com.google.android.libraries.ads.mobile.sdk.banner.AdSize;
import com.google.android.libraries.ads.mobile.sdk.banner.AdView;
import com.google.android.libraries.ads.mobile.sdk.banner.BannerAd;
import com.google.android.libraries.ads.mobile.sdk.banner.BannerAdEventCallback;
import com.google.android.libraries.ads.mobile.sdk.banner.BannerAdRequest;
import com.google.android.libraries.ads.mobile.sdk.common.AdActivity;
import com.google.android.libraries.ads.mobile.sdk.common.AdLoadCallback;
import com.google.android.libraries.ads.mobile.sdk.common.AdRequest;
import com.google.android.libraries.ads.mobile.sdk.common.FullScreenContentError;
import com.google.android.libraries.ads.mobile.sdk.common.RequestConfiguration;
import com.google.android.libraries.ads.mobile.sdk.initialization.InitializationConfig;
import com.google.android.libraries.ads.mobile.sdk.interstitial.InterstitialAd;
import com.google.android.libraries.ads.mobile.sdk.interstitial.InterstitialAdEventCallback;
import com.google.android.libraries.ads.mobile.sdk.rewarded.OnUserEarnedRewardListener;
import com.google.android.libraries.ads.mobile.sdk.rewarded.RewardedAd;
import com.google.android.libraries.ads.mobile.sdk.rewarded.RewardedAdEventCallback;
import com.google.android.libraries.ads.mobile.sdk.rewardedinterstitial.RewardedInterstitialAd;
import com.google.android.libraries.ads.mobile.sdk.rewardedinterstitial.RewardedInterstitialAdEventCallback;
import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.п, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0370 extends AbstractC0349 {

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f1370;

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f1371;

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f1372;

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f1373;

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f1374;

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f1375;

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f1376;

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f1377;

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f1378;

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f1404 = StringFog.decrypt("UXUGTQ8iZg5BUhNiBRF9KlI=\n", "NhByDGt0D2s=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f1403 = StringFog.decrypt("SnE9KSXeFupfVS0qIOMR9Ug=\n", "LRRJa0SweI8=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f1402 = StringFog.decrypt("PU5tVQZUI+E+Tn1GB2Im3j9feGMCVyM=\n", "WisZB2MjQpM=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f1401 = StringFog.decrypt("rfWMnnsAvb6u9ZyNeiW5u6vinIVqErE=\n", "ypD4zB533Mw=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f1400 = StringFog.decrypt("Lrron3GM6o4tuviEeo/ujjqr9bl9mue9LZ74gHGP6pgoq/0=\n", "Sd+czRT7i/w=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f1399 = StringFog.decrypt("VilZgyx7yJZVKUmYJ3jMlkI4RKUgbcWlVR5Ipih+za1FKUA=\n", "MUwt0UkMqeQ=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f1398 = StringFog.decrypt("fkQZNDtzCmFqVQQJPGYDQXxSHRI7dApad0cC\n", "GSFtfVUHbxM=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f1397 = StringFog.decrypt("8YJMwpq/nbbyglzRm5qZt+aIVuOagZKi+Q==\n", "luc4kP/I/MQ=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f1396 = StringFog.decrypt("xRRkclQV2X/GFHRpXxbdf9EFeVRYA9RfxwJgT18R3UTMF38=\n", "onEQIDFiuA0=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f1395 = StringFog.decrypt("R/nS88IEfkRO78Poww==\n", "IJymoad3Dis=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f1394 = StringFog.decrypt("CvyIQUrBQNEJ2JheStVW1wjLmX5Vz0rHCNCSa0o=\n", "bZn8DSWgJLQ=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f1393 = StringFog.decrypt("VG+dPqPQsopBaYwxpu64\n", "Mwrpf8eD3f8=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f1392 = StringFog.decrypt("nkoJ1vTJcq2rVw==\n", "3y5ItYCgBMQ=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f1391 = StringFog.decrypt("PnRrefutJvsb\n", "fwQbNovISLo=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f1390 = StringFog.decrypt("d9x1D6HtIvZS6XMlv/wP1lrAZyGy4w==\n", "NqwFQNGITLc=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f1389 = StringFog.decrypt("f9PcMCWR6qxw2Z9/LJr3pHXYn3IrnPeqbtXUbWyf4bgy0d58K5Lg5W/Y2jAhkeimc9KfXya/5r91\nythqOw==\n", "HLyxHkL+hcs=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f1388 = StringFog.decrypt("1y49HL7+4X/p\n", "mkFfddKboBs=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f1387 = StringFog.decrypt("QBIh/NPN\n", "AXZylamotVY=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f1386 = StringFog.decrypt("2mFyY8mV\n", "mwUkCqzijSE=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f1385 = StringFog.decrypt("JUkPMWvFLgIqQ0x+Ys4zCi9CTHNlyDMENE8HbCLLJRZoSw19ZcYkSzVCCTFuyy8LI1RMXmj8KAAx\n", "RiZiHwyqQWU=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f1384 = StringFog.decrypt("EkE1dWdFn/A=\n", "UCBbGwI33pQ=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f1383 = StringFog.decrypt("sNqP90VGchq3zYT3VHdSEp7ZgPpL\n", "8rvhmSA0M34=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f1382 = StringFog.decrypt("lsiuqoLjovOGzLGxguKX\n", "1KnAxOeR45c=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f1381 = StringFog.decrypt("Db2elSr0UyUgtbCbKPs=\n", "TNnS+kuQEEQ=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f1380 = StringFog.decrypt("Z7c75lGQUCZS\n", "JtNpgyDlNVU=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f1379 = StringFog.decrypt("E/HASGaLdwIw6u9LW5xgCSHB3lZamg==\n", "VYSsJDXoBWc=\n");

    static {
        StringFog.decrypt("jr/yZiJwgtiwv+E=\n", "wtCTAmMUx6o=\n");
        f1378 = StringFog.decrypt("pYRmJUxEyeKYj3E5TkLPwIOIeD4=\n", "9+EXUCk3vaE=\n");
        f1377 = StringFog.decrypt("kwVuoV70fwegCnO8WPtQAbQNbrI=\n", "2msH1TeVE24=\n");
        f1376 = StringFog.decrypt("hrOWEhgF0qK7tIMbKxI=\n", "z93id2p2pss=\n");
        f1375 = StringFog.decrypt("Fer4bXgJ6S4o7e1kSx7YMTnq+EtrFvElPefn\n", "XISMCAp6nUc=\n");
        f1374 = StringFog.decrypt("G3gGjIV5af8meDabsm5b/yZyH5aTf0nwMWQ=\n", "VBZT/+ALLJ4=\n");
        f1373 = StringFog.decrypt("FFUOBf2XQzoHVA==\n", "RjB5ZI/zJl4=\n");
        f1372 = StringFog.decrypt("W11D/ONDs5NIXHHr9EmitGhUWP/wRL0=\n", "CTg0nZEn1vc=\n");
        f1371 = StringFog.decrypt("tees3Je38Biu7K/Yl6DhFZPrutGktw==\n", "54LbveXTlXw=\n");
        f1370 = StringFog.decrypt("2nSSCrhFsOnBf5EOuFKh5Px4hAeLRZD77X+RKKtNue/pco4=\n", "iBHla8oh1Y0=\n");
    }

    public C0370(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        return MobileAds.getVersion().toString();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f1404, new C0415(this));
        map.put(f1403, new C0414(this));
        map.put(f1402, new C0412(this));
        map.put(f1401, new C0407(this));
        map.put(f1400, new C0403(this));
        map.put(f1399, new C0399(this));
        map.put(f1398, new C0391(this));
        map.put(f1397, new C0388(this));
        map.put(f1396, new C0384(this));
        map.put(f1395, new C0441(this));
        map.put(f1394, new C0438(this));
        map.put(f1393, new C0417(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:74:0x010b  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -2082809970:
                if (!str.equals(f1372)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case -1959585521:
                if (!str.equals(f1389)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case -1836618638:
                if (!str.equals(f1392)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -1791176561:
                if (!str.equals(f1384)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case -1666698098:
                if (!str.equals(f1388)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case -1620193212:
                if (!str.equals(f1385)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case -1394472790:
                if (!str.equals(f1379)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case -909742738:
                if (!str.equals(f1391)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case -796191954:
                if (!str.equals(f1381)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case -609786639:
                if (!str.equals(f1373)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case -572702516:
                if (!str.equals(f1380)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case -561136464:
                if (!str.equals(f1383)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case -543102915:
                if (!str.equals(f1371)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case -289968976:
                if (!str.equals(f1375)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -284636416:
                if (!str.equals(f1382)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -139181519:
                if (!str.equals(f1390)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case 143003586:
                if (!str.equals(f1370)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case 320151695:
                if (!str.equals(f1376)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case 474883106:
                if (!str.equals(f1377)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case 761303268:
                if (!str.equals(f1374)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case 1334167239:
                if (!str.equals(f1378)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case 1955824356:
                if (!str.equals(f1387)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 1955913096:
                if (!str.equals(f1386)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
            case 1:
                return AdActivity.class;
            case 2:
                return MobileAds.class;
            case 3:
                return AppOpenAd.class;
            case 4:
                return AppOpenAdEventCallback.class;
            case 5:
                return AdSize.class;
            case 6:
            case 7:
                return AdView.class;
            case 8:
                return BannerAd.class;
            case 9:
                return BannerAdEventCallback.class;
            case 10:
                return BannerAdRequest.class;
            case 11:
                return AdLoadCallback.class;
            case 12:
                return AdRequest.class;
            case 13:
                return FullScreenContentError.class;
            case 14:
                return RequestConfiguration.class;
            case 15:
                return InitializationConfig.class;
            case 16:
                return InterstitialAd.class;
            case 17:
                return InterstitialAdEventCallback.class;
            case 18:
                return OnUserEarnedRewardListener.class;
            case 19:
                return RewardedAd.class;
            case 20:
                return RewardedAdEventCallback.class;
            case 21:
                return RewardedInterstitialAd.class;
            case 22:
                return RewardedInterstitialAdEventCallback.class;
            default:
                return null;
        }
    }
}
