package com.ironsource.adqualitysdk.sdk.i;

import com.amazon.aps.ads.Aps;
import com.amazon.aps.ads.ApsAd;
import com.amazon.aps.ads.ApsAdController;
import com.amazon.aps.ads.ApsAdRequest;
import com.amazon.aps.ads.ApsAdView;
import com.amazon.aps.ads.activity.ApsAdActivity;
import com.amazon.aps.ads.activity.ApsInterstitialActivity;
import com.amazon.aps.ads.listeners.ApsAdListener;
import com.amazon.aps.ads.listeners.ApsAdRequestListener;
import com.amazon.aps.ads.model.ApsAdFormat;
import com.amazon.aps.ads.model.ApsAdType;
import com.amazon.device.ads.AdRegistration;
import com.amazon.device.ads.DTBActivity;
import com.amazon.device.ads.DTBAdActivity;
import com.amazon.device.ads.DTBAdBannerListener;
import com.amazon.device.ads.DTBAdBaseBannerListener;
import com.amazon.device.ads.DTBAdBaseInterstitialListener;
import com.amazon.device.ads.DTBAdCallback;
import com.amazon.device.ads.DTBAdExpandedListener;
import com.amazon.device.ads.DTBAdInterstitial;
import com.amazon.device.ads.DTBAdInterstitialListener;
import com.amazon.device.ads.DTBAdListener;
import com.amazon.device.ads.DTBAdLoader;
import com.amazon.device.ads.DTBAdRequest;
import com.amazon.device.ads.DTBAdResponse;
import com.amazon.device.ads.DTBAdSize;
import com.amazon.device.ads.DTBAdView;
import com.amazon.device.ads.DTBAdViewSupportClient;
import com.amazon.device.ads.DTBFetchFactory;
import com.amazon.device.ads.DTBFetchManager;
import com.amazon.device.ads.DTBInterstitialActivity;
import com.amazon.device.ads.DTBRenderer;
import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.宀, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0982 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f3489 = StringFog.decrypt("mWsKXe0luvWH\n", "/g5+HJ1V8ZA=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f3488 = StringFog.decrypt("uhDuq944pk6bFPmZ1D68b7MG7ozVL6A=\n", "3XWa7btMxSY=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f3487 = StringFog.decrypt("H+QhAqoPtaQI7jswqx+5szHl\n", "eIFVQ85d0Nc=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f3486 = StringFog.decrypt("llre5hfmQE2BUMTUFv1IToNa2dQa20trg1M=\n", "8T+qp3O0JT4=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f3485 = StringFog.decrypt("Lb8ESnPehxE6tR54ct6HDC6/AmJ5668DOg==\n", "StpwCxeM4mI=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f3484 = StringFog.decrypt("+1TXXInbYw7sXs1uiNtjE/hU0XSD7kQI8lXPeA==\n", "nDGjHe2JBn0=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f3483 = StringFog.decrypt("RwgU4I9IYltMGTbNjktsb0QeMsGbW2ZdVC4V155Bbn5BHwHJmQ==\n", "IG1gpOouAy4=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f3482 = StringFog.decrypt("wBRom6BCOk/XHnKpoVE7Tw==\n", "p3Ec2sQQXzw=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f3481 = StringFog.decrypt("BF95ZuFgNhkTVWNU4GIhAwBfXUjsXCc=\n", "YzoNJ4UyU2o=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f3480 = StringFog.decrypt("FWFnSxK7ji4XV39lAr2yHTY=\n", "cgQTCnbo51Q=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f3479 = StringFog.decrypt("IuF/Q3ccXV8gxW9Waj9R\n", "RYQLAhNPNCU=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f3478 = StringFog.decrypt("m4vbAyV4HTWZvtogEk4AO5WAyDE=\n", "/O6vQkErdE8=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f3477 = StringFog.decrypt("rUyHnFRQJh2NUbKddUooEbBWp5RGXQ==\n", "xD/G+Ac5XHg=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f3476 = StringFog.decrypt("g0/JH44mqzmmWNgdkgWeGJRS3ge3IpEah1jeM5sz\n", "4D2sfvpD/3s=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f3475 = StringFog.decrypt("oVK1+5n6dLaHWLX5mOtPhpFFouyE/EU=\n", "wiDQmu2fIPQ=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f3474 = StringFog.decrypt("EHvhcINMnL4HcftCgl2LqBZq/EeCV50=\n", "dx6VMece+c0=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f3473 = StringFog.decrypt("79khTdKDxHDc3AdB2oQ=\n", "rr1zKLXqtwQ=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f3472 = StringFog.decrypt("RQfCm8kWokNoJ/k=\n", "AVOA2qpiyzU=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f3471 = StringFog.decrypt("faGBOLQdh0JxoMJysAaPW3vgjXKmXqJsXI+PYrwGj0xn\n", "Hs7sFtVw5jg=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f3470 = StringFog.decrypt("gyPGVSHoMfW0A+1oJv04xqQD7Wom6C0=\n", "x3eEHE+cVIc=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f3469 = StringFog.decrypt("ptVGnv5Z7tiq1AXU+kLmwaCUStTsGsv2h/NFxPpG/NaszkLR83Xs1qzMQsTm\n", "xborsJ80j6I=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f3468 = StringFog.decrypt("L80/5EnOnGwC7xTRVA==\n", "a5l9pS2P/xg=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f3467 = StringFog.decrypt("jxaRxacMbMaDF9KPoxdk34lXnY+1T0norjiYqqUVZMqFDYU=\n", "7Hn868ZhDbw=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f3466 = StringFog.decrypt("Bukm+YRycwEnzxfMiU90FC4=\n", "Qr1kuOA7HXU=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f3465 = StringFog.decrypt("DkVCdYxQ5FcudHI=\n", "ShEANOgcizY=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f3464 = StringFog.decrypt("6LFqSZOlVoHZgFt8\n", "rOUoCPf3M/A=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f3463 = StringFog.decrypt("nH3sawat4LSoRsBZBw==\n", "2CmuKmL/hcc=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f3462 = StringFog.decrypt("fZmW0Q8JLLlO\n", "Oc3UkGtfRdw=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f3461 = StringFog.decrypt("emM+2KMXv+pb\n", "Pjd8mcdE1pA=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f3460 = StringFog.decrypt("AXAWSHAHmUgNcVUCdByRUQcxGgJiRLxmIF4fMHgPjw==\n", "Yh97ZhFq+DI=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f3459 = StringFog.decrypt("eoCbfyhLBlNJh6xOPHIdQn24sFsiaQ==\n", "PtTZPkwdbzY=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f3458 = StringFog.decrypt("EbJVe6JXxJcTh3RJqFHe\n", "VeYXPccjp/8=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f3457 = StringFog.decrypt("8+xNtbZfxvn62WGStE7X\n", "t7gP89MrpZE=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f3456 = StringFog.decrypt("KM0foz0xq/se/C8=\n", "bJld8Vhfz54=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f3455 = StringFog.decrypt("h0BseanF4jatcVx0pPT3Pa1xXA==\n", "wxQuOM2Hg1g=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f3454 = StringFog.decrypt("bjEyT0zpERRPJxFgRs4CK0MWBGtGzgI=\n", "KmVwDiircGc=\n");

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f3453 = StringFog.decrypt("7G066ww5FIfNcBbeDQkGgMFNEcsENxyH3FwWzxo=\n", "qDl4qmh7dfQ=\n");

    /* JADX INFO: renamed from: ᕃ, reason: contains not printable characters */
    public static final String f3452 = StringFog.decrypt("zxUtlt5SUSrnIw600Q==\n", "i0Fv17oRMEY=\n");

    /* JADX INFO: renamed from: ᕂ, reason: contains not printable characters */
    public static final String f3451 = StringFog.decrypt("WPx6pLKDi9F9xlyAsoqa0mjNVoCk\n", "HKg45dbG86E=\n");

    /* JADX INFO: renamed from: ᔽ, reason: contains not printable characters */
    public static final String f3450 = StringFog.decrypt("tnYVl89U6dOXUCSiwmnuxp5uPqXfeOnCgA==\n", "8iJX1qsdh6c=\n");

    /* JADX INFO: renamed from: ᔺ, reason: contains not printable characters */
    public static final String f3449 = StringFog.decrypt("iqnpwOGP+e66mMXk9w==\n", "zv2rgYXDkJ0=\n");

    /* JADX INFO: renamed from: ᔹ, reason: contains not printable characters */
    public static final String f3448 = StringFog.decrypt("6a5+mN82UlrPpFKK2RpUTw==\n", "vewz+bFXNT8=\n");

    /* JADX INFO: renamed from: ᔲ, reason: contains not printable characters */
    public static final String f3447 = StringFog.decrypt("albOTpupKexRZthTjLw1+1s=\n", "PhSLNv7KXJg=\n");

    /* JADX INFO: renamed from: ᔱ, reason: contains not printable characters */
    public static final String f3446 = StringFog.decrypt("kcCUiqkYggejxI63rg2LNLPEjrWuGJ4=\n", "0LDnw8ds53U=\n");

    /* JADX INFO: renamed from: ᓮ, reason: contains not printable characters */
    public static final String f3445 = StringFog.decrypt("8kaOnGTrcW/+R83TdfU+dPVazdNm8nlj+F2anET2Y1z/XYbAdvJ5YfhIj/Nm8nlj+F2a\n", "kSnjsgWGEBU=\n");

    /* JADX INFO: renamed from: ᐱ, reason: contains not printable characters */
    public static final String f3444 = StringFog.decrypt("1TXZdBL8kgn9M8NBDw==\n", "lEWqNXa98X0=\n");

    /* JADX INFO: renamed from: Ꮭ, reason: contains not printable characters */
    public static final String f3443 = StringFog.decrypt("/IKeZujpOADwg90p+fd3G/ue3Snq8DAM9pmKZsj0Kjv7rJA84PIwDuY=\n", "n+3zSImEWXo=\n");

    /* JADX INFO: renamed from: Ꮧ, reason: contains not printable characters */
    public static final String f3442 = StringFog.decrypt("u7M3GwK5qtqN\n", "+sNEWmbvw78=\n");

    /* JADX INFO: renamed from: პ, reason: contains not printable characters */
    public static final String f3441 = StringFog.decrypt("Um1R\n", "Ex0iwcgpAJQ=\n");

    /* JADX INFO: renamed from: ე, reason: contains not printable characters */
    public static final String f3440 = StringFog.decrypt("qfryJDY=\n", "6IqBZVIGbFs=\n");

    /* JADX INFO: renamed from: ງ, reason: contains not printable characters */
    public static final String f3439 = StringFog.decrypt("ObRKVBrma9sMtlZ5EsB2\n", "eMQ5FX6lBLU=\n");

    /* JADX INFO: renamed from: อ, reason: contains not printable characters */
    public static final String f3438 = StringFog.decrypt("gbJL5Q5cluy0p1bBGA==\n", "wMI4pGoQ/58=\n");

    /* JADX INFO: renamed from: ม, reason: contains not printable characters */
    public static final String f3437 = StringFog.decrypt("d1hgfWxhdxZDTWBIRFphE1NGdk4=\n", "NigTPAgzEmc=\n");

    /* JADX INFO: renamed from: น, reason: contains not printable characters */
    public static final String f3436 = StringFog.decrypt("egu/Qjv0PHJWGrg=\n", "O3vMA1+yUwA=\n");

    /* JADX INFO: renamed from: ต, reason: contains not printable characters */
    public static final String f3435 = StringFog.decrypt("NrITSS5NTDcS\n", "d8JgCEoZNUc=\n");

    /* JADX INFO: renamed from: ฑ, reason: contains not printable characters */
    public static final String f3434 = StringFog.decrypt("9n7oNn9z1sPCa+gD\n", "tw6bdxshs7I=\n");

    /* JADX INFO: renamed from: ঢ়, reason: contains not printable characters */
    public static final String f3433 = StringFog.decrypt("PzFnnYDQWggKMWKpldBv\n", "WFQT3PCjG2w=\n");

    /* JADX INFO: renamed from: ষ, reason: contains not printable characters */
    public static final String f3432 = StringFog.decrypt("s+EBiYQbDtiy6w==\n", "1IR1y+1/R7Y=\n");

    /* JADX INFO: renamed from: ঘ, reason: contains not printable characters */
    public static final String f3431 = StringFog.decrypt("iZBKy3IqJTq+mlf1dA==\n", "7vU+mwBDRl8=\n");

    /* JADX INFO: renamed from: খ, reason: contains not printable characters */
    public static final String f3430 = StringFog.decrypt("xSH1+ndBJr7XLeU=\n", "okSBqRsuUus=\n");

    /* JADX INFO: renamed from: এ, reason: contains not printable characters */
    public static final String f3429 = StringFog.decrypt("OotFUA2egF0bgUN8HJk=\n", "Xe4xEX3twTk=\n");

    /* JADX INFO: renamed from: ऱ, reason: contains not printable characters */
    public static final String f3428 = StringFog.decrypt("rVSM06FmOhquVIo=\n", "yjH4ksUqVXs=\n");

    /* JADX INFO: renamed from: ܟ, reason: contains not printable characters */
    public static final String f3427 = StringFog.decrypt("bfpGtjA1HQ99\n", "Cp8y91RjdGo=\n");

    public C0982(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        Matcher matcher = Pattern.compile(StringFog.decrypt("jSXOPZFvsaj+JMo74A==\n", "ow/jFcoz1YY=\n")).matcher(AdRegistration.getVersion());
        if (matcher.matches()) {
            return matcher.group(1);
        }
        return null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f3489, new C1123(this));
        map.put(f3488, new C1095(this));
        map.put(f3487, new C1094(this));
        map.put(f3474, new C1085(this));
        map.put(f3486, new C1083(this));
        map.put(f3485, new C1077(this));
        map.put(f3484, new C1020(this));
        map.put(f3483, new C1012(this));
        map.put(f3482, new C1010(this));
        map.put(f3481, new C1159(this));
        map.put(f3480, new C1152(this));
        map.put(f3479, new C1150(this));
        map.put(f3478, new C1147(this));
        map.put(f3477, new C1146(this));
        map.put(f3476, new C1145(this));
        map.put(f3475, new C1143(this));
        map.put(f3433, new C1130(this));
        map.put(f3432, new C1125(this));
        map.put(f3431, new C1124(this));
        map.put(f3430, new C1122(this));
        map.put(f3429, new C1113(this));
        map.put(f3428, new C1112(this));
        map.put(f3427, new C1102(this));
        return map;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final String mo8325() {
        return AdRegistration.getVersion();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:125:0x01d8  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -2137858584:
                if (!str.equals(f3465)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case -2133119933:
                if (!str.equals(f3439)) {
                    b = -1;
                } else {
                    b = 34;
                }
                break;
            case -1987686071:
                if (!str.equals(f3449)) {
                    b = -1;
                } else {
                    b = Ascii.CAN;
                }
                break;
            case -1885106463:
                if (!str.equals(f3472)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case -1879113962:
                if (!str.equals(f3461)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case -1879025222:
                if (!str.equals(f3462)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case -1554728876:
                if (!str.equals(f3469)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -1464660218:
                if (!str.equals(f3453)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case -1358954558:
                if (!str.equals(f3458)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case -1293925587:
                if (!str.equals(f3470)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case -1291566264:
                if (!str.equals(f3434)) {
                    b = -1;
                } else {
                    b = 39;
                }
                break;
            case -1092884085:
                if (!str.equals(f3467)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -1090060454:
                if (!str.equals(f3464)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case -832298225:
                if (!str.equals(f3448)) {
                    b = -1;
                } else {
                    b = Ascii.EM;
                }
                break;
            case -791598050:
                if (!str.equals(f3436)) {
                    b = -1;
                } else {
                    b = 37;
                }
                break;
            case -723985259:
                if (!str.equals(f3456)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -696695160:
                if (!str.equals(f3471)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case -694845532:
                if (!str.equals(f3468)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case -466918522:
                if (!str.equals(f3454)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case -341719851:
                if (!str.equals(f3455)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case -300800492:
                if (!str.equals(f3447)) {
                    b = -1;
                } else {
                    b = Ascii.SUB;
                }
                break;
            case -197992833:
                if (!str.equals(f3446)) {
                    b = -1;
                } else {
                    b = Ascii.ESC;
                }
                break;
            case -27446238:
                if (!str.equals(f3451)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case 66052:
                if (!str.equals(f3441)) {
                    b = -1;
                } else {
                    b = 32;
                }
                break;
            case 63478087:
                if (!str.equals(f3440)) {
                    b = -1;
                } else {
                    b = 33;
                }
                break;
            case 355568411:
                if (!str.equals(f3438)) {
                    b = -1;
                } else {
                    b = 35;
                }
                break;
            case 568188517:
                if (!str.equals(f3457)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case 620798166:
                if (!str.equals(f3463)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case 788901082:
                if (!str.equals(f3452)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case 1036908700:
                if (!str.equals(f3473)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case 1251356764:
                if (!str.equals(f3443)) {
                    b = -1;
                } else {
                    b = Ascii.RS;
                }
                break;
            case 1306698049:
                if (!str.equals(f3466)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 1328085269:
                if (!str.equals(f3450)) {
                    b = -1;
                } else {
                    b = Ascii.ETB;
                }
                break;
            case 1340383521:
                if (!str.equals(f3435)) {
                    b = -1;
                } else {
                    b = 38;
                }
                break;
            case 1340427404:
                if (!str.equals(f3442)) {
                    b = -1;
                } else {
                    b = Ascii.US;
                }
                break;
            case 1600627740:
                if (!str.equals(f3437)) {
                    b = -1;
                } else {
                    b = 36;
                }
                break;
            case 1648408950:
                if (!str.equals(f3444)) {
                    b = -1;
                } else {
                    b = Ascii.GS;
                }
                break;
            case 1713728997:
                if (!str.equals(f3445)) {
                    b = -1;
                } else {
                    b = Ascii.FS;
                }
                break;
            case 2019413793:
                if (!str.equals(f3460)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case 2144664800:
                if (!str.equals(f3459)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return AdRegistration.class;
            case 1:
            case 2:
                return DTBActivity.class;
            case 3:
            case 4:
                return DTBInterstitialActivity.class;
            case 5:
            case 6:
                return DTBAdActivity.class;
            case 7:
                return DTBAdInterstitial.class;
            case 8:
                return DTBAdLoader.class;
            case 9:
                return DTBAdRequest.class;
            case 10:
                return DTBAdResponse.class;
            case 11:
            case 12:
                return DTBAdView.class;
            case 13:
                return DTBAdSize.class;
            case 14:
                return DTBAdViewSupportClient.class;
            case 15:
                return DTBFetchFactory.class;
            case 16:
                return DTBFetchManager.class;
            case 17:
                return DTBRenderer.class;
            case 18:
                return DTBAdBannerListener.class;
            case 19:
                return DTBAdBaseBannerListener.class;
            case 20:
                return DTBAdBaseInterstitialListener.class;
            case 21:
                return DTBAdCallback.class;
            case 22:
                return DTBAdExpandedListener.class;
            case 23:
                return DTBAdInterstitialListener.class;
            case 24:
                return DTBAdListener.class;
            case 25:
                return C0990.class;
            case 26:
                return C1007.class;
            case 27:
            case 28:
                return ApsInterstitialActivity.class;
            case 29:
            case 30:
                return ApsAdActivity.class;
            case 31:
                return ApsAdView.class;
            case 32:
                return Aps.class;
            case 33:
                return ApsAd.class;
            case 34:
                return ApsAdController.class;
            case 35:
                return ApsAdListener.class;
            case 36:
                return ApsAdRequestListener.class;
            case 37:
                return ApsAdFormat.class;
            case 38:
                return ApsAdType.class;
            case 39:
                return ApsAdRequest.class;
            default:
                return null;
        }
    }
}
