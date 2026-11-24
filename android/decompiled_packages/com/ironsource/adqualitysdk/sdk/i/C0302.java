package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import com.tapjoy.TJActionRequest;
import com.tapjoy.TJAdUnit;
import com.tapjoy.TJAdUnitActivity;
import com.tapjoy.TJAdUnitJSBridge;
import com.tapjoy.TJAwardCurrencyListener;
import com.tapjoy.TJContentActivity;
import com.tapjoy.TJCurrency;
import com.tapjoy.TJPlacement;
import com.tapjoy.TJPlacementData;
import com.tapjoy.TJPlacementListener;
import com.tapjoy.TJPlacementVideoListener;
import com.tapjoy.TJSplitWebView;
import com.tapjoy.TJVideoListener;
import com.tapjoy.TJWebView;
import com.tapjoy.Tapjoy;
import com.tapjoy.mraid.view.ActionHandler;
import com.tapjoy.mraid.view.Browser;
import com.tapjoy.mraid.view.MraidView;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ˊ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0302 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f1164 = StringFog.decrypt("cn6Gm3VRWch4fpy/V1FXyA==\n", "FRvyyxkwOq0=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f1163 = StringFog.decrypt("lU0h5SJm\n", "8ihVsFAKUmU=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f1162 = StringFog.decrypt("VKj7RPO7eHJWvv9j6bxt\n", "M82PDIfPCCA=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f1161 = StringFog.decrypt("QtNU1poeWw==\n", "JbYgmPtzPg4=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f1160 = StringFog.decrypt("eCyCBk9NH8VxLIQ=\n", "H0n2SiY+a6A=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f1159 = StringFog.decrypt("t8amX6h/Eb+cyqF9pHURog==\n", "0KPSCcEbdNA=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f1158 = StringFog.decrypt("iF5nlLU+h6+dVw==\n", "7zsT2NRN8/o=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f1157 = StringFog.decrypt("GkB++hosncslTHnYFiad1g==\n", "aSUKrHNI+KQ=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f1156 = StringFog.decrypt("2UwBk6rWSL3MZTSeidFVsA==\n", "jQZA9/+4Ick=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f1155 = StringFog.decrypt("ZpoDLRGyFitqjEBXL5ICFGucGkIGpw83bIEX\n", "BfVuA2XTZkE=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f1154 = StringFog.decrypt("T89J3iBVmW5vxGnFJ1eVdGI=\n", "G4UKsU4h/AA=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f1153 = StringFog.decrypt("ZNCHOuEYMDJoxsRA3zovNnPahGDUGjQxcdaebQ==\n", "B7/qFJV5QFg=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f1152 = StringFog.decrypt("yBTFduNVZVr5MOFe40Jh\n", "nF6VGoI2ADc=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f1151 = StringFog.decrypt("YUyZbIHvA11C\n", "NQbOCeO5ajg=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f1150 = StringFog.decrypt("sXj5AIaCnLC9brp6uLSJuIR+8Vk=\n", "0heULvLj7No=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f1149 = StringFog.decrypt("9Q09hr1bj4PrFD6QgVGBkg==\n", "oUd84ug15vc=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f1148 = StringFog.decrypt("sJLQ0gA/Oq2HoQ==\n", "5NiTp3JNX8M=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f1147 = StringFog.decrypt("MTV6D13ucqkAEV4=\n", "ZX8qYzyNF8Q=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f1146 = StringFog.decrypt("o0EFyNzzeHelbjXezelj\n", "9wtEq6iaFxk=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f1145 = StringFog.decrypt("BS1IVneWfEQkFXtEeIdhSzgUfUR4gWo=\n", "UWcJIRbkGAc=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f1144 = StringFog.decrypt("BINn9WQtDUM=\n", "UMkmkTFDZDc=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f1143 = StringFog.decrypt("M2r5f1+EJwUCTt1fV5Q2DQlF2w==\n", "ZyCpEz7nQmg=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f1142 = StringFog.decrypt("OLVDlgtnJaUFjGGaAWc4\n", "bP8V/28CSuk=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f1141 = StringFog.decrypt("gIYaFTZkQJeDqTknCm9er72/LxQNb1s=\n", "1MxbcWMKKeM=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f1140 = StringFog.decrypt("h3V3gAAO03aFVlKBOizTcadaWIEn\n", "0z825FVgugI=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f1139 = StringFog.decrypt("OQc22DzNeGoIIxLiNMp4aCEkFcA4wHh1\n", "bU1mtF2uHQc=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f1138 = StringFog.decrypt("9IGL4H325w3O\n", "ufPqiRmgjmg=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f1137 = StringFog.decrypt("PBTAZrwvZgowAoMlui9/BHENxC2/YFsSPhLJHqErYQ==\n", "X3utSMhOFmA=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f1136 = StringFog.decrypt("PNqFGpKxn0YT3Z0Wjw==\n", "fbnxc/3f1yc=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f1135 = StringFog.decrypt("ANhmBkQ3kUUMziVFQjeIS03BYk1HeKBMF95kRng3j0sP0nk=\n", "Y7cLKDBW4S8=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f1134 = StringFog.decrypt("irnDbRhQAg==\n", "yMusGms1cFA=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f1133 = StringFog.decrypt("gEHXfXFaTzOMV5Q+d1pWPc1Y0zZyFX0rjFnJNnc=\n", "4y66UwU7P1k=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f1132 = StringFog.decrypt("OPPtUm+Qn8UJ2+hLZo4=\n", "bLm+IgP565I=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f1131 = StringFog.decrypt("S50wgfYUgFVHi3P7yCaAU0GGCsrgI5laXw==\n", "KPJdr4J18D8=\n");

    public C0302(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        return Tapjoy.getVersion();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f1164, new C0316(this));
        map.put(f1163, new C0293(this));
        map.put(f1162, new C0292(this));
        map.put(f1161, new C0291(this));
        map.put(f1160, new C0596(this));
        map.put(f1159, new C0307(this));
        map.put(f1157, new C0306(this));
        map.put(f1158, new C0303(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:83:0x012f  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -1983375197:
                if (!str.equals(f1146)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case -1687314074:
                if (!str.equals(f1133)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case -1640254126:
                if (!str.equals(f1154)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case -1628534628:
                if (!str.equals(f1138)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case -1429063965:
                if (!str.equals(f1143)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case -1414965228:
                if (!str.equals(f1136)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case -1147119309:
                if (!str.equals(f1150)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case -872754855:
                if (!str.equals(f1152)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -721136035:
                if (!str.equals(f1144)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case -668579974:
                if (!str.equals(f1137)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -593336436:
                if (!str.equals(f1145)) {
                    b = -1;
                } else {
                    b = Ascii.ETB;
                }
                break;
            case -217417742:
                if (!str.equals(f1135)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case 178410181:
                if (!str.equals(f1131)) {
                    b = -1;
                } else {
                    b = Ascii.EM;
                }
                break;
            case 206635148:
                if (!str.equals(f1156)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case 268330895:
                if (!str.equals(f1149)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case 327820672:
                if (!str.equals(f1139)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case 705136807:
                if (!str.equals(f1148)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case 741045788:
                if (!str.equals(f1155)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 832039888:
                if (!str.equals(f1141)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case 906946425:
                if (!str.equals(f1142)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case 1317517621:
                if (!str.equals(f1132)) {
                    b = -1;
                } else {
                    b = Ascii.CAN;
                }
                break;
            case 1504750787:
                if (!str.equals(f1151)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case 1519750415:
                if (!str.equals(f1147)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case 1815593736:
                if (!str.equals(f1134)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 1891461874:
                if (!str.equals(f1140)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case 2041573826:
                if (!str.equals(f1153)) {
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
            case 1:
                return TJAdUnitActivity.class;
            case 2:
            case 3:
                return TJContentActivity.class;
            case 4:
                return TJPlacementData.class;
            case 5:
            case 6:
                return ActionHandler.class;
            case 7:
            case 8:
                return Browser.class;
            case 9:
            case 10:
                return MraidView.class;
            case 11:
            case 12:
                return TJWebView.class;
            case 13:
                return TJAdUnit.class;
            case 14:
                return TJPlacementListener.class;
            case 15:
                return TJVideoListener.class;
            case 16:
                return TJAdUnit.TJAdUnitWebViewListener.class;
            case 17:
                return TJAdUnit.TJAdUnitVideoListener.class;
            case 18:
                return TJPlacementVideoListener.class;
            case 19:
                return TJAdUnitJSBridge.class;
            case 20:
                return TJCurrency.class;
            case 21:
                return TJPlacement.class;
            case 22:
                return TJActionRequest.class;
            case 23:
                return TJAwardCurrencyListener.class;
            case 24:
            case 25:
                return TJSplitWebView.class;
            default:
                return null;
        }
    }
}
