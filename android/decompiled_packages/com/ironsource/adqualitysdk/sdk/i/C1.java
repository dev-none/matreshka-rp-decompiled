package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import com.monetization.ads.base.model.reward.RewardData;
import com.yandex.mobile.ads.banner.BannerAdEventListener;
import com.yandex.mobile.ads.banner.BannerAdView;
import com.yandex.mobile.ads.common.AdActivity;
import com.yandex.mobile.ads.common.AdInfo;
import com.yandex.mobile.ads.common.AdRequest;
import com.yandex.mobile.ads.common.AdType;
import com.yandex.mobile.ads.common.ImpressionData;
import com.yandex.mobile.ads.common.MobileAds;
import com.yandex.mobile.ads.common.VideoController;
import com.yandex.mobile.ads.common.VideoEventListener;
import com.yandex.mobile.ads.interstitial.InterstitialAd;
import com.yandex.mobile.ads.interstitial.InterstitialAdEventListener;
import com.yandex.mobile.ads.rewarded.Reward;
import com.yandex.mobile.ads.rewarded.RewardedAd;
import com.yandex.mobile.ads.rewarded.RewardedAdEventListener;
import com.yandex.mobile.ads.video.playback.VideoAdPlaybackListener;
import com.yandex.mobile.ads.video.playback.model.MediaFile;
import com.yandex.mobile.ads.video.playback.model.VideoAd;
import java.util.HashMap;

/* JADX INFO: loaded from: classes6.dex */
public class C1 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f161 = StringFog.decrypt("s7qOUJfF/IGglp4=\n", "1N/6EfOQkug=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f160 = StringFog.decrypt("DWSja1k4lfIeYA==\n", "agHXOThP0ZM=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f159 = StringFog.decrypt("tGM31jtl02KCcCbuJk3ffrNjLeUg\n", "xwZDgFIBtg0=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f158 = StringFog.decrypt("p34ktwXc3/GyaCSXH8bK+Il1NpE=\n", "wBtQ/muvq5Q=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f157 = StringFog.decrypt("nVtxIQGaTeeef2gcEYNY\n", "+j4Fc2TtLJU=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f156 = StringFog.decrypt("R3SswwIJ4qBERaHhAg==\n", "IBHYkWd+g9I=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f155 = StringFog.decrypt("FV9woWshMT4WX2Cyah8+Kh0=\n", "cjoE8w5WUEw=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f154 = StringFog.decrypt("3cz9Sc4cG0nKzO1azy4MXsDdxXLYHx9Vy9s=\n", "rqmJG6trejs=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f153 = StringFog.decrypt("z3dlAPAEKoHPZng99xEjsthXZyzwBAOaz2Z0J/sC\n", "vBIRSZ5wT/M=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f152 = StringFog.decrypt("6RazxQ/BgIvIGqvtP9eF\n", "jnPHiGql6eo=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f151 = StringFog.decrypt("bLUNOT/m26pKtDQKMuvfg2K8HA==\n", "C9B5b1aCvsU=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f150 = StringFog.decrypt("IrPeqHao4EwEsuOQeaM=\n", "Rdaq/h/MhSM=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f149 = StringFog.decrypt("UokXu7PsDb9TrQe8pOcNrm2FEI237Aao\n", "Iexj+dKCY9o=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f148 = StringFog.decrypt("63taVn32tJzeZg==\n", "qh8bNQmfwvU=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f147 = StringFog.decrypt("mAFAFBGIvXieFgNXB4u6cJ5ATF4bx7BzlgNCVEaot12YGkRMAZ2q\n", "+24tOmjp0xw=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f146 = StringFog.decrypt("nOvRYL11\n", "3Y+YDtsa8bE=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f145 = StringFog.decrypt("yQVG1G3ZUhz8\n", "iGEUsRysN28=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f144 = StringFog.decrypt("iIjEu09h\n", "yeyQwj8EaZ8=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f143 = StringFog.decrypt("cUUiD8qxGldXRhYc26M=\n", "OChSfa/CaT4=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f142 = StringFog.decrypt("fJWzJgwkHg1C\n", "MfrRT2BBX2k=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f141 = StringFog.decrypt("VvHtlaHbXbZ06uacov1A\n", "AJiJ8M6YMtg=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f140 = StringFog.decrypt("QZEirewLaFV5jAqh8Dp7XnKK\n", "F/hGyINOHjA=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f139 = StringFog.decrypt("V0jKC2gY7jVQX8ELeSbGImFMygB/\n", "FSmkZQ1qr1E=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f138 = StringFog.decrypt("MwUqjRwiKuEnDSGU\n", "cWRE43lQa4U=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f137 = StringFog.decrypt("w0R6J7l4M9DFUzlkr3s02MUFdm2zNz/VzkVye+5bPNrOTmVIpE800dc=\n", "oCsXCcAZXbQ=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f136 = StringFog.decrypt("14s0uVb8g7XqjCGwZes=\n", "nuVA3CSP99w=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f135 = StringFog.decrypt("C5mN7TxPlao2npjkD1iktSeZjcQnT5WmLJKL\n", "Qvf5iE484cM=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f134 = StringFog.decrypt("G7fZveoC\n", "SdKu3JhmRKI=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f133 = StringFog.decrypt("1pTT4KTErYPFlQ==\n", "hPGkgdagyOc=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f132 = StringFog.decrypt("Mm8n0+gvB9ohbhXE/yUW8gl5JNf0LhA=\n", "YApQsppLYr4=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f131 = StringFog.decrypt("R+uyZ7iEjRZ9469gtqaCCnjxome5oJs=\n", "EYLWAtfF6UY=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f130 = StringFog.decrypt("IBN8K4iWIucI\n", "bXYYQunQS4s=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f129 = StringFog.decrypt("miE6nnkkzA==\n", "zEhe+xZlqNw=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f128 = StringFog.decrypt("g+entOGkNbyl4w==\n", "0YLQ1ZPAcd0=\n");

    public C1(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public String mo8318() {
        return MobileAds.getLibraryVersion();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f161, new s1(this));
        map.put(f160, new t1(this));
        map.put(f159, new u1(this));
        map.put(f158, new v1(this));
        map.put(f157, new w1(this));
        map.put(f156, new x1(this));
        map.put(f155, new y1(this));
        map.put(f154, new z1(this));
        map.put(f153, new A1(this));
        map.put(f152, new o1(this));
        map.put(f151, new p1(this));
        map.put(f150, new q1(this));
        map.put(f149, new r1(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:68:0x00f3  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -1850459313:
                if (!str.equals(f134)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case -1836618638:
                if (!str.equals(f148)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -1666698098:
                if (!str.equals(f142)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -1401317165:
                if (!str.equals(f140)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -1338246468:
                if (!str.equals(f137)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case -1139615429:
                if (!str.equals(f147)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case -1115843213:
                if (!str.equals(f143)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case -650052115:
                if (!str.equals(f131)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -610771047:
                if (!str.equals(f128)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case -609786639:
                if (!str.equals(f133)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case -572702516:
                if (!str.equals(f145)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case -564429827:
                if (!str.equals(f132)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case -150968480:
                if (!str.equals(f130)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case 308060116:
                if (!str.equals(f138)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 320151695:
                if (!str.equals(f136)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case 871099991:
                if (!str.equals(f141)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case 957243679:
                if (!str.equals(f139)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case 1228411167:
                if (!str.equals(f135)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case 1955530641:
                if (!str.equals(f146)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 1955869213:
                if (!str.equals(f144)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case 2117435870:
                if (!str.equals(f129)) {
                    b = -1;
                } else {
                    b = 19;
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
                return AdInfo.class;
            case 3:
                return AdRequest.class;
            case 4:
                return AdType.class;
            case 5:
                return ImpressionData.class;
            case 6:
                return MobileAds.class;
            case 7:
            case 8:
                return BannerAdView.class;
            case 9:
                return VideoController.class;
            case 10:
                return VideoEventListener.class;
            case 11:
                return BannerAdEventListener.class;
            case 12:
                return InterstitialAd.class;
            case 13:
                return InterstitialAdEventListener.class;
            case 14:
                return Reward.class;
            case 15:
                return RewardedAd.class;
            case 16:
                return RewardedAdEventListener.class;
            case 17:
                return VideoAdPlaybackListener.class;
            case 18:
                return MediaFile.class;
            case 19:
                return VideoAd.class;
            case 20:
                return RewardData.class;
            default:
                return null;
        }
    }
}
