package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.AdActivity;
import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.AdLoadCallback;
import com.google.android.gms.ads.AdLoader;
import com.google.android.gms.ads.AdRequest;
import com.google.android.gms.ads.AdSize;
import com.google.android.gms.ads.AdView;
import com.google.android.gms.ads.Correlator;
import com.google.android.gms.ads.FullScreenContentCallback;
import com.google.android.gms.ads.InterstitialAd;
import com.google.android.gms.ads.MobileAds;
import com.google.android.gms.ads.NativeExpressAdView;
import com.google.android.gms.ads.VideoController;
import com.google.android.gms.ads.VideoOptions;
import com.google.android.gms.ads.admanager.AdManagerAdRequest;
import com.google.android.gms.ads.admanager.AdManagerAdView;
import com.google.android.gms.ads.admanager.AdManagerInterstitialAd;
import com.google.android.gms.ads.admanager.AdManagerInterstitialAdLoadCallback;
import com.google.android.gms.ads.appopen.AppOpenAd;
import com.google.android.gms.ads.doubleclick.AppEventListener;
import com.google.android.gms.ads.doubleclick.CustomRenderedAd;
import com.google.android.gms.ads.doubleclick.OnCustomRenderedAdLoadedListener;
import com.google.android.gms.ads.doubleclick.PublisherAdRequest;
import com.google.android.gms.ads.doubleclick.PublisherAdView;
import com.google.android.gms.ads.doubleclick.PublisherInterstitialAd;
import com.google.android.gms.ads.formats.AdChoicesView;
import com.google.android.gms.ads.formats.MediaView;
import com.google.android.gms.ads.formats.NativeAd;
import com.google.android.gms.ads.formats.NativeAdOptions;
import com.google.android.gms.ads.formats.NativeAdView;
import com.google.android.gms.ads.formats.NativeAdViewHolder;
import com.google.android.gms.ads.formats.NativeAppInstallAd;
import com.google.android.gms.ads.formats.NativeAppInstallAdView;
import com.google.android.gms.ads.formats.NativeContentAd;
import com.google.android.gms.ads.formats.NativeContentAdView;
import com.google.android.gms.ads.formats.NativeCustomTemplateAd;
import com.google.android.gms.ads.formats.OnPublisherAdViewLoadedListener;
import com.google.android.gms.ads.formats.PublisherAdViewOptions;
import com.google.android.gms.ads.formats.UnifiedNativeAd;
import com.google.android.gms.ads.formats.UnifiedNativeAdAssetNames;
import com.google.android.gms.ads.formats.UnifiedNativeAdView;
import com.google.android.gms.ads.instream.InstreamAd;
import com.google.android.gms.ads.instream.InstreamAdView;
import com.google.android.gms.ads.interstitial.InterstitialAdLoadCallback;
import com.google.android.gms.ads.reward.RewardItem;
import com.google.android.gms.ads.reward.RewardedVideoAd;
import com.google.android.gms.ads.rewarded.RewardedAd;
import com.google.android.gms.ads.rewardedinterstitial.RewardedInterstitialAd;
import com.google.android.gms.ads.rewardedinterstitial.RewardedInterstitialAdLoadCallback;
import com.google.common.base.Ascii;
import com.google.common.primitives.SignedBytes;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;
import kotlin.io.encoding.Base64;
import okio.Utf8;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ת, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public class C0443 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f1689 = StringFog.decrypt("NRJ8BF/BDLc2EmwAU9IIqhMTRTNO1wmkJhY=\n", "UncIVjq2bcU=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f1688 = StringFog.decrypt("Or95uExCOPA5v2m8QFE87Ry+QYNaQTzsOKg=\n", "XdoN6ik1WYI=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f1687 = StringFog.decrypt("TW94n7CJKHlOQ3iouKowe08=\n", "KgoMzdX+SQs=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f1686 = StringFog.decrypt("v9FhqhZFgSW8/WGdHnONOK3aYQ==\n", "2LQV+HMy4Fc=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f1685 = StringFog.decrypt("qHsw8HQhCb+4SC3VdRgjtaFqNt58GwWo\n", "zx5EsRB3YNo=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f1684 = StringFog.decrypt("xnE+0AwSEeXWVS7CAT4d\n", "oRRKkWhEeIA=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f1683 = StringFog.decrypt("/CPSS1DXV43sB8JfWuhKof8=\n", "m0amCjSBPug=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f1682 = StringFog.decrypt("nKZgrN7jTEyMgnCh08ZRTJWmZg==\n", "+8MU7bq1JSk=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f1681 = StringFog.decrypt("gkNerJF/l1uGZ06hnFqKW59DWA==\n", "8SYq7fUp/j4=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f1680 = StringFog.decrypt("S07dBn2qUyZpWO4ObLhGAGRVyxNsoWIW\n", "KDy4ZwnPB2Q=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f1679 = StringFog.decrypt("dN64pDyck/lg06mGCJqp+XbMmp0tm5DTfNW4hiaSk/Vh\n", "E7vM9En+/5A=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f1678 = StringFog.decrypt("eVoCvyIMIbNtVxOdFgobs3tIN4sEBze/\n", "Hj9271duTdo=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f1677 = StringFog.decrypt("5Y5lvItBU2zxg3Sev0dpbOecUIirTVZxy48=\n", "gusR7P4jPwU=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f1676 = StringFog.decrypt("zE3m04ki/nzYQPfxvSTEfM5f0+ewKeFhzkb38Q==\n", "qyiSg/xAkhU=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f1675 = StringFog.decrypt("4gyhsN73JbviAbCS6vEfu/QelITn/Dqm9Aewkg==\n", "kWnV4KuVSdI=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f1674 = StringFog.decrypt("gJlEZwGJxj+IvVNQCYrEPY6ZR2ISisclprU=\n", "5/wwJGDlqms=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f1673 = StringFog.decrypt("L/Rc1lW0O3Ah9F/SSL8vaAnY\n", "SJEolDrQQiY=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f1672 = StringFog.decrypt("V0jY9hJAa29ZQ8noHkR4RUJCwfA2aA==\n", "MC2svnchDwM=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f1671 = StringFog.decrypt("RAvtW0of3cRKC+5UWx/e3GIn\n", "I26ZEilws5I=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f1670 = StringFog.decrypt("1TUzeYEThEzkOSJHqgCMRPwRDg==\n", "slBHMOxy4yk=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f1669 = StringFog.decrypt("aLTudw6V/q9ZuP9NLYP4o0GQ0w==\n", "D9GaOmvxl84=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f1668 = StringFog.decrypt("B1nR6bDDa5k2VcDOhNhnkS597A==\n", "YDylucKqCPw=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f1667 = StringFog.decrypt("erROAQvHmpFLuF8lOdqHmVOQcw==\n", "HdE6Un+o6PQ=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f1666 = StringFog.decrypt("xA1N9rzpwDzCHFDLr97bC9QuS8qlxvMn\n", "o2g5pciIsm4=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f1665 = StringFog.decrypt("N45AXCcz0xw/qldrLzDRHjmOQ1k0MNIGEw==\n", "UOs0H0Zfv0g=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f1664 = StringFog.decrypt("yoiSmdhE6UXEiJGdxU/9Xe4=\n", "re3m27cgkBM=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f1663 = StringFog.decrypt("BOM35DjmfSYK6Cb6NOJuDBHpLuIe\n", "Y4ZDrF2HGUo=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f1662 = StringFog.decrypt("eYTH50VNUhx3hMTtWEVQBF0=\n", "HuGzqyoqPUo=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f1661 = StringFog.decrypt("mqI9qpOoA1+rriyUuLsLV7OE\n", "/cdJ4/7JZDo=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f1660 = StringFog.decrypt("HFmoKFGBI3sPVa8MR6EvbAx6rgZYuQU=\n", "ezzcaTX3Rgk=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f1659 = StringFog.decrypt("9PW6VE1gairF+atubnZsJt3T\n", "k5DOGSgEA0s=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f1658 = StringFog.decrypt("7w3hfVVBVWHnKfZKXUJXY+EN4nhGQlRgxg==\n", "iGiVPjQtOTU=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f1657 = StringFog.decrypt("fdqwIN2fjLhz2rMkwJSYu1Q=\n", "Gr/EYrL79e4=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f1656 = StringFog.decrypt("CFsjJtQynG8GUDI42DaPRR1ROjv/\n", "bz5XbrFT+AM=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f1655 = StringFog.decrypt("AzAh79bcaB8NMCLgx9xrHCo=\n", "ZFVVprWzBkk=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f1654 = StringFog.decrypt("HzSkyIFrUoEuOLX2qnhaiS0f\n", "eFHQgewKNeQ=\n");

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f1653 = StringFog.decrypt("nLyugNCNVa6tsL+685tToq6X\n", "+9nazbXpPM8=\n");

    /* JADX INFO: renamed from: ᕃ, reason: contains not printable characters */
    public static final String f1652 = StringFog.decrypt("yhKv79owj6v7Hr7I7iuDo/g5\n", "rXfbv6hZ7M4=\n");

    /* JADX INFO: renamed from: ᕂ, reason: contains not printable characters */
    public static final String f1651 = StringFog.decrypt("scQtXlEvbNWAyDx6YzJx3YPv\n", "1qFZDSVAHrA=\n");

    /* JADX INFO: renamed from: ᔽ, reason: contains not printable characters */
    public static final String f1650 = StringFog.decrypt("qXO2BcgXdbavYqs42yBugblQsDnRI0k=\n", "zhbCVrx2B+Q=\n");

    /* JADX INFO: renamed from: ᔺ, reason: contains not printable characters */
    public static final String f1649 = StringFog.decrypt("QXA2U7bkUWlSfDF3oMRdflFTMH2/x3o=\n", "JhVCEtKSNBs=\n");

    /* JADX INFO: renamed from: ᔹ, reason: contains not printable characters */
    public static final String f1648 = StringFog.decrypt("ypntmrs+zmnIkti/mSvyacKS6r6CIOd2\n", "rfyZ28tOgRk=\n");

    /* JADX INFO: renamed from: ᔲ, reason: contains not printable characters */
    public static final String f1647 = StringFog.decrypt("GxuF1PXQOsw5GZD68dAAzxwlj9Tl9g/iFAuB1uo=\n", "eGngtYG1bo4=\n");

    /* JADX INFO: renamed from: ᔱ, reason: contains not printable characters */
    public static final String f1646 = StringFog.decrypt("1FuiHVxaKPDxXKsQe1wO19JHhBNGSxncw2qmEERdHdHc\n", "tynHfCg/fLI=\n");

    /* JADX INFO: renamed from: ᓮ, reason: contains not printable characters */
    public static final String f1645 = StringFog.decrypt("vj+NQrI2LOq4PZxxlx8b7bwtuGeDFSTwkD4=\n", "2Vr5A9Z7TYQ=\n");

    /* JADX INFO: renamed from: ᐱ, reason: contains not printable characters */
    public static final String f1644 = StringFog.decrypt("dr6dRqaYFCVwvIx1g7EjInSsqGOOvAY/dLWMdQ==\n", "EdvpB8LVdUs=\n");

    /* JADX INFO: renamed from: Ꮭ, reason: contains not printable characters */
    public static final String f1643 = StringFog.decrypt("t2/RZAIdDZilbcBXJzQ6n6F95EEqOR+CoWTAVw==\n", "xAqlJWZQbPY=\n");

    /* JADX INFO: renamed from: Ꮧ, reason: contains not printable characters */
    public static final String f1642 = StringFog.decrypt("v4c6jXgJQZe3oy26cApDlbGHOYhrCkCNmbQ=\n", "2OJOzhllLcM=\n");

    /* JADX INFO: renamed from: პ, reason: contains not printable characters */
    public static final String f1641 = StringFog.decrypt("y1URitgPoifFVRKOxQS2P+1m\n", "rDBlyLdr23E=\n");

    /* JADX INFO: renamed from: ე, reason: contains not printable characters */
    public static final String f1640 = StringFog.decrypt("jvJLWk8x1mKA+VpEQzXFSJv4UlxrBg==\n", "6Zc/EipQsg4=\n");

    /* JADX INFO: renamed from: ງ, reason: contains not printable characters */
    public static final String f1639 = StringFog.decrypt("qe1r4SIqVTCn7WjuMypWKI/e\n", "zogfqEFFO2Y=\n");

    /* JADX INFO: renamed from: อ, reason: contains not printable characters */
    public static final String f1638 = StringFog.decrypt("O2wza1AhCX4KYCJVezIBdhJIEQ==\n", "XAlHIj1Abhs=\n");

    /* JADX INFO: renamed from: ม, reason: contains not printable characters */
    public static final String f1637 = StringFog.decrypt("NqoeaSRlmMoHpg9TB3Oexh+OPA==\n", "Uc9qJEEB8as=\n");

    /* JADX INFO: renamed from: น, reason: contains not printable characters */
    public static final String f1636 = StringFog.decrypt("LbLiW1ZxDJM+vuV/QFEAhD2R5HVfSSi3\n", "SteWGjIHaeE=\n");

    /* JADX INFO: renamed from: ต, reason: contains not printable characters */
    public static final String f1635 = StringFog.decrypt("/567sVxP1WXOkqqWaFTZbda6mQ==\n", "mPvP4S4mtgA=\n");

    /* JADX INFO: renamed from: ฑ, reason: contains not printable characters */
    public static final String f1634 = StringFog.decrypt("MrH+2OPEf60Dve/80dlipRuV3A==\n", "VdSKi5erDcg=\n");

    /* JADX INFO: renamed from: ঢ়, reason: contains not printable characters */
    public static final String f1633 = StringFog.decrypt("juBdhUaD32OI8UC4VbTEVJ7DW7lfrOxn\n", "6YUp1jLirTE=\n");

    /* JADX INFO: renamed from: ষ, reason: contains not printable characters */
    public static final String f1632 = StringFog.decrypt("mbLnAIo0Y92srw==\n", "2NamY/5dFbQ=\n");

    /* JADX INFO: renamed from: ঘ, reason: contains not printable characters */
    public static final String f1631 = StringFog.decrypt("JRAuYqe2mUQqGm0trr2ETC8bbSutqthCIgxtDaSYlVcvCSo4uQ==\n", "Rn9DTMDZ9iM=\n");

    /* JADX INFO: renamed from: খ, reason: contains not printable characters */
    public static final String f1630 = StringFog.decrypt("cU2Cx4iDYM1VWw==\n", "MCnOrvv3BaM=\n");

    /* JADX INFO: renamed from: এ, reason: contains not printable characters */
    public static final String f1629 = StringFog.decrypt("Aq4N9QkatyU=\n", "Q8pBmmh+0lc=\n");

    /* JADX INFO: renamed from: ऱ, reason: contains not printable characters */
    public static final String f1628 = StringFog.decrypt("+9NBLjPDNxPO\n", "urcTS0K2UmA=\n");

    /* JADX INFO: renamed from: ܟ, reason: contains not printable characters */
    public static final String f1627 = StringFog.decrypt("2TFGPBuD\n", "mFUVVWHmj60=\n");

    /* JADX INFO: renamed from: ܘ, reason: contains not printable characters */
    public static final String f1626 = StringFog.decrypt("i+aFOLdR\n", "yoLTUdImkpw=\n");

    /* JADX INFO: renamed from: ے, reason: contains not printable characters */
    public static final String f1625 = StringFog.decrypt("fz4cw6fSXHRwNF+MrtlBfHU1X4qtzh1yeCJfrKTrWnZr\n", "HFFx7cC9MxM=\n");

    /* JADX INFO: renamed from: ۉ, reason: contains not printable characters */
    public static final String f1624 = StringFog.decrypt("h1a1c40uleyrSw==\n", "xDnHAehC9Jg=\n");

    /* JADX INFO: renamed from: ۅ, reason: contains not printable characters */
    public static final String f1623 = StringFog.decrypt("XkqHE+A9+/1jTZIa0yo=\n", "FyTzdpJOj5Q=\n");

    /* JADX INFO: renamed from: ڑ, reason: contains not printable characters */
    public static final String f1622 = StringFog.decrypt("1d7u6r4lxLTr\n", "mLGMg9JAhdA=\n");

    /* JADX INFO: renamed from: پ, reason: contains not printable characters */
    public static final String f1621 = StringFog.decrypt("gvQ5VdHd12u85yhP1Pn2RaXwOg==\n", "zJVNPKe4khM=\n");

    /* JADX INFO: renamed from: ٽ, reason: contains not printable characters */
    public static final String f1620 = StringFog.decrypt("YT1GuTRg8bdDJk2wN0bs\n", "N1Qi3Fsjntk=\n");

    /* JADX INFO: renamed from: ث, reason: contains not printable characters */
    public static final String f1619 = StringFog.decrypt("mwsNXNXU3k6kDQdK\n", "zWJpObqbrjo=\n");

    /* JADX INFO: renamed from: ת, reason: contains not printable characters */
    public static final String f1618 = StringFog.decrypt("u8pR4Hy+uHu/xkLkYZu5\n", "6a8mgQ7a3R8=\n");

    /* JADX INFO: renamed from: ק, reason: contains not printable characters */
    public static final String f1617 = StringFog.decrypt("qiGMNCoFMaWdKQ==\n", "+ET7VVhheNE=\n");

    /* JADX INFO: renamed from: פ, reason: contains not printable characters */
    public static final String f1616 = StringFog.decrypt("lWbAWcj5IZanVOpU0A==\n", "1AKDMaeQQvM=\n");

    /* JADX INFO: renamed from: ս, reason: contains not printable characters */
    public static final String f1615 = StringFog.decrypt("/0A0PxgF1gjF\n", "siVQVnlTv20=\n");

    /* JADX INFO: renamed from: ո, reason: contains not printable characters */
    public static final String f1614 = StringFog.decrypt("m9dEOUBuOAM=\n", "1bYwUDYLeWc=\n");

    /* JADX INFO: renamed from: յ, reason: contains not printable characters */
    public static final String f1613 = StringFog.decrypt("L81BizFqHHsu3EGLKGEu\n", "Yaw14kcPXR8=\n");

    /* JADX INFO: renamed from: Ն, reason: contains not printable characters */
    public static final String f1612 = StringFog.decrypt("v0zANbxxytenRNEr\n", "8S20XMoUi7M=\n");

    /* JADX INFO: renamed from: Ԇ, reason: contains not printable characters */
    public static final String f1611 = StringFog.decrypt("27lHxlDhDPfDsVbYbush9/Cq\n", "ldgzryaETZM=\n");

    /* JADX INFO: renamed from: Ӵ, reason: contains not printable characters */
    public static final String f1610 = StringFog.decrypt("UcWR90v6idxv7YvtSf6kwF7A\n", "H6Tlnj2fyKw=\n");

    /* JADX INFO: renamed from: ӟ, reason: contains not printable characters */
    public static final String f1609 = StringFog.decrypt("V9QKLzeomnBp/BA1Nay3bFjRKC8kug==\n", "GbV+RkHN2wA=\n");

    /* JADX INFO: renamed from: Ҭ, reason: contains not printable characters */
    public static final String f1608 = StringFog.decrypt("vkFvEWvGezmxSyxeYs1mMbRKLFhh2jo/uV0sWWPbeT+pXSxxbd19KLhvck9Fx2cqvEJufmj/fTuq\n", "3S4CPwypFF4=\n");

    /* JADX INFO: renamed from: Ғ, reason: contains not printable characters */
    public static final String f1607 = StringFog.decrypt("PG2LsyhYizkceJq0Knys\n", "cgz/2l49yFY=\n");

    /* JADX INFO: renamed from: ѵ, reason: contains not printable characters */
    public static final String f1606 = StringFog.decrypt("rbvan2bSTCWNrsuYZPZrHIq/2Q==\n", "49qu9hC3D0o=\n");

    /* JADX INFO: renamed from: п, reason: contains not printable characters */
    public static final String f1605 = StringFog.decrypt("DLMresvrdpMDuWg1wuBrmwa4aDPB9zeVC69oMsP2dJUbr2gazfBwggqfKTrY4XeALrgQPcnz\n", "b9xGVKyEGfQ=\n");

    /* JADX INFO: renamed from: н, reason: contains not printable characters */
    public static final String f1604 = StringFog.decrypt("OYKHcBV67vUEl5x0N3rA8BuCh3wiew==\n", "d+PzGWMfrYA=\n");

    /* JADX INFO: renamed from: У, reason: contains not printable characters */
    public static final String f1603 = StringFog.decrypt("bVTwQzyOj4lKX9J3OrSPn1V2z1c6h4K2S0nUUzCHlA==\n", "IjqgNl7i5vo=\n");

    /* JADX INFO: renamed from: С, reason: contains not printable characters */
    public static final String f1602 = StringFog.decrypt("89HRW2B2UgLR5ddhYGBNKNPQ2lhndg==\n", "o6SzNwkFOmc=\n");

    /* JADX INFO: renamed from: Ϲ, reason: contains not printable characters */
    public static final String f1601 = StringFog.decrypt("djO7f7G5V7JCKbtvvZ1X\n", "I13SGdjcM/w=\n");

    /* JADX INFO: renamed from: ϵ, reason: contains not printable characters */
    public static final String f1600 = StringFog.decrypt("rrESYpypAXSaqxJykI0Be4isHnC7rQhfiA==\n", "+997BPXMZTo=\n");

    /* JADX INFO: renamed from: ϯ, reason: contains not printable characters */
    public static final String f1599 = StringFog.decrypt("AgRE3VPV7Bk2HkTNX/HsAT4PWg==\n", "V2otuzqwiFc=\n");

    /* JADX INFO: renamed from: Ϯ, reason: contains not printable characters */
    public static final String f1598 = StringFog.decrypt("rH2w2LVHcvijd/OXvExv8KZ285G/WzP+q2HzkL1acP67YfOjvEF79qp2k5emQWv6jnaLn7df\n", "zxLd9tIoHZ8=\n");

    /* JADX INFO: renamed from: ϝ, reason: contains not printable characters */
    public static final String f1597 = StringFog.decrypt("44haqd57tL3ukVmYzXC/uw==\n", "ovgq7Kge2sk=\n");

    /* JADX INFO: renamed from: ϙ, reason: contains not printable characters */
    public static final String f1596 = StringFog.decrypt("A17kypM4Mj4uT/LMmTEhPw==\n", "QCuXvvxVYFs=\n");

    /* JADX INFO: renamed from: Λ, reason: contains not printable characters */
    public static final String f1595 = StringFog.decrypt("poK4MOWdobC7iZUh85uruaiItyr3jau5pYWIMfOHq68=\n", "6ez7RZbpzt0=\n");

    /* JADX INFO: renamed from: Κ, reason: contains not printable characters */
    public static final String f1594 = StringFog.decrypt("8keO9+GBxmXQc4jJ7YPbZdFG\n", "ojLsm4jyrgA=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f1593 = StringFog.decrypt("uG06MxSEIeOaWTwJFJI+\n", "6BhYX333SYY=\n");

    /* JADX INFO: renamed from: ʜ, reason: contains not printable characters */
    public static final String f1592 = StringFog.decrypt("m3Ua4ORjoCaUf1mv7Wi9LpF+Wanuf+EgnGlZqux5rS2deRun4GfhEY14G6fwZKozuX4hp+Z7\n", "+Bp3zoMMz0E=\n");

    /* JADX INFO: renamed from: Ȳ, reason: contains not printable characters */
    public static final String f1591 = StringFog.decrypt("nxpBgLeJYa+9Jk2Yu4h6vqYbSo2yu20=\n", "z28j7N76Cco=\n");

    /* JADX INFO: renamed from: ȝ, reason: contains not printable characters */
    public static final String f1590 = StringFog.decrypt("ZTMeXV3LxTJUHzpL\n", "MXFfORGitkY=\n");

    /* JADX INFO: renamed from: ƈ, reason: contains not printable characters */
    public static final String f1589 = StringFog.decrypt("6OlL36TqCrnN\n", "qZk7kNSPZPg=\n");

    /* JADX INFO: renamed from: Ɔ, reason: contains not printable characters */
    public static final String f1588 = StringFog.decrypt("cnfEyqnCBpxXS9vkveQJsV9l1eay\n", "Mwe0hdmnaN0=\n");

    /* JADX INFO: renamed from: Ť, reason: contains not printable characters */
    public static final String f1587 = StringFog.decrypt("25R7ajyhFPr4j1RpAbYD8emidmoDoAf89g==\n", "neEXBm/CZp8=\n");

    /* JADX INFO: renamed from: ţ, reason: contains not printable characters */
    public static final String f1586 = StringFog.decrypt("s0HBNR7MymGJQuQJAeLeR4Zv7CcP4NE=\n", "5wOARW6DugQ=\n");

    /* JADX INFO: renamed from: ō, reason: contains not printable characters */
    public static final String f1585 = StringFog.decrypt("R7CWkcj1J8Bhl7WK5/Ya13acpKfF9RjBcpG7\n", "E/LQ5KSZdKM=\n");

    /* JADX INFO: renamed from: Ł, reason: contains not printable characters */
    public static final String f1584 = StringFog.decrypt("a0zg3fSSvoRYacnu/4KshFlc\n", "KiitvJrz2eE=\n");

    /* JADX INFO: renamed from: Ĵ, reason: contains not printable characters */
    public static final String f1583 = StringFog.decrypt("NGeyVcwlvlAHQptiyyGu\n", "dQP/NKJE2TU=\n");

    /* JADX INFO: renamed from: ﾓ, reason: contains not printable characters */
    public static final String f1708 = StringFog.decrypt("qLNBAGD0VganuQJPaf9LDqK4Aklq6BcAr68CT2P2WA+qu0lcKdpdLKqyTUli6XgFnbVJWQ==\n", "y9wsLgebOWE=\n");

    /* JADX INFO: renamed from: ﾊ, reason: contains not printable characters */
    public static final String f1707 = StringFog.decrypt("bc9K5Hu234he4mnxcKXLmUXfbuR5ltw=\n", "LKsHhRXXuO0=\n");

    /* JADX INFO: renamed from: ﾁ, reason: contains not printable characters */
    public static final String f1706 = StringFog.decrypt("A2t52kAO+kUwRlrPSx3uVCt7XdpCLvlsLW5Q+E8D8UIjbF8=\n", "Qg80uy5vnSA=\n");

    /* JADX INFO: renamed from: ｽ, reason: contains not printable characters */
    public static final String f1705 = StringFog.decrypt("KZvtaZGHPAQCkO5kiIQNFwmb6A==\n", "Z/6aKOH3eXI=\n");

    /* JADX INFO: renamed from: ｹ, reason: contains not printable characters */
    public static final String f1704 = StringFog.decrypt("QRnRz7cbZJVJEw==\n", "CHeiu8V+Bfg=\n");

    /* JADX INFO: renamed from: ｸ, reason: contains not printable characters */
    public static final String f1703 = StringFog.decrypt("d0cGvmyyXWd/TSOje6A=\n", "Pil1yh7XPAo=\n");

    /* JADX INFO: renamed from: ｷ, reason: contains not printable characters */
    public static final String f1702 = StringFog.decrypt("cfnZkZHsDdF+85remOcQ2Xvymtib8EzXduWa1pjwFsR399mRv+0RwmDz1dK35zTfd+E=\n", "Epa0v/aDYrY=\n");

    /* JADX INFO: renamed from: ｳ, reason: contains not printable characters */
    public static final String f1701 = StringFog.decrypt("uBK1Af2VQQCFA6s8+oBIM5I=\n", "9nfCSJPhJHI=\n");

    /* JADX INFO: renamed from: ｦ, reason: contains not printable characters */
    public static final String f1700 = StringFog.decrypt("kCe9iw7/2u+tIKiCPeji6bgtio8Q4MznuiI=\n", "2UnJ7nyMroY=\n");

    /* JADX INFO: renamed from: ｓ, reason: contains not printable characters */
    public static final String f1699 = StringFog.decrypt("SAa1SzHUkldjIqZTOcWM\n", "BmPCBVCg+yE=\n");

    /* JADX INFO: renamed from: ｒ, reason: contains not printable characters */
    public static final String f1698 = StringFog.decrypt("aWYY9kZvR3xmbFu5T2RadGNtW79McwZ6bnpbtkB0QW1vaBH2b2FccnxsNLx3aU1s\n", "Cgl12CEAKBs=\n");

    /* JADX INFO: renamed from: ｎ, reason: contains not printable characters */
    public static final String f1697 = StringFog.decrypt("/Dz7qU1nTkPXGOixRXZQfd016IJe\n", "slmM5ywTJzU=\n");

    /* JADX INFO: renamed from: ｌ, reason: contains not printable characters */
    public static final String f1696 = StringFog.decrypt("O/n0273qgsAj9ebh\n", "dZyDltiO66E=\n");

    /* JADX INFO: renamed from: Ｉ, reason: contains not printable characters */
    public static final String f1695 = StringFog.decrypt("Frik694+STEZsuek1zVUORyz56LUIgg3EaTnq9glTyAQtq3r9DRCPxSBoKDO\n", "ddfJxblRJlY=\n");

    /* JADX INFO: renamed from: Ｆ, reason: contains not printable characters */
    public static final String f1694 = StringFog.decrypt("Fjc8NK8zu28FNg==\n", "RFJLVd1X3gs=\n");

    /* JADX INFO: renamed from: ﻢ, reason: contains not printable characters */
    public static final String f1693 = StringFog.decrypt("YHy1RrhGdJVKULZxsA==\n", "LhnCFN0xFec=\n");

    /* JADX INFO: renamed from: ﻌ, reason: contains not printable characters */
    public static final String f1692 = StringFog.decrypt("rDwfbw3Uea23NxxrDcNooIowCWI+1A==\n", "/lloDn+wHMk=\n");

    /* JADX INFO: renamed from: ﻋ, reason: contains not printable characters */
    public static final String f1691 = StringFog.decrypt("shoUSsZz6A2pERdOxmT5AJQWAkf1c8EGgRsgSth77wiDFA==\n", "4H9jK7QXjWk=\n");

    /* JADX INFO: renamed from: ﺧ, reason: contains not printable characters */
    public static final String f1690 = StringFog.decrypt("kor4Wdf2abG/gtZX1fk=\n", "0+60NraSKtA=\n");

    public C0443(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public String mo8318() {
        return StringFog.decrypt("ogOwSWeBOQ==\n", "503xCyvEfew=\n");
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f1689, new C0921(this));
        map.put(f1688, new C0743(this));
        map.put(f1687, new C0715(this));
        map.put(f1686, new C0552(this));
        map.put(f1685, new C0508(this));
        map.put(f1684, new C0504(this));
        map.put(f1683, new C0497(this));
        map.put(f1682, new C0495(this));
        map.put(f1681, new C0494(this));
        map.put(f1680, new C0961(this));
        map.put(f1679, new C0955(this));
        map.put(f1678, new C0954(this));
        map.put(f1677, new C0953(this));
        map.put(f1676, new C0947(this));
        map.put(f1675, new C0940(this));
        map.put(f1674, new C0932(this));
        map.put(f1673, new C0924(this));
        map.put(f1672, new C0923(this));
        map.put(f1671, new C0922(this));
        map.put(f1670, new C0907(this));
        map.put(f1669, new C0874(this));
        map.put(f1668, new C0863(this));
        map.put(f1667, new C0859(this));
        map.put(f1666, new C0851(this));
        map.put(f1665, new C0815(this));
        map.put(f1664, new C0762(this));
        map.put(f1663, new C0750(this));
        map.put(f1662, new C0746(this));
        map.put(f1661, new C0745(this));
        map.put(f1660, new C0741(this));
        map.put(f1659, new C0739(this));
        map.put(f1658, new C0733(this));
        map.put(f1657, new C0726(this));
        map.put(f1656, new C0725(this));
        map.put(f1655, new C0724(this));
        map.put(f1654, new C0723(this));
        map.put(f1653, new C0718(this));
        map.put(f1652, new C0717(this));
        map.put(f1651, new C0716(this));
        map.put(f1650, new C0714(this));
        map.put(f1649, new C0675(this));
        map.put(f1648, new C0611(this));
        map.put(f1647, new C0593(this));
        map.put(f1646, new C0592(this));
        map.put(f1645, new C0582(this));
        map.put(f1644, new C0579(this));
        map.put(f1643, new C0574(this));
        map.put(f1642, new C0563(this));
        map.put(f1641, new C0557(this));
        map.put(f1640, new C0549(this));
        map.put(f1639, new C0548(this));
        map.put(f1638, new C0538(this));
        map.put(f1637, new C0535(this));
        map.put(f1636, new C0523(this));
        map.put(f1635, new C0521(this));
        map.put(f1634, new C0519(this));
        map.put(f1633, new C0516(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:212:0x0334  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -2053609852:
                if (!str.equals(f1613)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case -1844074954:
                if (!str.equals(f1629)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case -1836618638:
                if (!str.equals(f1632)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -1833847803:
                if (!str.equals(f1607)) {
                    b = -1;
                } else {
                    b = Ascii.EM;
                }
                break;
            case -1802090343:
                if (!str.equals(f1609)) {
                    b = -1;
                } else {
                    b = Ascii.ETB;
                }
                break;
            case -1714595807:
                if (!str.equals(f1595)) {
                    b = -1;
                } else {
                    b = 37;
                }
                break;
            case -1685705975:
                if (!str.equals(f1696)) {
                    b = -1;
                } else {
                    b = 62;
                }
                break;
            case -1666698098:
                if (!str.equals(f1622)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -1662939813:
                if (!str.equals(f1695)) {
                    b = -1;
                } else {
                    b = Utf8.REPLACEMENT_BYTE;
                }
                break;
            case -1582185333:
                if (!str.equals(f1697)) {
                    b = -1;
                } else {
                    b = Base64.padSymbol;
                }
                break;
            case -1560815060:
                if (!str.equals(f1601)) {
                    b = -1;
                } else {
                    b = Ascii.US;
                }
                break;
            case -1516937499:
                if (!str.equals(f1604)) {
                    b = -1;
                } else {
                    b = Ascii.FS;
                }
                break;
            case -1423359538:
                if (!str.equals(f1625)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case -1232310845:
                if (!str.equals(f1619)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case -1204391573:
                if (!str.equals(f1591)) {
                    b = -1;
                } else {
                    b = 41;
                }
                break;
            case -1155082166:
                if (!str.equals(f1606)) {
                    b = -1;
                } else {
                    b = Ascii.SUB;
                }
                break;
            case -1138076343:
                if (!str.equals(f1624)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case -1089508755:
                if (!str.equals(f1698)) {
                    b = -1;
                } else {
                    b = 60;
                }
                break;
            case -957596542:
                if (!str.equals(f1693)) {
                    b = -1;
                } else {
                    b = 65;
                }
                break;
            case -921146360:
                if (!str.equals(f1704)) {
                    b = -1;
                } else {
                    b = 54;
                }
                break;
            case -909742738:
                if (!str.equals(f1589)) {
                    b = -1;
                } else {
                    b = 42;
                }
                break;
            case -838208757:
                if (!str.equals(f1611)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            case -796191954:
                if (!str.equals(f1690)) {
                    b = -1;
                } else {
                    b = 68;
                }
                break;
            case -750705548:
                if (!str.equals(f1616)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case -711408129:
                if (!str.equals(f1699)) {
                    b = -1;
                } else {
                    b = 59;
                }
                break;
            case -630683932:
                if (!str.equals(f1706)) {
                    b = -1;
                } else {
                    b = 52;
                }
                break;
            case -613689744:
                if (!str.equals(f1594)) {
                    b = -1;
                } else {
                    b = 38;
                }
                break;
            case -610604286:
                if (!str.equals(f1617)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case -609786639:
                if (!str.equals(f1694)) {
                    b = -1;
                } else {
                    b = SignedBytes.MAX_POWER_OF_TWO;
                }
                break;
            case -572702516:
                if (!str.equals(f1628)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -543102915:
                if (!str.equals(f1692)) {
                    b = -1;
                } else {
                    b = 66;
                }
                break;
            case -488370215:
                if (!str.equals(f1588)) {
                    b = -1;
                } else {
                    b = 43;
                }
                break;
            case -475749390:
                if (!str.equals(f1583)) {
                    b = -1;
                } else {
                    b = 49;
                }
                break;
            case -473979458:
                if (!str.equals(f1603)) {
                    b = -1;
                } else {
                    b = Ascii.GS;
                }
                break;
            case -467386952:
                if (!str.equals(f1631)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case -443364764:
                if (!str.equals(f1593)) {
                    b = -1;
                } else {
                    b = 39;
                }
                break;
            case -427212412:
                if (!str.equals(f1600)) {
                    b = -1;
                } else {
                    b = 32;
                }
                break;
            case -375097813:
                if (!str.equals(f1586)) {
                    b = -1;
                } else {
                    b = 45;
                }
                break;
            case -329974567:
                if (!str.equals(f1598)) {
                    b = -1;
                } else {
                    b = 34;
                }
                break;
            case -249438719:
                if (!str.equals(f1621)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case -150492023:
                if (!str.equals(f1615)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -105717264:
                if (!str.equals(f1618)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case 36061767:
                if (!str.equals(f1592)) {
                    b = -1;
                } else {
                    b = 40;
                }
                break;
            case 60955002:
                if (!str.equals(f1700)) {
                    b = -1;
                } else {
                    b = 58;
                }
                break;
            case 320151695:
                if (!str.equals(f1623)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case 501334569:
                if (!str.equals(f1596)) {
                    b = -1;
                } else {
                    b = 36;
                }
                break;
            case 731105901:
                if (!str.equals(f1705)) {
                    b = -1;
                } else {
                    b = 53;
                }
                break;
            case 759931860:
                if (!str.equals(f1610)) {
                    b = -1;
                } else {
                    b = Ascii.SYN;
                }
                break;
            case 770485104:
                if (!str.equals(f1702)) {
                    b = -1;
                } else {
                    b = 56;
                }
                break;
            case 783849221:
                if (!str.equals(f1590)) {
                    b = -1;
                } else {
                    b = 47;
                }
                break;
            case 871099991:
                if (!str.equals(f1620)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case 911527523:
                if (!str.equals(f1587)) {
                    b = -1;
                } else {
                    b = 44;
                }
                break;
            case 983558690:
                if (!str.equals(f1584)) {
                    b = -1;
                } else {
                    b = 48;
                }
                break;
            case 1165508119:
                if (!str.equals(f1630)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 1213576625:
                if (!str.equals(f1608)) {
                    b = -1;
                } else {
                    b = Ascii.CAN;
                }
                break;
            case 1321847848:
                if (!str.equals(f1691)) {
                    b = -1;
                } else {
                    b = 67;
                }
                break;
            case 1376752369:
                if (!str.equals(f1599)) {
                    b = -1;
                } else {
                    b = 33;
                }
                break;
            case 1431624953:
                if (!str.equals(f1707)) {
                    b = -1;
                } else {
                    b = 51;
                }
                break;
            case 1433158194:
                if (!str.equals(f1605)) {
                    b = -1;
                } else {
                    b = Ascii.ESC;
                }
                break;
            case 1784787471:
                if (!str.equals(f1701)) {
                    b = -1;
                } else {
                    b = 57;
                }
                break;
            case 1816828826:
                if (!str.equals(f1602)) {
                    b = -1;
                } else {
                    b = Ascii.RS;
                }
                break;
            case 1872484045:
                if (!str.equals(f1703)) {
                    b = -1;
                } else {
                    b = 55;
                }
                break;
            case 1883459112:
                if (!str.equals(f1708)) {
                    b = -1;
                } else {
                    b = 50;
                }
                break;
            case 1955824356:
                if (!str.equals(f1627)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 1955913096:
                if (!str.equals(f1626)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case 1965398253:
                if (!str.equals(f1597)) {
                    b = -1;
                } else {
                    b = 35;
                }
                break;
            case 2035668095:
                if (!str.equals(f1612)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case 2110329530:
                if (!str.equals(f1614)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case 2130033589:
                if (!str.equals(f1585)) {
                    b = -1;
                } else {
                    b = 46;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
            case 1:
                return AdActivity.class;
            case 2:
                return AdListener.class;
            case 3:
                return AdLoader.class;
            case 4:
                return AdRequest.class;
            case 5:
                return AdSize.class;
            case 6:
            case 7:
                return AdView.class;
            case 8:
                return Correlator.class;
            case 9:
                return InterstitialAd.class;
            case 10:
                return MobileAds.class;
            case 11:
                return NativeExpressAdView.class;
            case 12:
                return VideoController.class;
            case 13:
                return VideoOptions.class;
            case 14:
                return RewardedVideoAd.class;
            case 15:
                return RewardItem.class;
            case 16:
                return AdChoicesView.class;
            case 17:
                return MediaView.class;
            case 18:
                return NativeAd.class;
            case 19:
                return NativeAdOptions.class;
            case 20:
                return NativeAdView.class;
            case 21:
                return NativeAdViewHolder.class;
            case 22:
                return NativeAppInstallAd.class;
            case 23:
            case 24:
                return NativeAppInstallAdView.class;
            case 25:
                return NativeContentAd.class;
            case 26:
            case 27:
                return NativeContentAdView.class;
            case 28:
                return NativeCustomTemplateAd.class;
            case 29:
                return OnPublisherAdViewLoadedListener.class;
            case 30:
                return PublisherAdViewOptions.class;
            case 31:
                return UnifiedNativeAd.class;
            case 32:
                return UnifiedNativeAdAssetNames.class;
            case 33:
            case 34:
                return UnifiedNativeAdView.class;
            case 35:
                return AppEventListener.class;
            case 36:
                return CustomRenderedAd.class;
            case 37:
                return OnCustomRenderedAdLoadedListener.class;
            case 38:
                return PublisherAdRequest.class;
            case 39:
            case 40:
                return PublisherAdView.class;
            case 41:
                return PublisherInterstitialAd.class;
            case 42:
                return AppOpenAd.class;
            case 43:
                return AppOpenAd.AppOpenAdLoadCallback.class;
            case 44:
                return FullScreenContentCallback.class;
            case 45:
                return C0468.class;
            case 46:
                return C0451.class;
            case 47:
                return C0469.class;
            case 48:
                return AdManagerAdRequest.class;
            case 49:
            case 50:
                return AdManagerAdView.class;
            case 51:
                return AdManagerInterstitialAd.class;
            case 52:
                return AdManagerInterstitialAdLoadCallback.class;
            case 53:
                return com.google.android.gms.ads.admanager.AppEventListener.class;
            case 54:
                return InstreamAd.class;
            case 55:
            case 56:
                return InstreamAdView.class;
            case 57:
                return com.google.android.gms.ads.interstitial.InterstitialAd.class;
            case 58:
                return InterstitialAdLoadCallback.class;
            case 59:
            case 60:
                return com.google.android.gms.ads.nativead.NativeAdView.class;
            case 61:
                return com.google.android.gms.ads.nativead.NativeAdViewHolder.class;
            case 62:
            case 63:
                return com.google.android.gms.ads.nativead.MediaView.class;
            case 64:
                return RewardedAd.class;
            case 65:
                return com.google.android.gms.ads.rewarded.RewardItem.class;
            case 66:
                return RewardedInterstitialAd.class;
            case 67:
                return RewardedInterstitialAdLoadCallback.class;
            case 68:
                return AdLoadCallback.class;
            default:
                return null;
        }
    }
}
