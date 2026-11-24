package com.adjust.sdk.flutter;

import android.content.Context;
import android.net.Uri;
import android.util.Log;
import com.adjust.sdk.Adjust;
import com.adjust.sdk.AdjustAdRevenue;
import com.adjust.sdk.AdjustAttribution;
import com.adjust.sdk.AdjustConfig;
import com.adjust.sdk.AdjustDeeplink;
import com.adjust.sdk.AdjustEvent;
import com.adjust.sdk.AdjustEventFailure;
import com.adjust.sdk.AdjustEventSuccess;
import com.adjust.sdk.AdjustPlayStorePurchase;
import com.adjust.sdk.AdjustPlayStoreSubscription;
import com.adjust.sdk.AdjustPurchaseVerificationResult;
import com.adjust.sdk.AdjustSessionFailure;
import com.adjust.sdk.AdjustSessionSuccess;
import com.adjust.sdk.AdjustStoreInfo;
import com.adjust.sdk.AdjustTestOptions;
import com.adjust.sdk.AdjustThirdPartySharing;
import com.adjust.sdk.LogLevel;
import com.adjust.sdk.OnAdidReadListener;
import com.adjust.sdk.OnAmazonAdIdReadListener;
import com.adjust.sdk.OnAttributionChangedListener;
import com.adjust.sdk.OnAttributionReadListener;
import com.adjust.sdk.OnDeeplinkResolvedListener;
import com.adjust.sdk.OnDeferredDeeplinkResponseListener;
import com.adjust.sdk.OnEventTrackingFailedListener;
import com.adjust.sdk.OnEventTrackingSucceededListener;
import com.adjust.sdk.OnGoogleAdIdReadListener;
import com.adjust.sdk.OnIsEnabledListener;
import com.adjust.sdk.OnLastDeeplinkReadListener;
import com.adjust.sdk.OnPurchaseVerificationFinishedListener;
import com.adjust.sdk.OnSdkVersionReadListener;
import com.adjust.sdk.OnSessionTrackingFailedListener;
import com.adjust.sdk.OnSessionTrackingSucceededListener;
import com.google.common.base.Ascii;
import com.google.firebase.perf.util.Constants;
import com.unity3d.ads.core.domain.AndroidGetIsModulesInitEnabled;
import com.unity3d.ads.metadata.InAppPurchaseMetaData;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class AdjustSdk implements FlutterPlugin, MethodChannel.MethodCallHandler {
    private static String TAG = "AdjustBridge";
    private static boolean isDeferredDeeplinkOpeningEnabled = true;
    private Context applicationContext;
    private MethodChannel channel;

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        this.applicationContext = flutterPluginBinding.getApplicationContext();
        MethodChannel methodChannel = new MethodChannel(flutterPluginBinding.getBinaryMessenger(), "com.adjust.sdk/api");
        this.channel = methodChannel;
        methodChannel.setMethodCallHandler(this);
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        this.applicationContext = null;
        MethodChannel methodChannel = this.channel;
        if (methodChannel != null) {
            methodChannel.setMethodCallHandler(null);
        }
        this.channel = null;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
        String str = methodCall.method;
        str.hashCode();
        byte b = -1;
        switch (str.hashCode()) {
            case -2003371403:
                if (str.equals("processDeeplink")) {
                    b = 0;
                }
                break;
            case -1956037694:
                if (str.equals("endFirstSessionDelay")) {
                    b = 1;
                }
                break;
            case -1870071370:
                if (str.equals("removeGlobalCallbackParameters")) {
                    b = 2;
                }
                break;
            case -1833476499:
                if (str.equals("getGoogleAdId")) {
                    b = 3;
                }
                break;
            case -1739328980:
                if (str.equals("enablePlayStoreKidsComplianceInDelay")) {
                    b = 4;
                }
                break;
            case -1562893528:
                if (str.equals("removeGlobalPartnerParameter")) {
                    b = 5;
                }
                break;
            case -1340212393:
                if (str.equals("onPause")) {
                    b = 6;
                }
                break;
            case -1298848381:
                if (str.equals("enable")) {
                    b = 7;
                }
                break;
            case -1295515232:
                if (str.equals("addGlobalCallbackParameter")) {
                    b = 8;
                }
                break;
            case -1205058997:
                if (str.equals("removeGlobalPartnerParameters")) {
                    b = 9;
                }
                break;
            case -1172174017:
                if (str.equals("trackPlayStoreSubscription")) {
                    b = 10;
                }
                break;
            case -1035141243:
                if (str.equals("addGlobalPartnerParameter")) {
                    b = Ascii.VT;
                }
                break;
            case -950151351:
                if (str.equals("getAttribution")) {
                    b = Ascii.FF;
                }
                break;
            case -905919766:
                if (str.equals("processAndResolveDeeplink")) {
                    b = Ascii.CR;
                }
                break;
            case -871879209:
                if (str.equals("switchToOfflineMode")) {
                    b = Ascii.SO;
                }
                break;
            case -767048192:
                if (str.equals("setExternalDeviceIdInDelay")) {
                    b = Ascii.SI;
                }
                break;
            case -475966883:
                if (str.equals("removeGlobalCallbackParameter")) {
                    b = Ascii.DLE;
                }
                break;
            case -193424595:
                if (str.equals("updateSkanConversionValue")) {
                    b = 17;
                }
                break;
            case -187094856:
                if (str.equals("getAmazonAdId")) {
                    b = Ascii.DC2;
                }
                break;
            case -159578199:
                if (str.equals("getAppTrackingAuthorizationStatus")) {
                    b = 19;
                }
                break;
            case -154035892:
                if (str.equals("switchBackToOnlineMode")) {
                    b = Ascii.DC4;
                }
                break;
            case -75692812:
                if (str.equals("getAdid")) {
                    b = Ascii.NAK;
                }
                break;
            case -75454580:
                if (str.equals("getIdfa")) {
                    b = Ascii.SYN;
                }
                break;
            case -75454559:
                if (str.equals("getIdfv")) {
                    b = Ascii.ETB;
                }
                break;
            case -31063371:
                if (str.equals("verifyPlayStorePurchase")) {
                    b = Ascii.CAN;
                }
                break;
            case 107472238:
                if (str.equals("trackAdRevenue")) {
                    b = Ascii.EM;
                }
                break;
            case 240888810:
                if (str.equals("setTestOptions")) {
                    b = Ascii.SUB;
                }
                break;
            case 326063201:
                if (str.equals("verifyAndTrackPlayStorePurchase")) {
                    b = Ascii.ESC;
                }
                break;
            case 421212369:
                if (str.equals("disablePlayStoreKidsComplianceInDelay")) {
                    b = Ascii.FS;
                }
                break;
            case 535292434:
                if (str.equals("getLastDeeplink")) {
                    b = Ascii.GS;
                }
                break;
            case 760458429:
                if (str.equals("setPushToken")) {
                    b = Ascii.RS;
                }
                break;
            case 1107894633:
                if (str.equals("trackMeasurementConsent")) {
                    b = Ascii.US;
                }
                break;
            case 1135978511:
                if (str.equals("trackEvent")) {
                    b = 32;
                }
                break;
            case 1211355428:
                if (str.equals("gdprForgetMe")) {
                    b = 33;
                }
                break;
            case 1315464753:
                if (str.equals("enableCoppaComplianceInDelay")) {
                    b = 34;
                }
                break;
            case 1397362960:
                if (str.equals("requestAppTrackingAuthorization")) {
                    b = 35;
                }
                break;
            case 1400314326:
                if (str.equals("disableCoppaComplianceInDelay")) {
                    b = 36;
                }
                break;
            case 1463983852:
                if (str.equals("onResume")) {
                    b = 37;
                }
                break;
            case 1671308008:
                if (str.equals("disable")) {
                    b = 38;
                }
                break;
            case 1745198842:
                if (str.equals("verifyAppStorePurchase")) {
                    b = 39;
                }
                break;
            case 1756719054:
                if (str.equals("verifyAndTrackAppStorePurchase")) {
                    b = 40;
                }
                break;
            case 1868569192:
                if (str.equals("trackAppStoreSubscription")) {
                    b = 41;
                }
                break;
            case 1948321034:
                if (str.equals("initSdk")) {
                    b = 42;
                }
                break;
            case 2034588468:
                if (str.equals("getSdkVersion")) {
                    b = 43;
                }
                break;
            case 2105594551:
                if (str.equals(Constants.ENABLE_DISABLE)) {
                    b = 44;
                }
                break;
            case 2110727186:
                if (str.equals("trackThirdPartySharing")) {
                    b = 45;
                }
                break;
        }
        switch (b) {
            case 0:
                processDeeplink(methodCall, result);
                break;
            case 1:
                endFirstSessionDelay(methodCall, result);
                break;
            case 2:
                removeGlobalCallbackParameters(result);
                break;
            case 3:
                getGoogleAdId(result);
                break;
            case 4:
                enablePlayStoreKidsComplianceInDelay(methodCall, result);
                break;
            case 5:
                removeGlobalPartnerParameter(methodCall, result);
                break;
            case 6:
                onPause(result);
                break;
            case 7:
                enable(result);
                break;
            case 8:
                addGlobalCallbackParameter(methodCall, result);
                break;
            case 9:
                removeGlobalPartnerParameters(result);
                break;
            case 10:
                trackPlayStoreSubscription(methodCall, result);
                break;
            case 11:
                addGlobalPartnerParameter(methodCall, result);
                break;
            case 12:
                getAttribution(result);
                break;
            case 13:
                processAndResolveDeeplink(methodCall, result);
                break;
            case 14:
                switchToOfflineMode(result);
                break;
            case 15:
                setExternalDeviceIdInDelay(methodCall, result);
                break;
            case 16:
                removeGlobalCallbackParameter(methodCall, result);
                break;
            case 17:
                updateSkanConversionValue(result);
                break;
            case 18:
                getAmazonAdId(result);
                break;
            case 19:
                getAppTrackingAuthorizationStatus(methodCall, result);
                break;
            case 20:
                switchBackToOnlineMode(result);
                break;
            case 21:
                getAdid(result);
                break;
            case 22:
                getIdfa(result);
                break;
            case 23:
                getIdfv(result);
                break;
            case 24:
                verifyPlayStorePurchase(methodCall, result);
                break;
            case 25:
                trackAdRevenue(methodCall, result);
                break;
            case 26:
                setTestOptions(methodCall, result);
                break;
            case 27:
                verifyAndTrackPlayStorePurchase(methodCall, result);
                break;
            case 28:
                disablePlayStoreKidsComplianceInDelay(methodCall, result);
                break;
            case 29:
                getLastDeeplink(result);
                break;
            case 30:
                setPushToken(methodCall, result);
                break;
            case 31:
                trackMeasurementConsent(methodCall, result);
                break;
            case 32:
                trackEvent(methodCall, result);
                break;
            case 33:
                gdprForgetMe(result);
                break;
            case 34:
                enableCoppaComplianceInDelay(methodCall, result);
                break;
            case 35:
                requestAppTrackingAuthorization(result);
                break;
            case 36:
                disableCoppaComplianceInDelay(methodCall, result);
                break;
            case 37:
                onResume(result);
                break;
            case 38:
                disable(result);
                break;
            case 39:
                verifyAppStorePurchase(methodCall, result);
                break;
            case 40:
                verifyAndTrackAppStorePurchase(methodCall, result);
                break;
            case 41:
                trackAppStoreSubscription(result);
                break;
            case 42:
                initSdk(methodCall, result);
                break;
            case 43:
                getSdkVersion(result);
                break;
            case 44:
                isEnabled(result);
                break;
            case 45:
                trackThirdPartySharing(methodCall, result);
                break;
            default:
                Log.e(TAG, "Not implemented method: " + methodCall.method);
                result.notImplemented();
                break;
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:52:0x00bf  */
    private void initSdk(MethodCall methodCall, MethodChannel.Result result) {
        final String str;
        final String str2;
        final String str3;
        final String str4;
        final String str5;
        final String str6;
        String str7;
        byte b;
        String str8;
        Map map = (Map) methodCall.arguments;
        if (map == null) {
            return;
        }
        AdjustConfig adjustConfig = new AdjustConfig(this.applicationContext, map.containsKey("appToken") ? (String) map.get("appToken") : null, map.containsKey("environment") ? (String) map.get("environment") : null, map.containsKey("logLevel") && (str8 = (String) map.get("logLevel")) != null && str8.equals("suppress"));
        if (map.containsKey("sdkPrefix")) {
            adjustConfig.setSdkPrefix((String) map.get("sdkPrefix"));
        }
        if (map.containsKey("logLevel") && (str7 = (String) map.get("logLevel")) != null) {
            switch (str7) {
                case "suppress":
                    b = 5;
                    break;
                case "assert":
                    b = 4;
                    break;
                case "info":
                    b = 6;
                    break;
                case "warn":
                    b = 2;
                    break;
                case "debug":
                    b = 1;
                    break;
                case "error":
                    b = 3;
                    break;
                case "verbose":
                    b = 0;
                    break;
                default:
                    b = -1;
                    break;
            }
            if (b == 0) {
                adjustConfig.setLogLevel(LogLevel.VERBOSE);
            } else if (b == 1) {
                adjustConfig.setLogLevel(LogLevel.DEBUG);
            } else if (b == 2) {
                adjustConfig.setLogLevel(LogLevel.WARN);
            } else if (b == 3) {
                adjustConfig.setLogLevel(LogLevel.ERROR);
            } else if (b == 4) {
                adjustConfig.setLogLevel(LogLevel.ASSERT);
            } else if (b == 5) {
                adjustConfig.setLogLevel(LogLevel.SUPPRESS);
            } else {
                adjustConfig.setLogLevel(LogLevel.INFO);
            }
        }
        if (map.containsKey("isFirstSessionDelayEnabled") && Boolean.parseBoolean((String) map.get("isFirstSessionDelayEnabled"))) {
            adjustConfig.enableFirstSessionDelay();
        }
        if (map.containsKey("isCoppaComplianceEnabled") && Boolean.parseBoolean((String) map.get("isCoppaComplianceEnabled"))) {
            adjustConfig.enableCoppaCompliance();
        }
        if (map.containsKey("isPlayStoreKidsComplianceEnabled") && Boolean.parseBoolean((String) map.get("isPlayStoreKidsComplianceEnabled"))) {
            adjustConfig.enablePlayStoreKidsCompliance();
        }
        if (map.containsKey("isDeviceIdsReadingOnceEnabled") && Boolean.parseBoolean((String) map.get("isDeviceIdsReadingOnceEnabled"))) {
            adjustConfig.enableDeviceIdsReadingOnce();
        }
        if (map.containsKey("eventDeduplicationIdsMaxSize")) {
            try {
                Integer numValueOf = Integer.valueOf((String) map.get("eventDeduplicationIdsMaxSize"));
                numValueOf.intValue();
                adjustConfig.setEventDeduplicationIdsMaxSize(numValueOf);
            } catch (Exception unused) {
            }
        }
        if (map.containsKey("storeInfo")) {
            try {
                JSONObject jSONObject = new JSONObject((String) map.get("storeInfo"));
                if (jSONObject.has("storeName") && !jSONObject.isNull("storeName")) {
                    AdjustStoreInfo adjustStoreInfo = new AdjustStoreInfo(jSONObject.getString("storeName"));
                    if (jSONObject.has("storeAppId") && !jSONObject.isNull("storeAppId")) {
                        adjustStoreInfo.setStoreAppId(jSONObject.getString("storeAppId"));
                    }
                    adjustConfig.setStoreInfo(adjustStoreInfo);
                }
            } catch (JSONException unused2) {
            }
        }
        if (map.containsKey("urlStrategyDomains") && map.containsKey("useSubdomains") && map.containsKey("isDataResidency")) {
            try {
                JSONArray jSONArray = new JSONArray((String) map.get("urlStrategyDomains"));
                ArrayList arrayList = new ArrayList();
                for (int i = 0; i < jSONArray.length(); i++) {
                    arrayList.add((String) jSONArray.get(i));
                }
                adjustConfig.setUrlStrategy(arrayList, Boolean.parseBoolean((String) map.get("useSubdomains")), Boolean.parseBoolean((String) map.get("isDataResidency")));
            } catch (JSONException unused3) {
            }
        }
        if (map.containsKey("processName")) {
            adjustConfig.setProcessName((String) map.get("processName"));
        }
        if (map.containsKey("defaultTracker")) {
            adjustConfig.setDefaultTracker((String) map.get("defaultTracker"));
        }
        if (map.containsKey("externalDeviceId")) {
            adjustConfig.setExternalDeviceId((String) map.get("externalDeviceId"));
        }
        if (map.containsKey("preinstallFilePath")) {
            adjustConfig.setPreinstallFilePath((String) map.get("preinstallFilePath"));
        }
        if (map.containsKey("fbAppId")) {
            adjustConfig.setFbAppId((String) map.get("fbAppId"));
        }
        if (map.containsKey("isSendingInBackgroundEnabled") && Boolean.parseBoolean((String) map.get("isSendingInBackgroundEnabled"))) {
            adjustConfig.enableSendingInBackground();
        }
        if (map.containsKey("isCostDataInAttributionEnabled") && Boolean.parseBoolean((String) map.get("isCostDataInAttributionEnabled"))) {
            adjustConfig.enableCostDataInAttribution();
        }
        if (map.containsKey("isPreinstallTrackingEnabled") && Boolean.parseBoolean((String) map.get("isPreinstallTrackingEnabled"))) {
            adjustConfig.enablePreinstallTracking();
        }
        if (map.containsKey("isDeferredDeeplinkOpeningEnabled")) {
            isDeferredDeeplinkOpeningEnabled = ((String) map.get("isDeferredDeeplinkOpeningEnabled")).equals(AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE);
        }
        if (map.containsKey("attributionCallback") && (str6 = (String) map.get("attributionCallback")) != null) {
            adjustConfig.setOnAttributionChangedListener(new OnAttributionChangedListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.1
                @Override // com.adjust.sdk.OnAttributionChangedListener
                public void onAttributionChanged(AdjustAttribution adjustAttribution) {
                    HashMap map2 = new HashMap();
                    map2.put("trackerToken", adjustAttribution.trackerToken);
                    map2.put("trackerName", adjustAttribution.trackerName);
                    map2.put("network", adjustAttribution.network);
                    map2.put("campaign", adjustAttribution.campaign);
                    map2.put("adgroup", adjustAttribution.adgroup);
                    map2.put("creative", adjustAttribution.creative);
                    map2.put("clickLabel", adjustAttribution.clickLabel);
                    map2.put("costType", adjustAttribution.costType);
                    map2.put("costAmount", adjustAttribution.costAmount != null ? adjustAttribution.costAmount.toString() : "");
                    map2.put("costCurrency", adjustAttribution.costCurrency);
                    map2.put("fbInstallReferrer", adjustAttribution.fbInstallReferrer);
                    if (adjustAttribution.jsonResponse != null) {
                        map2.put("jsonResponse", adjustAttribution.jsonResponse);
                    }
                    if (AdjustSdk.this.channel != null) {
                        AdjustSdk.this.channel.invokeMethod(str6, map2);
                    }
                }
            });
        }
        if (map.containsKey("sessionSuccessCallback") && (str5 = (String) map.get("sessionSuccessCallback")) != null) {
            adjustConfig.setOnSessionTrackingSucceededListener(new OnSessionTrackingSucceededListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.2
                @Override // com.adjust.sdk.OnSessionTrackingSucceededListener
                public void onSessionTrackingSucceeded(AdjustSessionSuccess adjustSessionSuccess) {
                    HashMap map2 = new HashMap();
                    map2.put("message", adjustSessionSuccess.message);
                    map2.put("timestamp", adjustSessionSuccess.timestamp);
                    map2.put("adid", adjustSessionSuccess.adid);
                    if (adjustSessionSuccess.jsonResponse != null) {
                        map2.put("jsonResponse", adjustSessionSuccess.jsonResponse.toString());
                    }
                    if (AdjustSdk.this.channel != null) {
                        AdjustSdk.this.channel.invokeMethod(str5, map2);
                    }
                }
            });
        }
        if (map.containsKey("sessionFailureCallback") && (str4 = (String) map.get("sessionFailureCallback")) != null) {
            adjustConfig.setOnSessionTrackingFailedListener(new OnSessionTrackingFailedListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.3
                @Override // com.adjust.sdk.OnSessionTrackingFailedListener
                public void onSessionTrackingFailed(AdjustSessionFailure adjustSessionFailure) {
                    HashMap map2 = new HashMap();
                    map2.put("message", adjustSessionFailure.message);
                    map2.put("timestamp", adjustSessionFailure.timestamp);
                    map2.put("adid", adjustSessionFailure.adid);
                    map2.put("willRetry", Boolean.toString(adjustSessionFailure.willRetry));
                    if (adjustSessionFailure.jsonResponse != null) {
                        map2.put("jsonResponse", adjustSessionFailure.jsonResponse.toString());
                    }
                    if (AdjustSdk.this.channel != null) {
                        AdjustSdk.this.channel.invokeMethod(str4, map2);
                    }
                }
            });
        }
        if (map.containsKey("eventSuccessCallback") && (str3 = (String) map.get("eventSuccessCallback")) != null) {
            adjustConfig.setOnEventTrackingSucceededListener(new OnEventTrackingSucceededListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.4
                @Override // com.adjust.sdk.OnEventTrackingSucceededListener
                public void onEventTrackingSucceeded(AdjustEventSuccess adjustEventSuccess) {
                    HashMap map2 = new HashMap();
                    map2.put("message", adjustEventSuccess.message);
                    map2.put("timestamp", adjustEventSuccess.timestamp);
                    map2.put("adid", adjustEventSuccess.adid);
                    map2.put("eventToken", adjustEventSuccess.eventToken);
                    map2.put("callbackId", adjustEventSuccess.callbackId);
                    if (adjustEventSuccess.jsonResponse != null) {
                        map2.put("jsonResponse", adjustEventSuccess.jsonResponse.toString());
                    }
                    if (AdjustSdk.this.channel != null) {
                        AdjustSdk.this.channel.invokeMethod(str3, map2);
                    }
                }
            });
        }
        if (map.containsKey("eventFailureCallback") && (str2 = (String) map.get("eventFailureCallback")) != null) {
            adjustConfig.setOnEventTrackingFailedListener(new OnEventTrackingFailedListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.5
                @Override // com.adjust.sdk.OnEventTrackingFailedListener
                public void onEventTrackingFailed(AdjustEventFailure adjustEventFailure) {
                    HashMap map2 = new HashMap();
                    map2.put("message", adjustEventFailure.message);
                    map2.put("timestamp", adjustEventFailure.timestamp);
                    map2.put("adid", adjustEventFailure.adid);
                    map2.put("eventToken", adjustEventFailure.eventToken);
                    map2.put("callbackId", adjustEventFailure.callbackId);
                    map2.put("willRetry", Boolean.toString(adjustEventFailure.willRetry));
                    if (adjustEventFailure.jsonResponse != null) {
                        map2.put("jsonResponse", adjustEventFailure.jsonResponse.toString());
                    }
                    if (AdjustSdk.this.channel != null) {
                        AdjustSdk.this.channel.invokeMethod(str2, map2);
                    }
                }
            });
        }
        if (map.containsKey("deferredDeeplinkCallback") && (str = (String) map.get("deferredDeeplinkCallback")) != null) {
            adjustConfig.setOnDeferredDeeplinkResponseListener(new OnDeferredDeeplinkResponseListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.6
                @Override // com.adjust.sdk.OnDeferredDeeplinkResponseListener
                public boolean launchReceivedDeeplink(Uri uri) {
                    HashMap map2 = new HashMap();
                    map2.put(com.adjust.sdk.Constants.DEEPLINK, uri.toString());
                    if (AdjustSdk.this.channel != null) {
                        AdjustSdk.this.channel.invokeMethod(str, map2);
                    }
                    return AdjustSdk.isDeferredDeeplinkOpeningEnabled;
                }
            });
        }
        Adjust.initSdk(adjustConfig);
        result.success(null);
    }

    private void trackEvent(MethodCall methodCall, MethodChannel.Result result) {
        double d;
        Map map = (Map) methodCall.arguments;
        if (map == null) {
            return;
        }
        AdjustEvent adjustEvent = new AdjustEvent(map.containsKey("eventToken") ? (String) map.get("eventToken") : null);
        if (map.containsKey("revenue") || map.containsKey("currency")) {
            try {
                d = Double.parseDouble((String) map.get("revenue"));
            } catch (NumberFormatException unused) {
                d = -1.0d;
            }
            adjustEvent.setRevenue(d, (String) map.get("currency"));
        }
        if (map.containsKey("deduplicationId")) {
            adjustEvent.setDeduplicationId((String) map.get("deduplicationId"));
        }
        if (map.containsKey(InAppPurchaseMetaData.KEY_PRODUCT_ID)) {
            adjustEvent.setProductId((String) map.get(InAppPurchaseMetaData.KEY_PRODUCT_ID));
        }
        if (map.containsKey("purchaseToken")) {
            adjustEvent.setPurchaseToken((String) map.get("purchaseToken"));
        }
        if (map.containsKey("callbackId")) {
            adjustEvent.setCallbackId((String) map.get("callbackId"));
        }
        if (map.containsKey("callbackParameters")) {
            try {
                JSONObject jSONObject = new JSONObject((String) map.get("callbackParameters"));
                JSONArray jSONArrayNames = jSONObject.names();
                for (int i = 0; i < jSONArrayNames.length(); i++) {
                    String string = jSONArrayNames.getString(i);
                    adjustEvent.addCallbackParameter(string, jSONObject.getString(string));
                }
            } catch (JSONException e) {
                Log.e(TAG, "Failed to parse event callback parameter! Details: " + e);
            }
        }
        if (map.containsKey("partnerParameters")) {
            try {
                JSONObject jSONObject2 = new JSONObject((String) map.get("partnerParameters"));
                JSONArray jSONArrayNames2 = jSONObject2.names();
                for (int i2 = 0; i2 < jSONArrayNames2.length(); i2++) {
                    String string2 = jSONArrayNames2.getString(i2);
                    adjustEvent.addPartnerParameter(string2, jSONObject2.getString(string2));
                }
            } catch (JSONException e2) {
                Log.e(TAG, "Failed to parse event partner parameter! Details: " + e2);
            }
        }
        Adjust.trackEvent(adjustEvent);
        result.success(null);
    }

    private void trackAdRevenue(MethodCall methodCall, MethodChannel.Result result) {
        Map map = (Map) methodCall.arguments;
        if (map == null) {
            return;
        }
        AdjustAdRevenue adjustAdRevenue = new AdjustAdRevenue(map.containsKey("source") ? (String) map.get("source") : null);
        if (map.containsKey("revenue") || map.containsKey("currency")) {
            try {
                adjustAdRevenue.setRevenue(Double.valueOf(Double.parseDouble((String) map.get("revenue"))), (String) map.get("currency"));
            } catch (NumberFormatException unused) {
            }
        }
        if (map.containsKey("adImpressionsCount")) {
            adjustAdRevenue.setAdImpressionsCount(Integer.valueOf(Integer.parseInt((String) map.get("adImpressionsCount"))));
        }
        if (map.containsKey("adRevenueNetwork")) {
            adjustAdRevenue.setAdRevenueNetwork((String) map.get("adRevenueNetwork"));
        }
        if (map.containsKey("adRevenueUnit")) {
            adjustAdRevenue.setAdRevenueUnit((String) map.get("adRevenueUnit"));
        }
        if (map.containsKey("adRevenuePlacement")) {
            adjustAdRevenue.setAdRevenuePlacement((String) map.get("adRevenuePlacement"));
        }
        if (map.containsKey("callbackParameters")) {
            try {
                JSONObject jSONObject = new JSONObject((String) map.get("callbackParameters"));
                JSONArray jSONArrayNames = jSONObject.names();
                for (int i = 0; i < jSONArrayNames.length(); i++) {
                    String string = jSONArrayNames.getString(i);
                    adjustAdRevenue.addCallbackParameter(string, jSONObject.getString(string));
                }
            } catch (JSONException e) {
                Log.e(TAG, "Failed to parse ad revenue callback parameter! Details: " + e);
            }
        }
        if (map.containsKey("partnerParameters")) {
            try {
                JSONObject jSONObject2 = new JSONObject((String) map.get("partnerParameters"));
                JSONArray jSONArrayNames2 = jSONObject2.names();
                for (int i2 = 0; i2 < jSONArrayNames2.length(); i2++) {
                    String string2 = jSONArrayNames2.getString(i2);
                    adjustAdRevenue.addPartnerParameter(string2, jSONObject2.getString(string2));
                }
            } catch (JSONException e2) {
                Log.e(TAG, "Failed to parse ad revenue partner parameter! Details: " + e2);
            }
        }
        Adjust.trackAdRevenue(adjustAdRevenue);
        result.success(null);
    }

    private void trackThirdPartySharing(MethodCall methodCall, MethodChannel.Result result) {
        Map map = (Map) methodCall.arguments;
        if (map == null) {
            return;
        }
        AdjustThirdPartySharing adjustThirdPartySharing = new AdjustThirdPartySharing(map.containsKey(Constants.ENABLE_DISABLE) ? (Boolean) map.get(Constants.ENABLE_DISABLE) : null);
        if (map.containsKey("granularOptions")) {
            String[] strArrSplit = ((String) map.get("granularOptions")).split("__ADJ__", -1);
            for (int i = 0; i < strArrSplit.length; i += 3) {
                adjustThirdPartySharing.addGranularOption(strArrSplit[i], strArrSplit[i + 1], strArrSplit[i + 2]);
            }
        }
        if (map.containsKey("partnerSharingSettings")) {
            String[] strArrSplit2 = ((String) map.get("partnerSharingSettings")).split("__ADJ__", -1);
            for (int i2 = 0; i2 < strArrSplit2.length; i2 += 3) {
                adjustThirdPartySharing.addPartnerSharingSetting(strArrSplit2[i2], strArrSplit2[i2 + 1], Boolean.parseBoolean(strArrSplit2[i2 + 2]));
            }
        }
        Adjust.trackThirdPartySharing(adjustThirdPartySharing);
        result.success(null);
    }

    private void trackMeasurementConsent(MethodCall methodCall, MethodChannel.Result result) {
        Map map = (Map) methodCall.arguments;
        if (!map.containsKey("measurementConsent")) {
            result.error("0", "Arguments null or wrong (missing argument of 'trackMeasurementConsent' method.", null);
        } else {
            Adjust.trackMeasurementConsent(((Boolean) map.get("measurementConsent")).booleanValue());
            result.success(null);
        }
    }

    private void processDeeplink(MethodCall methodCall, MethodChannel.Result result) {
        AdjustDeeplink adjustDeeplink;
        Map map = (Map) methodCall.arguments;
        if (map == null) {
            return;
        }
        if (map.containsKey(com.adjust.sdk.Constants.DEEPLINK)) {
            adjustDeeplink = new AdjustDeeplink(Uri.parse((String) map.get(com.adjust.sdk.Constants.DEEPLINK)));
            if (map.containsKey(com.adjust.sdk.Constants.REFERRER)) {
                adjustDeeplink.setReferrer(Uri.parse((String) map.get(com.adjust.sdk.Constants.REFERRER)));
            }
        } else {
            adjustDeeplink = null;
        }
        Adjust.processDeeplink(adjustDeeplink, this.applicationContext);
        result.success(null);
    }

    private void processAndResolveDeeplink(MethodCall methodCall, final MethodChannel.Result result) {
        AdjustDeeplink adjustDeeplink;
        Map map = (Map) methodCall.arguments;
        if (map == null) {
            return;
        }
        if (map.containsKey(com.adjust.sdk.Constants.DEEPLINK)) {
            adjustDeeplink = new AdjustDeeplink(Uri.parse((String) map.get(com.adjust.sdk.Constants.DEEPLINK)));
            if (map.containsKey(com.adjust.sdk.Constants.REFERRER)) {
                adjustDeeplink.setReferrer(Uri.parse((String) map.get(com.adjust.sdk.Constants.REFERRER)));
            }
        } else {
            adjustDeeplink = null;
        }
        Adjust.processAndResolveDeeplink(adjustDeeplink, this.applicationContext, new OnDeeplinkResolvedListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.7
            @Override // com.adjust.sdk.OnDeeplinkResolvedListener
            public void onDeeplinkResolved(String str) {
                result.success(str);
            }
        });
    }

    private void setPushToken(MethodCall methodCall, MethodChannel.Result result) {
        Map map = (Map) methodCall.arguments;
        Adjust.setPushToken(map.containsKey("pushToken") ? map.get("pushToken").toString() : null, this.applicationContext);
        result.success(null);
    }

    private void gdprForgetMe(MethodChannel.Result result) {
        Adjust.gdprForgetMe(this.applicationContext);
        result.success(null);
    }

    private void enable(MethodChannel.Result result) {
        Adjust.enable();
        result.success(null);
    }

    private void disable(MethodChannel.Result result) {
        Adjust.disable();
        result.success(null);
    }

    private void switchToOfflineMode(MethodChannel.Result result) {
        Adjust.switchToOfflineMode();
        result.success(null);
    }

    private void switchBackToOnlineMode(MethodChannel.Result result) {
        Adjust.switchBackToOnlineMode();
        result.success(null);
    }

    private void addGlobalCallbackParameter(MethodCall methodCall, MethodChannel.Result result) {
        String str;
        String str2;
        if (methodCall.hasArgument("key") && methodCall.hasArgument("value")) {
            str2 = (String) methodCall.argument("key");
            str = (String) methodCall.argument("value");
        } else {
            str = null;
            str2 = null;
        }
        Adjust.addGlobalCallbackParameter(str2, str);
        result.success(null);
    }

    private void addGlobalPartnerParameter(MethodCall methodCall, MethodChannel.Result result) {
        String str;
        String str2;
        if (methodCall.hasArgument("key") && methodCall.hasArgument("value")) {
            str2 = (String) methodCall.argument("key");
            str = (String) methodCall.argument("value");
        } else {
            str = null;
            str2 = null;
        }
        Adjust.addGlobalPartnerParameter(str2, str);
        result.success(null);
    }

    private void removeGlobalCallbackParameter(MethodCall methodCall, MethodChannel.Result result) {
        Adjust.removeGlobalCallbackParameter(methodCall.hasArgument("key") ? (String) methodCall.argument("key") : null);
        result.success(null);
    }

    private void removeGlobalPartnerParameter(MethodCall methodCall, MethodChannel.Result result) {
        Adjust.removeGlobalPartnerParameter(methodCall.hasArgument("key") ? (String) methodCall.argument("key") : null);
        result.success(null);
    }

    private void removeGlobalCallbackParameters(MethodChannel.Result result) {
        Adjust.removeGlobalCallbackParameters();
        result.success(null);
    }

    private void removeGlobalPartnerParameters(MethodChannel.Result result) {
        Adjust.removeGlobalPartnerParameters();
        result.success(null);
    }

    private void endFirstSessionDelay(MethodCall methodCall, MethodChannel.Result result) {
        Adjust.endFirstSessionDelay();
    }

    private void enableCoppaComplianceInDelay(MethodCall methodCall, MethodChannel.Result result) {
        Adjust.enableCoppaComplianceInDelay();
    }

    private void disableCoppaComplianceInDelay(MethodCall methodCall, MethodChannel.Result result) {
        Adjust.disableCoppaComplianceInDelay();
    }

    private void enablePlayStoreKidsComplianceInDelay(MethodCall methodCall, MethodChannel.Result result) {
        Adjust.enablePlayStoreKidsComplianceInDelay();
    }

    private void disablePlayStoreKidsComplianceInDelay(MethodCall methodCall, MethodChannel.Result result) {
        Adjust.disablePlayStoreKidsComplianceInDelay();
    }

    private void setExternalDeviceIdInDelay(MethodCall methodCall, MethodChannel.Result result) {
        Map map = (Map) methodCall.arguments;
        Adjust.setExternalDeviceIdInDelay(map.containsKey("externalDeviceId") ? map.get("externalDeviceId").toString() : null);
        result.success(null);
    }

    private void isEnabled(final MethodChannel.Result result) {
        Adjust.isEnabled(this.applicationContext, new OnIsEnabledListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.8
            @Override // com.adjust.sdk.OnIsEnabledListener
            public void onIsEnabledRead(boolean z) {
                result.success(Boolean.valueOf(z));
            }
        });
    }

    private void getAdid(final MethodChannel.Result result) {
        Adjust.getAdid(new OnAdidReadListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.9
            @Override // com.adjust.sdk.OnAdidReadListener
            public void onAdidRead(String str) {
                result.success(str);
            }
        });
    }

    private void getAttribution(final MethodChannel.Result result) {
        Adjust.getAttribution(new OnAttributionReadListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.10
            @Override // com.adjust.sdk.OnAttributionReadListener
            public void onAttributionRead(AdjustAttribution adjustAttribution) {
                HashMap map = new HashMap();
                map.put("trackerToken", adjustAttribution.trackerToken);
                map.put("trackerName", adjustAttribution.trackerName);
                map.put("network", adjustAttribution.network);
                map.put("campaign", adjustAttribution.campaign);
                map.put("adgroup", adjustAttribution.adgroup);
                map.put("creative", adjustAttribution.creative);
                map.put("clickLabel", adjustAttribution.clickLabel);
                map.put("costType", adjustAttribution.costType);
                map.put("costAmount", adjustAttribution.costAmount != null ? adjustAttribution.costAmount.toString() : "");
                map.put("costCurrency", adjustAttribution.costCurrency);
                map.put("fbInstallReferrer", adjustAttribution.fbInstallReferrer);
                if (adjustAttribution.jsonResponse != null) {
                    map.put("jsonResponse", adjustAttribution.jsonResponse);
                }
                result.success(map);
            }
        });
    }

    private void getLastDeeplink(final MethodChannel.Result result) {
        Adjust.getLastDeeplink(this.applicationContext, new OnLastDeeplinkReadListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.11
            @Override // com.adjust.sdk.OnLastDeeplinkReadListener
            public void onLastDeeplinkRead(Uri uri) {
                if (uri != null) {
                    result.success(uri.toString());
                } else {
                    result.success("");
                }
            }
        });
    }

    private void getSdkVersion(final MethodChannel.Result result) {
        Adjust.getSdkVersion(new OnSdkVersionReadListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.12
            @Override // com.adjust.sdk.OnSdkVersionReadListener
            public void onSdkVersionRead(String str) {
                result.success(str);
            }
        });
    }

    private void trackPlayStoreSubscription(MethodCall methodCall, MethodChannel.Result result) {
        long j;
        Map map = (Map) methodCall.arguments;
        if (map == null) {
            return;
        }
        if (map.containsKey("price")) {
            try {
                j = Long.parseLong(map.get("price").toString());
            } catch (NumberFormatException unused) {
                j = -1;
            }
        } else {
            j = -1;
        }
        AdjustPlayStoreSubscription adjustPlayStoreSubscription = new AdjustPlayStoreSubscription(j, map.containsKey("currency") ? (String) map.get("currency") : null, map.containsKey("sku") ? (String) map.get("sku") : null, map.containsKey("orderId") ? (String) map.get("orderId") : null, map.containsKey(InAppPurchaseMetaData.KEY_SIGNATURE) ? (String) map.get(InAppPurchaseMetaData.KEY_SIGNATURE) : null, map.containsKey("purchaseToken") ? (String) map.get("purchaseToken") : null);
        if (map.containsKey("purchaseTime")) {
            try {
                adjustPlayStoreSubscription.setPurchaseTime(Long.parseLong(map.get("purchaseTime").toString()));
            } catch (NumberFormatException unused2) {
            }
        }
        if (map.containsKey("callbackParameters")) {
            try {
                JSONObject jSONObject = new JSONObject((String) map.get("callbackParameters"));
                JSONArray jSONArrayNames = jSONObject.names();
                for (int i = 0; i < jSONArrayNames.length(); i++) {
                    String string = jSONArrayNames.getString(i);
                    adjustPlayStoreSubscription.addCallbackParameter(string, jSONObject.getString(string));
                }
            } catch (JSONException e) {
                Log.e(TAG, "Failed to parse subscription callback parameter! Details: " + e);
            }
        }
        if (map.containsKey("partnerParameters")) {
            try {
                JSONObject jSONObject2 = new JSONObject((String) map.get("partnerParameters"));
                JSONArray jSONArrayNames2 = jSONObject2.names();
                for (int i2 = 0; i2 < jSONArrayNames2.length(); i2++) {
                    String string2 = jSONArrayNames2.getString(i2);
                    adjustPlayStoreSubscription.addPartnerParameter(string2, jSONObject2.getString(string2));
                }
            } catch (JSONException e2) {
                Log.e(TAG, "Failed to parse subscription partner parameter! Details: " + e2);
            }
        }
        Adjust.trackPlayStoreSubscription(adjustPlayStoreSubscription);
        result.success(null);
    }

    private void verifyPlayStorePurchase(MethodCall methodCall, final MethodChannel.Result result) {
        Map map = (Map) methodCall.arguments;
        if (map == null) {
            return;
        }
        Adjust.verifyPlayStorePurchase(new AdjustPlayStorePurchase(map.containsKey(InAppPurchaseMetaData.KEY_PRODUCT_ID) ? (String) map.get(InAppPurchaseMetaData.KEY_PRODUCT_ID) : null, map.containsKey("purchaseToken") ? (String) map.get("purchaseToken") : null), new OnPurchaseVerificationFinishedListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.13
            @Override // com.adjust.sdk.OnPurchaseVerificationFinishedListener
            public void onVerificationFinished(AdjustPurchaseVerificationResult adjustPurchaseVerificationResult) {
                HashMap map2 = new HashMap();
                map2.put("code", String.valueOf(adjustPurchaseVerificationResult.getCode()));
                map2.put("verificationStatus", adjustPurchaseVerificationResult.getVerificationStatus());
                map2.put("message", adjustPurchaseVerificationResult.getMessage());
                result.success(map2);
            }
        });
    }

    private void verifyAndTrackPlayStorePurchase(MethodCall methodCall, final MethodChannel.Result result) {
        double d;
        Map map = (Map) methodCall.arguments;
        if (map == null) {
            return;
        }
        AdjustEvent adjustEvent = new AdjustEvent(map.containsKey("eventToken") ? (String) map.get("eventToken") : null);
        if (map.containsKey("revenue") || map.containsKey("currency")) {
            try {
                d = Double.parseDouble((String) map.get("revenue"));
            } catch (NumberFormatException unused) {
                d = -1.0d;
            }
            adjustEvent.setRevenue(d, (String) map.get("currency"));
        }
        if (map.containsKey("deduplicationId")) {
            adjustEvent.setDeduplicationId((String) map.get("deduplicationId"));
        }
        if (map.containsKey(InAppPurchaseMetaData.KEY_PRODUCT_ID)) {
            adjustEvent.setProductId((String) map.get(InAppPurchaseMetaData.KEY_PRODUCT_ID));
        }
        if (map.containsKey("purchaseToken")) {
            adjustEvent.setPurchaseToken((String) map.get("purchaseToken"));
        }
        if (map.containsKey("callbackId")) {
            adjustEvent.setCallbackId((String) map.get("callbackId"));
        }
        if (map.containsKey("callbackParameters")) {
            try {
                JSONObject jSONObject = new JSONObject((String) map.get("callbackParameters"));
                JSONArray jSONArrayNames = jSONObject.names();
                for (int i = 0; i < jSONArrayNames.length(); i++) {
                    String string = jSONArrayNames.getString(i);
                    adjustEvent.addCallbackParameter(string, jSONObject.getString(string));
                }
            } catch (JSONException e) {
                Log.e(TAG, "Failed to parse event callback parameter! Details: " + e);
            }
        }
        if (map.containsKey("partnerParameters")) {
            try {
                JSONObject jSONObject2 = new JSONObject((String) map.get("partnerParameters"));
                JSONArray jSONArrayNames2 = jSONObject2.names();
                for (int i2 = 0; i2 < jSONArrayNames2.length(); i2++) {
                    String string2 = jSONArrayNames2.getString(i2);
                    adjustEvent.addPartnerParameter(string2, jSONObject2.getString(string2));
                }
            } catch (JSONException e2) {
                Log.e(TAG, "Failed to parse event partner parameter! Details: " + e2);
            }
        }
        Adjust.verifyAndTrackPlayStorePurchase(adjustEvent, new OnPurchaseVerificationFinishedListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.14
            @Override // com.adjust.sdk.OnPurchaseVerificationFinishedListener
            public void onVerificationFinished(AdjustPurchaseVerificationResult adjustPurchaseVerificationResult) {
                HashMap map2 = new HashMap();
                map2.put("code", String.valueOf(adjustPurchaseVerificationResult.getCode()));
                map2.put("verificationStatus", adjustPurchaseVerificationResult.getVerificationStatus());
                map2.put("message", adjustPurchaseVerificationResult.getMessage());
                result.success(map2);
            }
        });
    }

    private void setReferrer(MethodCall methodCall, MethodChannel.Result result) {
        Adjust.setReferrer(methodCall.hasArgument(com.adjust.sdk.Constants.REFERRER) ? (String) methodCall.argument(com.adjust.sdk.Constants.REFERRER) : null, this.applicationContext);
        result.success(null);
    }

    private void getGoogleAdId(final MethodChannel.Result result) {
        Adjust.getGoogleAdId(this.applicationContext, new OnGoogleAdIdReadListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.15
            @Override // com.adjust.sdk.OnGoogleAdIdReadListener
            public void onGoogleAdIdRead(String str) {
                result.success(str);
            }
        });
    }

    private void getAmazonAdId(final MethodChannel.Result result) {
        Adjust.getAmazonAdId(this.applicationContext, new OnAmazonAdIdReadListener() { // from class: com.adjust.sdk.flutter.AdjustSdk.16
            @Override // com.adjust.sdk.OnAmazonAdIdReadListener
            public void onAmazonAdIdRead(String str) {
                result.success(str);
            }
        });
    }

    private void trackAppStoreSubscription(MethodChannel.Result result) {
        result.success("Error. No trackAppStoreSubscription on Android platform!");
    }

    private void verifyAppStorePurchase(MethodCall methodCall, MethodChannel.Result result) {
        result.success("Error. No verifyAppStorePurchase on Android platform!");
    }

    private void verifyAndTrackAppStorePurchase(MethodCall methodCall, MethodChannel.Result result) {
        result.success("Error. No verifyAndTrackAppStorePurchase on Android platform!");
    }

    private void requestAppTrackingAuthorization(MethodChannel.Result result) {
        result.success(-1);
    }

    private void updateSkanConversionValue(MethodChannel.Result result) {
        result.success("Error. No updateSkanConversionValue on Android platform!");
    }

    private void getIdfa(MethodChannel.Result result) {
        result.success("Error. No getIdfa on Android platform!");
    }

    private void getIdfv(MethodChannel.Result result) {
        result.success("Error. No getIdfv on Android platform!");
    }

    private void getAppTrackingAuthorizationStatus(MethodCall methodCall, MethodChannel.Result result) {
        result.success(-1);
    }

    private void onResume(MethodChannel.Result result) {
        Adjust.onResume();
        result.success(null);
    }

    private void onPause(MethodChannel.Result result) {
        Adjust.onPause();
        result.success(null);
    }

    private void setTestOptions(MethodCall methodCall, MethodChannel.Result result) {
        AdjustTestOptions adjustTestOptions = new AdjustTestOptions();
        Map map = (Map) methodCall.arguments;
        if (map.containsKey("baseUrl")) {
            adjustTestOptions.baseUrl = (String) map.get("baseUrl");
        }
        if (map.containsKey("gdprUrl")) {
            adjustTestOptions.gdprUrl = (String) map.get("gdprUrl");
        }
        if (map.containsKey("subscriptionUrl")) {
            adjustTestOptions.subscriptionUrl = (String) map.get("subscriptionUrl");
        }
        if (map.containsKey("purchaseVerificationUrl")) {
            adjustTestOptions.purchaseVerificationUrl = (String) map.get("purchaseVerificationUrl");
        }
        if (map.containsKey("basePath")) {
            adjustTestOptions.basePath = (String) map.get("basePath");
        }
        if (map.containsKey("gdprPath")) {
            adjustTestOptions.gdprPath = (String) map.get("gdprPath");
        }
        if (map.containsKey("subscriptionPath")) {
            adjustTestOptions.subscriptionPath = (String) map.get("subscriptionPath");
        }
        if (map.containsKey("purchaseVerificationPath")) {
            adjustTestOptions.purchaseVerificationPath = (String) map.get("purchaseVerificationPath");
        }
        if (map.containsKey("noBackoffWait")) {
            adjustTestOptions.noBackoffWait = Boolean.valueOf(map.get("noBackoffWait").toString().equals(AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE));
        }
        if (map.containsKey("teardown")) {
            adjustTestOptions.teardown = Boolean.valueOf(map.get("teardown").toString().equals(AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE));
        }
        if (map.containsKey("tryInstallReferrer")) {
            adjustTestOptions.tryInstallReferrer = Boolean.valueOf(map.get("tryInstallReferrer").toString().equals(AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE));
        }
        if (map.containsKey("timerIntervalInMilliseconds")) {
            adjustTestOptions.timerIntervalInMilliseconds = Long.valueOf(Long.parseLong(map.get("timerIntervalInMilliseconds").toString()));
        }
        if (map.containsKey("timerStartInMilliseconds")) {
            adjustTestOptions.timerStartInMilliseconds = Long.valueOf(Long.parseLong(map.get("timerStartInMilliseconds").toString()));
        }
        if (map.containsKey("sessionIntervalInMilliseconds")) {
            adjustTestOptions.sessionIntervalInMilliseconds = Long.valueOf(Long.parseLong(map.get("sessionIntervalInMilliseconds").toString()));
        }
        if (map.containsKey("subsessionIntervalInMilliseconds")) {
            adjustTestOptions.subsessionIntervalInMilliseconds = Long.valueOf(Long.parseLong(map.get("subsessionIntervalInMilliseconds").toString()));
        }
        if (map.containsKey("deleteState")) {
            adjustTestOptions.context = this.applicationContext;
        }
        if (map.containsKey("ignoreSystemLifecycleBootstrap")) {
            adjustTestOptions.ignoreSystemLifecycleBootstrap = Boolean.valueOf(map.get("ignoreSystemLifecycleBootstrap").toString().equals(AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE));
        }
        Adjust.setTestOptions(adjustTestOptions);
    }
}
