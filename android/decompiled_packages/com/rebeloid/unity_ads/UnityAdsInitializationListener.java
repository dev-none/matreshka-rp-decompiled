package com.rebeloid.unity_ads;

import com.unity3d.ads.IUnityAdsInitializationListener;
import com.unity3d.ads.UnityAds;
import io.flutter.plugin.common.MethodChannel;
import java.util.HashMap;

/* JADX INFO: loaded from: classes6.dex */
public class UnityAdsInitializationListener implements IUnityAdsInitializationListener {
    private final MethodChannel channel;

    public UnityAdsInitializationListener(MethodChannel methodChannel) {
        this.channel = methodChannel;
    }

    @Override // com.unity3d.ads.IUnityAdsInitializationListener
    public void onInitializationComplete() {
        this.channel.invokeMethod(UnityAdsConstants.INIT_COMPLETE_METHOD, new HashMap());
    }

    @Override // com.unity3d.ads.IUnityAdsInitializationListener
    public void onInitializationFailed(UnityAds.UnityAdsInitializationError unityAdsInitializationError, String str) {
        HashMap map = new HashMap();
        map.put("errorCode", convertError(unityAdsInitializationError));
        map.put("errorMessage", str);
        this.channel.invokeMethod(UnityAdsConstants.INIT_FAILED_METHOD, map);
    }

    /* JADX INFO: renamed from: com.rebeloid.unity_ads.UnityAdsInitializationListener$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsInitializationError;

        static {
            int[] iArr = new int[UnityAds.UnityAdsInitializationError.values().length];
            $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsInitializationError = iArr;
            try {
                iArr[UnityAds.UnityAdsInitializationError.INTERNAL_ERROR.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsInitializationError[UnityAds.UnityAdsInitializationError.INVALID_ARGUMENT.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$unity3d$ads$UnityAds$UnityAdsInitializationError[UnityAds.UnityAdsInitializationError.AD_BLOCKER_DETECTED.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    private String convertError(UnityAds.UnityAdsInitializationError unityAdsInitializationError) {
        int i = AnonymousClass1.$SwitchMap$com$unity3d$ads$UnityAds$UnityAdsInitializationError[unityAdsInitializationError.ordinal()];
        if (i == 1) {
            return "internalError";
        }
        if (i == 2) {
            return "invalidArgument";
        }
        if (i == 3) {
            return "adBlockerDetected";
        }
        return "";
    }
}
