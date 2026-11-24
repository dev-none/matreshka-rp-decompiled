package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.FairBid;
import com.fyber.fairbid.ads.ImpressionData;
import com.fyber.fairbid.ads.Interstitial;
import com.fyber.fairbid.ads.PlacementType;
import com.fyber.fairbid.ads.Rewarded;
import com.fyber.fairbid.ads.ShowOptions;
import com.fyber.fairbid.ads.interstitial.InterstitialListener;
import com.fyber.fairbid.ads.rewarded.RewardedListener;
import com.fyber.fairbid.common.lifecycle.EventStream;
import com.fyber.fairbid.internal.Constants;
import com.fyber.fairbid.mediation.MediationManager;
import com.fyber.fairbid.mediation.abstr.CachedAd;
import com.fyber.fairbid.mediation.abstr.NetworkAdapter;
import com.fyber.fairbid.mediation.adapter.AdapterConfiguration;
import com.fyber.fairbid.mediation.adapter.AdapterPool;
import com.fyber.fairbid.mediation.config.MediationConfig;
import com.fyber.fairbid.sdk.placements.Placement;
import com.fyber.fairbid.sdk.placements.PlacementsHandler;
import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒉ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0624 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f2209 = StringFog.decrypt("mBoMMyaAlSiLFhcQDoWSKJgaCjctl4gokRwd\n", "/394fkPk/Ek=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f2208 = StringFog.decrypt("cr+VoiOdUb5wio2CJKxFq3uutZo3rA==\n", "Fdrh40fJKM4=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f2207 = StringFog.decrypt("VW+ZZGzie61BeYRCb9ZovFNagUxi92StXH65VHH3\n", "MgrtLQGSCcg=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f2206 = StringFog.decrypt("QazUuC4E10VVusmeLTDEVEebxZ8nEddJSK7zlSg=\n", "Jsmg8UN0pSA=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f2205 = StringFog.decrypt("kuP3EP5SF+GG9eo2/WYE8JTU5jf3Rxftm+HQPfh0APaG7+w3\n", "9YaDWZMiZYQ=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f2204 = StringFog.decrypt("FD4IhBxx/E4AKBWiH0XvXxIfGaAQb+p4HC4OrhQ=\n", "c1t8zXEBjis=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f2203 = StringFog.decrypt("DSxB19o9sqAZOlzx2QmhsQsfVOzeLK6xIy0=\n", "akk1nrdNwMU=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f2202 = StringFog.decrypt("BhTSK+stmJcSAs8N6BmLhgA/wxbWPJOdFAU=\n", "YXGmYoZd6vI=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f2201 = StringFog.decrypt("Hux+GK8XnfsK+mM+rCOO6hjKeDSjE4boHMBu\n", "eYkKUcJn754=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f2200 = StringFog.decrypt("Naceu3ZEct4hsQOddXBhzzODDoR+RnTSIacYtnRZYdI8\n", "UsJq8hs0ALs=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f2199 = StringFog.decrypt("ilsr2leYh5meTTb8VKyUiIx9Pv5KiZybg3c7\n", "7T5fkzro9fw=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f2198 = StringFog.decrypt("ZvNwYepwmFY=\n", "AZYEIJoA0TI=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f2197 = StringFog.decrypt("BKZscovtXL0=\n", "Y8MYIf+CLtg=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f2196 = StringFog.decrypt("wvcAoiqk+uvA4DeMIKPj+NDgFZcnquTs\n", "pZJ0407Fip8=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f2195 = StringFog.decrypt("6LxELd1Z0Y3ivF4J8Fzmkf+8\n", "j9kwfbE4sug=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f2194 = StringFog.decrypt("zHCc1p4L1LzGcIbyvAvavA==\n", "qxXohvJqt9k=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f2193 = StringFog.decrypt("zBlFnLrTbczGGV+4pfpvx88QVL4=\n", "q3wxzNayDqk=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f2192 = StringFog.decrypt("/DCUkFcPxZn+EI6kXg==\n", "m1Xg0TNbvOk=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f2191 = StringFog.decrypt("vv/JiqNeXrq+7tS3pEtXhKTpyaajT0k=\n", "zZq9w80qO8g=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f2190 = StringFog.decrypt("0b4rJ2cITGDGvjs5awxZd8y+LQ==\n", "ottfdQJ/LRI=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f2189 = StringFog.decrypt("uxWB6ytayjG7FIbrPQ==\n", "2mbyjlkumUU=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f2188 = StringFog.decrypt("l/nEudMnDw==\n", "0Zity5FOa5I=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f2187 = StringFog.decrypt("mnjCP0y1Of+5UMc4TKY14g==\n", "1x2mVi3BUJA=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f2186 = StringFog.decrypt("NnJgWRtT\n", "dxY0IGs2bwQ=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f2185 = StringFog.decrypt("0f4NpJqf8xf3\n", "kJp+5/XxlX4=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f2184 = StringFog.decrypt("KsKHo6Aepc8J5IykpwOr\n", "Z6fjysFqzKA=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f2183 = StringFog.decrypt("fNHz5Hi00rBYztrmc73bu14=\n", "LL2Shx3Zt94=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f2182 = StringFog.decrypt("8srGOo7+YSzW\n", "oqanWeuTBEI=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f2181 = StringFog.decrypt("LTLy9aHeTAsQNef8n8RLFgEy4+I=\n", "ZFyGkNOtOGI=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f2180 = StringFog.decrypt("itfHo1p+Fj2U28O2TXQWKw==\n", "2LKwwigac1k=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f2179 = StringFog.decrypt("o6RtTiOS+viFp1ldMoA=\n", "6skdPEbhiZE=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f2178 = StringFog.decrypt("G2O1pEcMVwomZKCt\n", "Ug3BwTV/I2M=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f2177 = StringFog.decrypt("DpRWnekY7tkqrE6O6Q==\n", "Xvg3/ox1i7c=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f2176 = StringFog.decrypt("UF7cuqQwxr4=\n", "Ajur29ZUo9o=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f2175 = StringFog.decrypt("0sc21E97FbbuwSo=\n", "ga9ZowALYd8=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f2174 = StringFog.decrypt("vB7tJwgJzuQ=\n", "/3+OT21tj4A=\n");

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f2173 = StringFog.decrypt("ZDniK/DN/ZhOPeYo+s0=\n", "KlyWXJ+/ltk=\n");

    /* JADX INFO: renamed from: ᕃ, reason: contains not printable characters */
    public static final String f2172 = StringFog.decrypt("W353gNdMFUt1dXo=\n", "GhoW8KMpZxs=\n");

    /* JADX INFO: renamed from: ᕂ, reason: contains not printable characters */
    public static final String f2171 = StringFog.decrypt("XtKMBBCiDvZw2IsdA7IO1Gvfgho=\n", "H7btdGTHfLU=\n");

    /* JADX INFO: renamed from: ᔽ, reason: contains not printable characters */
    public static final String f2170 = StringFog.decrypt("tD22XyxA/5CUKr4=\n", "8UvTMVgTi+I=\n");

    public C0624(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        try {
            try {
                return (String) FairBid.class.getDeclaredField(StringFog.decrypt("LrFuPzy7GR80ums=\n", "ffUlYGr+S0w=\n")).get(null);
            } catch (Exception unused) {
                return null;
            }
        } catch (Exception unused2) {
            C0493 c0493 = C0705.m8630().f2438;
            String strDecrypt = StringFog.decrypt("pDWZ6Zpk25inNZnpmmTbmKc1memaZKQ=\n", "+m7FjcdPgLY=\n");
            c0493.getClass();
            return C0493.m8552((Object) null, FairBid.class, strDecrypt);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f2209, new C0692(this));
        map.put(f2208, new C0687(this));
        map.put(f2207, new C0670(this));
        map.put(f2206, new C0667(this));
        map.put(f2205, new C0665(this));
        map.put(f2204, new C0664(this));
        map.put(f2203, new C0630(this));
        map.put(f2202, new C0627(this));
        map.put(f2201, new C0625(this));
        map.put(f2200, new C0775(this));
        map.put(f2199, new C0771(this));
        map.put(f2198, new C0769(this));
        map.put(f2197, new C0761(this));
        map.put(f2196, new C0713(this));
        map.put(f2195, new C0709(this));
        map.put(f2194, new C0708(this));
        map.put(f2193, new C0706(this));
        map.put(f2192, new C0696(this));
        map.put(f2191, new C0695(this));
        map.put(f2190, new C0691(this));
        map.put(f2189, new C0688(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:62:0x00dc  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -2041833493:
                if (!str.equals(f2172)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case -1598046662:
                if (!str.equals(f2184)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -1115843213:
                if (!str.equals(f2179)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case -847426041:
                if (!str.equals(f2171)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -498060603:
                if (!str.equals(f2182)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -368841467:
                if (!str.equals(f2174)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case -174936018:
                if (!str.equals(f2176)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case 99044255:
                if (!str.equals(f2177)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case 438795617:
                if (!str.equals(f2173)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case 578208537:
                if (!str.equals(f2188)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case 769047372:
                if (!str.equals(f2178)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case 806552769:
                if (!str.equals(f2175)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case 1062384924:
                if (!str.equals(f2183)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 1212533506:
                if (!str.equals(f2180)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case 1297340448:
                if (!str.equals(f2181)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 1775008410:
                if (!str.equals(f2170)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case 1884304309:
                if (!str.equals(f2187)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 1955869213:
                if (!str.equals(f2186)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 1969669106:
                if (!str.equals(f2185)) {
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
                return FairBid.class;
            case 1:
                return MediationManager.class;
            case 2:
                return Constants.AdType.class;
            case 3:
                return FairBid.AdsConfig.class;
            case 4:
                return MediationConfig.class;
            case 5:
                return PlacementsHandler.class;
            case 6:
                return Placement.class;
            case 7:
                return InterstitialListener.class;
            case 8:
                return RewardedListener.class;
            case 9:
                return ImpressionData.class;
            case 10:
                return Interstitial.class;
            case 11:
                return PlacementType.class;
            case 12:
                return Rewarded.class;
            case 13:
                return ShowOptions.class;
            case 14:
                return CachedAd.class;
            case 15:
                return NetworkAdapter.class;
            case 16:
                return AdapterPool.class;
            case 17:
                return AdapterConfiguration.class;
            case 18:
                return EventStream.class;
            default:
                return null;
        }
    }
}
