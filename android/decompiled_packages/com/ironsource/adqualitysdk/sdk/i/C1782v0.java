package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import com.vungle.warren.AdActivity;
import com.vungle.warren.AdvertisementPresentationFactory;
import com.vungle.warren.PlayAdCallback;
import com.vungle.warren.Vungle;
import com.vungle.warren.VungleApiClient;
import com.vungle.warren.VungleBanner;
import com.vungle.warren.model.Advertisement;
import com.vungle.warren.model.Placement;
import com.vungle.warren.model.Report;
import com.vungle.warren.persistence.Repository;
import com.vungle.warren.ui.VungleActivity;
import com.vungle.warren.ui.VungleWebViewActivity;
import com.vungle.warren.ui.contract.AdContract;
import com.vungle.warren.ui.contract.LocalAdContract;
import com.vungle.warren.ui.contract.WebAdContract;
import com.vungle.warren.ui.presenter.LocalAdPresenter;
import com.vungle.warren.ui.presenter.MRAIDAdPresenter;
import com.vungle.warren.ui.view.LocalAdView;
import com.vungle.warren.ui.view.MRAIDAdView;
import com.vungle.warren.ui.view.VungleBannerView;
import com.vungle.warren.ui.view.VungleNativeView;
import com.vungle.warren.ui.view.VungleWebClient;
import com.vungle.warren.ui.view.WebViewAPI;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.v0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1782v0 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public String f562;

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f561 = StringFog.decrypt("UICX3CZrrsNQhbfIIGo=\n", "OfPeskUOwLc=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f560 = StringFog.decrypt("qZP1jP6hSZulk/WE/g==\n", "zvaBzZrsKOk=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f559 = StringFog.decrypt("/qpzWoxwI6/wqGk=\n", "mc8HGe0dU84=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f558 = StringFog.decrypt("brqtamVmVIZmvr1PaH1fv3uzqg==\n", "Cd/ZLgoROuo=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f557 = StringFog.decrypt("Rl5OT3/KRHlMXlRr\n", "ITs6HxOrJxw=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f556 = StringFog.decrypt("Btj4jJvS++Em\n", "Ub2azf+EkoQ=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f555 = StringFog.decrypt("yIOl2dq3gp7sg6ns25U=\n", "n+bHmL7n8Ps=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f554 = StringFog.decrypt("RLpotfO+LuxDlg==\n", "E98K45rbWa0=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f553 = StringFog.decrypt("lAJF0/haFwKgNEfd8VE0\n", "wncrtJQ/QGc=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f552 = StringFog.decrypt("DAYL4DeyZKQoMT0=\n", "QVRKqXPzAPI=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f551 = StringFog.decrypt("LZVaJvRjHH8FoHob1Q==\n", "YMcbb7AneRM=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f550 = StringFog.decrypt("Nq1lxOFY3YASpHbP53zGlgSsfdX2Xuu2Aax91d9Fx4cSp3bT\n", "d8kToZMstPM=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f549 = StringFog.decrypt("NVDb1wq/uhMATQ==\n", "dDSatH7WzHo=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f548 = StringFog.decrypt("cGeIXY1i\n", "JhLmOuEH9b0=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f547 = StringFog.decrypt("zn6KcfO2BdbsYpJ/66o=\n", "mAvkFp/TRLU=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f546 = StringFog.decrypt("LAsJ+5ErGlojAUqihiwGWCFKEbzJCAFTKAgBlIQqHUsmEB0=\n", "T2Rk1ededD0=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f545 = StringFog.decrypt("xSxcpYjGTULhJU+ujg==\n", "hEgqwPqyJDE=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f544 = StringFog.decrypt("MIZz0QF5azwU\n", "YOoSsmQUDlI=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f543 = StringFog.decrypt("94Ux3LLgCNTDpjbeqcQ8xciGNs+n\n", "ofBfu96FX7E=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f542 = StringFog.decrypt("uAdU9jyU4Ia3DRevK5P8hLVGTLFkt/uPvARcjy+D2Ii+H3i7Poj4iK8R\n", "22g52ErhjuE=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f541 = StringFog.decrypt("2Vgqse8ITvXlWCmpzQc=\n", "iTRLyK5sDZQ=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f540 = StringFog.decrypt("Mg++PAET\n", "YGrOU3Nnfvg=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f539 = StringFog.decrypt("fmT07c+FDGReeA==\n", "LAGEgrzseAs=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f538 = StringFog.decrypt("2W5oDzW11877fg==\n", "mAorYFvBpa8=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f537 = StringFog.decrypt("yMRdZ8DowuDrxUp0zcrS\n", "hKs+BqyppqM=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f536 = StringFog.decrypt("s4GAIjHavBKWi5Q=\n", "/+7jQ12b2EQ=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f535 = StringFog.decrypt("UQ/jV8xKKPFq\n", "HWCANqAcQZQ=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f534 = StringFog.decrypt("bOlPQCJQX5hT40JVK3I=\n", "IIYsIU4ALf0=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f533 = StringFog.decrypt("BkvgijI1G8wkW/ykODcM3zNG0IAxJAfZF13GljkvHcg1\n", "Ry+j5VxBaa0=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f532 = StringFog.decrypt("AkB8bpSNLVQmSW9lkqk2QjBBZH+HjS1ILWJraJKWNl4=\n", "QyQKC+b5RCc=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f531 = StringFog.decrypt("sBgBh7EqQ2uOEhGDsx9CSQ==\n", "/Hdi5t1rJzs=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f530 = StringFog.decrypt("d1ZufzJBQQlIYVxTGHRAKw==\n", "OgQvNnYAJVk=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f529 = StringFog.decrypt("qZ8eviFX7OORhBWr\n", "/+pw2U0yroI=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f528 = StringFog.decrypt("2QBRzG+rEH/WChKVeKwMfdRBapd3uRJ9+A5SjHys\n", "um884hnefhg=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f527 = StringFog.decrypt("11WR2VETehX1SYnbax9RAw==\n", "gSD/vj12NHQ=\n");

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f526 = StringFog.decrypt("FonVO0Y3jOUZg5ZiUTCQ5xvIzXweNIvnAsjuYF4ljuc7h8x8Rie06xCR\n", "dea4FTBC4oI=\n");

    /* JADX INFO: renamed from: ᕃ, reason: contains not printable characters */
    public static final String f525 = StringFog.decrypt("q7kdIbElSk6TohY0iyltWA==\n", "/cxzRt1ACC8=\n");

    /* JADX INFO: renamed from: ᕂ, reason: contains not printable characters */
    public static final String f524 = StringFog.decrypt("sGa/7zvzQ3y/bPy2LPRffr0np6hj8ER+pCeEtCPhQX6RaLyvKPR7crZ+\n", "0wnSwU2GLRs=\n");

    public C1782v0(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        String strMo8325 = mo8325();
        if (strMo8325 != null) {
            return strMo8325.split(StringFog.decrypt("Lw==\n", "AGoQyyuNpWU=\n"))[1];
        }
        return null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f557, new C1773q0(this));
        map.put(f561, new C1774r0(this));
        map.put(f560, new C1776s0(this));
        map.put(f559, new C1778t0(this));
        map.put(f558, new C1780u0(this));
        return map;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final String mo8325() {
        if (this.f562 == null) {
            C0558 c0558 = C0705.m8630().f2439;
            C0575 c0575 = new C0612().f2145;
            c0575.f2059 = String.class;
            c0575.f4062 |= 8;
            c0575.f4061 |= 16;
            C0558 c0559 = C0705.m8630().f2439;
            ArrayList arrayList = new ArrayList();
            c0559.m8579(VungleApiClient.class, c0575, arrayList);
            String str = null;
            try {
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    String str2 = (String) ((Field) it.next()).get(null);
                    if (str2.startsWith(StringFog.decrypt("+QS+AbJRquzOC78I\n", "r3HQZt4064E=\n")) || str2.startsWith(StringFog.decrypt("xRLCXEZ8jQb8Dsg=\n", "k2esOyoZyXQ=\n"))) {
                        str = str2.split(StringFog.decrypt("AA==\n", "OyXGK1E2gLU=\n"))[0];
                        break;
                    }
                }
            } catch (Exception unused) {
            }
            this.f562 = str;
            this.f1344 = str;
        }
        return this.f562;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:104:0x0184  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -2075872274:
                if (!str.equals(f530)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -2012803321:
                if (!str.equals(f526)) {
                    b = -1;
                } else {
                    b = 32;
                }
                break;
            case -1853707364:
                if (!str.equals(f524)) {
                    b = -1;
                } else {
                    b = Ascii.RS;
                }
                break;
            case -1850654380:
                if (!str.equals(f540)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case -1836618638:
                if (!str.equals(f549)) {
                    b = -1;
                } else {
                    b = Ascii.SUB;
                }
                break;
            case -1740904301:
                if (!str.equals(f536)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case -1721428911:
                if (!str.equals(f548)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -1057659822:
                if (!str.equals(f550)) {
                    b = -1;
                } else {
                    b = Ascii.EM;
                }
                break;
            case -965507231:
                if (!str.equals(f554)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case -899612152:
                if (!str.equals(f542)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -828205665:
                if (!str.equals(f552)) {
                    b = -1;
                } else {
                    b = Ascii.ETB;
                }
                break;
            case -747599243:
                if (!str.equals(f538)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case -498060603:
                if (!str.equals(f544)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -350701718:
                if (!str.equals(f539)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -92732536:
                if (!str.equals(f528)) {
                    b = -1;
                } else {
                    b = Ascii.FS;
                }
                break;
            case 156342925:
                if (!str.equals(f527)) {
                    b = -1;
                } else {
                    b = Ascii.US;
                }
                break;
            case 315438882:
                if (!str.equals(f525)) {
                    b = -1;
                } else {
                    b = Ascii.GS;
                }
                break;
            case 332396988:
                if (!str.equals(f556)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case 505165239:
                if (!str.equals(f543)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case 670892517:
                if (!str.equals(f545)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 746354589:
                if (!str.equals(f534)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case 798818448:
                if (!str.equals(f535)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case 1033471823:
                if (!str.equals(f546)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 1110462460:
                if (!str.equals(f551)) {
                    b = -1;
                } else {
                    b = Ascii.CAN;
                }
                break;
            case 1205766784:
                if (!str.equals(f547)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 1208038126:
                if (!str.equals(f553)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 1230133745:
                if (!str.equals(f555)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case 1461477995:
                if (!str.equals(f532)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case 1611471226:
                if (!str.equals(f531)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case 1731532800:
                if (!str.equals(f537)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case 1766407901:
                if (!str.equals(f529)) {
                    b = -1;
                } else {
                    b = Ascii.ESC;
                }
                break;
            case 1777696764:
                if (!str.equals(f541)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case 1861686093:
                if (!str.equals(f533)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return Vungle.class;
            case 1:
            case 2:
                return VungleActivity.class;
            case 3:
            case 4:
                return VungleWebViewActivity.class;
            case 5:
                return Advertisement.class;
            case 6:
                return Placement.class;
            case 7:
                return VungleWebClient.class;
            case 8:
                return Report.class;
            case 9:
                return PlayAdCallback.class;
            case 10:
                return Repository.class;
            case 11:
                return AdContract.class;
            case 12:
                return LocalAdContract.class;
            case 13:
                return LocalAdView.class;
            case 14:
                return LocalAdContract.LocalView.class;
            case 15:
                return LocalAdContract.LocalPresenter.class;
            case 16:
                return LocalAdPresenter.class;
            case 17:
                return MRAIDAdPresenter.class;
            case 18:
                return AdContract.AdvertisementPresenter.class;
            case 19:
                return AdvertisementPresentationFactory.class;
            case 20:
                return WebAdContract.WebAdView.class;
            case 21:
                return WebAdContract.WebAdPresenter.class;
            case 22:
                return WebViewAPI.class;
            case 23:
                return MRAIDAdView.class;
            case 24:
                return WebViewAPI.MRAIDDelegate.class;
            case 25:
                return AdContract.AdvertisementPresenter.EventListener.class;
            case 26:
                return AdActivity.class;
            case 27:
            case 28:
                return VungleBanner.class;
            case 29:
            case 30:
                return VungleBannerView.class;
            case 31:
            case 32:
                return VungleNativeView.class;
            default:
                return null;
        }
    }
}
