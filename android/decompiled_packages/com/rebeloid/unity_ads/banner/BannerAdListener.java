package com.rebeloid.unity_ads.banner;

import com.rebeloid.unity_ads.UnityAdsConstants;
import com.unity3d.services.banners.BannerErrorCode;
import com.unity3d.services.banners.BannerErrorInfo;
import com.unity3d.services.banners.BannerView;
import io.flutter.plugin.common.MethodChannel;
import java.util.HashMap;

/* JADX INFO: loaded from: classes6.dex */
class BannerAdListener implements BannerView.IListener {
    private final MethodChannel channel;

    @Override // com.unity3d.services.banners.BannerView.IListener
    public void onBannerLeftApplication(BannerView bannerView) {
    }

    public BannerAdListener(MethodChannel methodChannel) {
        this.channel = methodChannel;
    }

    @Override // com.unity3d.services.banners.BannerView.IListener
    public void onBannerLoaded(BannerView bannerView) {
        HashMap map = new HashMap();
        map.put("placementId", bannerView.getPlacementId());
        this.channel.invokeMethod(UnityAdsConstants.BANNER_LOADED_METHOD, map);
    }

    @Override // com.unity3d.services.banners.BannerView.IListener
    public void onBannerShown(BannerView bannerView) {
        HashMap map = new HashMap();
        map.put("placementId", bannerView.getPlacementId());
        this.channel.invokeMethod(UnityAdsConstants.BANNER_SHOWN_METHOD, map);
    }

    @Override // com.unity3d.services.banners.BannerView.IListener
    public void onBannerClick(BannerView bannerView) {
        HashMap map = new HashMap();
        map.put("placementId", bannerView.getPlacementId());
        this.channel.invokeMethod(UnityAdsConstants.BANNER_CLICKED_METHOD, map);
    }

    @Override // com.unity3d.services.banners.BannerView.IListener
    public void onBannerFailedToLoad(BannerView bannerView, BannerErrorInfo bannerErrorInfo) {
        HashMap map = new HashMap();
        map.put("placementId", bannerView.getPlacementId());
        map.put("errorCode", convertError(bannerErrorInfo));
        map.put("errorMessage", bannerErrorInfo.errorMessage);
        this.channel.invokeMethod(UnityAdsConstants.BANNER_ERROR_METHOD, map);
    }

    /* JADX INFO: renamed from: com.rebeloid.unity_ads.banner.BannerAdListener$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$unity3d$services$banners$BannerErrorCode;

        static {
            int[] iArr = new int[BannerErrorCode.values().length];
            $SwitchMap$com$unity3d$services$banners$BannerErrorCode = iArr;
            try {
                iArr[BannerErrorCode.UNKNOWN.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$unity3d$services$banners$BannerErrorCode[BannerErrorCode.NATIVE_ERROR.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$unity3d$services$banners$BannerErrorCode[BannerErrorCode.WEBVIEW_ERROR.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$unity3d$services$banners$BannerErrorCode[BannerErrorCode.NO_FILL.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
        }
    }

    private String convertError(BannerErrorInfo bannerErrorInfo) {
        int i = AnonymousClass1.$SwitchMap$com$unity3d$services$banners$BannerErrorCode[bannerErrorInfo.errorCode.ordinal()];
        if (i == 1) {
            return "unknown";
        }
        if (i == 2) {
            return "native";
        }
        if (i == 3) {
            return "webView";
        }
        if (i == 4) {
            return "noFill";
        }
        return "";
    }
}
