package com.rebeloid.unity_ads;

import com.unity3d.ads.IUnityAdsLoadListener;
import com.unity3d.ads.UnityAds;

/* JADX INFO: loaded from: classes6.dex */
public class UnityAdsLoadListener implements IUnityAdsLoadListener {
    private final PlacementChannelManager placementChannelManager;

    public UnityAdsLoadListener(PlacementChannelManager placementChannelManager) {
        this.placementChannelManager = placementChannelManager;
    }

    @Override // com.unity3d.ads.IUnityAdsLoadListener
    public void onUnityAdsAdLoaded(String str) {
        this.placementChannelManager.invokeMethod(UnityAdsConstants.LOAD_COMPLETE_METHOD, str);
    }

    @Override // com.unity3d.ads.IUnityAdsLoadListener
    public void onUnityAdsFailedToLoad(String str, UnityAds.UnityAdsLoadError unityAdsLoadError, String str2) {
        this.placementChannelManager.invokeMethod(UnityAdsConstants.LOAD_FAILED_METHOD, str, convertError(unityAdsLoadError), str2);
    }

    /* JADX INFO: renamed from: com.rebeloid.unity_ads.UnityAdsLoadListener$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsLoadError;

        static {
            int[] iArr = new int[UnityAds.UnityAdsLoadError.values().length];
            $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsLoadError = iArr;
            try {
                iArr[UnityAds.UnityAdsLoadError.INITIALIZE_FAILED.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsLoadError[UnityAds.UnityAdsLoadError.INTERNAL_ERROR.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsLoadError[UnityAds.UnityAdsLoadError.INVALID_ARGUMENT.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsLoadError[UnityAds.UnityAdsLoadError.NO_FILL.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsLoadError[UnityAds.UnityAdsLoadError.TIMEOUT.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }

    private String convertError(UnityAds.UnityAdsLoadError unityAdsLoadError) {
        int i = AnonymousClass1.$SwitchMap$com$unity3d$ads$UnityAds$UnityAdsLoadError[unityAdsLoadError.ordinal()];
        if (i == 1) {
            return "initializeFailed";
        }
        if (i == 2) {
            return "internalError";
        }
        if (i == 3) {
            return "invalidArgument";
        }
        if (i == 4) {
            return "noFill";
        }
        if (i == 5) {
            return "timeout";
        }
        return "";
    }
}
