package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import com.unity3d.ads.AdFormat;
import com.unity3d.ads.IUnityAdsListener;
import com.unity3d.ads.IUnityAdsShowListener;
import com.unity3d.ads.UnityAds;
import com.unity3d.ads.UnityAdsBaseOptions;
import com.unity3d.ads.UnityAdsLoadOptions;
import com.unity3d.ads.adplayer.AndroidFullscreenWebViewAdPlayer;
import com.unity3d.ads.adplayer.FullScreenWebViewDisplay;
import com.unity3d.ads.core.data.model.AdObject;
import com.unity3d.ads.mediation.IUnityAdsExtendedListener;
import com.unity3d.services.ads.adunit.AdUnitActivity;
import com.unity3d.services.banners.BannerErrorCode;
import com.unity3d.services.banners.BannerErrorInfo;
import com.unity3d.services.banners.BannerHide;
import com.unity3d.services.banners.BannerShow;
import com.unity3d.services.banners.BannerView;
import com.unity3d.services.banners.BannerViewCache;
import com.unity3d.services.banners.IUnityBannerListener;
import com.unity3d.services.banners.UnityBannerSize;
import com.unity3d.services.banners.UnityBanners;
import com.unity3d.services.banners.api.Banner;
import com.unity3d.services.banners.api.BannerListener;
import com.unity3d.services.banners.configuration.BannersModuleConfiguration;
import com.unity3d.services.banners.properties.BannerProperties;
import com.unity3d.services.banners.view.BannerEvent;
import com.unity3d.services.banners.view.BannerPosition;
import com.unity3d.services.banners.view.BannerWebPlayerContainer;
import com.unity3d.services.core.properties.ClientProperties;
import com.unity3d.services.core.request.WebRequest;
import com.unity3d.services.core.request.WebRequestEvent;
import com.unity3d.services.core.webview.WebView;
import com.unity3d.services.core.webview.WebViewApp;
import com.unity3d.services.core.webview.WebViewEventCategory;
import com.unity3d.services.monetization.UnityMonetization;
import com.unity3d.services.monetization.placementcontent.ads.ShowAdListenerAdapter;
import com.unity3d.services.monetization.placementcontent.core.CustomEvent;
import gatewayprotocol.v1.DiagnosticEventRequestOuterClass;
import java.util.HashMap;

/* JADX INFO: loaded from: classes6.dex */
public final class Y extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f344 = StringFog.decrypt("1uACXf9m4r7f8SF76EL5vsbEBm4=\n", "sYV2HooUkNs=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f343 = StringFog.decrypt("y1RGkWAFQ07/Q0GmfQVgTdhW\n", "qCYj8BRgFww=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f342 = StringFog.decrypt("QlUyi9XTtmJfRBGtwvetYkZxNrg=\n", "MTBGyKChxAc=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f341 = StringFog.decrypt("xoLTWUjb1RvF\n", "oeenHim2sFI=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f340 = StringFog.decrypt("1g5AaV5GounwD0dwWVyi9d8ORg==\n", "sWs0PDAv1pA=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f339 = StringFog.decrypt("T40ri8eoQTh9jCySwLJBJFKNLQ==\n", "POhf3qnBNUE=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f338 = StringFog.decrypt("ZNHpyPuzLip/wP3m6aU3LWXA4cnopA==\n", "FrSEp43We0Q=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f337 = StringFog.decrypt("BI6VI8FteJEkjoI6xnd4jQuPgw==\n", "Zerxdq8EDOg=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f336 = StringFog.decrypt("u0upYRF0jim5WZhAEXisA71auFEbZKE=\n", "3C7dNnQW2EA=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f335 = StringFog.decrypt("tqryDOCD49uguuMo8aTH27+7\n", "0c+GW4Xhsb4=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f334 = StringFog.decrypt("9nMrP0BiwDT8czEbZWc=\n", "kRZfbywDo1E=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f333 = StringFog.decrypt("CcGdTw9c/rsc6IB+Glf+uxw=\n", "bqTpDW4ykN4=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f332 = StringFog.decrypt("n3xW/bnJaHaeVUvMrMJodp4=\n", "7Bkiv9inBhM=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f331 = StringFog.decrypt("2OVD6Bel/lDY5UPoF6X+UA==\n", "jYsqnG7kmiM=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f330 = StringFog.decrypt("dNwyYZ6b6yxo5zV8k6POO1L+MmaTv+E6Uw==\n", "IbJbFefaj18=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f329 = StringFog.decrypt("GNa1CZpLaqsE7bIUl3NPvD79pAmGZGq9KfS1DpdvYL0/\n", "TbjcfeMKDtg=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f328 = StringFog.decrypt("xgYOT6B5JiPEDQVtsF01EeMY\n", "k2hnO9k4QlA=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f327 = StringFog.decrypt("zILlVoIRarHvgcJD\n", "mMCyM+BHA9Q=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f326 = StringFog.decrypt("RnR3feJXm+RiZVBZ4kia\n", "EREVL4cm7oE=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f325 = StringFog.decrypt("69I0BKfjmjXK0jgmjeeZFdvYJCs=\n", "vLdWUs6G7XA=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f324 = StringFog.decrypt("i2dp4aFznrS7fWnvuUqYtbA=\n", "3gkAldg+8do=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f323 = StringFog.decrypt("pli9qnT+wzOGRLezUOjOPpRAprhH\n", "9TDS3TWaj1o=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f322 = StringFog.decrypt("OMU2taYJ1cge3jE=\n", "e7BFwclkkL4=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f321 = StringFog.decrypt("3k5oznTWWx76Xw==\n", "iSsKnBGnLns=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f320 = StringFog.decrypt("ipQrdktabTCInyBUW35+\n", "3/pCAjIbCUM=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f319 = StringFog.decrypt("3DdRcIqSThrpOnJ3l58=\n", "nVMEHuPmD3k=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f318 = StringFog.decrypt("SulcUUkc\n", "CIgyPyxu4Os=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f317 = StringFog.decrypt("xd85802xpPj+1CL0\n", "kLFQhzTzxZY=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f316 = StringFog.decrypt("RjIUYIyJVjt9OQ9HnLFS\n", "E1x9FPXLN1U=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f315 = StringFog.decrypt("Db651t8XWKwgqA==\n", "T9/XuLplC8Q=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f314 = StringFog.decrypt("3mTPMkxXsXD4YA==\n", "nAWhXCkl+Rk=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f313 = StringFog.decrypt("1jpmEaumkJvxNXw=\n", "lFsIf87U1e0=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f312 = StringFog.decrypt("WzzbpVETs6FqKdClURM=\n", "GV21yzRh/8g=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f311 = StringFog.decrypt("XYERVgTPScdwhApUBP5V5HmJGE0T3E7jcI4=\n", "H+B/OGG9Ooo=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f310 = StringFog.decrypt("I0w/qVaFuqAOXTS1R56PoQ==\n", "YS1RxzP36tI=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f309 = StringFog.decrypt("ZTWetQSjTolUPYSyDr8=\n", "J1Tw22HRHuY=\n");

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f308 = StringFog.decrypt("p7GDoBixQmuHgIGvBKZnTYq+ma8UrXB8\n", "5dDtzn3DFQ4=\n");

    /* JADX INFO: renamed from: ᕃ, reason: contains not printable characters */
    public static final String f307 = StringFog.decrypt("mYKYgFqgoSCpjIStULaB\n", "2+P27j/S5FI=\n");

    /* JADX INFO: renamed from: ᕂ, reason: contains not printable characters */
    public static final String f306 = StringFog.decrypt("yETqcC1oC0T4SvZXJnwh\n", "iiWEHkgaTjY=\n");

    /* JADX INFO: renamed from: ᔽ, reason: contains not printable characters */
    public static final String f305 = StringFog.decrypt("znzv9BmXyFTpag==\n", "jB2Bmnzlnj0=\n");

    /* JADX INFO: renamed from: ᔺ, reason: contains not printable characters */
    public static final String f304 = StringFog.decrypt("JoNV1DYlcvc831zUMC5p9SyPXYltKXrtK4lKiW0Jeu0riUqsKi5s\n", "Rew4+kNLG4M=\n");

    /* JADX INFO: renamed from: ᔹ, reason: contains not printable characters */
    public static final String f303 = StringFog.decrypt("rXywEBZczTuKapESFw==\n", "7x3efnMum1I=\n");

    /* JADX INFO: renamed from: ᔲ, reason: contains not printable characters */
    public static final String f302 = StringFog.decrypt("SiBHhlB7RBVQfE6GVnBfF0AsT9sLd0wPRypY2wtjRAReYWjJS3tIE38mT98=\n", "KU8qqCUVLWE=\n");

    /* JADX INFO: renamed from: ᔱ, reason: contains not printable characters */
    public static final String f301 = StringFog.decrypt("/GuUgl97eLHbfbmNWWFL\n", "vgr67DoJLtg=\n");

    /* JADX INFO: renamed from: ᓮ, reason: contains not printable characters */
    public static final String f300 = StringFog.decrypt("edwJxnu7bshe5wLdQ6tf3VXnAt0=\n", "MIlnrw/CLKk=\n");

    /* JADX INFO: renamed from: ᐱ, reason: contains not printable characters */
    public static final String f299 = StringFog.decrypt("waaYsnvBKS/msL+Qd8ALI+2ihA==\n", "g8f23B6zf0Y=\n");

    /* JADX INFO: renamed from: Ꮭ, reason: contains not printable characters */
    public static final String f298 = StringFog.decrypt("5dXFUiPSytvCw+dVNdT53MLG\n", "p7SrPEagnLI=\n");

    /* JADX INFO: renamed from: Ꮧ, reason: contains not printable characters */
    public static final String f297 = StringFog.decrypt("OD79M0fI1LwbJcY6Vv3PvAkP+CxEx8eg\n", "fkuRXzSrptk=\n");

    /* JADX INFO: renamed from: პ, reason: contains not printable characters */
    public static final String f296 = StringFog.decrypt("taronUJWW66v9uGdVlxB9Leh9d9WQVeo+IPw31trUaizoOvkUlpks7OywdpESF67rw==\n", "1sWFszc4Mto=\n");

    /* JADX INFO: renamed from: ე, reason: contains not printable characters */
    public static final String f295 = StringFog.decrypt("qXZMyRN383c=\n", "6BIDq3kSkAM=\n");

    /* JADX INFO: renamed from: ງ, reason: contains not printable characters */
    public static final String f294 = StringFog.decrypt("9nihb+F/9t7Ceqlu7WT3/dlBoH/Yf/fv9nKVce9v9+o=\n", "txbFHY4Wkpg=\n");

    /* JADX INFO: renamed from: อ, reason: contains not printable characters */
    public static final String f293 = StringFog.decrypt("i+c/7eH/2daS5jf9187JzLHnJQ==\n", "3olWmZi+vaU=\n");

    /* JADX INFO: renamed from: ม, reason: contains not printable characters */
    public static final String f292 = StringFog.decrypt("/v8A2JYTdVTp8BrJoCJlTsT/Gg==\n", "q5FprO9SESc=\n");

    /* JADX INFO: renamed from: น, reason: contains not printable characters */
    public static final String f291 = StringFog.decrypt("HOCMUzJ2EkU=\n", "XYTKPEAbczE=\n");

    /* JADX INFO: renamed from: ต, reason: contains not printable characters */
    public static final String f290 = StringFog.decrypt("0FAYfAnY7sX8TBRrE8XbxA==\n", "kzxxGWesvrc=\n");

    /* JADX INFO: renamed from: ฑ, reason: contains not printable characters */
    public static final String f289 = StringFog.decrypt("oZht1oY6yEiMkknHjTvP\n", "5fEMsehVuzw=\n");

    /* JADX INFO: renamed from: ঢ়, reason: contains not printable characters */
    public static final String f288 = StringFog.decrypt("1MUuTwnXmH3uwyhJCuKwaun1LkMP\n", "nZBAJn2u2Rk=\n");

    /* JADX INFO: renamed from: ষ, reason: contains not printable characters */
    public static final String f287 = StringFog.decrypt("zZFicvfgJYLegXhU8+kDlA==\n", "qvQWPYeQSvA=\n");

    /* JADX INFO: renamed from: ঘ, reason: contains not printable characters */
    public static final String f286 = StringFog.decrypt("31J22GcgHdvVUmz8QiU4zNdaQ+xEIxTb20M=\n", "uDcCiAtBfr4=\n");

    /* JADX INFO: renamed from: খ, reason: contains not printable characters */
    public static final String f285 = StringFog.decrypt("tdv2E5VOdNqiyuswlFw=\n", "0r6CX/ovEJU=\n");

    /* JADX INFO: renamed from: এ, reason: contains not printable characters */
    public static final String f284 = StringFog.decrypt("j9vrwm82MQ==\n", "6L6fhg5CUN0=\n");

    /* JADX INFO: renamed from: ऱ, reason: contains not printable characters */
    public static final String f283 = StringFog.decrypt("+jfCgZpnmG75FMSplkmRTvg8wpaJZY1C7ybfo4g=\n", "nVK2xvsK/Sc=\n");

    /* JADX INFO: renamed from: ܟ, reason: contains not printable characters */
    public static final String f282 = StringFog.decrypt("vlPD0SzPj8m0U9n1Ccqq3rZb8+ghyYLDqkLe4gXYicKt\n", "2Ta3gUCu7Kw=\n");

    /* JADX INFO: renamed from: ܘ, reason: contains not printable characters */
    public static final String f281 = StringFog.decrypt("bAKiHhz3hXFsM7cqGw==\n", "C2fWTWiF7B8=\n");

    /* JADX INFO: renamed from: ے, reason: contains not printable characters */
    public static final String f280 = StringFog.decrypt("aIdRJky7yuNmjEImUbHM5g==\n", "D+Ilcj7aqYg=\n");

    public Y(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        String version = UnityAds.getVersion();
        if (version != null) {
            return version.split(StringFog.decrypt("fQ==\n", "UM1Jq/IxcQA=\n"))[0];
        }
        return null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f344, new K(this));
        map.put(f343, new N(this));
        map.put(f342, new O(this));
        map.put(f341, new P(this));
        map.put(f340, new Q(this));
        map.put(f339, new S(this));
        map.put(f337, new T(this));
        map.put(f338, new U(this));
        map.put(f336, new V(this));
        map.put(f335, new A(this));
        map.put(f334, new B(this));
        map.put(f333, new C(this));
        map.put(f332, new D(this));
        map.put(f287, new E(this));
        map.put(f286, new F(this));
        map.put(f285, new G(this));
        map.put(f284, new H(this));
        map.put(f283, new I(this));
        map.put(f282, new J(this));
        map.put(f281, new L(this));
        map.put(f280, new M(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:137:0x0208  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -2043984616:
                if (!str.equals(f308)) {
                    b = -1;
                } else {
                    b = Ascii.ETB;
                }
                break;
            case -2015334886:
                if (!str.equals(f291)) {
                    b = -1;
                } else {
                    b = 40;
                }
                break;
            case -1797664962:
                if (!str.equals(f324)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case -1769924254:
                if (!str.equals(f295)) {
                    b = -1;
                } else {
                    b = 36;
                }
                break;
            case -1719935914:
                if (!str.equals(f303)) {
                    b = -1;
                } else {
                    b = 32;
                }
                break;
            case -1673897431:
                if (!str.equals(f307)) {
                    b = -1;
                } else {
                    b = Ascii.CAN;
                }
                break;
            case -1673719574:
                if (!str.equals(f306)) {
                    b = -1;
                } else {
                    b = Ascii.EM;
                }
                break;
            case -1627944928:
                if (!str.equals(f312)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case -1543737546:
                if (!str.equals(f331)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -1347165098:
                if (!str.equals(f327)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -1258512514:
                if (!str.equals(f290)) {
                    b = -1;
                } else {
                    b = 41;
                }
                break;
            case -1251710408:
                if (!str.equals(f302)) {
                    b = -1;
                } else {
                    b = 33;
                }
                break;
            case -858834302:
                if (!str.equals(f316)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case -800280637:
                if (!str.equals(f311)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case -618035586:
                if (!str.equals(f320)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -598903877:
                if (!str.equals(f323)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case -553681069:
                if (!str.equals(f294)) {
                    b = -1;
                } else {
                    b = 37;
                }
                break;
            case -327500225:
                if (!str.equals(f325)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -324825325:
                if (!str.equals(f289)) {
                    b = -1;
                } else {
                    b = 42;
                }
                break;
            case -324012869:
                if (!str.equals(f321)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case -262912338:
                if (!str.equals(f313)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case -249507173:
                if (!str.equals(f296)) {
                    b = -1;
                } else {
                    b = 35;
                }
                break;
            case -133620343:
                if (!str.equals(f322)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case -30759555:
                if (!str.equals(f330)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 29694293:
                if (!str.equals(f288)) {
                    b = -1;
                } else {
                    b = 43;
                }
                break;
            case 67119908:
                if (!str.equals(f297)) {
                    b = -1;
                } else {
                    b = 34;
                }
                break;
            case 252148886:
                if (!str.equals(f319)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case 539301490:
                if (!str.equals(f292)) {
                    b = -1;
                } else {
                    b = 39;
                }
                break;
            case 626721475:
                if (!str.equals(f328)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case 692588017:
                if (!str.equals(f301)) {
                    b = -1;
                } else {
                    b = Ascii.FS;
                }
                break;
            case 819533772:
                if (!str.equals(f300)) {
                    b = -1;
                } else {
                    b = Ascii.GS;
                }
                break;
            case 961427118:
                if (!str.equals(f314)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case 961754217:
                if (!str.equals(f315)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case 961844241:
                if (!str.equals(f305)) {
                    b = -1;
                } else {
                    b = Ascii.SUB;
                }
                break;
            case 1067215379:
                if (!str.equals(f304)) {
                    b = -1;
                } else {
                    b = Ascii.ESC;
                }
                break;
            case 1246120607:
                if (!str.equals(f326)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 1326268204:
                if (!str.equals(f299)) {
                    b = -1;
                } else {
                    b = Ascii.RS;
                }
                break;
            case 1374920114:
                if (!str.equals(f317)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case 1407526303:
                if (!str.equals(f310)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case 1646468069:
                if (!str.equals(f298)) {
                    b = -1;
                } else {
                    b = Ascii.US;
                }
                break;
            case 1658279126:
                if (!str.equals(f329)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 1982491468:
                if (!str.equals(f318)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case 2020034237:
                if (!str.equals(f293)) {
                    b = -1;
                } else {
                    b = 38;
                }
                break;
            case 2068667541:
                if (!str.equals(f309)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return UnityAds.class;
            case 1:
                return IUnityAdsListener.class;
            case 2:
                return IUnityAdsExtendedListener.class;
            case 3:
                return WebViewApp.class;
            case 4:
                return W.class;
            case 5:
                return WebRequestEvent.class;
            case 6:
                return WebViewEventCategory.class;
            case 7:
                return UnityMonetization.class;
            case 8:
                return ShowAdListenerAdapter.class;
            case 9:
                return CustomEvent.class;
            case 10:
                return WebView.class;
            case 11:
                return WebRequest.class;
            case 12:
                return AdUnitActivity.class;
            case 13:
                return Banner.class;
            case 14:
                return UnityBanners.class;
            case 15:
                return UnityBannerSize.class;
            case 16:
                return BannerShow.class;
            case 17:
                return BannerHide.class;
            case 18:
                return BannerEvent.class;
            case 19:
                return BannerListener.class;
            case 20:
                return BannersModuleConfiguration.class;
            case 21:
                return BannerProperties.class;
            case 22:
                return BannerPosition.class;
            case 23:
                return BannerWebPlayerContainer.class;
            case 24:
                return BannerErrorCode.class;
            case 25:
                return BannerErrorInfo.class;
            case 26:
            case 27:
                return BannerView.class;
            case 28:
                return BannerViewCache.class;
            case 29:
                return IUnityBannerListener.class;
            case 30:
                return BannerView.IListener.class;
            case 31:
                return BannerView.Listener.class;
            case 32:
            case 33:
                return com.unity3d.services.banners.view.BannerView.class;
            case 34:
            case 35:
                return FullScreenWebViewDisplay.class;
            case 36:
                return AdObject.class;
            case 37:
                return AndroidFullscreenWebViewAdPlayer.class;
            case 38:
                return UnityAdsLoadOptions.class;
            case 39:
                return UnityAdsBaseOptions.class;
            case 40:
                return AdFormat.class;
            case 41:
                return ClientProperties.class;
            case 42:
                return DiagnosticEventRequestOuterClass.DiagnosticEvent.class;
            case 43:
                return IUnityAdsShowListener.class;
            default:
                return null;
        }
    }
}
