package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.inneractive.sdk.R;
import com.fyber.inneractive.sdk.activities.InneractiveFullscreenAdActivity;
import com.fyber.inneractive.sdk.activities.InneractiveInternalBrowserActivity;
import com.fyber.inneractive.sdk.activities.InneractiveRichMediaVideoPlayerActivityCore;
import com.fyber.inneractive.sdk.config.IAConfigManager;
import com.fyber.inneractive.sdk.config.enums.Tap;
import com.fyber.inneractive.sdk.config.enums.UnitDisplayType;
import com.fyber.inneractive.sdk.external.ImpressionData;
import com.fyber.inneractive.sdk.external.InneractiveAdManager;
import com.fyber.inneractive.sdk.external.InneractiveAdRenderer;
import com.fyber.inneractive.sdk.external.InneractiveAdRequest;
import com.fyber.inneractive.sdk.external.InneractiveAdSpot;
import com.fyber.inneractive.sdk.external.InneractiveAdViewEventsListenerWithImpressionData;
import com.fyber.inneractive.sdk.external.InneractiveAdViewUnitController;
import com.fyber.inneractive.sdk.external.InneractiveAdViewVideoContentController;
import com.fyber.inneractive.sdk.external.InneractiveContentController;
import com.fyber.inneractive.sdk.external.InneractiveFullscreenAdEventsListener;
import com.fyber.inneractive.sdk.external.InneractiveFullscreenAdEventsListenerAdapter;
import com.fyber.inneractive.sdk.external.InneractiveFullscreenAdEventsListenerWithImpressionData;
import com.fyber.inneractive.sdk.external.InneractiveFullscreenUnitController;
import com.fyber.inneractive.sdk.external.InneractiveFullscreenVideoContentController;
import com.fyber.inneractive.sdk.external.InneractiveMediationName;
import com.fyber.inneractive.sdk.external.InneractiveUnitController;
import com.fyber.inneractive.sdk.external.VideoContentListener;
import com.fyber.inneractive.sdk.external.VideoContentListenerAdapter;
import com.fyber.inneractive.sdk.mraid.IAMraidKit;
import com.fyber.inneractive.sdk.ui.IAmraidWebViewController;
import com.fyber.inneractive.sdk.ui.IArichMediaVideoView;
import com.fyber.inneractive.sdk.video.IAVideoKit;
import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᖟ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0735 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f2527 = StringFog.decrypt("TMPGXPfC49RF0uJt7dP0wljD1k3nweTUWNI=\n", "K6ayH4KwkbE=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f2526 = StringFog.decrypt("7dhR8OYkTd/u\n", "ir0lo5ZLOZY=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f2525 = StringFog.decrypt("KBoY8qkQqcY7GgLH\n", "T39ss81Txqg=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f2524 = StringFog.decrypt("Juu3XLm3Byc9/ZRHlL8=\n", "T5jxKdXbdEQ=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f2523 = StringFog.decrypt("2GhJSm7shmvV\n", "sRsfIwqJ6So=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f2522 = StringFog.decrypt("uyb4fwnATG+IK/5TEM5HUa4v\n", "3EOMPGWpLwQ=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f2521 = StringFog.decrypt("8xVyvaRipUvg\n", "lHAG8cUbyj4=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f2520 = StringFog.decrypt("42bOkgZvGtHwZt6UDWoL8ettzrMMbxPX9g==\n", "hAO6wWMDf7I=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f2519 = StringFog.decrypt("puaeVxzmjBa15o5HFuSdEK/3qWsX/psare+Pdg==\n", "wYPqBHmK6XU=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f2518 = StringFog.decrypt("lmqS9pIWaKyCQ4/AkBZovYM=\n", "8Q/ms+RzBtg=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f2517 = StringFog.decrypt("oPMzbmdN1QOg2i5YZU3VEqE=\n", "05ZHKxEou3c=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f2516 = StringFog.decrypt("WabaHPoAyKhK\n", "PsOuXZ5TuMc=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f2515 = StringFog.decrypt("+xEPcuAjEiz1BwtL7zMyEewRPkn7Jw==\n", "nHR7J45KZmg=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f2514 = StringFog.decrypt("PW0+7zmJ59oYaSTMLprY1z9/A8Y=\n", "WghKokvojr4=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f2513 = StringFog.decrypt("9TRgkNu1Q37hIn222IFQb/MVe7TXrF8=\n", "klEU2bbFMRs=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f2512 = StringFog.decrypt("STDCzKUaLExpKMnguQ8qSm4/wOulFDhLZSztyqMSOVF0Jw==\n", "AF6sqdd7Tzg=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f2511 = StringFog.decrypt("0gP9Mjp6gDvDQvlyMmaQP9IY+Wo5LZE62kLxfyhqlDfFBfVvckqMMNQe8X8oapQ7+ALkeS5tgzLz\nHv9rL2aQH9IY+Wo1d5s=\n", "sWyQHFwD4l4=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f2510 = StringFog.decrypt("rC0bUsmXIwOMNRBxzposBIYxEFLVtyQ2hjccQdKCOQ==\n", "5UN1N7v2QHc=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f2509 = StringFog.decrypt("SnVI836AMrRbNEyzdpwisEpuTKt91yO1QjREvmyQJrhdc0CuNrA+v0xoRL5skCa0b29JsWuaIrRM\ndGS5WZokuF9zUaQ=\n", "KRol3Rj5UNE=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f2508 = StringFog.decrypt("dPN76r2MXdFU63Ddpo5W6Fj5fO6ZhFrAUs157raITORe6Xz5pplH5lLvcA==\n", "PZ0Vj8/tPqU=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f2507 = StringFog.decrypt("yKzT+h/x2P/Z7de6F+3I+8i316Icpsn+wO3ftw3hzPPfqtunV8HU9M6x37cN4cz/+ardvDTt3vPK\nldewHOfq9sq626Y4687z3arKrTrnyP8=\n", "q8O+1HmIupo=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f2506 = StringFog.decrypt("TlhKbo3Oz5BuQEFKm/zci3M=\n", "BzYkC/+vrOQ=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f2505 = StringFog.decrypt("h0PFtQ1HRDanW86RG3RCM7tI2KQ=\n", "zi2r0H8mJ0I=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f2504 = StringFog.decrypt("C/fEhf4UvwEr78+h6Ce5Gyb82IX+\n", "Qpmq4Ix13HU=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f2503 = StringFog.decrypt("Ec/UqFQL3wEx19+AQw7VFCzI1aNoC9EQ\n", "WKG6zSZqvHU=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f2502 = StringFog.decrypt("Y5oq9uwY0otnugf45RvJ\n", "KttpmYJ+u+w=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f2501 = StringFog.decrypt("/Cu6o1y5AovcM7GFQbYVmtsxl6lArBOQ2SmxtA==\n", "tUXUxi7YYf8=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f2500 = StringFog.decrypt("vDlya9gqGvycIXlbxCINy5o5aHzFJxXthw==\n", "9VccDqpLeYg=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f2499 = StringFog.decrypt("twueSmjb+aKXE5Vufuzzs4kwnkZu+fW4ihefQ3bf6A==\n", "/mXwLxq6mtY=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f2498 = StringFog.decrypt("0yNMdLD8XsDqLFxUjeVI\n", "hk0lAPSVLbA=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f2497 = StringFog.decrypt("J27G1m0KmfIRbMbWfAs=\n", "YhijuBl51Zs=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f2496 = StringFog.decrypt("cg==\n", "IJ0eLArLXp4=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f2495 = StringFog.decrypt("/924VRCRcjvfxbN2F5x9PNXBs1UMpngr09yVXwyEdCHC8LleFoJ+I9rWpA==\n", "trPWMGLwEU8=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f2494 = StringFog.decrypt("CHywokOrwTYoZLuBRKbOMSJgu6Jfi8YHN3ews0KGyzE1d7CiQw==\n", "QRLexzHKokI=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f2493 = StringFog.decrypt("e/3/KfF8Bo5Z8fU40lYalEj6/j4=\n", "LZSbTJ4/aeA=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f2492 = StringFog.decrypt("4RF/6a2uVzLqDWT7rKVEEsEMf+mxpUQ=\n", "qH8LjN/ANl4=\n");

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f2491 = StringFog.decrypt("smcp1VWPUdafUDPVdKpcwIRjNNVx\n", "8AZasAPmNbM=\n");

    /* JADX INFO: renamed from: ᕃ, reason: contains not printable characters */
    public static final String f2490 = StringFog.decrypt("MjAS\n", "ZlFiTbqTFRI=\n");

    /* JADX INFO: renamed from: ᕂ, reason: contains not printable characters */
    public static final String f2489 = StringFog.decrypt("RXl4VMo7Ck9lYXN3zTYFSG9lc1TWGw1+enJ4RcsWAEh4cnhUyhsNWnxjc0M=\n", "DBcWMbhaaTs=\n");

    /* JADX INFO: renamed from: ᔽ, reason: contains not printable characters */
    public static final String f2488 = StringFog.decrypt("wt5jKGeXdAjixmgLYJp7D+jCaCh7o3kV//NiI2GEeBDn1X8=\n", "i7ANTRX2F3w=\n");

    /* JADX INFO: renamed from: ᔺ, reason: contains not printable characters */
    public static final String f2487 = StringFog.decrypt("edVcEel8kmxZzVc1/0uYfUftWxD+crJ3Xs9XGu9ennZEyV0Y93iD\n", "MLsydJsd8Rg=\n");

    /* JADX INFO: renamed from: ᔹ, reason: contains not printable characters */
    public static final String f2486 = StringFog.decrypt("D2utvmSTPpI5aa2+dZIznyttvLVi\n", "Sh3I0BDgcvs=\n");

    /* JADX INFO: renamed from: ᔲ, reason: contains not printable characters */
    public static final String f2485 = StringFog.decrypt("FlBTi5VVhJU0XFmatn+YjyVXUpy7coqLNFxF\n", "QDk37voW6/s=\n");

    /* JADX INFO: renamed from: ᔱ, reason: contains not printable characters */
    public static final String f2484 = StringFog.decrypt("BugIbkNqxWUm3Q==\n", "T6lFHCIDoS4=\n");

    /* JADX INFO: renamed from: ᓮ, reason: contains not printable characters */
    public static final String f2483 = StringFog.decrypt("3AjqMysNJ4rwK9EoLxMAsvs99S4mCCav\n", "lUmHQUpkQ90=\n");

    /* JADX INFO: renamed from: ᐱ, reason: contains not printable characters */
    public static final String f2482 = StringFog.decrypt("SHtNGc5R4SVoTg==\n", "ATobcKo0jm4=\n");

    /* JADX INFO: renamed from: Ꮭ, reason: contains not printable characters */
    public static final String f2481 = StringFog.decrypt("EVQoXwUekt83VxxMFAw=\n", "WDlYLWBt4bY=\n");

    /* JADX INFO: renamed from: Ꮧ, reason: contains not printable characters */
    public static final String f2480 = StringFog.decrypt("9g9+5MVRIhnbJ23bz10KE+knafo=\n", "v04MjaY5b3w=\n");

    /* JADX INFO: renamed from: პ, reason: contains not printable characters */
    public static final String f2479 = StringFog.decrypt("6c6cPAd/pn7J1pcfAHKpecPSlzwbX6FP1sWcLQZSrHnUxZw8B0msfsjpnykHe7Z5yc+cHRRqpA==\n", "oKDyWXUexQo=\n");

    /* JADX INFO: renamed from: ე, reason: contains not printable characters */
    public static final String f2478 = StringFog.decrypt("2j8noIdCXqr6JyyEkXVUu+QUP6CbV06S+iI9oJtGT4n6JSGMmFNPu+AiIKqbZ1yq8g==\n", "k1FJxfUjPd4=\n");

    public C0735(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        return InneractiveAdManager.getVersion();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f2527, new C0835(this));
        map.put(f2526, new C0825(this));
        map.put(f2525, new C0822(this));
        map.put(f2524, new C0805(this));
        map.put(f2523, new C0796(this));
        map.put(f2522, new C0792(this));
        map.put(f2521, new C0787(this));
        map.put(f2520, new C0766(this));
        map.put(f2519, new C0758(this));
        map.put(f2518, new C0951(this));
        map.put(f2517, new C0950(this));
        map.put(f2516, new C0877(this));
        map.put(f2515, new C0876(this));
        map.put(f2514, new C0846(this));
        map.put(f2513, new C0837(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:110:0x019b  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -1764994669:
                if (!str.equals(f2482)) {
                    b = -1;
                } else {
                    b = Ascii.GS;
                }
                break;
            case -1757761411:
                if (!str.equals(f2485)) {
                    b = -1;
                } else {
                    b = Ascii.SUB;
                }
                break;
            case -1751837367:
                if (!str.equals(f2510)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case -1661930846:
                if (!str.equals(f2507)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case -1611796569:
                if (!str.equals(f2494)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case -1452673136:
                if (!str.equals(f2505)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case -1264220508:
                if (!str.equals(f2499)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case -1205203919:
                if (!str.equals(f2495)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -1190251081:
                if (!str.equals(f2488)) {
                    b = -1;
                } else {
                    b = Ascii.ETB;
                }
                break;
            case -1115843213:
                if (!str.equals(f2481)) {
                    b = -1;
                } else {
                    b = Ascii.RS;
                }
                break;
            case -955341033:
                if (!str.equals(f2484)) {
                    b = -1;
                } else {
                    b = Ascii.ESC;
                }
                break;
            case -758374370:
                if (!str.equals(f2487)) {
                    b = -1;
                } else {
                    b = Ascii.CAN;
                }
                break;
            case -587023626:
                if (!str.equals(f2483)) {
                    b = -1;
                } else {
                    b = Ascii.FS;
                }
                break;
            case -312786562:
                if (!str.equals(f2512)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -233888832:
                if (!str.equals(f2479)) {
                    b = -1;
                } else {
                    b = 33;
                }
                break;
            case -50587944:
                if (!str.equals(f2498)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case 82:
                if (!str.equals(f2496)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case 83843:
                if (!str.equals(f2490)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case 114221977:
                if (!str.equals(f2501)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case 218220615:
                if (!str.equals(f2503)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case 294386593:
                if (!str.equals(f2506)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case 305774826:
                if (!str.equals(f2478)) {
                    b = -1;
                } else {
                    b = 34;
                }
                break;
            case 334157136:
                if (!str.equals(f2480)) {
                    b = -1;
                } else {
                    b = Ascii.US;
                }
                break;
            case 598324252:
                if (!str.equals(f2500)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case 652259752:
                if (!str.equals(f2489)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case 778319234:
                if (!str.equals(f2486)) {
                    b = -1;
                } else {
                    b = Ascii.EM;
                }
                break;
            case 809010015:
                if (!str.equals(f2492)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case 986039922:
                if (!str.equals(f2493)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case 996606931:
                if (!str.equals(f2502)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case 1840053850:
                if (!str.equals(f2511)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 1945237502:
                if (!str.equals(f2508)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case 1956883725:
                if (!str.equals(f2497)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case 2019288557:
                if (!str.equals(f2509)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case 2082429859:
                if (!str.equals(f2491)) {
                    b = -1;
                } else {
                    b = 32;
                }
                break;
            case 2110184418:
                if (!str.equals(f2504)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
            case 1:
                return InneractiveInternalBrowserActivity.class;
            case 2:
            case 3:
                return InneractiveFullscreenAdActivity.class;
            case 4:
            case 5:
                return InneractiveRichMediaVideoPlayerActivityCore.class;
            case 6:
                return InneractiveAdSpot.class;
            case 7:
                return InneractiveAdRequest.class;
            case 8:
                return InneractiveAdRenderer.class;
            case 9:
                return InneractiveMediationName.class;
            case 10:
                return IAConfigManager.class;
            case 11:
                return InneractiveContentController.class;
            case 12:
                return InneractiveUnitController.class;
            case 13:
                return InneractiveAdViewUnitController.class;
            case 14:
                return UnitDisplayType.class;
            case 15:
                return InneractiveUnitController.EventsListener.class;
            case 16:
                return R.class;
            case 17:
                return InneractiveFullscreenVideoContentController.class;
            case 18:
                return InneractiveFullscreenAdEventsListener.class;
            case 19:
                return VideoContentListener.class;
            case 20:
                return InneractiveInternalBrowserActivity.InternalBrowserListener.class;
            case 21:
                return Tap.class;
            case 22:
                return InneractiveFullscreenAdEventsListenerAdapter.class;
            case 23:
                return InneractiveFullscreenUnitController.class;
            case 24:
                return InneractiveAdViewVideoContentController.class;
            case 25:
                return InneractiveUnitController.EventsListenerAdapter.class;
            case 26:
                return VideoContentListenerAdapter.class;
            case 27:
                return IAMraidKit.class;
            case 28:
                return IAmraidWebViewController.class;
            case 29:
                return IAVideoKit.class;
            case 30:
                return ImpressionData.class;
            case 31:
                return IArichMediaVideoView.class;
            case 32:
                return IArichMediaVideoView.BaseVideoViewListener.class;
            case 33:
                return InneractiveFullscreenAdEventsListenerWithImpressionData.class;
            case 34:
                return InneractiveAdViewEventsListenerWithImpressionData.class;
            default:
                return null;
        }
    }
}
