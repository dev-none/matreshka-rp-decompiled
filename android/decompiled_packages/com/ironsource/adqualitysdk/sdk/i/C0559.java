package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.hyprmx.android.BuildConfig;
import com.hyprmx.android.sdk.activity.HyprMXBaseViewController;
import com.hyprmx.android.sdk.activity.HyprMXMraidViewController;
import com.hyprmx.android.sdk.activity.HyprMXNoOffersActivity;
import com.hyprmx.android.sdk.activity.HyprMXOfferViewerActivity;
import com.hyprmx.android.sdk.activity.HyprMXOfferWebViewController;
import com.hyprmx.android.sdk.activity.HyprMXRequiredInformationActivity;
import com.hyprmx.android.sdk.activity.HyprMXVastViewController;
import com.hyprmx.android.sdk.activity.HyprMXWebTrafficViewController;
import com.hyprmx.android.sdk.activity.HyprMXWebView;
import com.hyprmx.android.sdk.activity.HyprMXWebViewClient;
import com.hyprmx.android.sdk.activity.OfferViewerHandler;
import com.hyprmx.android.sdk.api.data.Ad;
import com.hyprmx.android.sdk.api.data.OfferCacheEntity;
import com.hyprmx.android.sdk.api.data.WebTrafficObject;
import com.hyprmx.android.sdk.core.DependencyHolder;
import com.hyprmx.android.sdk.core.HyprMX;
import com.hyprmx.android.sdk.core.HyprMXController;
import com.hyprmx.android.sdk.graphics.HyprMXLearnMoreController;
import com.hyprmx.android.sdk.graphics.HyprMXSkipController;
import com.hyprmx.android.sdk.graphics.HyprMXWebViewWithClosableNavBar;
import com.hyprmx.android.sdk.model.PreloadedVastData;
import com.hyprmx.android.sdk.overlay.HyprMXBrowserActivity;
import com.hyprmx.android.sdk.placement.PlacementType;
import com.hyprmx.android.sdk.utility.HyprMXProperties;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ร, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0559 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f2028 = StringFog.decrypt("WXODmRVC6VFfcJGnE2/fSVt1g5sCTM4=\n", "Phb3znAgvSM=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f2027 = StringFog.decrypt("7kc3chOYefHKQyBVEL1w6upJF1UHkWnk4XcxUQ==\n", "iSJDPXX+HIM=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f2026 = StringFog.decrypt("Wqf1Nhxp\n", "Et6FRFExwEg=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f2025 = StringFog.decrypt("z+/6NkP5THnp4vgrYs1qZA==\n", "h5aKRA6hDxY=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f2024 = StringFog.decrypt("YOB94U19JS5E2GXyTQ==\n", "MIwcgigQQEA=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f2023 = StringFog.decrypt("JnM=\n", "ZxfoLHK+T7w=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f2022 = StringFog.decrypt("NfS1mOgnMpUS6I2S6icyiQ==\n", "cZHF/YZDV/s=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f2021 = StringFog.decrypt("yqnnrKUbiTb+jeOzvj6MJ/s=\n", "mtuCwMp67VM=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f2020 = StringFog.decrypt("IFxOExYyxfAHVVsTLwPw8Q==\n", "aCU+YVtqlYI=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f2019 = StringFog.decrypt("bgnrMOiF1MREJvIn0orq1U4z9y3WvOHNQz76NOe88Q==\n", "JnCbQqXdg6E=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f2018 = StringFog.decrypt("akn/MMTL5VhkXrx/wtbnRWBCvG3I2btNe0fidsXR5gRBX+Js4erCT2tw+3vb5fxeYWX+cd/T90Zs\naPNo7tPn\n", "CSaSHqyylSo=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f2017 = StringFog.decrypt("2U6ei7brq3jeUYicicCkdOVemJCPyg==\n", "kTfu+fuz5Rc=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f2016 = StringFog.decrypt("YZ+knMPRdo5viOfTxcx0k2uU58HPwyidYYSgxMLcf9JKibnA5vBIk02Wr9fZ20efdpm/29/R\n", "AvDJsquoBvw=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f2015 = StringFog.decrypt("9PcfXGjbj0fa6x14TOa3RM7PDFpM9alVxQ==\n", "vI5vLiWDwCE=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f2014 = StringFog.decrypt("5HyInP+ZRrPqa8vT+YREru53y8Hzixig5GeMxP6UT+/PapXA2rh5p+F2l+T+hUGk9VKGxv6WX7X+\n", "hxPlspfgNsE=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f2013 = StringFog.decrypt("Y3b6z7nTLLFaeuPPke83uk1g+NCV/xe7RU7pyZ39F6BS\n", "Kw+KvfSLftQ=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f2012 = StringFog.decrypt("9vwHGJpCO7f460RXnF85qvz3REWWUGWk9ucDQJtPMuvd6hpEv2MZoOTmA0SXXwKr8/wYW5NPIqr7\n0glCm00isew=\n", "lZNqNvI7S8U=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f2011 = StringFog.decrypt("jAJmAqZjBU63HkAZjkwEQKoPZB+HVyJd\n", "xHsWcOs7Ry8=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f2010 = StringFog.decrypt("Hfk3T2BP4twm9BFUSGD30jv0NVJBe9HP\n", "VYBHPS0XtL0=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f2009 = StringFog.decrypt("YjtbLZAMII1IFlk+uzIei3wrTiieOxmcWC1HM7gm\n", "KkIrX91Ud+g=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f2008 = StringFog.decrypt("X0+3XMr7LWJ4TJRXzNE4eA==\n", "ECnRObi4TAE=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f2007 = StringFog.decrypt("uZd/mtiiYCyHkVKswKZlPg==\n", "7vIdzqrDBko=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f2006 = StringFog.decrypt("+KlRDw/o3LTGr2YJMQ==\n", "r8wzW32JutI=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f2005 = StringFog.decrypt("e9A5G0Pg7tpS2yckYcrH/FzHPRth1M7aQQ==\n", "M6lJaQ64or8=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f2004 = StringFog.decrypt("fWDRqkB8IHtUcMWOZEEaSlp31apiSAFsRw==\n", "NRmh2A0kbQk=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f2003 = StringFog.decrypt("O8tDRyEulNkV10FiCRSN1hbFcFoCAqnQH95WRw==\n", "c7IzNWx2278=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f2002 = StringFog.decrypt("Lsibv0LUHWIE54KoeA==\n", "ZrHrzQ+MSgc=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f2001 = StringFog.decrypt("npKPsircw/q0vZalEMf49rOFiw==\n", "1uv/wGeElJ8=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f2000 = StringFog.decrypt("h07r/kjQR6KpUunabO1/ob1/+uJh5G22\n", "zzebjAWICMQ=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f1999 = StringFog.decrypt("7E2lc1//WVjUTrFeTMdUUcZZj39e3VVTxlk=\n", "oyvDFi2pMD0=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f1998 = StringFog.decrypt("cLN0ExCY2RdRukcOM7T4E1SmYRM=\n", "OMoEYV3Ainw=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f1997 = StringFog.decrypt("MRcRWnhMT2sQHiJHW2BubxUCBFp5fW90HAAEWg==\n", "eW5hKDUUHAA=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f1996 = StringFog.decrypt("yH2y3QsUFB7K\n", "rxjGnG9AbW4=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f1995 = StringFog.decrypt("JH+d4haBG0Muf4fGLpkIQwZ0nN8=\n", "QxrpsnrgeCY=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f1994 = StringFog.decrypt("zHOWZlUGO73Pc4xBST4xv89zkGteBSqyxXWH\n", "qxbiIjB2XtM=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f1993 = StringFog.decrypt("Y1Al21S6T9ltVyTrUrtyzw==\n", "BDVRnz3JO6s=\n");

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f1992 = StringFog.decrypt("gRSA+4Z7usSLFJrfqXW31ZQemMePaA==\n", "5nH0q+oa2aE=\n");

    /* JADX INFO: renamed from: ᕃ, reason: contains not printable characters */
    public static final String f1991 = StringFog.decrypt("w50Xoe1UvUDFnAaV21ClTg==\n", "pPhj8Z8x0S8=\n");

    /* JADX INFO: renamed from: ᕂ, reason: contains not printable characters */
    public static final String f1990 = StringFog.decrypt("wdyEBrGFEa/DzZUkow==\n", "prnwVtD3cMI=\n");

    /* JADX INFO: renamed from: ᔽ, reason: contains not printable characters */
    public static final String f1989 = StringFog.decrypt("RuvkbJOtTXRh5ed7rLRscmfk/Wqn\n", "DpKUHt71DwY=\n");

    /* JADX INFO: renamed from: ᔺ, reason: contains not printable characters */
    public static final String f1988 = StringFog.decrypt("kRE0ZelqPrifBncq73c8pZsadzjleGClhBsrJ+BqYIKLDisG2VE8pYUNPDnAcDqjhBctMg==\n", "8n5ZS4ETTso=\n");

    public C0559(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        try {
            try {
                return (String) BuildConfig.class.getDeclaredField(StringFog.decrypt("mT5OIc+HNNKBOlE3\n", "z3sccobIeo0=\n")).get(null);
            } catch (Exception unused) {
                return null;
            }
        } catch (Exception unused2) {
            C0493 c0493 = C0705.m8630().f2438;
            String strDecrypt = StringFog.decrypt("6DbOYhlQgO6dNs4d\n", "tmqqOUU0rrM=\n");
            c0493.getClass();
            return C0493.m8552((Object) null, BuildConfig.class, strDecrypt);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f2028, new C0685(this));
        map.put(f2027, new C0684(this));
        map.put(f1996, new C0683(this));
        map.put(f1995, new C0639(this));
        map.put(f1994, new C0595(this));
        map.put(f1993, new C0590(this));
        map.put(f1992, new C0586(this));
        map.put(f1991, new C0584(this));
        map.put(f1990, new C0570(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:101:0x0177  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -2118473762:
                if (!str.equals(f2026)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -2115661176:
                if (!str.equals(f2009)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -2082076211:
                if (!str.equals(f1997)) {
                    b = -1;
                } else {
                    b = Ascii.GS;
                }
                break;
            case -2060981001:
                if (!str.equals(f2022)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -1783324338:
                if (!str.equals(f2016)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -1711062568:
                if (!str.equals(f2019)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case -1632261541:
                if (!str.equals(f2002)) {
                    b = -1;
                } else {
                    b = Ascii.CAN;
                }
                break;
            case -1625751435:
                if (!str.equals(f2012)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case -1429076201:
                if (!str.equals(f2003)) {
                    b = -1;
                } else {
                    b = Ascii.ETB;
                }
                break;
            case -1345825871:
                if (!str.equals(f2020)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -1289932600:
                if (!str.equals(f2007)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case -1102538544:
                if (!str.equals(f1999)) {
                    b = -1;
                } else {
                    b = Ascii.ESC;
                }
                break;
            case -1056910325:
                if (!str.equals(f2018)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case -793729563:
                if (!str.equals(f2017)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case -684201479:
                if (!str.equals(f1998)) {
                    b = -1;
                } else {
                    b = Ascii.FS;
                }
                break;
            case -411143178:
                if (!str.equals(f2014)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case -352824194:
                if (!str.equals(f2021)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case -58290677:
                if (!str.equals(f2010)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case -52302939:
                if (!str.equals(f1988)) {
                    b = -1;
                } else {
                    b = Ascii.US;
                }
                break;
            case -48720897:
                if (!str.equals(f2015)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case 2115:
                if (!str.equals(f2023)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case 5206681:
                if (!str.equals(f1989)) {
                    b = -1;
                } else {
                    b = Ascii.RS;
                }
                break;
            case 99044255:
                if (!str.equals(f2024)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 217655834:
                if (!str.equals(f2025)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 748493318:
                if (!str.equals(f2001)) {
                    b = -1;
                } else {
                    b = Ascii.EM;
                }
                break;
            case 902272186:
                if (!str.equals(f2004)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case 1056638846:
                if (!str.equals(f2013)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case 1527993897:
                if (!str.equals(f2008)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case 1564846544:
                if (!str.equals(f2011)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case 1575934042:
                if (!str.equals(f2000)) {
                    b = -1;
                } else {
                    b = Ascii.SUB;
                }
                break;
            case 1775126662:
                if (!str.equals(f2006)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case 1872662391:
                if (!str.equals(f2005)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return HyprMX.class;
            case 1:
                return HyprMXController.class;
            case 2:
                return PlacementType.class;
            case 3:
                return Ad.class;
            case 4:
                return DependencyHolder.class;
            case 5:
                return PreloadedVastData.class;
            case 6:
                return HyprMXProperties.class;
            case 7:
            case 8:
                return HyprMXWebViewWithClosableNavBar.class;
            case 9:
            case 10:
                return HyprMXNoOffersActivity.class;
            case 11:
            case 12:
                return HyprMXOfferViewerActivity.class;
            case 13:
            case 14:
                return HyprMXRequiredInformationActivity.class;
            case 15:
                return HyprMXBaseViewController.class;
            case 16:
                return HyprMXVastViewController.class;
            case 17:
                return HyprMXWebTrafficViewController.class;
            case 18:
                return OfferCacheEntity.class;
            case 19:
                return WebTrafficObject.class;
            case 20:
                return WebTrafficObject.WebTrafficURL.class;
            case 21:
                return HyprMXLearnMoreController.class;
            case 22:
                return HyprMXMraidViewController.class;
            case 23:
                return HyprMXOfferWebViewController.class;
            case 24:
                return HyprMXWebView.class;
            case 25:
                return HyprMXWebViewClient.class;
            case 26:
                return OfferViewerHandler.class;
            case 27:
                return OfferViewerHandler.OfferViewerHandlerListener.class;
            case 28:
                return HyprMXSkipController.class;
            case 29:
                return HyprMXSkipController.Listener.class;
            case 30:
            case 31:
                return HyprMXBrowserActivity.class;
            default:
                return null;
        }
    }
}
