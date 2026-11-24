package com.pushwoosh.plugin;

import android.app.Activity;
import android.content.Intent;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Log;
import com.google.common.base.Ascii;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.pushwoosh.Pushwoosh;
import com.pushwoosh.RegisterForPushNotificationsResultData;
import com.pushwoosh.badge.PushwooshBadge;
import com.pushwoosh.exception.GetTagsException;
import com.pushwoosh.exception.PushwooshException;
import com.pushwoosh.exception.RegisterForPushNotificationsException;
import com.pushwoosh.exception.SetEmailException;
import com.pushwoosh.exception.SetUserException;
import com.pushwoosh.exception.UnregisterForPushNotificationException;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.inapp.InAppManager;
import com.pushwoosh.inapp.ui.PushwooshInAppUi;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.PushwooshNotificationSettings;
import com.pushwoosh.tags.Tags;
import com.pushwoosh.tags.TagsBundle;
import com.tekartik.sqflite.Constant;
import com.unity3d.services.core.fid.Constants;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.embedding.engine.plugins.activity.ActivityAware;
import io.flutter.embedding.engine.plugins.activity.ActivityPluginBinding;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.EventChannel;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.plugin.common.PluginRegistry;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import kotlinx.coroutines.DebugKt;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshPlugin implements MethodChannel.MethodCallHandler, PluginRegistry.NewIntentListener, FlutterPlugin, ActivityAware {
    public static EventChannel acceptChannel = null;
    public static StreamHandler acceptHandler = null;
    public static ActivityPluginBinding activityPluginBinding = null;
    public static String cachedDeepLink = null;
    public static MethodChannel channel = null;
    public static EventChannel jsInterfaceChannel = null;
    public static volatile EventChannel.EventSink jsInterfaceEventSink = null;
    private static final Map<String, FlutterJavaScriptInterface> jsInterfaces = new ConcurrentHashMap();
    public static boolean listen = false;
    public static BinaryMessenger messenger = null;
    public static EventChannel openChannel = null;
    public static DeepLinkStreamHandler openHandler = null;
    public static PushwooshPlugin pluginInstance = null;
    public static EventChannel receiveChannel = null;
    public static StreamHandler receiveHandler = null;
    public static boolean showForegroundPush = true;
    private ActivityPluginBinding ownActivityPluginBinding;

    static {
        receiveHandler = new StreamHandler();
        acceptHandler = new StreamHandler();
        openHandler = new DeepLinkStreamHandler();
    }

    private void onAttachedToEngine(BinaryMessenger binaryMessenger) {
        messenger = binaryMessenger;
        MethodChannel methodChannel = new MethodChannel(binaryMessenger, "pushwoosh");
        channel = methodChannel;
        methodChannel.setMethodCallHandler(new PushwooshPlugin());
        receiveChannel = new EventChannel(binaryMessenger, "pushwoosh/receive");
        acceptChannel = new EventChannel(binaryMessenger, "pushwoosh/accept");
        openChannel = new EventChannel(binaryMessenger, "pushwoosh/deeplink");
        jsInterfaceChannel = new EventChannel(binaryMessenger, "pushwoosh/jsinterface");
        receiveChannel.setStreamHandler(receiveHandler);
        acceptChannel.setStreamHandler(acceptHandler);
        openChannel.setStreamHandler(openHandler);
        jsInterfaceChannel.setStreamHandler(new EventChannel.StreamHandler() { // from class: com.pushwoosh.plugin.PushwooshPlugin.1
            @Override // io.flutter.plugin.common.EventChannel.StreamHandler
            public void onListen(Object obj, EventChannel.EventSink eventSink) {
                PushwooshPlugin.jsInterfaceEventSink = eventSink;
            }

            @Override // io.flutter.plugin.common.EventChannel.StreamHandler
            public void onCancel(Object obj) {
                PushwooshPlugin.jsInterfaceEventSink = null;
            }
        });
    }

    private static void handleCachedLinkIntent(PushwooshPlugin pushwooshPlugin, Activity activity) {
        if (activity != null && activity.getIntent() != null) {
            pushwooshPlugin.handleIntent(activity.getIntent());
        }
        String str = cachedDeepLink;
        if (str != null) {
            forwardDeepLinkToFlutter(str);
            cachedDeepLink = null;
        }
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        PushwooshPlugin pushwooshPlugin = new PushwooshPlugin();
        pluginInstance = pushwooshPlugin;
        pushwooshPlugin.onAttachedToEngine(flutterPluginBinding.getBinaryMessenger());
        ActivityPluginBinding activityPluginBinding2 = activityPluginBinding;
        if (activityPluginBinding2 != null) {
            handleCachedLinkIntent(pluginInstance, activityPluginBinding2.getActivity());
        }
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        MethodChannel methodChannel = channel;
        if (methodChannel != null) {
            methodChannel.setMethodCallHandler(null);
            channel = null;
        }
        EventChannel eventChannel = receiveChannel;
        if (eventChannel != null) {
            eventChannel.setStreamHandler(null);
            receiveChannel = null;
        }
        EventChannel eventChannel2 = acceptChannel;
        if (eventChannel2 != null) {
            eventChannel2.setStreamHandler(null);
            acceptChannel = null;
        }
        EventChannel eventChannel3 = openChannel;
        if (eventChannel3 != null) {
            eventChannel3.setStreamHandler(null);
            openChannel = null;
        }
        EventChannel eventChannel4 = jsInterfaceChannel;
        if (eventChannel4 != null) {
            eventChannel4.setStreamHandler(null);
            jsInterfaceChannel = null;
        }
        receiveHandler.onCancel(null);
        acceptHandler.onCancel(null);
        openHandler.onCancel(null);
        jsInterfaceEventSink = null;
        pluginInstance = null;
        messenger = null;
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onAttachedToActivity(ActivityPluginBinding activityPluginBinding2) {
        activityPluginBinding = activityPluginBinding2;
        this.ownActivityPluginBinding = activityPluginBinding2;
        activityPluginBinding2.addOnNewIntentListener(this);
        handleIntent(activityPluginBinding2.getActivity().getIntent());
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivityForConfigChanges() {
        onDetachedFromActivity();
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onReattachedToActivityForConfigChanges(ActivityPluginBinding activityPluginBinding2) {
        onAttachedToActivity(activityPluginBinding2);
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivity() {
        ActivityPluginBinding activityPluginBinding2 = this.ownActivityPluginBinding;
        if (activityPluginBinding2 != null) {
            activityPluginBinding2.removeOnNewIntentListener(this);
            if (activityPluginBinding == this.ownActivityPluginBinding) {
                activityPluginBinding = null;
            }
            this.ownActivityPluginBinding = null;
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
        Pushwoosh pushwoosh = Pushwoosh.getInstance();
        String str = methodCall.method;
        str.hashCode();
        byte b = -1;
        switch (str.hashCode()) {
            case -2115752724:
                if (str.equals("setAppCode")) {
                    b = 0;
                }
                break;
            case -1661939189:
                if (str.equals(Constants.GET_INSTANCE)) {
                    b = 1;
                }
                break;
            case -1583474026:
                if (str.equals("sendJavaScriptResponse")) {
                    b = 2;
                }
                break;
            case -1573057927:
                if (str.equals("startListening")) {
                    b = 3;
                }
                break;
            case -1316854500:
                if (str.equals("showForegroundAlert")) {
                    b = 4;
                }
                break;
            case -1310712539:
                if (str.equals("setApplicationIconBadgeNumber")) {
                    b = 5;
                }
                break;
            case -1037998311:
                if (str.equals("getApplicationIconBadgeNumber")) {
                    b = 6;
                }
                break;
            case -788534199:
                if (str.equals("getPushToken")) {
                    b = 7;
                }
                break;
            case -661769028:
                if (str.equals("defaultSetup")) {
                    b = 8;
                }
                break;
            case -229032100:
                if (str.equals("setShowForegroundPush")) {
                    b = 9;
                }
                break;
            case -75497792:
                if (str.equals("getHWID")) {
                    b = 10;
                }
                break;
            case -75129713:
                if (str.equals("getTags")) {
                    b = Ascii.VT;
                }
                break;
            case 181632857:
                if (str.equals("setEmails")) {
                    b = Ascii.FF;
                }
                break;
            case 242409336:
                if (str.equals("getAppCode")) {
                    b = Ascii.CR;
                }
                break;
            case 375730650:
                if (str.equals("setLanguage")) {
                    b = Ascii.SO;
                }
                break;
            case 645367112:
                if (str.equals("setUserId")) {
                    b = Ascii.SI;
                }
                break;
            case 674593473:
                if (str.equals("presentInApp")) {
                    b = Ascii.DLE;
                }
                break;
            case 793564485:
                if (str.equals("setMultiNotificationMode")) {
                    b = 17;
                }
                break;
            case 820797937:
                if (str.equals("stopServerCommunication")) {
                    b = Ascii.DC2;
                }
                break;
            case 871091088:
                if (str.equals("initialize")) {
                    b = 19;
                }
                break;
            case 1180000616:
                if (str.equals("registerForPushNotifications")) {
                    b = Ascii.DC4;
                }
                break;
            case 1385449135:
                if (str.equals(Constant.METHOD_GET_PLATFORM_VERSION)) {
                    b = Ascii.NAK;
                }
                break;
            case 1391332442:
                if (str.equals("setEmail")) {
                    b = Ascii.SYN;
                }
                break;
            case 1435762817:
                if (str.equals("unregisterForPushNotifications")) {
                    b = Ascii.ETB;
                }
                break;
            case 1499583295:
                if (str.equals("addToApplicationIconBadgeNumber")) {
                    b = Ascii.CAN;
                }
                break;
            case 1629117694:
                if (str.equals("registerWhatsappNumber")) {
                    b = Ascii.EM;
                }
                break;
            case 1660731908:
                if (str.equals("setUserEmails")) {
                    b = Ascii.SUB;
                }
                break;
            case 1809377214:
                if (str.equals("enableHuaweiNotifications")) {
                    b = Ascii.ESC;
                }
                break;
            case 1946427371:
                if (str.equals("addJavascriptInterface")) {
                    b = Ascii.FS;
                }
                break;
            case 1979010522:
                if (str.equals("postEvent")) {
                    b = Ascii.GS;
                }
                break;
            case 1984979867:
                if (str.equals("setTags")) {
                    b = Ascii.RS;
                }
                break;
            case 2016840081:
                if (str.equals("startServerCommunication")) {
                    b = Ascii.US;
                }
                break;
            case 2046105247:
                if (str.equals("registerSmsNumber")) {
                    b = 32;
                }
                break;
            case 2062898984:
                if (str.equals("removeJavascriptInterface")) {
                    b = 33;
                }
                break;
        }
        switch (b) {
            case 0:
                setAppCode(methodCall, result);
                break;
            case 1:
                result.success(pushwoosh);
                break;
            case 2:
                handleSendJavaScriptResponse(methodCall, result);
                break;
            case 3:
                listen = true;
                break;
            case 4:
                showForegroundAlert(methodCall, result);
                break;
            case 5:
                setApplicationIconBadgeNumber(methodCall, result);
                break;
            case 6:
                result.success(Integer.valueOf(PushwooshBadge.getBadgeNumber()));
                break;
            case 7:
                result.success(pushwoosh.getPushToken());
                break;
            case 8:
                result.success(null);
                break;
            case 9:
                setShowForegroundPush(methodCall);
                break;
            case 10:
                result.success(pushwoosh.getHwid());
                break;
            case 11:
                getTags(methodCall, result);
                break;
            case 12:
                setEmails(methodCall, result);
                break;
            case 13:
                getAppCode(result);
                break;
            case 14:
                setLanguage(methodCall, result);
                break;
            case 15:
                setUserId(methodCall, result);
                break;
            case 16:
                presentInApp(methodCall, result);
                break;
            case 17:
                setMultiNotificationMode(methodCall);
                break;
            case 18:
                stopServerCommunication();
                break;
            case 19:
                initialize(methodCall, pushwoosh);
                break;
            case 20:
                registerForPushNotifications(methodCall, result);
                break;
            case 21:
                result.success("Android " + Build.VERSION.RELEASE);
                break;
            case 22:
                setEmail(methodCall, result);
                break;
            case 23:
                unregisterForPushNotifications(methodCall, result);
                break;
            case 24:
                addToApplicationIconBadgeNumber(methodCall, result);
                break;
            case 25:
                registerWhatsappNumber(methodCall, result);
                break;
            case 26:
                setUserEmails(methodCall, result);
                break;
            case 27:
                enableHuaweiNotifications();
                break;
            case 28:
                handleAddJavascriptInterface(methodCall, result);
                break;
            case 29:
                postEvent(methodCall, result);
                break;
            case 30:
                setTags(methodCall, result);
                break;
            case 31:
                startServerCommunication();
                break;
            case 32:
                registerSmsNumber(methodCall, result);
                break;
            case 33:
                handleRemoveJavascriptInterface(methodCall, result);
                break;
            default:
                result.notImplemented();
                break;
        }
    }

    @Override // io.flutter.plugin.common.PluginRegistry.NewIntentListener
    public boolean onNewIntent(Intent intent) {
        handleIntent(intent);
        return false;
    }

    private void handleIntent(Intent intent) {
        if (intent == null) {
            return;
        }
        String action = intent.getAction();
        String dataString = intent.getDataString();
        if ("android.intent.action.VIEW".equals(action)) {
            forwardDeepLinkToFlutter(dataString);
        }
    }

    private static void forwardDeepLinkToFlutter(final String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        final DeepLinkStreamHandler deepLinkStreamHandler = openHandler;
        if (deepLinkStreamHandler != null) {
            new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.pushwoosh.plugin.PushwooshPlugin.2
                @Override // java.lang.Runnable
                public void run() {
                    deepLinkStreamHandler.sendDeepLink(str);
                }
            });
        } else {
            cachedDeepLink = str;
        }
    }

    public static void onMessageReceived(final Map<String, Object> map, final boolean z) {
        final StreamHandler streamHandler = receiveHandler;
        if (streamHandler != null) {
            new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.pushwoosh.plugin.PushwooshPlugin.3
                @Override // java.lang.Runnable
                public void run() {
                    streamHandler.sendEvent(map, z);
                }
            });
        }
    }

    public static void onMessageAccepted(final Map<String, Object> map, final boolean z) {
        final StreamHandler streamHandler = acceptHandler;
        if (streamHandler != null) {
            new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.pushwoosh.plugin.PushwooshPlugin.4
                @Override // java.lang.Runnable
                public void run() {
                    streamHandler.sendEvent(map, z);
                }
            });
        }
    }

    public static void callToFlutter(String str, Map<String, Object> map) {
        MethodChannel methodChannel = channel;
        boolean z = listen;
        if (methodChannel == null || !z) {
            return;
        }
        methodChannel.invokeMethod(str, map);
    }

    private void registerForPushNotifications(MethodCall methodCall, MethodChannel.Result result) {
        final SafeResult safeResult = new SafeResult(result);
        Pushwoosh.getInstance().registerForPushNotifications(new Callback<RegisterForPushNotificationsResultData, RegisterForPushNotificationsException>() { // from class: com.pushwoosh.plugin.PushwooshPlugin.5
            @Override // com.pushwoosh.function.Callback
            public void process(Result<RegisterForPushNotificationsResultData, RegisterForPushNotificationsException> result2) {
                try {
                    if (result2.isSuccess() && result2.getData() != null) {
                        safeResult.success(result2.getData().getToken());
                    } else {
                        PushwooshPlugin.this.sendResultException(safeResult, result2.getException());
                    }
                } catch (Exception e) {
                    PushwooshPlugin.this.sendResultException(safeResult, e);
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendResultException(MethodChannel.Result result, Exception exc) {
        if (exc == null || result == null) {
            return;
        }
        String message = exc.getMessage();
        PWLog.error("PushwooshPlugin", "Error: " + message, exc);
        result.error(exc.getClass().getSimpleName(), message, Log.getStackTraceString(exc));
    }

    private void unregisterForPushNotifications(MethodCall methodCall, MethodChannel.Result result) {
        final SafeResult safeResult = new SafeResult(result);
        Pushwoosh.getInstance().unregisterForPushNotifications(new Callback<String, UnregisterForPushNotificationException>() { // from class: com.pushwoosh.plugin.PushwooshPlugin.6
            @Override // com.pushwoosh.function.Callback
            public void process(Result<String, UnregisterForPushNotificationException> result2) {
                try {
                    if (result2.isSuccess()) {
                        safeResult.success(result2.getData());
                    } else {
                        PushwooshPlugin.this.sendResultException(safeResult, result2.getException());
                    }
                } catch (Exception e) {
                    PushwooshPlugin.this.sendResultException(safeResult, e);
                }
            }
        });
    }

    private void getTags(MethodCall methodCall, MethodChannel.Result result) {
        final SafeResult safeResult = new SafeResult(result);
        Pushwoosh.getInstance().getTags(new Callback<TagsBundle, GetTagsException>() { // from class: com.pushwoosh.plugin.PushwooshPlugin.7
            @Override // com.pushwoosh.function.Callback
            public void process(Result<TagsBundle, GetTagsException> result2) {
                try {
                    if (result2.isSuccess()) {
                        TagsBundle data = result2.getData();
                        Map<String, Object> map = data != null ? data.getMap() : null;
                        HashMap map2 = new HashMap();
                        if (map != null) {
                            for (Map.Entry<String, Object> entry : map.entrySet()) {
                                if (entry.getValue() instanceof JSONArray) {
                                    List<String> list = data.getList(entry.getKey());
                                    if (list != null) {
                                        map2.put(entry.getKey(), list);
                                    }
                                } else {
                                    map2.put(entry.getKey(), entry.getValue());
                                }
                            }
                            safeResult.success(map2);
                            return;
                        }
                        PushwooshPlugin.this.sendResultException(safeResult, new GetTagsException("No tags were received from server"));
                        return;
                    }
                    PushwooshPlugin.this.sendResultException(safeResult, result2.getException());
                } catch (Exception e) {
                    PushwooshPlugin.this.sendResultException(safeResult, e);
                }
            }
        });
    }

    private void setTags(MethodCall methodCall, MethodChannel.Result result) {
        final SafeResult safeResult = new SafeResult(result);
        Map map = (Map) methodCall.argument("tags");
        if (map == null) {
            sendResultException(safeResult, new IllegalArgumentException("Tags argument is missing or invalid"));
        } else {
            Pushwoosh.getInstance().setTags(Tags.fromJson(new JSONObject(map)), new Callback<Void, PushwooshException>() { // from class: com.pushwoosh.plugin.PushwooshPlugin.8
                @Override // com.pushwoosh.function.Callback
                public void process(Result<Void, PushwooshException> result2) {
                    try {
                        if (result2.isSuccess()) {
                            safeResult.success(null);
                        } else {
                            PushwooshPlugin.this.sendResultException(safeResult, result2.getException());
                        }
                    } catch (IllegalStateException e) {
                        PushwooshPlugin.this.sendResultException(safeResult, e);
                    }
                }
            });
        }
    }

    private void showForegroundAlert(MethodCall methodCall, MethodChannel.Result result) {
        if (methodCall.arguments == null) {
            result.success(Boolean.valueOf(showForegroundPush));
        } else {
            showForegroundPush = ((Boolean) methodCall.arguments).booleanValue();
        }
    }

    private void postEvent(MethodCall methodCall, MethodChannel.Result result) {
        SafeResult safeResult = new SafeResult(result);
        try {
            List list = (List) methodCall.arguments();
            if (list != null && list.size() >= 2) {
                String str = (String) list.get(0);
                Map map = (Map) list.get(1);
                if (str != null && map != null) {
                    InAppManager.getInstance().postEvent(str, Tags.fromJson(new JSONObject(map)));
                    safeResult.success(null);
                    return;
                }
                sendResultException(safeResult, new IllegalArgumentException("Method or event data missing"));
                return;
            }
            sendResultException(safeResult, new IllegalArgumentException("Invalid arguments for postEvent"));
        } catch (Exception e) {
            sendResultException(safeResult, e);
        }
    }

    private void setMultiNotificationMode(MethodCall methodCall) {
        Object objArgument = methodCall.argument(DebugKt.DEBUG_PROPERTY_VALUE_ON);
        if (objArgument instanceof Boolean) {
            PushwooshNotificationSettings.setMultiNotificationMode(((Boolean) objArgument).booleanValue());
        }
    }

    private void setUserId(MethodCall methodCall, MethodChannel.Result result) {
        try {
            Pushwoosh.getInstance().setUserId((String) methodCall.argument(io.flutter.plugins.firebase.analytics.Constants.USER_ID));
            result.success(null);
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void setAppCode(MethodCall methodCall, MethodChannel.Result result) {
        try {
            Pushwoosh.getInstance().setAppId((String) methodCall.argument("appCode"), (String) methodCall.argument("baseUrl"));
            result.success(null);
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void getAppCode(MethodChannel.Result result) {
        try {
            String applicationCode = Pushwoosh.getInstance().getApplicationCode();
            if (TextUtils.isEmpty(applicationCode)) {
                applicationCode = null;
            }
            result.success(applicationCode);
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void presentInApp(MethodCall methodCall, MethodChannel.Result result) {
        try {
            Object obj = methodCall.arguments;
            if (!(obj instanceof Map)) {
                result.error("presentInApp", "config must be a map", null);
            } else {
                PushwooshInAppUi.present((Map) obj);
                result.success(null);
            }
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void setLanguage(MethodCall methodCall, MethodChannel.Result result) {
        try {
            Pushwoosh.getInstance().setLanguage((String) methodCall.argument("language"));
            result.success(null);
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void setEmail(MethodCall methodCall, final MethodChannel.Result result) {
        try {
            Pushwoosh.getInstance().setEmail((String) methodCall.argument("email"), new Callback<Boolean, SetEmailException>() { // from class: com.pushwoosh.plugin.PushwooshPlugin.9
                @Override // com.pushwoosh.function.Callback
                public void process(Result<Boolean, SetEmailException> result2) {
                    if (result2.isSuccess()) {
                        result.success(null);
                    } else {
                        PushwooshPlugin.this.sendResultException(result, result2.getException());
                    }
                }
            });
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void setEmails(MethodCall methodCall, final MethodChannel.Result result) {
        try {
            Pushwoosh.getInstance().setEmail((List<String>) methodCall.argument("emails"), new Callback<Boolean, SetEmailException>() { // from class: com.pushwoosh.plugin.PushwooshPlugin.10
                @Override // com.pushwoosh.function.Callback
                public void process(Result<Boolean, SetEmailException> result2) {
                    if (result2.isSuccess()) {
                        result.success(null);
                    } else {
                        PushwooshPlugin.this.sendResultException(result, result2.getException());
                    }
                }
            });
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void setUserEmails(MethodCall methodCall, final MethodChannel.Result result) {
        try {
            Pushwoosh.getInstance().setUser((String) methodCall.argument(io.flutter.plugins.firebase.analytics.Constants.USER_ID), (List) methodCall.argument("emails"), new Callback<Boolean, SetUserException>() { // from class: com.pushwoosh.plugin.PushwooshPlugin.11
                @Override // com.pushwoosh.function.Callback
                public void process(Result<Boolean, SetUserException> result2) {
                    if (result2.isSuccess()) {
                        result.success(null);
                    } else {
                        PushwooshPlugin.this.sendResultException(result, result2.getException());
                    }
                }
            });
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void registerSmsNumber(MethodCall methodCall, MethodChannel.Result result) {
        try {
            Pushwoosh.getInstance().registerSMSNumber((String) methodCall.argument("number"));
            result.success(null);
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void registerWhatsappNumber(MethodCall methodCall, MethodChannel.Result result) {
        try {
            Pushwoosh.getInstance().registerWhatsappNumber((String) methodCall.argument("number"));
            result.success(null);
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void startServerCommunication() {
        Pushwoosh.getInstance().startServerCommunication();
    }

    private void stopServerCommunication() {
        Pushwoosh.getInstance().stopServerCommunication();
    }

    private void setApplicationIconBadgeNumber(MethodCall methodCall, MethodChannel.Result result) {
        try {
            PushwooshBadge.setBadgeNumber(((Integer) methodCall.argument("badges")).intValue());
            result.success(null);
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void addToApplicationIconBadgeNumber(MethodCall methodCall, MethodChannel.Result result) {
        try {
            PushwooshBadge.addBadgeNumber(((Integer) methodCall.argument("badges")).intValue());
            result.success(null);
        } catch (Exception e) {
            sendResultException(result, e);
        }
    }

    private void initialize(MethodCall methodCall, Pushwoosh pushwoosh) {
        String str = (String) methodCall.argument(CommonUrlParts.APP_ID);
        if (str == null) {
            return;
        }
        String str2 = (String) methodCall.argument("base_url");
        if (str2 != null) {
            pushwoosh.setAppId(str, str2);
        } else {
            pushwoosh.setAppId(str);
        }
    }

    private void enableHuaweiNotifications() {
        Pushwoosh.getInstance().enableHuaweiPushNotifications();
    }

    private void setShowForegroundPush(MethodCall methodCall) {
        if (methodCall.argument("show_foreground_push") instanceof Boolean) {
            showForegroundPush = ((Boolean) methodCall.argument("show_foreground_push")).booleanValue();
        } else {
            showForegroundPush = false;
        }
    }

    private void handleAddJavascriptInterface(MethodCall methodCall, MethodChannel.Result result) {
        try {
            String str = (String) methodCall.argument("interfaceName");
            List list = (List) methodCall.argument("methodNames");
            if (str != null && list != null) {
                FlutterJavaScriptInterface flutterJavaScriptInterface = new FlutterJavaScriptInterface(str, list);
                jsInterfaces.put(str, flutterJavaScriptInterface);
                InAppManager.getInstance().addJavascriptInterface(flutterJavaScriptInterface, str);
                result.success(null);
                return;
            }
            result.error("INVALID_ARGUMENTS", "Interface name and method names are required", null);
        } catch (Exception e) {
            result.error("ADD_JS_INTERFACE_ERROR", e.getMessage(), null);
        }
    }

    private void handleRemoveJavascriptInterface(MethodCall methodCall, MethodChannel.Result result) {
        try {
            String str = (String) methodCall.argument("interfaceName");
            if (str == null) {
                result.error("INVALID_ARGUMENTS", "Interface name is required", null);
                return;
            }
            jsInterfaces.remove(str);
            InAppManager.getInstance().removeJavascriptInterface(str);
            result.success(null);
        } catch (Exception e) {
            result.error("REMOVE_JS_INTERFACE_ERROR", e.getMessage(), null);
        }
    }

    private void handleSendJavaScriptResponse(MethodCall methodCall, MethodChannel.Result result) {
        try {
            String str = (String) methodCall.argument("callbackId");
            Boolean bool = (Boolean) methodCall.argument(FirebaseAnalytics.Param.SUCCESS);
            Object objArgument = methodCall.argument("data");
            String str2 = (String) methodCall.argument("error");
            if (str != null && bool != null) {
                FlutterJavaScriptInterface.sendResponse(str, bool.booleanValue(), objArgument, str2);
                result.success(null);
                return;
            }
            result.error("INVALID_ARGUMENTS", "Callback ID and success flag are required", null);
        } catch (Exception e) {
            result.error("SEND_JS_RESPONSE_ERROR", e.getMessage(), null);
        }
    }

    public static void sendJavaScriptInterfaceCall(final Map<String, Object> map) {
        if (jsInterfaceEventSink != null) {
            new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.pushwoosh.plugin.PushwooshPlugin$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    PushwooshPlugin.lambda$sendJavaScriptInterfaceCall$0(map);
                }
            });
        }
    }

    static /* synthetic */ void lambda$sendJavaScriptInterfaceCall$0(Map map) {
        EventChannel.EventSink eventSink = jsInterfaceEventSink;
        if (eventSink != null) {
            eventSink.success(map);
        }
    }

    private static class StreamHandler implements EventChannel.StreamHandler {
        private EventChannel.EventSink events;
        private Map<String, Object> startPushNotification;

        private StreamHandler() {
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void sendEvent(Map<String, Object> map, boolean z) {
            EventChannel.EventSink eventSink = this.events;
            if (eventSink != null) {
                eventSink.success(convertMap(map, z));
            } else {
                this.startPushNotification = map;
            }
        }

        private Map<String, Object> convertMap(Map<String, Object> map, boolean z) {
            HashMap map2 = new HashMap();
            Object obj = map.get("title");
            if (obj == null) {
                obj = "";
            }
            map2.put("title", obj);
            Object obj2 = map.get("body");
            map2.put("message", obj2 != null ? obj2 : "");
            Object map3 = map.get("userdata");
            if (map3 == null) {
                map3 = new HashMap();
            }
            map2.put("customData", map3);
            map2.put("fromBackground", Boolean.valueOf(z));
            map2.put("payload", map);
            return map2;
        }

        @Override // io.flutter.plugin.common.EventChannel.StreamHandler
        public void onListen(Object obj, EventChannel.EventSink eventSink) {
            this.events = eventSink;
            Map<String, Object> map = this.startPushNotification;
            if (map != null) {
                sendEvent(map, true);
                this.startPushNotification = null;
            }
        }

        @Override // io.flutter.plugin.common.EventChannel.StreamHandler
        public void onCancel(Object obj) {
            this.events = null;
        }
    }

    private static class DeepLinkStreamHandler implements EventChannel.StreamHandler {
        private String cachedDeepLink;
        private EventChannel.EventSink events;

        private DeepLinkStreamHandler() {
        }

        @Override // io.flutter.plugin.common.EventChannel.StreamHandler
        public void onListen(Object obj, EventChannel.EventSink eventSink) {
            this.events = eventSink;
            String str = this.cachedDeepLink;
            if (str != null) {
                eventSink.success(str);
                this.cachedDeepLink = null;
            }
        }

        @Override // io.flutter.plugin.common.EventChannel.StreamHandler
        public void onCancel(Object obj) {
            this.events = null;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void sendDeepLink(String str) {
            EventChannel.EventSink eventSink = this.events;
            if (eventSink != null) {
                eventSink.success(str);
            } else {
                this.cachedDeepLink = str;
            }
        }
    }

    private class SafeResult implements MethodChannel.Result {
        private final MethodChannel.Result delegate;
        private boolean isSubmitted = false;

        public SafeResult(MethodChannel.Result result) {
            this.delegate = result;
        }

        @Override // io.flutter.plugin.common.MethodChannel.Result
        public synchronized void success(Object obj) {
            if (!this.isSubmitted) {
                this.isSubmitted = true;
                this.delegate.success(obj);
            }
        }

        @Override // io.flutter.plugin.common.MethodChannel.Result
        public synchronized void error(String str, String str2, Object obj) {
            if (!this.isSubmitted) {
                this.isSubmitted = true;
                this.delegate.error(str, str2, obj);
            }
        }

        @Override // io.flutter.plugin.common.MethodChannel.Result
        public synchronized void notImplemented() {
            if (!this.isSubmitted) {
                this.isSubmitted = true;
                this.delegate.notImplemented();
            }
        }
    }
}
