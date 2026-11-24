package com.rebeloid.unity_ads;

import android.app.Activity;
import android.content.Context;
import android.provider.Settings;
import android.util.Log;
import com.rebeloid.unity_ads.banner.BannerAdFactory;
import com.rebeloid.unity_ads.privacy.PrivacyConsent;
import com.unity3d.ads.UnityAds;
import com.unity3d.ads.core.domain.AndroidGetIsModulesInitEnabled;
import com.unity3d.ads.metadata.PlayerMetaData;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.embedding.engine.plugins.activity.ActivityAware;
import io.flutter.embedding.engine.plugins.activity.ActivityPluginBinding;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class UnityAdsPlugin implements FlutterPlugin, MethodChannel.MethodCallHandler, ActivityAware {
    private static final String TAG = "com.rebeloid.unity_ads.UnityAdsPlugin";
    private Activity activity;
    private BannerAdFactory bannerAdFactory;
    private MethodChannel channel;
    private Context context;
    private PlacementChannelManager placementChannelManager;
    private PrivacyConsent privacyConsent;

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivity() {
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivityForConfigChanges() {
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onReattachedToActivityForConfigChanges(ActivityPluginBinding activityPluginBinding) {
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        MethodChannel methodChannel = new MethodChannel(flutterPluginBinding.getBinaryMessenger(), "com.rebeloid.unity_ads");
        this.channel = methodChannel;
        methodChannel.setMethodCallHandler(this);
        this.context = flutterPluginBinding.getApplicationContext();
        BinaryMessenger binaryMessenger = flutterPluginBinding.getBinaryMessenger();
        this.placementChannelManager = new PlacementChannelManager(binaryMessenger);
        this.privacyConsent = new PrivacyConsent();
        this.bannerAdFactory = new BannerAdFactory(binaryMessenger);
        flutterPluginBinding.getPlatformViewRegistry().registerViewFactory(UnityAdsConstants.BANNER_AD_CHANNEL, this.bannerAdFactory);
    }

    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
        Map<?, ?> map = (Map) methodCall.arguments;
        String str = methodCall.method;
        str.hashCode();
        switch (str) {
            case "showVideo":
                result.success(Boolean.valueOf(showVideo(map)));
                break;
            case "isInitialized":
                result.success(Boolean.valueOf(UnityAds.isInitialized()));
                break;
            case "init":
                result.success(Boolean.valueOf(initialize(map)));
                break;
            case "load":
                result.success(Boolean.valueOf(load(map)));
                break;
            case "privacyConsent_set":
                result.success(Boolean.valueOf(this.privacyConsent.set(map)));
                break;
            default:
                result.notImplemented();
                break;
        }
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        this.channel.setMethodCallHandler(null);
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onAttachedToActivity(ActivityPluginBinding activityPluginBinding) {
        Activity activity = activityPluginBinding.getActivity();
        this.activity = activity;
        this.bannerAdFactory.setActivity(activity);
        this.privacyConsent.setActivity(this.activity);
    }

    private boolean initialize(Map<?, ?> map) {
        boolean zEqualsIgnoreCase;
        String str = (String) map.get("gameId");
        if (isInFirebaseTestLab()) {
            String str2 = (String) map.get(UnityAdsConstants.FIREBASE_TEST_LAB_MODE_PARAMETER);
            if ("disableAds".equalsIgnoreCase(str2)) {
                return false;
            }
            zEqualsIgnoreCase = "showAdsInTestMode".equalsIgnoreCase(str2);
        } else {
            zEqualsIgnoreCase = false;
        }
        Boolean bool = (Boolean) map.get(UnityAdsConstants.TEST_MODE_PARAMETER);
        if (bool == null) {
            bool = false;
        }
        UnityAds.initialize(this.context, str, bool.booleanValue() || zEqualsIgnoreCase, new UnityAdsInitializationListener(this.channel));
        return true;
    }

    private boolean isInFirebaseTestLab() {
        return AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE.equalsIgnoreCase(Settings.System.getString(this.context.getContentResolver(), "firebase.test.lab"));
    }

    private boolean load(Map<?, ?> map) {
        String str = (String) map.get("placementId");
        try {
            UnityAds.load(str, this.placementChannelManager.getOrCreateLoadListener(str));
            return true;
        } catch (Exception e) {
            Log.e(TAG, "Exception occurs during loading ad: " + str, e);
            this.placementChannelManager.invokeMethod(UnityAdsConstants.LOAD_FAILED_METHOD, str, "unknown", e.getMessage());
            return false;
        }
    }

    private boolean showVideo(Map<?, ?> map) {
        String str = (String) map.get("placementId");
        String str2 = (String) map.get(UnityAdsConstants.SERVER_ID_PARAMETER);
        if (str2 != null) {
            PlayerMetaData playerMetaData = new PlayerMetaData(this.context);
            playerMetaData.setServerId(str2);
            playerMetaData.commit();
        }
        try {
            UnityAds.show(this.activity, str, this.placementChannelManager.getOrCreateShowListener(str));
            return true;
        } catch (Exception e) {
            Log.e(TAG, "Exception occurs during loading ad: " + str, e);
            this.placementChannelManager.invokeMethod(UnityAdsConstants.SHOW_FAILED_METHOD, str, "unknown", e.getMessage());
            return false;
        }
    }
}
