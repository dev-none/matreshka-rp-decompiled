package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.inmobi.ads.AdContainer;
import com.inmobi.ads.AdUnit;
import com.inmobi.ads.InMobiAdRequest;
import com.inmobi.ads.InMobiBanner;
import com.inmobi.ads.InMobiInterstitial;
import com.inmobi.ads.NativeRecyclerViewAdapter;
import com.inmobi.ads.NativeVideoView;
import com.inmobi.ads.ViewableAd;
import com.inmobi.ads.listeners.BannerAdEventListener;
import com.inmobi.ads.listeners.InterstitialAdEventListener;
import com.inmobi.ads.listeners.NativeAdEventListener;
import com.inmobi.ads.listeners.VideoEventListener;
import com.inmobi.media.ads.network.common.model.Ad;
import com.inmobi.media.ads.network.common.model.AdResponse;
import com.inmobi.media.ads.network.common.model.AdSet;
import com.inmobi.media.ads.network.common.model.ContextData;
import com.inmobi.rendering.InMobiAdActivity;
import com.inmobi.sdk.InMobiSdk;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﻠ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1100 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f3928 = StringFog.decrypt("6PzjSjTUl+Li/PluDMyE4sr34nc=\n", "j5mXGli19Ic=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f3927 = StringFog.decrypt("PXHiDHM+qJUxYeYZbgOsojRh+w==\n", "WhSWTRdzyec=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f3926 = StringFog.decrypt("8wEHofrsQ8z7ABaJ\n", "lGRz5ZuYIoE=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f3925 = StringFog.decrypt("RRxrJzQSAclDDXYQNQUK3Ec=\n", "InkfZlBRc6w=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f3924 = StringFog.decrypt("1z1EEI6GTfzfMH0WmoZ44Q==\n", "nlMJf+zvDJg=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f3923 = StringFog.decrypt("wtawHekn8A7D0PNB5Sf5BNPQs1SuAPMsztu0cuQI/hXIz7RH+Q==\n", "obndM4BJnWE=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f3922 = StringFog.decrypt("v72F/7ST+ti3sLz5oJPPxaDr\n", "9tPIkNb6u7w=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f3921 = StringFog.decrypt("BuF8vaye5GsH5z/yoYOndgDgdfa3medjS8d/3qqS4EUBz3LnrIbgcBw=\n", "ZY4Rk8XwiQQ=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f3920 = StringFog.decrypt("2ndtYZY0c/Lwc3ZeiTRS\n", "lBYZCOBRJZs=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f3919 = StringFog.decrypt("pJLtUwNUWomxj9BX\n", "5fagMnE/L/k=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f3918 = StringFog.decrypt("H9qK9ysCT9cw27s=\n", "Xr7JmEV2Lr4=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f3917 = StringFog.decrypt("PLs6eqD0p08JjiZxteO8VQe7Jw==\n", "bt5UHsWGziE=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f3916 = StringFog.decrypt("Q2xd9yyYyTZnVEXkLA==\n", "EwA8lEn1rFg=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f3915 = StringFog.decrypt("WPvNALjWrRB4\n", "HY2obsyC1GA=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f3914 = StringFog.decrypt("OOJzKToVHbwf4ls0\n", "cYw+Rlh8X90=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f3913 = StringFog.decrypt("4LiW9B3hFODnr530DN8899a8lv8K\n", "otn4mniTVYQ=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f3912 = StringFog.decrypt("zJKJwfec5grxmbbd4ZzbDeSQ\n", "hfzErpX1r2Q=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f3911 = StringFog.decrypt("JgRf/3oyGVIbA0r2SSUoTQoEX9ZhMhleAQ9Z\n", "b2ormghBbTs=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f3910 = StringFog.decrypt("Zmq/UAzPUEttfa5XDuZ4XFxupVwI\n", "KAvLOXqqES8=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f3909 = StringFog.decrypt("ZisS6yHDYB9eNjrnPfJzFFUw\n", "MEJ2jk6GFno=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f3908 = StringFog.decrypt("S66FMKgv2Ilp\n", "AsDIX8pGi+0=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f3907 = StringFog.decrypt("e9ooNHL74T1g0RQudeHU\n", "MrRlWxCSoFk=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f3906 = StringFog.decrypt("1O0uLX+h21/D4A==\n", "goRLWh7Dtzo=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f3905 = StringFog.decrypt("/1zHaZqh\n", "vjiSB/PVtWM=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f3904 = StringFog.decrypt("8vqGLG0rm0jf4pEpfjyfRNnssyF6Pr1Izg==\n", "vJvyRRtOyS0=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f3903 = StringFog.decrypt("2aPWgbex45rTo8ylkrQ=\n", "vsai0dvQgP8=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f3902 = StringFog.decrypt("+gX7JLnkGRLu\n", "nWCPZd23fGY=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f3901 = StringFog.decrypt("Q04p+91DT+dPWQ==\n", "Kj17nqoiPYM=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f3900 = StringFog.decrypt("2kXEwcfo\n", "vSCwgKObMn8=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f3899 = StringFog.decrypt("jpM1nZESnHuRggW/ih0=\n", "6fZB3v586B4=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f3898 = StringFog.decrypt("N0XgLBGhuVY0Uw==\n", "UCCUfnTW2CQ=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f3897 = StringFog.decrypt("dSA8SjN6MydhMQ==\n", "EkVIHVYYZUY=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f3896 = StringFog.decrypt("s03rRLLqTFC9XvpOpA==\n", "1CifB8CPLSQ=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f3895 = StringFog.decrypt("Vq5zbmmnT4RFonRKaZJFmEWuaVs=\n", "McsHLw3RKvY=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f3894 = StringFog.decrypt("6EPTGym4AkraQg==\n", "qSeBflrIbSQ=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f3893 = StringFog.decrypt("x5SOAvY=\n", "hvDdZ4IA8lo=\n");

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f3892 = StringFog.decrypt("BhE=\n", "R3X4wu62Mbg=\n");

    /* JADX INFO: renamed from: ᕃ, reason: contains not printable characters */
    public static final String f3891 = StringFog.decrypt("gwY/QXbP0bmhHTA=\n", "wGlRNRO3pf0=\n");

    public C1100(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        return InMobiSdk.getVersion();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f3928, new C0193(this));
        map.put(f3927, new C0192(this));
        map.put(f3926, new C1172(this));
        map.put(f3925, new C1155(this));
        map.put(f3903, new C1153(this));
        map.put(f3902, new C1134(this));
        map.put(f3901, new C1133(this));
        map.put(f3900, new C1117(this));
        map.put(f3899, new C1108(this));
        map.put(f3898, new C0207(this));
        map.put(f3897, new C0200(this));
        map.put(f3896, new C0196(this));
        map.put(f3895, new C0194(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:80:0x0123  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -2044438337:
                if (!str.equals(f3917)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case -1769689844:
                if (!str.equals(f3908)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case -1716191362:
                if (!str.equals(f3918)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -1405271692:
                if (!str.equals(f3904)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case -1401317165:
                if (!str.equals(f3909)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case -1304544044:
                if (!str.equals(f3910)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case -1062227179:
                if (!str.equals(f3923)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case -808014786:
                if (!str.equals(f3907)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case -595852006:
                if (!str.equals(f3914)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -560158238:
                if (!str.equals(f3922)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case -541364416:
                if (!str.equals(f3924)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -520974940:
                if (!str.equals(f3894)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case -235933147:
                if (!str.equals(f3919)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case -204096109:
                if (!str.equals(f3921)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case -93733047:
                if (!str.equals(f3920)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -32161126:
                if (!str.equals(f3912)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case 2115:
                if (!str.equals(f3892)) {
                    b = -1;
                } else {
                    b = Ascii.ETB;
                }
                break;
            case 63090975:
                if (!str.equals(f3893)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case 99044255:
                if (!str.equals(f3916)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case 515339810:
                if (!str.equals(f3906)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case 957243679:
                if (!str.equals(f3913)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case 1228411167:
                if (!str.equals(f3911)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case 1564529113:
                if (!str.equals(f3891)) {
                    b = -1;
                } else {
                    b = Ascii.CAN;
                }
                break;
            case 1955888231:
                if (!str.equals(f3905)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case 2035398868:
                if (!str.equals(f3915)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
            case 1:
                return InMobiAdActivity.class;
            case 2:
            case 3:
                return com.inmobi.ads.rendering.InMobiAdActivity.class;
            case 4:
                return NativeVideoView.class;
            case 5:
                return AdUnit.AdMarkupType.class;
            case 6:
                return AdContainer.class;
            case 7:
                return AdContainer.RenderingProperties.class;
            case 8:
                return AdContainer.RenderingProperties.PlacementType.class;
            case 9:
                return AdContainer.EventType.class;
            case 10:
                return InMobiBanner.class;
            case 11:
                return InMobiInterstitial.class;
            case 12:
                return InMobiSdk.class;
            case 13:
                return InMobiAdRequest.class;
            case 14:
                return ViewableAd.class;
            case 15:
                return AdUnit.class;
            case 16:
                return NativeRecyclerViewAdapter.class;
            case 17:
                return InterstitialAdEventListener.class;
            case 18:
                return BannerAdEventListener.class;
            case 19:
                return NativeAdEventListener.class;
            case 20:
                return VideoEventListener.class;
            case 21:
                return AdResponse.class;
            case 22:
                return AdSet.class;
            case 23:
                return Ad.class;
            case 24:
                return ContextData.class;
            default:
                return null;
        }
    }
}
