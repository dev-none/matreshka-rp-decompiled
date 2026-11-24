package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.inneractive.sdk.config.enums.UnitDisplayType;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ẋ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0876 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0735 f3131;

    public C0876(C0735 c0735) {
        this.f3131 = c0735;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:29:0x0096  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0735 c0735 = this.f3131;
        byte b = 0;
        String str = (String) arrayList.get(0);
        c0735.getClass();
        switch (str.hashCode()) {
            case -2032180703:
                if (!str.equals(StringFog.decrypt("2IF1oG4vzw==\n", "nMQz4Ttjm+U=\n"))) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case -1841345251:
                if (!str.equals(StringFog.decrypt("1b0BXfUl\n", "huxUHKdgxJU=\n"))) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case -1372958932:
                if (!str.equals(StringFog.decrypt("A8jUWlhY38wez8FT\n", "SoaAHwoLi4U=\n"))) {
                    b = -1;
                }
                break;
            case -1201514634:
                if (!str.equals(StringFog.decrypt("Jnf5inH6m8g=\n", "cDKr3ji52oQ=\n"))) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -77725029:
                if (!str.equals(StringFog.decrypt("DxfYxPMwCRcG\n", "Q1aWgKBzSEc=\n"))) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 73622449:
                if (!str.equals(StringFog.decrypt("DwxnFs8=\n", "Ql4iVZs2vyA=\n"))) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 543046670:
                if (!str.equals(StringFog.decrypt("5mjd7M9OSC4=\n", "tC2KrZ0KDWo=\n"))) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case 1951953708:
                if (!str.equals(StringFog.decrypt("o/AS+w28\n", "4bFctUjumTg=\n"))) {
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
                return UnitDisplayType.INTERSTITIAL;
            case 1:
                return UnitDisplayType.LANDSCAPE;
            case 2:
                return UnitDisplayType.MRECT;
            case 3:
                return UnitDisplayType.BANNER;
            case 4:
                return UnitDisplayType.REWARDED;
            case 5:
                return UnitDisplayType.SQUARE;
            case 6:
                return UnitDisplayType.VERTICAL;
            case 7:
                return UnitDisplayType.DEFAULT;
            default:
                return null;
        }
    }
}
