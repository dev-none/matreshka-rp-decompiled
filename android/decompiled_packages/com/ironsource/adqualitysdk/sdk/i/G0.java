package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import com.vungle.ads.BannerAd;
import com.vungle.ads.BannerAdListener;
import com.vungle.ads.BannerAdSize;
import com.vungle.ads.BannerView;
import com.vungle.ads.BaseAd;
import com.vungle.ads.BaseAdListener;
import com.vungle.ads.BaseFullscreenAd;
import com.vungle.ads.BuildConfig;
import com.vungle.ads.FullscreenAd;
import com.vungle.ads.FullscreenAdListener;
import com.vungle.ads.InterstitialAd;
import com.vungle.ads.InterstitialAdListener;
import com.vungle.ads.RewardedAd;
import com.vungle.ads.RewardedAdListener;
import com.vungle.ads.VungleAds;
import com.vungle.ads.internal.AdInternal;
import com.vungle.ads.internal.embeddedbrowser.EmbeddedBrowserActivity;
import com.vungle.ads.internal.model.AdAsset;
import com.vungle.ads.internal.model.AdPayload;
import com.vungle.ads.internal.model.AppNode;
import com.vungle.ads.internal.model.Placement;
import com.vungle.ads.internal.network.VungleApiClient;
import com.vungle.ads.internal.presenter.MRAIDPresenter;
import com.vungle.ads.internal.ui.AdActivity;
import com.vungle.ads.internal.ui.VungleActivity;
import com.vungle.ads.internal.ui.VungleWebClient;
import java.util.HashMap;

/* JADX INFO: loaded from: classes6.dex */
public final class G0 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f205 = StringFog.decrypt("5BooB8Ghw7/RBw==\n", "pX5pZLXItdY=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f204 = StringFog.decrypt("dnQCX6AQoDt5fkEQshbgNXtvCgO4BKJyYHJBMLIkrSh8bQYFrw==\n", "FRtvcdZlzlw=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f203 = StringFog.decrypt("OW1W8jKkDQ==\n", "eAkXgUHBeXg=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f202 = StringFog.decrypt("h2NNHqvk+vCnaw==\n", "xgcEcN+BiJ4=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f201 = StringFog.decrypt("gh2GxXAKpDan\n", "w3nWpAlmy1c=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f200 = StringFog.decrypt("ywfjbs60JA==\n", "ineTIKHQQVs=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f199 = StringFog.decrypt("7EkJZIj1R1Q=\n", "rihnCu2HBjA=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f198 = StringFog.decrypt("1Ye6JwN394vbj6c9A2vTnQ==\n", "l+bUSWYFtu8=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f197 = StringFog.decrypt("aZ5BVrXLJuF4llVd\n", "K/8vONC5Z4U=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f196 = StringFog.decrypt("ZO4No1lpoEFD+A==\n", "Jo9jzTwb9ig=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f195 = StringFog.decrypt("NGFZJt2C53g7axppz4SnXTZgWm3ZoeB6IA==\n", "Vw40CKv3iR8=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f194 = StringFog.decrypt("Wz9CfsE+\n", "GV4xG4Ba1qA=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f193 = StringFog.decrypt("/oDqS7WCCojPlfxAkZQ=\n", "vOGZLvTmRuE=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f192 = StringFog.decrypt("k5HCHfhLUXKik8Md21B8eg==\n", "0fCxeL4+PR4=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f191 = StringFog.decrypt("/TLFlMi/AVbbAcOMwb8AX9M2yIg=\n", "vlOm/K3eYzo=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f190 = StringFog.decrypt("jghah/7Rav6JF1eV6dB926gRUZTzwXY=\n", "y2U44pq1D5o=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f189 = StringFog.decrypt("ahSGkBDTv2ZlHsXfAtX/aGcPjswIx70vbBaJ2wLCtGVrCYTJFcOjL0wWidsCwrRlSwmEyRXDo0Bq\nD4LID9Ko\n", "CXvrvmam0QE=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f188 = StringFog.decrypt("r/h/BNcrU92M41IM\n", "6Y0TaKRIIbg=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f187 = StringFog.decrypt("ekkEmtX00LdZUimS6v7RpllSDYQ=\n", "PDxo9qaXotI=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f186 = StringFog.decrypt("0BCzjvADv//tF6aHwxQ=\n", "mX7H64Jwy5Y=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f185 = StringFog.decrypt("WdLUh0gNuddk1cGOexqB12PIxYxfDA==\n", "ELyg4jp+zb4=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f184 = StringFog.decrypt("OEXkmVAzLBEGcsukcRE=\n", "dRel0BRjXnQ=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f183 = StringFog.decrypt("dV1xvvRYmaJR\n", "JTEQ3ZE1/Mw=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f182 = StringFog.decrypt("OhNkOTjmh1EpEg==\n", "aHYTWEqC4jU=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f181 = StringFog.decrypt("dcR+O0A+6UVmxUUzQS7pT0LT\n", "J6EJWjJajCE=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f180 = StringFog.decrypt("UvLlcktHU4tw7v18U1s=\n", "BIeLFSciEug=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f179 = StringFog.decrypt("HDVR9DbjPM0TPxK7JOV8wxEuWagu9z6ECjMSjDX4NcYaG1+uKeA73gY=\n", "f1o82kCWUqo=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f178 = StringFog.decrypt("DYV+9krJ9WQo\n", "W/AQkSastAA=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f177 = StringFog.decrypt("wQ6i94iIHtP+OKD5gYMr\n", "l3vMkOTtX6M=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f176 = StringFog.decrypt("Jg4bezutlMISOBl1Mqa3\n", "cHt1HFfIw6c=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f175 = StringFog.decrypt("tCSYCxVTeN+n\n", "00HsSnEGFrY=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f174 = StringFog.decrypt("QfOnhh676jY=\n", "JpbTx27Lo1I=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f173 = StringFog.decrypt("oCqHCCkXjhSmLZ8uGhGWHaYsliYtGpIktSM=\n", "x0/zS0h05nE=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f172 = StringFog.decrypt("H6Bvu/J4AT0RonU=\n", "eMUb+JMVcVw=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f171 = StringFog.decrypt("pvO+3SohXyus86T5DyQ=\n", "wZbKjUZAPE4=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f170 = StringFog.decrypt("VQgDfP1gJ3FTGRJ7/XkjdFwKBA==\n", "Mm13KJgNVx0=\n");

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f169 = StringFog.decrypt("GGaXAqFJlgcUcZMOsk2L\n", "cRXFZ9Yo5GM=\n");

    public G0(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        try {
            return mo8325().split(StringFog.decrypt("WQ==\n", "dM9KGnmZpGo=\n"))[0];
        } catch (Throwable unused) {
            return null;
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f175, new C1790z0(this));
        map.put(f174, new A0(this));
        map.put(f173, new B0(this));
        map.put(f172, new C0(this));
        map.put(f171, new D0(this));
        map.put(f170, new E0(this));
        map.put(f169, new F0(this));
        return map;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String mo8325() {
        try {
            C0493 c0493 = C0705.m8630().f2438;
            String strDecrypt = StringFog.decrypt("b6En2I6zaZoaoSet+PM=\n", "Mf1Dg9LXR8c=\n");
            c0493.getClass();
            return C0493.m8552((Object) null, BuildConfig.class, strDecrypt);
        } catch (Throwable unused) {
            return null;
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:95:0x0160  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -1836618638:
                if (!str.equals(f205)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -1791176561:
                if (!str.equals(f199)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -1560947009:
                if (!str.equals(f195)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -1494265129:
                if (!str.equals(f179)) {
                    b = -1;
                } else {
                    b = Ascii.SUB;
                }
                break;
            case -1435839138:
                if (!str.equals(f188)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -1179107681:
                if (!str.equals(f178)) {
                    b = -1;
                } else {
                    b = Ascii.ESC;
                }
                break;
            case -609786639:
                if (!str.equals(f182)) {
                    b = -1;
                } else {
                    b = Ascii.ETB;
                }
                break;
            case -498709917:
                if (!str.equals(f185)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case -498060603:
                if (!str.equals(f183)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case -486531311:
                if (!str.equals(f184)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case -393802555:
                if (!str.equals(f181)) {
                    b = -1;
                } else {
                    b = Ascii.CAN;
                }
                break;
            case -43797322:
                if (!str.equals(f191)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case 307971376:
                if (!str.equals(f197)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case 320151695:
                if (!str.equals(f186)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case 324239304:
                if (!str.equals(f193)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case 389759008:
                if (!str.equals(f202)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case 484680813:
                if (!str.equals(f203)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 870529955:
                if (!str.equals(f200)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 877570637:
                if (!str.equals(f190)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case 961844241:
                if (!str.equals(f196)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case 989853769:
                if (!str.equals(f204)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 1205766784:
                if (!str.equals(f180)) {
                    b = -1;
                } else {
                    b = Ascii.EM;
                }
                break;
            case 1208038126:
                if (!str.equals(f176)) {
                    b = -1;
                } else {
                    b = Ascii.GS;
                }
                break;
            case 1442693170:
                if (!str.equals(f187)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case 1505622627:
                if (!str.equals(f198)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 1560492986:
                if (!str.equals(f189)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case 1839869899:
                if (!str.equals(f201)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case 1853648591:
                if (!str.equals(f192)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case 1930966324:
                if (!str.equals(f177)) {
                    b = -1;
                } else {
                    b = Ascii.FS;
                }
                break;
            case 1982630644:
                if (!str.equals(f194)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
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
                return AdAsset.class;
            case 3:
                return AdInternal.class;
            case 4:
                return AdPayload.class;
            case 5:
                return AppNode.class;
            case 6:
                return BannerAd.class;
            case 7:
                return BannerAdListener.class;
            case 8:
                return BannerAdSize.class;
            case 9:
            case 10:
                return BannerView.class;
            case 11:
                return BaseAd.class;
            case 12:
                return BaseAdListener.class;
            case 13:
                return BaseFullscreenAd.class;
            case 14:
                return AdPayload.CacheableReplacement.class;
            case 15:
            case 16:
                return EmbeddedBrowserActivity.class;
            case 17:
                return FullscreenAd.class;
            case 18:
                return FullscreenAdListener.class;
            case 19:
                return InterstitialAd.class;
            case 20:
                return InterstitialAdListener.class;
            case 21:
                return MRAIDPresenter.class;
            case 22:
                return Placement.class;
            case 23:
                return RewardedAd.class;
            case 24:
                return RewardedAdListener.class;
            case 25:
            case 26:
                return VungleActivity.class;
            case 27:
                return VungleAds.class;
            case 28:
                return VungleApiClient.class;
            case 29:
                return VungleWebClient.class;
            default:
                return null;
        }
    }
}
