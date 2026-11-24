package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import com.qq.e.ads.ADActivity;
import com.qq.e.ads.DialogActivity;
import com.qq.e.ads.LandscapeADActivity;
import com.qq.e.ads.LiteAbstractAD;
import com.qq.e.ads.PortraitADActivity;
import com.qq.e.ads.RewardvideoLandscapeADActivity;
import com.qq.e.ads.RewardvideoPortraitADActivity;
import com.qq.e.ads.banner2.UnifiedBannerADListener;
import com.qq.e.ads.banner2.UnifiedBannerView;
import com.qq.e.ads.interstitial2.UnifiedInterstitialAD;
import com.qq.e.ads.interstitial2.UnifiedInterstitialADListener;
import com.qq.e.ads.rewardvideo.RewardVideoAD;
import com.qq.e.ads.rewardvideo.RewardVideoADListener;
import com.qq.e.comm.adevent.ADEvent;
import com.qq.e.comm.adevent.ADListener;
import com.qq.e.comm.constants.LoadAdParams;
import com.qq.e.comm.managers.GDTAdSdk;
import com.qq.e.comm.managers.status.APPStatus;
import com.qq.e.comm.managers.status.SDKStatus;
import com.qq.e.comm.pi.ACTD;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.i, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1756i extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f409 = StringFog.decrypt("4G6jSkledkM=\n", "pyr3Cy0NEig=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f408 = StringFog.decrypt("8DOpe4FZG33FDg==\n", "sXfoGPUwbRQ=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f407 = StringFog.decrypt("hqJ9f9sG0xPLrHQihDa5N4a5eSfDA4Q=\n", "5c0QUap3/XY=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f406 = StringFog.decrypt("F+gaTcSULOEn6A1I34o=\n", "U4F7IavzbYI=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f405 = StringFog.decrypt("QBy3a1O588QNEr42DIy0wE8cvQRBvLTXSgej\n", "I3PaRSLI3aE=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f404 = StringFog.decrypt("c57/o/Jm2KlavtWG4nHQr1aL6A==\n", "P/+Rx4EFudk=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f403 = StringFog.decrypt("w/q3icY+kGOO9L7UmQPfaMTmucbHKv9C4fauzsEmyn8=\n", "oJXap7dPvgY=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f402 = StringFog.decrypt("VmAVetrWYy1HSyZt3N58MHJ2\n", "Bg9nDqi3Clk=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f401 = StringFog.decrypt("x5BpJNC+5yqKnmB5j5+mPdCNZWPVjo0Ox4ttfMi7sA==\n", "pP8ECqHPyU8=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f400 = StringFog.decrypt("S6g2OXWef2p9qC4UZpRtcHqsMT1GvkhgbaQ3MXOD\n", "Gc1BWAf6CQM=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f399 = StringFog.decrypt("4qyXrs/gjbWvop7zkMPGp+CxnvbX9ca/zaKU5M3ywqDkgr7B3eXKpui3gw==\n", "gcP6gL6Ro9A=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f398 = StringFog.decrypt("l1TDSHrDkfehVNt5Z9WT7KRYwGhM5oTqrEfdXXE=\n", "xTG0KQin554=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f397 = StringFog.decrypt("3PfRS+uWhvGR+dgWtLXN497q2BPzg8377/fOEeiGweD+3P0G7o7e/cvh\n", "v5i8ZZrnqJQ=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f396 = StringFog.decrypt("mUa8li5D4vqiXLCCNFLvx6VJubED\n", "zCjV8EcmhrM=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f395 = StringFog.decrypt("CYxS8wV+Kj8yll7nH28nAjWDV9QoVycFKIdV8B4=\n", "XOI7lWwbTnY=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f394 = StringFog.decrypt("HBGkqoePqgQqEbyKsQ==\n", "TnTTy/Xr/G0=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f393 = StringFog.decrypt("SOgh3tPNEahs3izTwckAo3s=\n", "Caxtt6C5dMY=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f392 = StringFog.decrypt("iwO0PIusSIq9A6wcvYR3kK0DrTiL\n", "2WbDXfnIHuM=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f391 = StringFog.decrypt("IQr1aff/HxQfBPl+\n", "bWWUDbabT3U=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f390 = StringFog.decrypt("TUrnOskcgc95SuA50i+M6G8=\n", "GCSOXKB55Y0=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f389 = StringFog.decrypt("ustAUGamDfmOy0dTfYIt94bWXVNhphs=\n", "76UpNg/Dabs=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f388 = StringFog.decrypt("aDcwXP4yvg==\n", "KXN1Kptcymo=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f387 = StringFog.decrypt("ioOMqdG0lue4\n", "y9Pc+qXV4pI=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f386 = StringFog.decrypt("yhYk7g==\n", "i1VwqnVOZ+k=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f385 = StringFog.decrypt("UcpRx/EP541vwkbW8Sk=\n", "HaMlorBtlPk=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f384 = StringFog.decrypt("c9EDgkt9vgdX5w==\n", "MpVP6zgJ22k=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f383 = StringFog.decrypt("8m5kr9DnVtjYan6P8cE=\n", "lQsQ6JSzF7w=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f382 = StringFog.decrypt("us+PFDlw/8k=\n", "3ar7VUkAtq0=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f381 = StringFog.decrypt("cZLwYrOPW/lfmeJI\n", "FveEJ8v7KZg=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f380 = StringFog.decrypt("8rPgtr5sjezxl/CwomuJ\n", "ldaU5Nsb7J4=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f379 = StringFog.decrypt("Cf7IP+sgy+YK/tgo9iPZ\n", "bpu8bY5XqpQ=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f378 = StringFog.decrypt("+twre10F6jruzTZGWhDjDeXN\n", "nblfMjNxj0g=\n");

    public C1756i(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        return SDKStatus.getIntegrationSDKVersion();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f383, new C1741c(this));
        map.put(f382, new C1744d(this));
        map.put(f381, new C1747e(this));
        map.put(f380, new C1750f(this));
        map.put(f379, new C1752g(this));
        map.put(f378, new C1754h(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:83:0x0130  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -1950656211:
                if (!str.equals(f404)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case -1537668511:
                if (!str.equals(f396)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case -1192770783:
                if (!str.equals(f400)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case -1125491209:
                if (!str.equals(f384)) {
                    b = -1;
                } else {
                    b = Ascii.EM;
                }
                break;
            case -1040623465:
                if (!str.equals(f406)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case -839956733:
                if (!str.equals(f390)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case -570955421:
                if (!str.equals(f392)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case -427681737:
                if (!str.equals(f388)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case -358530385:
                if (!str.equals(f391)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -311779863:
                if (!str.equals(f399)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -301299368:
                if (!str.equals(f393)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case -287046183:
                if (!str.equals(f398)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case -207731435:
                if (!str.equals(f401)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case 2003474:
                if (!str.equals(f386)) {
                    b = -1;
                } else {
                    b = Ascii.ETB;
                }
                break;
            case 167349330:
                if (!str.equals(f408)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 555831221:
                if (!str.equals(f389)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case 796884557:
                if (!str.equals(f402)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 814717722:
                if (!str.equals(f407)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 937653587:
                if (!str.equals(f387)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case 1265986405:
                if (!str.equals(f403)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case 1305853839:
                if (!str.equals(f394)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case 1336889139:
                if (!str.equals(f385)) {
                    b = -1;
                } else {
                    b = Ascii.CAN;
                }
                break;
            case 1773421109:
                if (!str.equals(f395)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case 1874129984:
                if (!str.equals(f409)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case 1958130193:
                if (!str.equals(f397)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case 2111488863:
                if (!str.equals(f405)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return GDTAdSdk.class;
            case 1:
            case 2:
                return ADActivity.class;
            case 3:
            case 4:
                return DialogActivity.class;
            case 5:
            case 6:
                return LandscapeADActivity.class;
            case 7:
            case 8:
                return PortraitADActivity.class;
            case 9:
            case 10:
                return RewardvideoLandscapeADActivity.class;
            case 11:
            case 12:
                return RewardvideoPortraitADActivity.class;
            case 13:
                return UnifiedInterstitialAD.class;
            case 14:
                return UnifiedInterstitialADListener.class;
            case 15:
                return RewardVideoAD.class;
            case 16:
                return RewardVideoADListener.class;
            case 17:
                return LoadAdParams.class;
            case 18:
                return UnifiedBannerView.class;
            case 19:
                return UnifiedBannerADListener.class;
            case 20:
                return ADEvent.class;
            case 21:
                return APPStatus.class;
            case 22:
                return RewardVideoAD.ADListenerAdapter.class;
            case 23:
                return ACTD.class;
            case 24:
                return LiteAbstractAD.class;
            case 25:
                return ADListener.class;
            default:
                return null;
        }
    }
}
