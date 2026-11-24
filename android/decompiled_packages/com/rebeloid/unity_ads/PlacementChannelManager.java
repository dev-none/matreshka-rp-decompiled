package com.rebeloid.unity_ads;

import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodChannel;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class PlacementChannelManager {
    private final BinaryMessenger binaryMessenger;
    private final Map<String, MethodChannel> placementChannels = new HashMap();
    private final Map<String, UnityAdsLoadListener> loadListeners = new HashMap();
    private final Map<String, UnityAdsShowListener> showListeners = new HashMap();

    public PlacementChannelManager(BinaryMessenger binaryMessenger) {
        this.binaryMessenger = binaryMessenger;
    }

    public UnityAdsLoadListener getOrCreateLoadListener(String str) {
        UnityAdsLoadListener unityAdsLoadListener = this.loadListeners.get(str);
        if (unityAdsLoadListener != null) {
            return unityAdsLoadListener;
        }
        UnityAdsLoadListener unityAdsLoadListener2 = new UnityAdsLoadListener(this);
        this.loadListeners.put(str, unityAdsLoadListener2);
        return unityAdsLoadListener2;
    }

    public UnityAdsShowListener getOrCreateShowListener(String str) {
        UnityAdsShowListener unityAdsShowListener = this.showListeners.get(str);
        if (unityAdsShowListener != null) {
            return unityAdsShowListener;
        }
        UnityAdsShowListener unityAdsShowListener2 = new UnityAdsShowListener(this);
        this.showListeners.put(str, unityAdsShowListener2);
        return unityAdsShowListener2;
    }

    public void invokeMethod(String str, String str2) {
        invokeMethod(str, str2, new HashMap());
    }

    public void invokeMethod(String str, String str2, String str3, String str4) {
        HashMap map = new HashMap();
        map.put("errorCode", str3);
        map.put("errorMessage", str4);
        invokeMethod(str, str2, map);
    }

    public void invokeMethod(String str, String str2, Map<String, String> map) {
        map.put("placementId", str2);
        MethodChannel methodChannel = this.placementChannels.get(str2);
        if (methodChannel == null) {
            methodChannel = new MethodChannel(this.binaryMessenger, "com.rebeloid.unity_ads/videoAd_" + str2);
            this.placementChannels.put(str2, methodChannel);
        }
        methodChannel.invokeMethod(str, map);
    }
}
