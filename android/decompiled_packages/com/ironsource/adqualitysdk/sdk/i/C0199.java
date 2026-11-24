package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.google.common.primitives.SignedBytes;
import com.ironsource.adqualitysdk.sdk.StringFog;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.MBridgeSDK;
import com.mbridge.msdk.activity.DomainMBCommonActivity;
import com.mbridge.msdk.activity.MBBaseActivity;
import com.mbridge.msdk.activity.MBCommonActivity;
import com.mbridge.msdk.click.CommonJumpLoader;
import com.mbridge.msdk.config.activity.BaseActivity;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.fragment.BaseFragment;
import com.mbridge.msdk.foundation.tools.FastKV;
import com.mbridge.msdk.foundation.tools.MIMManager;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.webview.BrowserView;
import com.mbridge.msdk.foundation.webview.WebViewFragment;
import com.mbridge.msdk.interstitial.signalcommon.interstitial;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.mbridge.msdk.interstitialvideo.out.InterstitialVideoListener;
import com.mbridge.msdk.interstitialvideo.out.MBInterstitialVideoHandler;
import com.mbridge.msdk.mbbanner.view.MBBannerWebView;
import com.mbridge.msdk.mbsignalcommon.base.BaseWebView;
import com.mbridge.msdk.mbsignalcommon.windvane.WindVaneWebView;
import com.mbridge.msdk.newinterstitial.out.NewInterstitialListener;
import com.mbridge.msdk.newout.IMBRRewardVideoHandler;
import com.mbridge.msdk.newout.MBBidRewardVideoHandler;
import com.mbridge.msdk.out.BannerAdListener;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.IDownloadListener;
import com.mbridge.msdk.out.InterstitialListener;
import com.mbridge.msdk.out.LoadingActivity;
import com.mbridge.msdk.out.MBBannerView;
import com.mbridge.msdk.out.MBConfiguration;
import com.mbridge.msdk.out.MBInterstitialHandler;
import com.mbridge.msdk.out.MBRewardVideoHandler;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.MBridgeSDKFactory;
import com.mbridge.msdk.out.NativeListener;
import com.mbridge.msdk.out.OnMBMediaViewListener;
import com.mbridge.msdk.out.RewardInfo;
import com.mbridge.msdk.out.RewardVideoListener;
import com.mbridge.msdk.reward.player.MBRewardVideoActivity;
import com.mbridge.msdk.video.module.MBridgeBaseView;
import com.mbridge.msdk.video.module.MBridgeClickCTAView;
import com.mbridge.msdk.video.module.MBridgeClickMiniCardView;
import com.mbridge.msdk.video.module.MBridgeContainerView;
import com.mbridge.msdk.video.module.MBridgeH5EndCardView;
import com.mbridge.msdk.video.module.MBridgeLandingPageView;
import com.mbridge.msdk.video.module.MBridgeNativeEndCardView;
import com.mbridge.msdk.video.module.MBridgePlayableView;
import com.mbridge.msdk.video.module.MBridgeVastEndCardView;
import com.mbridge.msdk.video.module.MBridgeVideoView;
import com.mbridge.msdk.video.signal.activity.AbstractJSActivity;
import com.mbridge.msdk.videocommon.listener.InterVideoOutListener;
import com.mbridge.msdk.widget.MBImageView;
import java.util.HashMap;
import kotlin.io.encoding.Base64;
import okio.Utf8;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ľ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0199 extends AbstractC1158 {

    /* JADX INFO: renamed from: ঘ, reason: contains not printable characters */
    public static final String f800;

    /* JADX INFO: renamed from: ষ, reason: contains not printable characters */
    public static final String f801;

    /* JADX INFO: renamed from: ঢ়, reason: contains not printable characters */
    public static final String f802;

    /* JADX INFO: renamed from: ฑ, reason: contains not printable characters */
    public static final String f803;

    /* JADX INFO: renamed from: ต, reason: contains not printable characters */
    public static final String f804;

    /* JADX INFO: renamed from: น, reason: contains not printable characters */
    public static final String f805;

    /* JADX INFO: renamed from: ม, reason: contains not printable characters */
    public static final String f806;

    /* JADX INFO: renamed from: อ, reason: contains not printable characters */
    public static final String f807;

    /* JADX INFO: renamed from: ງ, reason: contains not printable characters */
    public static final String f808;

    /* JADX INFO: renamed from: ე, reason: contains not printable characters */
    public static final String f809;

    /* JADX INFO: renamed from: პ, reason: contains not printable characters */
    public static final String f810;

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f858 = StringFog.decrypt("RIvVvWaSxKlRi8SWXYT7\n", "I+6h+Aj2l8o=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f857 = StringFog.decrypt("wqjTAckscM3MqskXxih05cE=\n", "pc2nQqhBAKw=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f856 = StringFog.decrypt("hrEtQzYcWd+MsTdnExk=\n", "4dRZE1p9Oro=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f855 = StringFog.decrypt("xdtzJ7eM2wDQ63UJ\n", "or4HZdbitWU=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f854 = StringFog.decrypt("RkuRJ3KAcdE=\n", "IS7lZhbaGKE=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f853 = StringFog.decrypt("YqDmBWgO76BQt/4Wbwnlq2A=\n", "BcWSUwFqis8=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f852 = StringFog.decrypt("hIH3smLeZEWKkua4dA==\n", "4+SD8RC7BTE=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f851 = StringFog.decrypt("C9tiHJmLsQIA\n", "bL4WXf3DxW8=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f850 = StringFog.decrypt("uKAQVi0/V9StjRB5IA==\n", "38VkFExRObE=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f849 = StringFog.decrypt("nlSJFE7gtkuMQ54h\n", "+TH9RCWH5SQ=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f848 = StringFog.decrypt("/kDg/AkIF4nrSQ==\n", "mSWUtH1le9w=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f847 = StringFog.decrypt("daeUk9TQ5bZNl7aI09ni\n", "OOXX/Lq2jNE=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f846 = StringFog.decrypt("At/aIB2FcV4Z9OwgBaVgTibr4TET\n", "T52IRWrkAzo=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f845 = StringFog.decrypt("K0AvD6it7NESew==\n", "ZgJubNzEmrg=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f844 = StringFog.decrypt("W82tzWE3nOZX7JrLejOH8Q==\n", "Fo/uogxa84g=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f843 = StringFog.decrypt("tD/qaCLEmHqNFNdvN82rao0U1W8i2A==\n", "+X2jBlah6gk=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f842 = StringFog.decrypt("I5CYMiawSwsau6U1M7lxGQC2vTkg\n", "btLRXFLVOXg=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f841 = StringFog.decrypt("v/1bqmTS77GG1matcdvLq5bafYxx2fmul80=\n", "8r8SxBC3ncI=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f840 = StringFog.decrypt("GrXgaAI9VaMzt85eAiV8sDmFy18V\n", "V+GnOmdKNNE=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f839 = StringFog.decrypt("nnkmF1AYXL2FUgEB\n", "0ztkdj52Oc8=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f838 = StringFog.decrypt("ql2sa/nV4GmtVaRr+cT2a+ddtDG6+tBCqFyvIObh+2W+\n", "yTLBRZS3kgA=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f837 = StringFog.decrypt("axukkqsOgM83AYOynAmL3Q==\n", "RVbm0Mpg7qo=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f836 = StringFog.decrypt("XnxbXUKL9UtZdFNdQprjSRN+VBFOh+lHTz1AGkqeqW9/UVcdQYz1dVhxYBpKng==\n", "PRM2cy/phyI=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f835 = StringFog.decrypt("+/Sc96d3bKT9/IO4pjBvo/zw37urbWf+7/6Tr6N7df7a6Z6uuXtwhvH+hg==\n", "mJvx2coeAtA=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f834 = StringFog.decrypt("Wx8y8xsQqWR/OAw=\n", "Fl17nnp3zDI=\n");

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public static final String f833 = StringFog.decrypt("/DvLGGFFDHf7M8MYYVQadbEjz1JrQgow0hbvW21AG0j2MdE=\n", "n1SmNgwnfh4=\n");

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public static final String f832 = StringFog.decrypt("6gRh517DpwrtDGnnXtKxCKcGbrpaxrsC5QhjpF7Ou03rCn+sHeO0EOw8aatlyLAU\n", "iWsMyTOh1WM=\n");

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public static final String f831 = StringFog.decrypt("pPpo/LTxHH+j8mD8tOAKfen4Z6Gw9AB3q/Zqv7T8ADiw/Gu2r/IAc+nCbLy9xQ94osJgsI/6C2E=\n", "x5UF0tmTbhY=\n");

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public static final String f830 = StringFog.decrypt("ICPNkf6rlDQnK8WR/rqCNm06ydv2psgwLCjV0/bnqx8xJcTY9p+POSYj9tb2vg==\n", "Q0ygv5PJ5l0=\n");

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public static final String f829 = StringFog.decrypt("c4LWUES5bw10it5QRKh5Dz6b0hpMtDMJf4nOEkz1UCZihN8ZTI18F2So1Rpqum8ARoTeCQ==\n", "EO27finbHWQ=\n");

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public static final String f828 = StringFog.decrypt("ozErhhscQI+kOSOGGw1Wje4oL8wTERyLrzozxBNQf6SyNyLPEzBTkqkoI+0YGnGHsjoQwRMJ\n", "wF5GqHZ+MuY=\n");

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public static final String f827 = StringFog.decrypt("LJsGpiEfMTdlnA6uIR8gIWfWH6JrFzxrYZcNvmMXfQhOigCvaBcQKWWbAohbMwUsaY8=\n", "DPhpyw9yU0U=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f826 = StringFog.decrypt("CmK8siNp7XQNarSyI3j7dkd7uPgrZLFwBmmk8Csl0l8bZLX7K0n+bgxbuPk5\n", "aQ3RnE4Lnx0=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f825 = StringFog.decrypt("de7AP8/NAoRy5sg/z9wUhjj3xHXHwF6AeeXYfceBPa9k6Ml2x+wchHXq4HjMxjOMZOX7eMfY\n", "FoGtEaKvcO0=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f824 = StringFog.decrypt("v8iBjvjgJcy4wImO+PEzzvLRhcTw7XnIs8OZzPCsGueuzojH8ME4y6jGhc7w8AHMudA=\n", "3KfsoJWCV6U=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f823 = StringFog.decrypt("LVB8EGVVIIEqWHQQZUQ2g2BJeFptWHyFIVtkUm0ZH6o8VnVZbX9nrSBbUl96UwSBK0g=\n", "Tj8RPgg3Uug=\n");

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f822 = StringFog.decrypt("k9RByV+V+eKU3EnJX4Tv4N7NRYNXmKXmn99Zi1fZxsmC0kiAV7vq5ZTSQoBiluzuptJJkA==\n", "8Lss5zL3i4s=\n");

    /* JADX INFO: renamed from: ᕃ, reason: contains not printable characters */
    public static final String f821 = StringFog.decrypt("zjI5hex34PzJOjGF7Gb2/oMrPc/kerz4wjkhx+Q739ffNDDM5EX+9NQ8NsfkQ/vw\n", "rV1Uq4EVkpU=\n");

    /* JADX INFO: renamed from: ᕂ, reason: contains not printable characters */
    public static final String f820 = StringFog.decrypt("77EUhIp8/43BiTCjsFXyl9S6N6O1\n", "oN9ZxscZm+Q=\n");

    /* JADX INFO: renamed from: ᔽ, reason: contains not printable characters */
    public static final String f819 = StringFog.decrypt("/qyib4nu3gD5rKJjj+7SAc6quWeU+Q==\n", "usPPDuCAk2I=\n");

    /* JADX INFO: renamed from: ᔺ, reason: contains not printable characters */
    public static final String f818 = StringFog.decrypt("xMAauefbw17DyBK558rVXInOFOPjz9hD3oEz+OfY2Fnq7TT459TeWebMA/780MVO\n", "p693l4q5sTc=\n");

    /* JADX INFO: renamed from: ᔹ, reason: contains not printable characters */
    public static final String f817 = StringFog.decrypt("12yfjMTgb3jXbLut5/FjcdVnn4ji\n", "sAnrwYaSBhw=\n");

    /* JADX INFO: renamed from: ᔲ, reason: contains not printable characters */
    public static final String f816 = StringFog.decrypt("R4JJioEcCeNHgmipqhop4w==\n", "IOc9x8NuYIc=\n");

    /* JADX INFO: renamed from: ᔱ, reason: contains not printable characters */
    public static final String f815 = StringFog.decrypt("qtMMKZiwxzqAzzM8g7TBO5XJOzs=\n", "w6BeTO/RtV4=\n");

    /* JADX INFO: renamed from: ᓮ, reason: contains not printable characters */
    public static final String f814 = StringFog.decrypt("z5WyAG+1Yh3Mvqc/bw==\n", "qPDGUgrCA28=\n");

    /* JADX INFO: renamed from: ᐱ, reason: contains not printable characters */
    public static final String f813 = StringFog.decrypt("tjsBy/fVXdK1Hxj258xI\n", "0V51mZKiPKA=\n");

    /* JADX INFO: renamed from: Ꮭ, reason: contains not printable characters */
    public static final String f812 = StringFog.decrypt("Gt5NDM49LkUz7w==\n", "V5w/ZapaSww=\n");

    /* JADX INFO: renamed from: Ꮧ, reason: contains not printable characters */
    public static final String f811 = StringFog.decrypt("DlvNxTU5R5M6UQ==\n", "XD66pEddDv0=\n");

    static {
        StringFog.decrypt("15/jiyhwMOz+nc29KGgZ//SvyLw/\n", "msuk2U0HUZ4=\n");
        f810 = StringFog.decrypt("MqaHSK5LPWIelqF3o309ejeFq0WmfCo=\n", "f+TFIcoZWBU=\n");
        f809 = StringFog.decrypt("kkExnV/3T1epaCWmafdXfrpiF6No4A==\n", "2wxzzw2SODY=\n");
        f808 = StringFog.decrypt("eoD4TL2vt7JQs+Z6vbeaqUeR6nC9qg==\n", "NOWPHtjY1sA=\n");
        f807 = StringFog.decrypt("qYQzbY+eudeGkyB2pKi5z6aCMEm7pajZ\n", "5+FEIM3M3KA=\n");
        f806 = StringFog.decrypt("LFp1L6T/RsMrUn0vpO5QwWFWd2+v9FOELlZsaL/0QNNhe312hN9mzzhUamWf9FDPIHR7daDrXd42\n", "TzUYAcmdNKo=\n");
        f805 = StringFog.decrypt("Yg1YK0roM7FPHEYfQu8v\n", "LGgvaSubVvA=\n");
        f804 = StringFog.decrypt("6paF/VuRsVrtno39W4CnWKeah71QmqQd6JqcukCat0qnt42kdJKwVsianLpAmrdK\n", "ifno0zbzwzM=\n");
        f803 = StringFog.decrypt("6r60W5oBgCXChQ==\n", "p/f5Fvtv4UI=\n");
        f802 = StringFog.decrypt("A5CVN7WR\n", "RfHmQ/7H1Ok=\n");
        f801 = StringFog.decrypt("7j9T1qQUsw==\n", "vV4+s+lQhmQ=\n");
        f800 = StringFog.decrypt("bZLkZXlAUKNQg/pYflVZnUqE50l5UUc=\n", "I/eTLBc0NdE=\n");
    }

    public C0199(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(StringFog.decrypt("UQCnAJ8Z7T9RF7IhpTPS\n", "NmXTTfZ3mVo=\n"), new C0387(this));
        map.put(StringFog.decrypt("KZmlMzNOa6QpmZ8CP0g=\n", "TvzRY1ItAMU=\n"), new C0317(this));
        map.put(StringFog.decrypt("OYRk9O2dj4ULk3w=\n", "XuEQt4H07O4=\n"), new C0310(this));
        map.put(StringFog.decrypt("KzSkFgvFRUQ1IbU=\n", "TFHQWmKrLhA=\n"), new C0281(this));
        map.put(StringFog.decrypt("4xUwuwhE2UzRAig=\n", "hHBE8mUlvik=\n"), new C0258(this));
        map.put(StringFog.decrypt("vOXjo7msphyp7A==\n", "24CX6trDyEk=\n"), new C0256(this));
        map.put(StringFog.decrypt("kEmlq18Wyg==\n", "9yzR6jtfrvY=\n"), new C0246(this));
        map.put(StringFog.decrypt("7dFmkonsvors4nu1n8O0o/fHZrWG56I=\n", "nrQS0OiC0O8=\n"), new C0243(this));
        map.put(StringFog.decrypt("Kx1144JDjigp\n", "THgBouYX91g=\n"), new C0227(this));
        map.put(f858, new C0679(this));
        map.put(f857, new C0677(this));
        map.put(f856, new C0576(this));
        map.put(f855, new C0542(this));
        map.put(f854, new C0477(this));
        map.put(f853, new C0476(this));
        map.put(f852, new C0454(this));
        map.put(f851, new C0447(this));
        map.put(f850, new C0431(this));
        map.put(f849, new C0430(this));
        map.put(f848, new C0383(this));
        map.put(f817, new C0374(this));
        map.put(f816, new C0372(this));
        map.put(f815, new C0371(this));
        map.put(f814, new C0358(this));
        map.put(f813, new C0352(this));
        map.put(StringFog.decrypt("S3MyZERV4dlJQC9OQE7c3U11LUNLRtvbXn8oTQ==\n", "LBZGKiUhiK8=\n"), new C0351(this));
        return map;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final String mo8325() {
        C0493 c0493 = C0705.m8630().f2438;
        String strDecrypt = StringFog.decrypt("DJSX+UWw1rdGlZezUbCcwQyU\n", "Ir7LnW7s+Os=\n");
        c0493.getClass();
        return C0493.m8552((Object) null, MBConfiguration.class, strDecrypt);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        byte b2 = 5;
        switch (str.hashCode()) {
            case -2107186802:
                b = !str.equals(StringFog.decrypt("V9Pa03uQHcBV293OaJs51g==\n", "GbKuug31XKQ=\n")) ? (byte) -1 : Ascii.SYN;
                break;
            case -1980005015:
                b = !str.equals(StringFog.decrypt("IaSMx4kNQYcEoIn8hQZC\n", "dsHukeBoNsE=\n")) ? (byte) -1 : Ascii.ESC;
                break;
            case -1945308362:
                b = !str.equals(f828) ? (byte) -1 : (byte) 45;
                break;
            case -1940754118:
                b = !str.equals(StringFog.decrypt("iJ1hIyHDjiqDrFM0J8ubN72G\n", "yf8SV1Oi7V4=\n")) ? (byte) -1 : (byte) 3;
                break;
            case -1874906197:
                b = !str.equals(StringFog.decrypt("qZrWy4BbNnWIpdnMkXkqcKeSytuzVSFj\n", "5PO4v+U8RBQ=\n")) ? (byte) -1 : (byte) 42;
                break;
            case -1850171958:
                b = !str.equals(f837) ? (byte) -1 : Ascii.SI;
                break;
            case -1766796574:
                b = !str.equals(StringFog.decrypt("rQsw74YmoCiCCS/vniS4M5AeIeiVMQ==\n", "42pEhvBD9Fo=\n")) ? (byte) -1 : Ascii.NAK;
                break;
            case -1728440643:
                b = !str.equals(f830) ? (byte) -1 : (byte) 41;
                break;
            case -1702626105:
                b = !str.equals(StringFog.decrypt("8+K62gSi4FPS3b3KBKrEW9v8\n", "vovUrmHFkjI=\n")) ? (byte) -1 : (byte) 40;
                break;
            case -1679044855:
                b = !str.equals(f820) ? (byte) -1 : (byte) 60;
                break;
            case -1656370481:
                b = !str.equals(StringFog.decrypt("DjXoPryZ8VQOOeQMg53o\n", "WVyGWur4nzE=\n")) ? (byte) -1 : (byte) 38;
                break;
            case -1358506046:
                b = !str.equals(f838) ? (byte) -1 : Ascii.SO;
                break;
            case -1355055839:
                b = !str.equals(f829) ? (byte) -1 : (byte) 43;
                break;
            case -1346045035:
                b = !str.equals(f832) ? (byte) -1 : (byte) 37;
                break;
            case -1119480813:
                b = !str.equals(f819) ? (byte) -1 : Utf8.REPLACEMENT_BYTE;
                break;
            case -1091491584:
                b = !str.equals(f836) ? (byte) -1 : Ascii.DLE;
                break;
            case -1058625022:
                b = !str.equals(StringFog.decrypt("V92yb90U3ql3wKdg3wzVmEXXoWjKEeuy\n", "BLTVAbx4n8s=\n")) ? (byte) -1 : (byte) 62;
                break;
            case -920590771:
                b = !str.equals(StringFog.decrypt("8M+EN9/SFLnR5YUtztQPttjUvCrfwg==\n", "vabqQ7q1Ztg=\n")) ? (byte) -1 : (byte) 52;
                break;
            case -894298414:
                b = !str.equals(StringFog.decrypt("4akNR4MlGTvAjAJdgisFPfyhBFawKw4t\n", "rMBjM+ZCa1o=\n")) ? (byte) -1 : (byte) 56;
                break;
            case -667901878:
                b = !str.equals(StringFog.decrypt("cR28KkUp519QPOcbTirWX04QhDdFOQ==\n", "PHTSXiBOlT4=\n")) ? (byte) -1 : (byte) 54;
                break;
            case -610610019:
                b = !str.equals(f811) ? (byte) -1 : (byte) 66;
                break;
            case -495785498:
                b = !str.equals(f846) ? (byte) -1 : (byte) 2;
                break;
            case -453012127:
                b = !str.equals(f847) ? (byte) -1 : (byte) 0;
                break;
            case -374448056:
                b = !str.equals(f822) ? (byte) -1 : (byte) 57;
                break;
            case -323393690:
                b = !str.equals(f839) ? (byte) -1 : Ascii.CR;
                break;
            case -239039370:
                b = !str.equals(f818) ? (byte) -1 : SignedBytes.MAX_POWER_OF_TWO;
                break;
            case -156796625:
                b = !str.equals(StringFog.decrypt("iWPh+f8TF92oSO7+/yIM2bM=\n", "xAqPjZp0Zbw=\n")) ? (byte) -1 : (byte) 48;
                break;
            case -126256187:
                b = !str.equals(StringFog.decrypt("AGOVCy/q/Wcta5MPNeP8Yzs=\n", "SSf6fEGGkgY=\n")) ? (byte) -1 : (byte) 34;
                break;
            case -121577375:
                b = !str.equals(StringFog.decrypt("r8PxRODDwCOO2dt7\n", "4oqfMIWkskI=\n")) ? (byte) -1 : Ascii.US;
                break;
            case -75274960:
                b = !str.equals(StringFog.decrypt("BqH4IiKl6yw=\n", "RcCVUkPMjEI=\n")) ? (byte) -1 : (byte) 6;
                break;
            case -33766813:
                b = !str.equals(StringFog.decrypt("cupdrNvtlxRP7Uil//eHGFTIQLrd+40YSQ==\n", "O4Qpyame430=\n")) ? (byte) -1 : (byte) 9;
                break;
            case 114573451:
                b = !str.equals(f834) ? (byte) -1 : Ascii.GS;
                break;
            case 154057692:
                b = !str.equals(StringFog.decrypt("XGHk71QpUT19a+X1QjpCMmI=\n", "ESiKmzFOI1w=\n")) ? (byte) -1 : (byte) 32;
                break;
            case 174921027:
                b = !str.equals(f824) ? (byte) -1 : (byte) 53;
                break;
            case 329817920:
                b = !str.equals(StringFog.decrypt("IaEhAHxPyl0XoTktZ1joUR2hJA==\n", "c8RWYQ4rnDQ=\n")) ? (byte) -1 : (byte) 10;
                break;
            case 336960212:
                b = !str.equals(StringFog.decrypt("HICWwQy/VGYKj5LF\n", "X+H7sW3WMwg=\n")) ? (byte) -1 : Ascii.ETB;
                break;
            case 373899945:
                b = !str.equals(f842) ? (byte) -1 : (byte) 17;
                break;
            case 427609920:
                b = !str.equals(f823) ? (byte) -1 : (byte) 55;
                break;
            case 604727084:
                b = !str.equals(StringFog.decrypt("r031qe3dMKmySuCg\n", "xiOBzJ+uRMA=\n")) ? (byte) -1 : (byte) 35;
                break;
            case 675209731:
                b = !str.equals(StringFog.decrypt("s9IAJdOx/QK1yw==\n", "8LNtVbLYmmw=\n")) ? (byte) -1 : (byte) 7;
                break;
            case 713779451:
                b = !str.equals(StringFog.decrypt("Q3SJVbG2AOliXotIt7o/4WB0pECmtSTha2o=\n", "Dh3nIdTRcog=\n")) ? (byte) -1 : (byte) 50;
                break;
            case 745946635:
                b = !str.equals(StringFog.decrypt("OW6ScwSQT9kEe4N0F4c=\n", "dw/mGnL1A7A=\n")) ? (byte) -1 : Ascii.DC4;
                break;
            case 824636291:
                b = !str.equals(StringFog.decrypt("c/IwuH6Uwxhf8wuoeI7DD075Krh+\n", "OpxE3QzCqnw=\n")) ? (byte) -1 : (byte) 8;
                break;
            case 858158177:
                b = !str.equals(f821) ? (byte) -1 : (byte) 59;
                break;
            case 888727913:
                b = !str.equals(StringFog.decrypt("cqv+9etKI/NTsdTKyEwy5lCQ6Q==\n", "P+KQgY4tUZI=\n")) ? (byte) -1 : (byte) 1;
                break;
            case 892841421:
                b = !str.equals(StringFog.decrypt("ffa8EFYaXJNW4aQ=\n", "P4TTZyV/LsU=\n")) ? (byte) -1 : Ascii.EM;
                break;
            case 897829864:
                b = !str.equals(StringFog.decrypt("zMdffT/3HBbnw1s=\n", "jqYsGGiSfkA=\n")) ? (byte) -1 : (byte) 36;
                break;
            case 950749305:
                b = !str.equals(f826) ? (byte) -1 : (byte) 49;
                break;
            case 989671232:
                b = !str.equals(StringFog.decrypt("NdHMjYR9F2AU9sONiGwARBbc4ZiTfjNoHc8=\n", "eLii+eEaZQE=\n")) ? (byte) -1 : (byte) 44;
                break;
            case 1014009286:
                b = !str.equals(StringFog.decrypt("QO8Mxotpl8BhxQ7bjWWm9UzQC9eZ\n", "DYZisu4O5aE=\n")) ? (byte) -1 : (byte) 46;
                break;
            case 1050400725:
                b = !str.equals(f831) ? (byte) -1 : (byte) 39;
                break;
            case 1074855404:
                b = !str.equals(StringFog.decrypt("wxIHjsAq6jfiKwWb3Cz6OustAJ/S\n", "jntp+qVNmFY=\n")) ? (byte) -1 : (byte) 58;
                break;
            case 1118286493:
                b = !str.equals(f833) ? (byte) -1 : Ascii.RS;
                break;
            case 1139753057:
                b = !str.equals(StringFog.decrypt("22RrQvaLtPb0YHZT\n", "mQUYJ7D51ZE=\n")) ? (byte) -1 : Ascii.CAN;
                break;
            case 1297340448:
                b = !str.equals(StringFog.decrypt("LqZNdtCo13IToVh/7rLQbwKmXGE=\n", "Z8g5E6Lboxs=\n")) ? (byte) -1 : Ascii.FF;
                break;
            case 1331885131:
                b = !str.equals(StringFog.decrypt("UQ61hvzvJc1+Fb2U/PU7\n", "HWHU4pWBQow=\n")) ? (byte) -1 : (byte) 33;
                break;
            case 1342927760:
                b = !str.equals(f843) ? (byte) -1 : (byte) 11;
                break;
            case 1357502028:
                b = !str.equals(StringFog.decrypt("02M+/ul9Nl39fB/853cZWg==\n", "kAxTk4YTfCg=\n")) ? (byte) -1 : Ascii.FS;
                break;
            case 1424096196:
                b = !str.equals(f845) ? (byte) -1 : (byte) 4;
                break;
            case 1492060322:
                b = !str.equals(f812) ? (byte) -1 : (byte) 65;
                break;
            case 1505622627:
                b = !str.equals(StringFog.decrypt("zDPe2pf301DCO8PAl+v3Rg==\n", "jlKwtPKFkjQ=\n")) ? (byte) -1 : Base64.padSymbol;
                break;
            case 1664904176:
                b = !str.equals(f827) ? (byte) -1 : (byte) 47;
                break;
            case 1855930960:
                b = !str.equals(f841) ? (byte) -1 : Ascii.DC2;
                break;
            case 1884374718:
                b = !str.equals(f840) ? (byte) -1 : (byte) 19;
                break;
            case 2041991951:
                b = !str.equals(f844) ? (byte) -1 : (byte) 5;
                break;
            case 2073767153:
                b = !str.equals(f825) ? (byte) -1 : (byte) 51;
                break;
            case 2118015322:
                b = !str.equals(f835) ? (byte) -1 : Ascii.SUB;
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return MBConfiguration.class;
            case 1:
                return MBridgeSDKFactory.class;
            case 2:
                return MBRewardVideoActivity.class;
            case 3:
                return AbstractJSActivity.class;
            case 4:
                return MBBaseActivity.class;
            case 5:
                return MBCommonActivity.class;
            case 6:
                return Campaign.class;
            case 7:
                return CampaignEx.class;
            case 8:
                return InterVideoOutListener.class;
            case 9:
                return InterstitialVideoListener.class;
            case 10:
                return RewardVideoListener.class;
            case 11:
                return MBInterstitialActivity.class;
            case 12:
                return InterstitialListener.class;
            case 13:
            case 14:
                return MBBannerView.class;
            case 15:
            case 16:
                return MBBannerWebView.class;
            case 17:
                return MBInterstitialHandler.class;
            case 18:
                return MBInterstitialVideoHandler.class;
            case 19:
                return MBRewardVideoHandler.class;
            case 20:
                return NativeListener.class;
            case 21:
                return NativeListener.NativeTrackingListener.class;
            case 22:
                return NativeListener.NativeAdListener.class;
            case 23:
                return CampaignUnit.class;
            case 24:
                return BaseFragment.class;
            case 25:
            case 26:
                return BrowserView.class;
            case 27:
                return WebViewFragment.class;
            case 28:
                return CommonJumpLoader.class;
            case 29:
            case 30:
                return MBImageView.class;
            case 31:
                return MBridgeSDK.class;
            case 32:
                return MBridgeConstans.class;
            case 33:
                return LoadingActivity.class;
            case 34:
                return IDownloadListener.class;
            case 35:
                return interstitial.class;
            case 36:
            case 37:
                return BaseWebView.class;
            case 38:
            case 39:
                return WindVaneWebView.class;
            case 40:
            case 41:
                return MBridgeVideoView.class;
            case 42:
            case 43:
                return MBridgeVastEndCardView.class;
            case 44:
            case 45:
                return MBridgeNativeEndCardView.class;
            case 46:
            case 47:
                return MBridgeClickCTAView.class;
            case 48:
            case 49:
                return MBridgeBaseView.class;
            case 50:
            case 51:
                return MBridgeClickMiniCardView.class;
            case 52:
            case 53:
                return MBridgeContainerView.class;
            case 54:
            case 55:
                return MBridgeH5EndCardView.class;
            case 56:
            case 57:
                return MBridgeLandingPageView.class;
            case 58:
            case 59:
                return MBridgePlayableView.class;
            case 60:
                return OnMBMediaViewListener.class;
            case 61:
                return BannerAdListener.class;
            case 62:
                return AbstractJSActivity.class;
            case 63:
            case 64:
                return DomainMBCommonActivity.class;
            case 65:
                return MBridgeIds.class;
            case 66:
                return RewardInfo.class;
            default:
                switch (str.hashCode()) {
                    case -1789471684:
                        b2 = !str.equals(f803) ? (byte) -1 : (byte) 8;
                        break;
                    case -1613020512:
                        b2 = !str.equals(f805) ? (byte) -1 : (byte) 6;
                        break;
                    case -1258619456:
                        b2 = !str.equals(f808) ? (byte) -1 : (byte) 3;
                        break;
                    case -828904331:
                        if (!str.equals(f806)) {
                            b2 = -1;
                        }
                        break;
                    case -765829320:
                        b2 = !str.equals(f801) ? (byte) -1 : (byte) 10;
                        break;
                    case -699577952:
                        b2 = !str.equals(f800) ? (byte) -1 : (byte) 11;
                        break;
                    case 450781617:
                        b2 = !str.equals(f804) ? (byte) -1 : (byte) 7;
                        break;
                    case 834115686:
                        b2 = !str.equals(f810) ? (byte) -1 : (byte) 1;
                        break;
                    case 1499766450:
                        b2 = !str.equals(f809) ? (byte) -1 : (byte) 2;
                        break;
                    case 1884374718:
                        b2 = !str.equals(f840) ? (byte) -1 : (byte) 0;
                        break;
                    case 2024253542:
                        b2 = !str.equals(f807) ? (byte) -1 : (byte) 4;
                        break;
                    case 2097161959:
                        b2 = !str.equals(f802) ? (byte) -1 : (byte) 9;
                        break;
                    default:
                        b2 = -1;
                        break;
                }
                switch (b2) {
                    case 0:
                        return com.mbridge.msdk.newout.MBRewardVideoHandler.class;
                    case 1:
                        return MBBidRewardVideoHandler.class;
                    case 2:
                        return IMBRRewardVideoHandler.class;
                    case 3:
                        return com.mbridge.msdk.newout.RewardVideoListener.class;
                    case 4:
                    case 5:
                        return com.mbridge.msdk.config.activity.MBRewardVideoActivity.class;
                    case 6:
                    case 7:
                        return BaseActivity.class;
                    case 8:
                        return MIMManager.class;
                    case 9:
                        return FastKV.class;
                    case 10:
                        return SameMD5.class;
                    case 11:
                        return NewInterstitialListener.class;
                    default:
                        return null;
                }
        }
    }
}
