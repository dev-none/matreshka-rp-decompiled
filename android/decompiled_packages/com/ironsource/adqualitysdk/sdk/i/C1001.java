package com.ironsource.adqualitysdk.sdk.i;

import com.amazon.device.ads.DTBAdView;
import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import com.ironsource.mediationsdk.AbstractAdapter;
import com.ironsource.mediationsdk.IronSource;
import com.ironsource.mediationsdk.IronSourceBannerLayout;
import com.ironsource.mediationsdk.ads.nativead.AdapterNativeAdData;
import com.ironsource.mediationsdk.ads.nativead.LevelPlayMediaView;
import com.ironsource.mediationsdk.ads.nativead.LevelPlayNativeAd;
import com.ironsource.mediationsdk.ads.nativead.LevelPlayNativeAdListener;
import com.ironsource.mediationsdk.ads.nativead.NativeAdLayout;
import com.ironsource.mediationsdk.ads.nativead.interfaces.NativeAdAdapterInterface;
import com.ironsource.mediationsdk.ads.nativead.interfaces.NativeAdDataInterface;
import com.ironsource.mediationsdk.ads.nativead.interfaces.NativeAdInteractionListener;
import com.ironsource.mediationsdk.ads.nativead.interfaces.NativeAdInterface;
import com.ironsource.mediationsdk.ads.nativead.interfaces.NativeAdLoadListener;
import com.ironsource.mediationsdk.ads.nativead.interfaces.NativeAdSmashListener;
import com.ironsource.mediationsdk.ads.nativead.interfaces.NativeAdViewBinderInterface;
import com.ironsource.mediationsdk.ads.nativead.internal.InternalNativeAdListener;
import com.ironsource.mediationsdk.ads.nativead.internal.NativeAdViewHolder;
import com.ironsource.mediationsdk.adunit.adapter.utility.AdData;
import com.ironsource.mediationsdk.adunit.adapter.utility.AdInfo;
import com.ironsource.mediationsdk.impressionData.ImpressionData;
import com.ironsource.mediationsdk.impressionData.ImpressionDataListener;
import com.ironsource.mediationsdk.model.Placement;
import com.ironsource.mediationsdk.sdk.BannerSmashListener;
import com.ironsource.mediationsdk.sdk.LevelPlayBannerListener;
import com.ironsource.mediationsdk.sdk.LevelPlayInterstitialListener;
import com.ironsource.mediationsdk.sdk.LevelPlayRewardedVideoAutomaticListener;
import com.ironsource.mediationsdk.sdk.LevelPlayRewardedVideoListener;
import com.ironsource.mediationsdk.sdk.LevelPlayRewardedVideoManualListener;
import com.ironsource.mediationsdk.utils.IronSourceUtils;
import com.ironsource.sdk.controller.ControllerActivity;
import com.ironsource.sdk.controller.InterstitialActivity;
import com.ironsource.sdk.controller.OpenUrlActivity;
import com.unity3d.ironsourceads.IronSourceAds;
import com.unity3d.ironsourceads.banner.BannerAdInfo;
import com.unity3d.ironsourceads.banner.BannerAdRequest;
import com.unity3d.ironsourceads.banner.BannerAdView;
import com.unity3d.ironsourceads.banner.BannerAdViewListener;
import com.unity3d.ironsourceads.interstitial.InterstitialAd;
import com.unity3d.ironsourceads.interstitial.InterstitialAdInfo;
import com.unity3d.ironsourceads.interstitial.InterstitialAdListener;
import com.unity3d.ironsourceads.interstitial.InterstitialAdRequest;
import com.unity3d.ironsourceads.rewarded.RewardedAd;
import com.unity3d.ironsourceads.rewarded.RewardedAdInfo;
import com.unity3d.ironsourceads.rewarded.RewardedAdListener;
import com.unity3d.ironsourceads.rewarded.RewardedAdRequest;
import com.unity3d.mediation.LevelPlay;
import com.unity3d.mediation.LevelPlayAdInfo;
import com.unity3d.mediation.banner.LevelPlayBannerAdView;
import com.unity3d.mediation.banner.LevelPlayBannerAdViewListener;
import com.unity3d.mediation.impression.LevelPlayImpressionData;
import com.unity3d.mediation.impression.LevelPlayImpressionDataListener;
import com.unity3d.mediation.interstitial.LevelPlayInterstitialAd;
import com.unity3d.mediation.interstitial.LevelPlayInterstitialAdListener;
import com.unity3d.mediation.rewarded.LevelPlayReward;
import com.unity3d.mediation.rewarded.LevelPlayRewardedAd;
import com.unity3d.mediation.rewarded.LevelPlayRewardedAdListener;
import java.util.HashMap;
import kotlin.io.encoding.Base64;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ךּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1001 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f3617 = StringFog.decrypt("158pXQ15yMDdnzN5L3nGwA==\n", "sPpdDWEYq6U=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f3616 = StringFog.decrypt("YIqvlLj0/Jp1o7qvtu/mr2uOuLO0//yLSY62sw==\n", "B+/b1tmakv8=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f3615 = StringFog.decrypt("IeUZImCNVlA18wQEY7lFQSfKHgRj\n", "RoBtaw39JDU=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f3614 = StringFog.decrypt("qC1w3HU5K3q6On36dg04a6gFfeZsLDd6uw==\n", "yUkUlRhJWR8=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f3613 = StringFog.decrypt("V1/o1cYbGPRVSODJwxc+92Fb8dv8FyLtQFTgyA==\n", "JTqFurB+UZk=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f3612 = StringFog.decrypt("sA4IBNZpKrSmKhgG3m43p60ODg==\n", "w2t8SrcdQ8I=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f3611 = StringFog.decrypt("G5Xx+YMsVgEOtOTehw==\n", "fPCFquZeIGQ=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f3610 = StringFog.decrypt("xQuo8YSSJ2bFDbr1gpY2\n", "hGnbhfbzRBI=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f3609 = StringFog.decrypt("STMTavEnWqpt\n", "GV9yCZRKP8Q=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f3608 = StringFog.decrypt("Ifo0KcfEmEkH5xs+wcKCTBbs\n", "YpVaXbWr9CU=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f3607 = StringFog.decrypt("VUWLC/H1eLNFRZNX++I5rlJByEb36WOvWUaKQOqpVLJYXpRK9Otyr3dJkkzu7mOk\n", "NirmJZiHF90=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f3606 = StringFog.decrypt("leZW0fz1MKqo4UPYz+UwqqrhVs0=\n", "3IgitI6GRMM=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f3605 = StringFog.decrypt("qtaMlkK9T9S61pTKSKoOya3Sz9tEoVTIptWN3VnhadS93JPLX6ZU06jVoNtfplbTvcA=\n", "ybnhuCvPILo=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f3604 = StringFog.decrypt("DHgPaIxM7RYgfANwsEr4\n", "QwhqBtk+gVc=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f3603 = StringFog.decrypt("Iv4kiMS/hcgy/jzUzqjE1SX6Z8XCo57ULv0lw9/jpdYk/xzUwYyJ0ijnINLU\n", "QZFJpq3N6qY=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f3602 = StringFog.decrypt("vWRa+d2TS5qXc3f24JJbmrh3TPj7iA==\n", "9BY1l478Pug=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f3601 = StringFog.decrypt("4oRTFkUJNIPyhEtKTx51gOSPV1lYEjSD8o9VFmUJNIPShEtKTx4ZjO+FW0pgGiKC9J8=\n", "ges+OCx7W+0=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f3600 = StringFog.decrypt("XSW66+0JnsJ+N7zJ4Qi5ynEhpg==\n", "H0TUhYh7za8=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f3599 = StringFog.decrypt("UqrYj2EalkZ4vQ==\n", "G9i34TJ14zQ=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f3598 = StringFog.decrypt("s+X+kuOhOpGV5sqB8rM=\n", "+oiO4IbSSfg=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f3597 = StringFog.decrypt("GAkzTeki4tQ+Cgde+DDd1CIQJlHpIw==\n", "UWRDP4xRkb0=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f3596 = StringFog.decrypt("fvjLrvtiI5ZN\n", "OqyJ7580SvM=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f3595 = StringFog.decrypt("jM5GcvmtY8iAzwU4/bZr0YqPSjjr7kbmreBPCvGldQ==\n", "76ErXJjAArI=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f3594 = StringFog.decrypt("vrDTjKDX0euLl8SHouLPxpum0Yyi4s8=\n", "8tWl6cyHvYo=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f3593 = StringFog.decrypt("ICx1vuBVsnQVAG2v6XetYQU9arrgSbdmGCxtvv4=\n", "bEkD24wF3hU=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f3592 = StringFog.decrypt("3U8j6CGIw4foeDD6LKrLg/V8POkot+6T5UU47DmxzKr4WSHoI73d\n", "kSpVjU3Yr+Y=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f3591 = StringFog.decrypt("TI2jsse1Jx15urCgypcvGWS+vLPOigcVc5ywuc6X\n", "AOjV16vlS3w=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f3590 = StringFog.decrypt("IbYPLt378/gUgRw80Nn7/AmFEC/UxNL4A6YYJ/3C7O0IvRw5\n", "bdN5S7Grn5k=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f3589 = StringFog.decrypt("C0FYF9ZH\n", "SiURebAoNwo=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f3588 = StringFog.decrypt("6C9ALjAi7jfdBFc/NQTnF8A=\n", "pEo2S1xyglY=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f3587 = StringFog.decrypt("0fdRXgVCGKTT91xYBlM=\n", "n5YlN3MnWcA=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f3586 = StringFog.decrypt("hFTIr5j4jOexf9++nd6Fx6x917mAzY7jug==\n", "yDG+yvSo4IY=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f3585 = StringFog.decrypt("2ZctdfTv8Bfsvz508d7KH/CF\n", "lfJbEJi/nHY=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f3584 = StringFog.decrypt("l6kWkWTEWZC3uR6XdeBPmre5Fg==\n", "1s134RChK94=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f3583 = StringFog.decrypt("NgC3yYlbb2UuCKbXt1FCZR0T\n", "eGHDoP8+LgE=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f3582 = StringFog.decrypt("fuDNBclUDp55780JzV8ulnvnyhTeVAqA\n", "N465YLs6b/I=\n");

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f3581 = StringFog.decrypt("jTqw6ZhLEjqCP6XwmkshF60vofKITzA7\n", "w1vEgO4uU14=\n");

    /* JADX INFO: renamed from: ᕃ, reason: contains not printable characters */
    public static final String f3580 = StringFog.decrypt("+Ssqwwk80rvzKyrLNjfnusUsP8ka\n", "t0peqn9Zk98=\n");

    /* JADX INFO: renamed from: ᕂ, reason: contains not printable characters */
    public static final String f3579 = StringFog.decrypt("J+aUPD5gcbEg6ZQwOmRToQDojhkhdkSwB+KS\n", "aYfgVUgFMNU=\n");

    /* JADX INFO: renamed from: ᔽ, reason: contains not printable characters */
    public static final String f3578 = StringFog.decrypt("ZUYuAfvEN5xiSS4N/8cXm04=\n", "KydaaI2hdvg=\n");

    /* JADX INFO: renamed from: ᔺ, reason: contains not printable characters */
    public static final String f3577 = StringFog.decrypt("kCjuZy4CJu2SJvtqFA4U/bsn/3w=\n", "3kmaDlhnZ4k=\n");

    /* JADX INFO: renamed from: ᔹ, reason: contains not printable characters */
    public static final String f3576 = StringFog.decrypt("quF62ziBIc+37W/BJqgJ2JDlYNc8\n", "5IAOsk7kYKs=\n");

    /* JADX INFO: renamed from: ᔲ, reason: contains not printable characters */
    public static final String f3575 = StringFog.decrypt("EyYNlMD7hK0LLhyK9PerrTg1MJPC+7evPCQc\n", "XUd5/baexck=\n");

    /* JADX INFO: renamed from: ᔱ, reason: contains not printable characters */
    public static final String f3574 = StringFog.decrypt("DzcfKagP\n", "TlNbSNxuPxs=\n");

    /* JADX INFO: renamed from: ᓮ, reason: contains not printable characters */
    public static final String f3573 = StringFog.decrypt("AKmcNfvaMd41jY4Z+ewy\n", "TMzqUJeKXb8=\n");

    /* JADX INFO: renamed from: ᐱ, reason: contains not printable characters */
    public static final String f3572 = StringFog.decrypt("RP/AKWQ04y5x2NciZgH9DmzM3yl/\n", "CJq2TAhkj08=\n");

    /* JADX INFO: renamed from: Ꮭ, reason: contains not printable characters */
    public static final String f3571 = StringFog.decrypt("dTnPm3m2mC5vZcabYb2VM3ciy9pi9pM7eDjHxyKUlCxzOvLZbaGzO3g4x8dNvKczcyE=\n", "FlaitQzY8Vo=\n");

    /* JADX INFO: renamed from: Ꮧ, reason: contains not printable characters */
    public static final String f3570 = StringFog.decrypt("KYc703XD22wcoCzYd/bFTAG0JNNu395+EYcj02s=\n", "ZeJNthmTtw0=\n");

    /* JADX INFO: renamed from: პ, reason: contains not printable characters */
    public static final String f3569 = StringFog.decrypt("0cHNQ9JOx2D71uNJ8mfdYPXS1g==\n", "mLOiLYEhshI=\n");

    /* JADX INFO: renamed from: ე, reason: contains not printable characters */
    public static final String f3568 = StringFog.decrypt("5OABW3pXNTTv7wla\n", "poFvNR8ldFA=\n");

    /* JADX INFO: renamed from: ງ, reason: contains not printable characters */
    public static final String f3567 = StringFog.decrypt("6KbgENjUEiv4ov8L2NUn\n", "qseOfr2mU08=\n");

    /* JADX INFO: renamed from: อ, reason: contains not printable characters */
    public static final String f3566 = StringFog.decrypt("U1QYU1jknHxHXBNK\n", "ETV2PT2W3Rg=\n");

    /* JADX INFO: renamed from: ม, reason: contains not printable characters */
    public static final String f3565 = StringFog.decrypt("x2+OavhH9mbdM4dq5FvwfNdvljbuTP521y6BJeNH+mCKQoIq40ztU8BWiiH6\n", "pADjRI0pnxI=\n");

    /* JADX INFO: renamed from: น, reason: contains not printable characters */
    public static final String f3564 = StringFog.decrypt("D5mA+Xyh8nkbkYvgVbrAaSiWi+U=\n", "TfjulxnTsx0=\n");

    /* JADX INFO: renamed from: ต, reason: contains not printable characters */
    public static final String f3563 = StringFog.decrypt("sPWsOP+pgxeN8rkxzL4=\n", "+ZvYXY3a934=\n");

    /* JADX INFO: renamed from: ฑ, reason: contains not printable characters */
    public static final String f3562 = StringFog.decrypt("S/+fTn635852+IpHTaDayWT+\n", "ApHrKwzEk6c=\n");

    /* JADX INFO: renamed from: ঢ়, reason: contains not printable characters */
    public static final String f3561 = StringFog.decrypt("nwK+5rd6DHyiBavvhG00fKUYr+2gew==\n", "1mzKg8UJeBU=\n");

    /* JADX INFO: renamed from: ষ, reason: contains not printable characters */
    public static final String f3560 = StringFog.decrypt("4cVxIVcxycbcwmQoZCbvytneYDdR\n", "qKsFRCVCva8=\n");

    /* JADX INFO: renamed from: ঘ, reason: contains not printable characters */
    public static final String f3559 = StringFog.decrypt("ibS2E43aIm2atQ==\n", "29HBcv++Rwk=\n");

    /* JADX INFO: renamed from: খ, reason: contains not printable characters */
    public static final String f3558 = StringFog.decrypt("WSh3b0pBeDhKKUlgXko=\n", "C00ADjglHVw=\n");

    /* JADX INFO: renamed from: এ, reason: contains not printable characters */
    public static final String f3557 = StringFog.decrypt("sICfLx9weYWjgaQnHmB5j4eX\n", "4uXoTm0UHOE=\n");

    /* JADX INFO: renamed from: ऱ, reason: contains not printable characters */
    public static final String f3556 = StringFog.decrypt("YP36QxcXQSNz/N9HFAZBNEY=\n", "MpiNImVzJEc=\n");

    /* JADX INFO: renamed from: ܟ, reason: contains not printable characters */
    public static final String f3555 = StringFog.decrypt("2jKkhqPNdCvvHryXqu9rPv8ju4Kj3Hw=\n", "llfS48+dGEo=\n");

    /* JADX INFO: renamed from: ܘ, reason: contains not printable characters */
    public static final String f3554 = StringFog.decrypt("DfarmrTa3NU42rOLvfjDwCjntJ60y9T4KOCpmrbvwg==\n", "QZPd/9iKsLQ=\n");

    /* JADX INFO: renamed from: ے, reason: contains not printable characters */
    public static final String f3553 = StringFog.decrypt("sLw1FzeTRQWFiyYFOrFNAZiYJw==\n", "/NlDclvDKWQ=\n");

    /* JADX INFO: renamed from: ۉ, reason: contains not printable characters */
    public static final String f3552 = StringFog.decrypt("tGQs6iq4lB+BUz/4J5qcG5xAPsMvm4wblmQo\n", "+AFaj0bo+H4=\n");

    /* JADX INFO: renamed from: ۅ, reason: contains not printable characters */
    public static final String f3551 = StringFog.decrypt("udsQsRT68zmM7AOjGdj7\n", "9b5m1Hiqn1g=\n");

    /* JADX INFO: renamed from: ڑ, reason: contains not printable characters */
    public static final String f3550 = StringFog.decrypt("hi+hGch7CfqzA7oM1k4W6KMluTjFXwQ=\n", "ykrXfKQrZZs=\n");

    /* JADX INFO: renamed from: پ, reason: contains not printable characters */
    public static final String f3549 = StringFog.decrypt("dk0lEtdSMhJDYT4HyWctAFNHPTPadj8/U1snEtVnLA==\n", "OihTd7sCXnM=\n");

    /* JADX INFO: renamed from: ٽ, reason: contains not printable characters */
    public static final String f3548 = StringFog.decrypt("6e/HcZ54RzPe5tJEsmNSLev5wFSUYGY++uv5TpRg\n", "joqzPfsOIl8=\n");

    /* JADX INFO: renamed from: ث, reason: contains not printable characters */
    public static final String f3547 = StringFog.decrypt("s8nJAMbzMAqCwcw16uglFLfe3iXM6xkPodnIIsb3\n", "0q2tTKOFVWY=\n");

    /* JADX INFO: renamed from: ת, reason: contains not printable characters */
    public static final String f3546 = StringFog.decrypt("bRXyYUG19MVpFfNeW7HB6XIA7WtEo9HPcTz2fUO11sVt\n", "H3CfDjfQuKA=\n");

    public C1001(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        try {
            try {
                return LevelPlay.getSdkVersion();
            } catch (Throwable unused) {
                return IronSourceUtils.getSDKVersion();
            }
        } catch (Throwable unused2) {
            return null;
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f3617, new C1115(this));
        map.put(f3616, new C1114(this));
        map.put(f3615, new C1103(this));
        map.put(f3614, new C1092(this));
        map.put(f3613, new C1089(this));
        map.put(f3548, new C1071(this));
        map.put(f3547, new C1042(this));
        map.put(f3546, new C1025(this));
        map.put(f3612, new C1002(this));
        map.put(f3611, new C1131(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:191:0x02e0  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -2063883567:
                if (!str.equals(f3585)) {
                    b = -1;
                } else {
                    b = Ascii.EM;
                }
                break;
            case -2054763962:
                if (!str.equals(f3586)) {
                    b = -1;
                } else {
                    b = Ascii.CAN;
                }
                break;
            case -2044561387:
                if (!str.equals(f3580)) {
                    b = -1;
                } else {
                    b = Ascii.RS;
                }
                break;
            case -2012752057:
                if (!str.equals(f3555)) {
                    b = -1;
                } else {
                    b = 55;
                }
                break;
            case -1879025222:
                if (!str.equals(f3596)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case -1810844504:
                if (!str.equals(f3564)) {
                    b = -1;
                } else {
                    b = 46;
                }
                break;
            case -1704786309:
                if (!str.equals(f3606)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -1678289205:
                if (!str.equals(f3607)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case -1555060867:
                if (!str.equals(f3552)) {
                    b = -1;
                } else {
                    b = 58;
                }
                break;
            case -1406023077:
                if (!str.equals(f3605)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case -1282106699:
                if (!str.equals(f3571)) {
                    b = -1;
                } else {
                    b = 39;
                }
                break;
            case -1276273849:
                if (!str.equals(f3597)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case -1115843213:
                if (!str.equals(f3598)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case -1088585376:
                if (!str.equals(f3570)) {
                    b = -1;
                } else {
                    b = 40;
                }
                break;
            case -989825485:
                if (!str.equals(f3584)) {
                    b = -1;
                } else {
                    b = Ascii.SUB;
                }
                break;
            case -838208757:
                if (!str.equals(f3583)) {
                    b = -1;
                } else {
                    b = Ascii.ESC;
                }
                break;
            case -643050252:
                if (!str.equals(f3603)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case -609786639:
                if (!str.equals(f3559)) {
                    b = -1;
                } else {
                    b = 51;
                }
                break;
            case -559540471:
                if (!str.equals(f3591)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case -498709917:
                if (!str.equals(f3561)) {
                    b = -1;
                } else {
                    b = 49;
                }
                break;
            case -498060603:
                if (!str.equals(f3609)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case -393802555:
                if (!str.equals(f3557)) {
                    b = -1;
                } else {
                    b = 53;
                }
                break;
            case -284636416:
                if (!str.equals(f3567)) {
                    b = -1;
                } else {
                    b = 43;
                }
                break;
            case -154075626:
                if (!str.equals(f3576)) {
                    b = -1;
                } else {
                    b = 34;
                }
                break;
            case -153002112:
                if (!str.equals(f3565)) {
                    b = -1;
                } else {
                    b = 45;
                }
                break;
            case 30304559:
                if (!str.equals(f3590)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case 85893348:
                if (!str.equals(f3569)) {
                    b = -1;
                } else {
                    b = 41;
                }
                break;
            case 149942051:
                if (!str.equals(f3599)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case 204617641:
                if (!str.equals(f3553)) {
                    b = -1;
                } else {
                    b = 57;
                }
                break;
            case 204897024:
                if (!str.equals(f3560)) {
                    b = -1;
                } else {
                    b = 50;
                }
                break;
            case 307677661:
                if (!str.equals(f3568)) {
                    b = -1;
                } else {
                    b = 42;
                }
                break;
            case 308060116:
                if (!str.equals(f3566)) {
                    b = -1;
                } else {
                    b = 44;
                }
                break;
            case 320151695:
                if (!str.equals(f3563)) {
                    b = -1;
                } else {
                    b = 47;
                }
                break;
            case 334118616:
                if (!str.equals(f3594)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case 663296747:
                if (!str.equals(f3608)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 766880816:
                if (!str.equals(f3575)) {
                    b = -1;
                } else {
                    b = 35;
                }
                break;
            case 779287609:
                if (!str.equals(f3602)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case 823061407:
                if (!str.equals(f3578)) {
                    b = -1;
                } else {
                    b = 32;
                }
                break;
            case 846220331:
                if (!str.equals(f3550)) {
                    b = -1;
                } else {
                    b = 60;
                }
                break;
            case 894546539:
                if (!str.equals(f3582)) {
                    b = -1;
                } else {
                    b = Ascii.FS;
                }
                break;
            case 1052532031:
                if (!str.equals(f3558)) {
                    b = -1;
                } else {
                    b = 52;
                }
                break;
            case 1069602180:
                if (!str.equals(f3581)) {
                    b = -1;
                } else {
                    b = Ascii.GS;
                }
                break;
            case 1081984916:
                if (!str.equals(f3577)) {
                    b = -1;
                } else {
                    b = 33;
                }
                break;
            case 1180349927:
                if (!str.equals(f3601)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case 1226831433:
                if (!str.equals(f3573)) {
                    b = -1;
                } else {
                    b = 37;
                }
                break;
            case 1266525324:
                if (!str.equals(f3572)) {
                    b = -1;
                } else {
                    b = 38;
                }
                break;
            case 1267145181:
                if (!str.equals(f3562)) {
                    b = -1;
                } else {
                    b = 48;
                }
                break;
            case 1304950957:
                if (!str.equals(f3610)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case 1325013503:
                if (!str.equals(f3549)) {
                    b = -1;
                } else {
                    b = Base64.padSymbol;
                }
                break;
            case 1432059210:
                if (!str.equals(f3592)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case 1517126868:
                if (!str.equals(f3604)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case 1628896204:
                if (!str.equals(f3579)) {
                    b = -1;
                } else {
                    b = Ascii.US;
                }
                break;
            case 1715808775:
                if (!str.equals(f3551)) {
                    b = -1;
                } else {
                    b = 59;
                }
                break;
            case 1773831812:
                if (!str.equals(f3587)) {
                    b = -1;
                } else {
                    b = Ascii.ETB;
                }
                break;
            case 1870849118:
                if (!str.equals(f3556)) {
                    b = -1;
                } else {
                    b = 54;
                }
                break;
            case 1910059890:
                if (!str.equals(f3588)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case 1910219460:
                if (!str.equals(f3600)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case 1955369613:
                if (!str.equals(f3574)) {
                    b = -1;
                } else {
                    b = 36;
                }
                break;
            case 1955530641:
                if (!str.equals(f3589)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case 2019413793:
                if (!str.equals(f3595)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case 2019599576:
                if (!str.equals(f3593)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case 2102577435:
                if (!str.equals(f3554)) {
                    b = -1;
                } else {
                    b = 56;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return AbstractAdapter.class;
            case 1:
                return Placement.class;
            case 2:
            case 3:
                return ControllerActivity.class;
            case 4:
            case 5:
                return InterstitialActivity.class;
            case 6:
            case 7:
                return OpenUrlActivity.class;
            case 8:
            case 9:
                return IronSourceBannerLayout.class;
            case 10:
                return BannerSmashListener.class;
            case 11:
                return IronSource.class;
            case 12:
                return ImpressionData.class;
            case 13:
                return ImpressionDataListener.class;
            case 14:
            case 15:
                return DTBAdView.class;
            case 16:
                return LevelPlayBannerListener.class;
            case 17:
                return LevelPlayInterstitialListener.class;
            case 18:
                return LevelPlayRewardedVideoAutomaticListener.class;
            case 19:
                return LevelPlayRewardedVideoListener.class;
            case 20:
                return LevelPlayRewardedVideoManualListener.class;
            case 21:
                return AdInfo.class;
            case 22:
                return LevelPlayNativeAd.class;
            case 23:
                return NativeAdLayout.class;
            case 24:
                return LevelPlayNativeAdListener.class;
            case 25:
                return LevelPlayMediaView.class;
            case 26:
                return AdapterNativeAdData.class;
            case 27:
                return NativeAdViewHolder.class;
            case 28:
                return InternalNativeAdListener.class;
            case 29:
                return NativeAdAdapterInterface.class;
            case 30:
                return NativeAdDataInterface.class;
            case 31:
                return NativeAdInteractionListener.class;
            case 32:
                return NativeAdInterface.class;
            case 33:
                return NativeAdLoadListener.class;
            case 34:
                return NativeAdSmashListener.class;
            case 35:
                return NativeAdViewBinderInterface.class;
            case 36:
                return AdData.class;
            case 37:
                return LevelPlayAdInfo.class;
            case 38:
            case 39:
                return LevelPlayBannerAdView.class;
            case 40:
                return LevelPlayBannerAdViewListener.class;
            case 41:
                return IronSourceAds.AdFormat.class;
            case 42:
                return BannerAdInfo.class;
            case 43:
                return BannerAdRequest.class;
            case 44:
            case 45:
                return BannerAdView.class;
            case 46:
                return BannerAdViewListener.class;
            case 47:
                return InterstitialAd.class;
            case 48:
                return InterstitialAdInfo.class;
            case 49:
                return InterstitialAdListener.class;
            case 50:
                return InterstitialAdRequest.class;
            case 51:
                return RewardedAd.class;
            case 52:
                return RewardedAdInfo.class;
            case 53:
                return RewardedAdListener.class;
            case 54:
                return RewardedAdRequest.class;
            case 55:
                return LevelPlayInterstitialAd.class;
            case 56:
                return LevelPlayInterstitialAdListener.class;
            case 57:
                return LevelPlayRewardedAd.class;
            case 58:
                return LevelPlayRewardedAdListener.class;
            case 59:
                return LevelPlayReward.class;
            case 60:
                return LevelPlayImpressionData.class;
            case 61:
                return LevelPlayImpressionDataListener.class;
            default:
                return null;
        }
    }
}
