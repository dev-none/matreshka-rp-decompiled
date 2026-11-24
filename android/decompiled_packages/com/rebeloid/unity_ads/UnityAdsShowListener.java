package com.rebeloid.unity_ads;

import com.unity3d.ads.IUnityAdsShowListener;
import com.unity3d.ads.UnityAds;

/* JADX INFO: loaded from: classes6.dex */
public class UnityAdsShowListener implements IUnityAdsShowListener {
    private final PlacementChannelManager placementChannelManager;

    public UnityAdsShowListener(PlacementChannelManager placementChannelManager) {
        this.placementChannelManager = placementChannelManager;
    }

    @Override // com.unity3d.ads.IUnityAdsShowListener
    public void onUnityAdsShowFailure(String str, UnityAds.UnityAdsShowError unityAdsShowError, String str2) {
        this.placementChannelManager.invokeMethod(UnityAdsConstants.SHOW_FAILED_METHOD, str, convertError(unityAdsShowError), str2);
    }

    @Override // com.unity3d.ads.IUnityAdsShowListener
    public void onUnityAdsShowStart(String str) {
        this.placementChannelManager.invokeMethod(UnityAdsConstants.SHOW_START_METHOD, str);
    }

    @Override // com.unity3d.ads.IUnityAdsShowListener
    public void onUnityAdsShowClick(String str) {
        this.placementChannelManager.invokeMethod(UnityAdsConstants.SHOW_CLICK_METHOD, str);
    }

    @Override // com.unity3d.ads.IUnityAdsShowListener
    public void onUnityAdsShowComplete(String str, UnityAds.UnityAdsShowCompletionState unityAdsShowCompletionState) {
        if (unityAdsShowCompletionState == UnityAds.UnityAdsShowCompletionState.SKIPPED) {
            this.placementChannelManager.invokeMethod(UnityAdsConstants.SHOW_SKIPPED_METHOD, str);
        } else if (unityAdsShowCompletionState == UnityAds.UnityAdsShowCompletionState.COMPLETED) {
            this.placementChannelManager.invokeMethod(UnityAdsConstants.SHOW_COMPLETE_METHOD, str);
        }
    }

    /* JADX INFO: renamed from: com.rebeloid.unity_ads.UnityAdsShowListener$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsShowError;

        static {
            int[] iArr = new int[UnityAds.UnityAdsShowError.values().length];
            $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsShowError = iArr;
            try {
                iArr[UnityAds.UnityAdsShowError.NOT_INITIALIZED.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsShowError[UnityAds.UnityAdsShowError.NOT_READY.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsShowError[UnityAds.UnityAdsShowError.VIDEO_PLAYER_ERROR.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsShowError[UnityAds.UnityAdsShowError.INVALID_ARGUMENT.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsShowError[UnityAds.UnityAdsShowError.NO_CONNECTION.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsShowError[UnityAds.UnityAdsShowError.ALREADY_SHOWING.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsShowError[UnityAds.UnityAdsShowError.INTERNAL_ERROR.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsShowError[UnityAds.UnityAdsShowError.TIMEOUT.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
        }
    }

    private String convertError(UnityAds.UnityAdsShowError unityAdsShowError) {
        switch (AnonymousClass1.$SwitchMap$com$unity3d$ads$UnityAds$UnityAdsShowError[unityAdsShowError.ordinal()]) {
            case 1:
                return "notInitialized";
            case 2:
                return "notReady";
            case 3:
                return "videoPlayerError";
            case 4:
                return "invalidArgument";
            case 5:
                return "noConnection";
            case 6:
                return "alreadyShowing";
            case 7:
                return "internalError";
            case 8:
                return "timeout";
            default:
                return "";
        }
    }
}
