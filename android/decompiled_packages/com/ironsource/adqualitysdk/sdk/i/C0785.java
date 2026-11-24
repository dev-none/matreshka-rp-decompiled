package com.ironsource.adqualitysdk.sdk.i;

import com.facebook.ads.Ad;
import com.facebook.ads.AdError;
import com.facebook.ads.AdListener;
import com.facebook.ads.AdView;
import com.facebook.ads.AudienceNetworkActivity;
import com.facebook.ads.BuildConfig;
import com.facebook.ads.InterstitialAd;
import com.facebook.ads.InterstitialAdListener;
import com.facebook.ads.NativeAd;
import com.facebook.ads.NativeAdBase;
import com.facebook.ads.NativeAdListener;
import com.facebook.ads.NativeAdView;
import com.facebook.ads.NativeBannerAd;
import com.facebook.ads.RewardedVideoAd;
import com.facebook.ads.RewardedVideoAdListener;
import com.facebook.ads.internal.DisplayAdController;
import com.facebook.ads.internal.adapters.AdAdapter;
import com.facebook.ads.internal.dynamicloading.DynamicLoaderFactory;
import com.facebook.ads.internal.protocol.AdPlacementType;
import com.facebook.ads.internal.settings.AdSdkVersion;
import com.facebook.ads.internal.view.component.CircularProgressView;
import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴣ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0785 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f2672 = StringFog.decrypt("5j5ck9StMxjsPka38agWD+42aafupTUK\n", "gVsow7jMUH0=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f2671 = StringFog.decrypt("2E5LITU37cXSTlEFEDLI0tBGfhU=\n", "vys/cVlWjqA=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f2670 = StringFog.decrypt("mpOZTFiLB0+dk4NoTg==\n", "6fbtDTzHbjw=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f2669 = StringFog.decrypt("opKeYoQRlvCrlI9tlAGI+recq0CFHIn8sY68SpQCq+y1kqFGiA==\n", "xffqI/F1/5U=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f2668 = StringFog.decrypt("vI0KMEYoP3i1ixs/VjghcqmDPxJHJSB0r5E7H1cPN2+/pR8DWDkmVr6R\n", "2+h+cTNMVh0=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f2667 = StringFog.decrypt("BvYp/EpgyZUG5zTBRXjtgzn6LsFBesmV\n", "dZNdtSQUrOc=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f2666 = StringFog.decrypt("WlP1EqncnARUVc05sdaYGw==\n", "PTaBVtCy/Wk=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f2665 = StringFog.decrypt("XK1J7zEhafBWrVPLCTl68A==\n", "O8g9v11ACpU=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f2664 = StringFog.decrypt("HU22r2MrMmAwXqenYSsnRilasqVfLxVKM16j\n", "fj/TzhdOZiI=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f2663 = StringFog.decrypt("YWc=\n", "IAPBvyYX9m8=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f2662 = StringFog.decrypt("8cqTo7rgErHC\n", "sK7Sx9uQZtQ=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f2661 = StringFog.decrypt("Yx9UiMjy0g==\n", "InsR+rqdoFo=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f2660 = StringFog.decrypt("WWdIA3tOoaF9cQ==\n", "GAMEagg6xM8=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f2659 = StringFog.decrypt("DuLjkY+J\n", "T4a1+Or+EzI=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f2658 = StringFog.decrypt("Fmcq6WabBpkXZyisLpsBj1tJI5FpnxI=\n", "dQhHxwD6Zfw=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f2657 = StringFog.decrypt("Ef8AuoQnJK819SSCnDQk\n", "UJtQ1uVEQcI=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f2656 = StringFog.decrypt("gfFvUVTJesCh23NPTNps7an9bg==\n", "xZgcITioA4E=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f2655 = StringFog.decrypt("KvKyp/K1Mmgl4qK5+Kk6TAjzv7j+ryg=\n", "a4fWzpfbUQ0=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f2654 = StringFog.decrypt("XuZjm5MPoI9f5mHe2w+nmRPIe9GcC62JWMdrwYIBsYF86nrcgwe3kw==\n", "PYkOtfVuw+o=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f2653 = StringFog.decrypt("4X8jiuLrMyTceDaD0fwLJNtlMoH16g==\n", "qBFX75CYR00=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f2652 = StringFog.decrypt("JNiO3GVOQjkZ35vVVlk=\n", "bbb6uRc9NlA=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f2651 = StringFog.decrypt("hEPiQXOW8YqAT/FFbrPwor9V4UVvl+Y=\n", "1iaVIAHylO4=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f2650 = StringFog.decrypt("W2l8CCUItXhfZW8MOC20\n", "CQwLaVds0Bw=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f2649 = StringFog.decrypt("bOxmdgH/YslH9GxyHtBg5lz6em4=\n", "KJUIF2yWAYU=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f2648 = StringFog.decrypt("AzmK+YSJ06gPOY31\n", "TVj+kPLsksw=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f2647 = StringFog.decrypt("ajInaXNCmJ5KPTZyREM=\n", "JFNTAAUn2v8=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f2646 = StringFog.decrypt("RVYWeC3sRzE=\n", "CzdiEVuJBlU=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f2645 = StringFog.decrypt("JDCbfGhdkk88OIpi\n", "alHvFR440ys=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f2644 = StringFog.decrypt("fqFbY4GsAmR8qVx+kqcmcg==\n", "MMAvCvfJQwA=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f2643 = StringFog.decrypt("4H0/oC9d/x3zZiKkKFTtHPV9KLQ=\n", "oxRNw1oxnm8=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f2642 = StringFog.decrypt("K1O/4nBN4Tw+dabmZU/fOAx5vOJ0\n", "fxHxgwQkl1k=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f2641 = StringFog.decrypt("bl2BaDeAvfFDVoFoKLaC/0xThWwp\n", "IjLiCVvCz54=\n");

    public C0785(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        try {
            try {
                try {
                    return (String) C0705.m8630().f2439.m8578(AdSdkVersion.class, String.class).get(null);
                } catch (Throwable unused) {
                    return null;
                }
            } catch (Throwable unused2) {
                return (String) C0705.m8630().f2439.m8578(AdSdkVersion.class, String.class).get(null);
            }
        } catch (Throwable unused3) {
            C0493 c0493 = C0705.m8630().f2438;
            String strDecrypt = StringFog.decrypt("jLusLXCYjsL5yeI=\n", "0ufIdiz8oJ8=\n");
            c0493.getClass();
            return C0493.m8552((Object) null, BuildConfig.class, strDecrypt);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f2672, new C0903(this));
        map.put(f2671, new C0902(this));
        map.put(f2670, new C0901(this));
        map.put(f2669, new C0881(this));
        map.put(f2668, new C0878(this));
        map.put(f2667, new C0872(this));
        map.put(f2666, new C0870(this));
        map.put(f2665, new C0854(this));
        map.put(f2664, new C0853(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:74:0x010c  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -2107186802:
                if (!str.equals(f2644)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case -1585374524:
                if (!str.equals(f2651)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -1513928064:
                if (!str.equals(f2654)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case -1256969519:
                if (!str.equals(f2643)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case -501313640:
                if (!str.equals(f2649)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case -498709917:
                if (!str.equals(f2653)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case -105717264:
                if (!str.equals(f2650)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case 2115:
                if (!str.equals(f2663)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case 289409084:
                if (!str.equals(f2657)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case 320151695:
                if (!str.equals(f2652)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case 435867927:
                if (!str.equals(f2641)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case 488344453:
                if (!str.equals(f2661)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 535330969:
                if (!str.equals(f2655)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case 553704929:
                if (!str.equals(f2656)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 1165508119:
                if (!str.equals(f2660)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case 1237162638:
                if (!str.equals(f2642)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case 1476063628:
                if (!str.equals(f2662)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 1838933446:
                if (!str.equals(f2647)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case 1908493505:
                if (!str.equals(f2658)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 1955913096:
                if (!str.equals(f2659)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case 2035065003:
                if (!str.equals(f2648)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case 2035668095:
                if (!str.equals(f2645)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case 2110329530:
                if (!str.equals(f2646)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return Ad.class;
            case 1:
                return AdAdapter.class;
            case 2:
                return AdError.class;
            case 3:
                return AdListener.class;
            case 4:
            case 5:
                return AdView.class;
            case 6:
                return AdPlacementType.class;
            case 7:
                return DisplayAdController.class;
            case 8:
                return InterstitialAdListener.class;
            case 9:
                return InterstitialAd.class;
            case 10:
                return RewardedVideoAdListener.class;
            case 11:
                return RewardedVideoAd.class;
            case 12:
            case 13:
                return AudienceNetworkActivity.class;
            case 14:
                return DynamicLoaderFactory.class;
            case 15:
                return NativeAdBase.class;
            case 16:
                return NativeBannerAd.class;
            case 17:
                return NativeAd.class;
            case 18:
                return NativeAdView.class;
            case 19:
                return NativeAdListener.class;
            case 20:
                return CircularProgressView.class;
            case 21:
                return C0811.class;
            case 22:
                int i = AbstractC1055.f3806;
                String strDecrypt = StringFog.decrypt("jHFwaVl8mSrDc3t4V3mfIIJ+cHhXZok/jHF1fFNn0zGCcWB+WGHTHoJ8dXd0Z5IziXx1aEJYnDyM\neHFp\n", "7R8UGzYV/VI=\n");
                String str2 = AbstractC0765.f2620;
                try {
                    return Class.forName(strDecrypt);
                } catch (Throwable unused) {
                    return null;
                }
            default:
                return null;
        }
    }
}
