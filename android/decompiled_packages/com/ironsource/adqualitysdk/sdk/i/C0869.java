package com.ironsource.adqualitysdk.sdk.i;

import com.chartboost.sdk.CBImpressionActivity;
import com.chartboost.sdk.Chartboost;
import com.chartboost.sdk.ChartboostActivity;
import com.chartboost.sdk.InPlay.CBInPlay;
import com.chartboost.sdk.Networking.requests.models.MediationModel;
import com.chartboost.sdk.ads.Ad;
import com.chartboost.sdk.ads.Interstitial;
import com.chartboost.sdk.ads.Rewarded;
import com.chartboost.sdk.callbacks.AdCallback;
import com.chartboost.sdk.callbacks.DismissibleAdCallback;
import com.chartboost.sdk.callbacks.InterstitialCallback;
import com.chartboost.sdk.callbacks.RewardedCallback;
import com.chartboost.sdk.callbacks.StartCallback;
import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ṫ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0869 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f3122 = StringFog.decrypt("ZB6ZeBFrVvJyHIxYFg==\n", "F3vtLHMvM54=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f3121 = StringFog.decrypt("BjW1HuZGZj0XP64u+mNxJRA3oCnr\n", "dVDBXY4nFEk=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f3120 = StringFog.decrypt("MJkTBB1pzRc1kwg0AUzaDzKbBjMQ\n", "V/xnR3UIv2M=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f3119 = StringFog.decrypt("RDiXUj82DIBBMoxiIwFGqxcC01UyOxuTQimG\n", "I13jEVdXfvQ=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f3118 = StringFog.decrypt("IZHG/rXqgTMBi8Ltte26HjGX5/qt6rIQNoY=\n", "QuOjn8GP1XE=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f3117 = StringFog.decrypt("/2eM98G1XDXhUbXzwY9QNA==\n", "lhTbkqPjNVA=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f3116 = StringFog.decrypt("AirwLNbD4McMIOo=\n", "ZU+EYLmggbM=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f3115 = StringFog.decrypt("b2FuybQ3kahlYQ==\n", "CAQaiMRH38k=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f3114 = StringFog.decrypt("hwXeEbC3LjGJF/4W\n", "7naKc/TSQlQ=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f3113 = StringFog.decrypt("mNvh4gvxtNmox8HzC/qt36/K\n", "27OAkH+T27Y=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f3112 = StringFog.decrypt("kCxrnMf2z1ygB02f9ufeRqUHVog=\n", "024i8beEqi8=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f3111 = StringFog.decrypt("iiyV3QKNdsq6MA==\n", "yUT0r3bvGaU=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f3110 = StringFog.decrypt("d0ed4TV8Bt4=\n", "NAXUj2UQZ6c=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f3109 = StringFog.decrypt("wqhfDQqpmurohXw=\n", "geoSaG7A+54=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f3108 = StringFog.decrypt("qtANPiYizE+J+AYzIjo=\n", "57VpV0dWpSA=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f3107 = StringFog.decrypt("Tj551f/nualxD3DX6PG6pXU/bPL/6b2tezh9\n", "GkwYtpqF2Mo=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f3106 = StringFog.decrypt("TXHkhB6RV859WsKHIoZV3G1K7IoaikTUeko=\n", "DjOt6W7jMr0=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f3105 = StringFog.decrypt("vv1M8YH+mm2p8E6wkeLVbLn5D7OH8Zp8pLxinav7i2244VK2jfi6fKn7V7aW7w==\n", "3ZIh3+KW+x8=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f3104 = StringFog.decrypt("q9I=\n", "6rZEoPsNYNA=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f3103 = StringFog.decrypt("o/CHXsXcWrme95JX\n", "6p7zO7evLtA=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f3102 = StringFog.decrypt("fQuBOBkx9gw=\n", "L272WWtVk2g=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f3101 = StringFog.decrypt("yLk3q+afWFDqtg==\n", "id10yorzOjE=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f3100 = StringFog.decrypt("vY4Il8TTUI2bix67yeNCiJWFGpnG\n", "+ed7+q2gI+Q=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f3099 = StringFog.decrypt("k4uEZQv/wrSujJFsOu3asbiEk2s=\n", "2uXwAHmMtt0=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f3098 = StringFog.decrypt("SwytGQKiUYlaCLYUEqdXhg==\n", "GWnaeHDGNO0=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f3097 = StringFog.decrypt("90jizavoO/LIXuLctA==\n", "pDyDv9+rWp4=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f3096 = StringFog.decrypt("wZmFr/ymjFnxsqOs2r2MXcO4uKv6vZ1T\n", "gtvMwozU6So=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f3095 = StringFog.decrypt("dcGxQpwy42pizLMDjC6sa3LF8hqWP/U2VeyVAY8o52tlx7MCvjn2cWDHqBU=\n", "Fq7cbP9aghg=\n");

    public C0869(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        try {
            return Chartboost.getSDKVersion();
        } catch (Error unused) {
            return StringFog.decrypt("XrJtugk=\n", "aJxclDniZkw=\n");
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f3122, new C0983(this));
        map.put(f3120, new C0960(this));
        map.put(f3119, new C0957(this));
        map.put(f3118, new C0938(this));
        map.put(f3121, new C0931(this));
        map.put(f3117, new C0916(this));
        map.put(f3116, new C0898(this));
        map.put(f3115, new C0897(this));
        map.put(f3114, new C0889(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:62:0x00db  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -1602236458:
                if (!str.equals(f3107)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -1251618628:
                if (!str.equals(f3096)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -921117961:
                if (!str.equals(f3112)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case -869710636:
                if (!str.equals(f3113)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -513187163:
                if (!str.equals(f3111)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case -416101408:
                if (!str.equals(f3106)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case -371244199:
                if (!str.equals(f3109)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -352872024:
                if (!str.equals(f3101)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case -305846637:
                if (!str.equals(f3098)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case -221039695:
                if (!str.equals(f3099)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case -174936018:
                if (!str.equals(f3102)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case 2115:
                if (!str.equals(f3104)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case 296803428:
                if (!str.equals(f3100)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case 544981520:
                if (!str.equals(f3095)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case 604162924:
                if (!str.equals(f3105)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case 650412337:
                if (!str.equals(f3108)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 753858215:
                if (!str.equals(f3097)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case 769047372:
                if (!str.equals(f3103)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case 1443881784:
                if (!str.equals(f3110)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return ChartboostActivity.class;
            case 1:
                return CBImpressionActivity.class;
            case 2:
                return Chartboost.class;
            case 3:
                return CBInPlay.class;
            case 4:
                return Chartboost.CBMediation.class;
            case 5:
                return MediationModel.class;
            case 6:
                return C0888.class;
            case 7:
            case 8:
                return com.chartboost.sdk.legacy.CBImpressionActivity.class;
            case 9:
                return Ad.class;
            case 10:
                return Interstitial.class;
            case 11:
                return Rewarded.class;
            case 12:
                return AdCallback.class;
            case 13:
                return DismissibleAdCallback.class;
            case 14:
                return InterstitialCallback.class;
            case 15:
                return RewardedCallback.class;
            case 16:
                return StartCallback.class;
            case 17:
            case 18:
                return com.chartboost.sdk.view.CBImpressionActivity.class;
            default:
                return null;
        }
    }
}
