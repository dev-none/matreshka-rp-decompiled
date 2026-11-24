package com.pushwoosh.o;

import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.webkit.JavascriptInterface;
import android.webkit.WebView;
import com.pushwoosh.Pushwoosh;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.exception.GetTagsException;
import com.pushwoosh.exception.PostEventException;
import com.pushwoosh.exception.UnregisterForPushNotificationException;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.n.m;
import com.pushwoosh.tags.Tags;
import com.pushwoosh.tags.TagsBundle;
import com.unity3d.ads.core.domain.AndroidGetIsModulesInitEnabled;
import java.lang.ref.WeakReference;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class c {
    public static final String PUSHWOOSH_JS = "(function () {if (window.pushwoosh) return;window._pwCallbackHelper = {    __callbacks: {},    __cbCounter: 0,    invokeCallback: function(cbID) {        var args = Array.prototype.slice.call(arguments);        args.shift();        var cb = this.__callbacks[cbID];        this.__callbacks[cbID] = undefined;        return cb.apply(null, args);    },    registerCallback: function(func) {        var cbID = \"__cb\" + (+new Date) + this.__cbCounter;        this.__cbCounter++;        this.__callbacks[cbID] = func;        return cbID;    }};window.pushwoosh = {    _hwid: \"%s\",    _version: \"%s\",    _application: \"%s\",    _user_id: \"%s\",    _richmedia_code: \"%s\",    _device_type: \"%s\",    _message_hash: \"%s\",    _inapp_code: \"%s\",    postEvent: function(event, attributes, successCallback, errorCallback) {        if (!attributes) {            attributes = {};        }        if (!successCallback) {            successCallback = function() {};        }        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(successCallback);        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.postEvent(event, JSON.stringify(attributes), successCbId, errorCbId);    },    richMediaAction: function(inAppCode, richMediaCode, actionType, actionAttributes, successCallback, errorCallback) {        if (!successCallback) {            successCallback = function() {};        }        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(successCallback);        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.richMediaAction(inAppCode, richMediaCode, actionType, JSON.stringify(actionAttributes), successCbId, errorCbId);    },    sendTags: function(tags) {        pushwooshImpl.sendTags(JSON.stringify(tags));    },    getTags: function(successCallback, errorCallback) {        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(function(tagsString) {            console.log(\"tags: \" + tagsString);            successCallback(JSON.parse(tagsString));        });        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.getTags(successCbId, errorCbId);    },    log: function(str) {        pushwooshImpl.log(str);    },    closeInApp: function() {        pushwooshImpl.closeInApp();    },    getHwid: function() {        return this._hwid;    },    getVersion: function() {        return this._version;    },    getApplication: function() {        return this._application;    },    getUserId: function() {        return this._user_id;    },    getRichmediaCode: function() {        return this._richmedia_code;    },    getDeviceType: function() {        return this._device_type;    },    getMessageHash: function() {        return this._message_hash;    },    getInAppCode: function() {        return this._inapp_code;    },    getCustomData: function() {         var customData = pushwooshImpl.getCustomData();         if (customData) {             return JSON.parse(customData);         } else {             return null;         }    },    registerForPushNotifications: function() {        pushwooshImpl.registerForPushNotifications();    },    openAppSettings: function() {        pushwooshImpl.openAppSettings();    },    getChannels: function(callback) {        var clb = _pwCallbackHelper.registerCallback(function(channels) {             callback(JSON.parse(channels));        });        pushwooshImpl.getChannels(clb);    },    unregisterForPushNotifications: function(callback) {        var clb = _pwCallbackHelper.registerCallback(callback);        pushwooshImpl.unregisterForPushNotifications(clb);    },    isRegisteredForPushNotifications: function(callback) {        var clb = _pwCallbackHelper.registerCallback(function(state) {           if (state == 'true') {callback(true);} else if (state == 'false') {callback(false);}        });        pushwooshImpl.isRegisteredForPushNotifications(clb);    },    setEmail: function(email) {        pushwooshImpl.setEmail(email);    }};}());";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final a f5298a;
    public final WeakReference b;
    public final String c;
    public final String d;
    public final Handler e = new Handler(Looper.getMainLooper());
    public String f;
    public String g;

    public c(a aVar, WebView webView, View view, String str, String str2) {
        this.f5298a = aVar;
        this.b = new WeakReference(webView);
        this.c = str;
        this.d = str2;
    }

    public final void a(String str) {
        final String str2 = "javascript:_pwCallbackHelper.invokeCallback(\"" + str + "\");";
        this.e.post(new Runnable() { // from class: com.pushwoosh.o.c$$ExternalSyntheticLambda5
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(str2);
            }
        });
    }

    public final /* synthetic */ void b(String str, String str2, Result result) {
        if (result.isSuccess()) {
            a(str);
        } else {
            a(str2, ((PostEventException) result.getException()).getLocalizedMessage());
        }
    }

    public final /* synthetic */ void c(String str, String str2, Result result) {
        if (result.isSuccess()) {
            a(str);
        } else {
            a(str2, ((com.pushwoosh.c.c) result.getException()).getLocalizedMessage());
        }
    }

    @JavascriptInterface
    public void closeInApp() {
        richMediaAction(this.g, this.f, 4, null, null, null);
        ((m) this.f5298a).a();
    }

    @JavascriptInterface
    public String getCustomData() {
        return this.c;
    }

    @JavascriptInterface
    public void getTags(final String str, final String str2) {
        Pushwoosh.getInstance().getTags(new Callback() { // from class: com.pushwoosh.o.c$$ExternalSyntheticLambda4
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.a(str, str2, result);
            }
        });
    }

    @JavascriptInterface
    public void isRegisteredForPushNotifications(String str) {
        boolean z;
        try {
            z = PushwooshPlatform.getInstance().getRegistrationPrefs().isRegisteredForPush().get();
        } catch (Exception e) {
            PWLog.warn("[InApp]PushwooshJSInterface", "isRegisteredForPushNotifications JS bridge failed", e);
            z = false;
        }
        a(str, z ? AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE : "false");
    }

    @JavascriptInterface
    public void log(String str) {
        PWLog.debug("[InApp]PushwooshJSInterface", str);
    }

    public void onPageFinished(WebView webView, Resource resource) {
        String hwid = Pushwoosh.getInstance().getHwid();
        String applicationCode = Pushwoosh.getInstance().getApplicationCode();
        String userId = Pushwoosh.getInstance().getUserId();
        String strSubstring = !resource.isInApp() ? resource.getCode().substring(2) : "";
        int iDeviceType = DeviceSpecificProvider.getInstance().deviceType();
        String str = this.d;
        if (str == null) {
            str = "";
        }
        webView.loadUrl("javascript:(function () {if (window.pushwoosh) return;window._pwCallbackHelper = {    __callbacks: {},    __cbCounter: 0,    invokeCallback: function(cbID) {        var args = Array.prototype.slice.call(arguments);        args.shift();        var cb = this.__callbacks[cbID];        this.__callbacks[cbID] = undefined;        return cb.apply(null, args);    },    registerCallback: function(func) {        var cbID = \"__cb\" + (+new Date) + this.__cbCounter;        this.__cbCounter++;        this.__callbacks[cbID] = func;        return cbID;    }};window.pushwoosh = {    _hwid: \"" + hwid + "\",    _version: \"6.17.1\",    _application: \"" + applicationCode + "\",    _user_id: \"" + userId + "\",    _richmedia_code: \"" + strSubstring + "\",    _device_type: \"" + iDeviceType + "\",    _message_hash: \"" + str + "\",    _inapp_code: \"" + (resource.isInApp() ? resource.getCode() : "") + "\",    postEvent: function(event, attributes, successCallback, errorCallback) {        if (!attributes) {            attributes = {};        }        if (!successCallback) {            successCallback = function() {};        }        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(successCallback);        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.postEvent(event, JSON.stringify(attributes), successCbId, errorCbId);    },    richMediaAction: function(inAppCode, richMediaCode, actionType, actionAttributes, successCallback, errorCallback) {        if (!successCallback) {            successCallback = function() {};        }        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(successCallback);        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.richMediaAction(inAppCode, richMediaCode, actionType, JSON.stringify(actionAttributes), successCbId, errorCbId);    },    sendTags: function(tags) {        pushwooshImpl.sendTags(JSON.stringify(tags));    },    getTags: function(successCallback, errorCallback) {        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(function(tagsString) {            console.log(\"tags: \" + tagsString);            successCallback(JSON.parse(tagsString));        });        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.getTags(successCbId, errorCbId);    },    log: function(str) {        pushwooshImpl.log(str);    },    closeInApp: function() {        pushwooshImpl.closeInApp();    },    getHwid: function() {        return this._hwid;    },    getVersion: function() {        return this._version;    },    getApplication: function() {        return this._application;    },    getUserId: function() {        return this._user_id;    },    getRichmediaCode: function() {        return this._richmedia_code;    },    getDeviceType: function() {        return this._device_type;    },    getMessageHash: function() {        return this._message_hash;    },    getInAppCode: function() {        return this._inapp_code;    },    getCustomData: function() {         var customData = pushwooshImpl.getCustomData();         if (customData) {             return JSON.parse(customData);         } else {             return null;         }    },    registerForPushNotifications: function() {        pushwooshImpl.registerForPushNotifications();    },    openAppSettings: function() {        pushwooshImpl.openAppSettings();    },    getChannels: function(callback) {        var clb = _pwCallbackHelper.registerCallback(function(channels) {             callback(JSON.parse(channels));        });        pushwooshImpl.getChannels(clb);    },    unregisterForPushNotifications: function(callback) {        var clb = _pwCallbackHelper.registerCallback(callback);        pushwooshImpl.unregisterForPushNotifications(clb);    },    isRegisteredForPushNotifications: function(callback) {        var clb = _pwCallbackHelper.registerCallback(function(state) {           if (state == 'true') {callback(true);} else if (state == 'false') {callback(false);}        });        pushwooshImpl.isRegisteredForPushNotifications(clb);    },    setEmail: function(email) {        pushwooshImpl.setEmail(email);    }};}());");
    }

    public void onPageStarted(WebView webView, Resource resource) {
        String hwid = Pushwoosh.getInstance().getHwid();
        String applicationCode = Pushwoosh.getInstance().getApplicationCode();
        String userId = Pushwoosh.getInstance().getUserId();
        String strSubstring = !resource.isInApp() ? resource.getCode().substring(2) : "";
        int iDeviceType = DeviceSpecificProvider.getInstance().deviceType();
        String str = this.d;
        if (str == null) {
            str = "";
        }
        String str2 = "javascript:(function () {if (window.pushwoosh) return;window._pwCallbackHelper = {    __callbacks: {},    __cbCounter: 0,    invokeCallback: function(cbID) {        var args = Array.prototype.slice.call(arguments);        args.shift();        var cb = this.__callbacks[cbID];        this.__callbacks[cbID] = undefined;        return cb.apply(null, args);    },    registerCallback: function(func) {        var cbID = \"__cb\" + (+new Date) + this.__cbCounter;        this.__cbCounter++;        this.__callbacks[cbID] = func;        return cbID;    }};window.pushwoosh = {    _hwid: \"" + hwid + "\",    _version: \"6.17.1\",    _application: \"" + applicationCode + "\",    _user_id: \"" + userId + "\",    _richmedia_code: \"" + strSubstring + "\",    _device_type: \"" + iDeviceType + "\",    _message_hash: \"" + str + "\",    _inapp_code: \"" + (resource.isInApp() ? resource.getCode() : "") + "\",    postEvent: function(event, attributes, successCallback, errorCallback) {        if (!attributes) {            attributes = {};        }        if (!successCallback) {            successCallback = function() {};        }        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(successCallback);        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.postEvent(event, JSON.stringify(attributes), successCbId, errorCbId);    },    richMediaAction: function(inAppCode, richMediaCode, actionType, actionAttributes, successCallback, errorCallback) {        if (!successCallback) {            successCallback = function() {};        }        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(successCallback);        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.richMediaAction(inAppCode, richMediaCode, actionType, JSON.stringify(actionAttributes), successCbId, errorCbId);    },    sendTags: function(tags) {        pushwooshImpl.sendTags(JSON.stringify(tags));    },    getTags: function(successCallback, errorCallback) {        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(function(tagsString) {            console.log(\"tags: \" + tagsString);            successCallback(JSON.parse(tagsString));        });        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.getTags(successCbId, errorCbId);    },    log: function(str) {        pushwooshImpl.log(str);    },    closeInApp: function() {        pushwooshImpl.closeInApp();    },    getHwid: function() {        return this._hwid;    },    getVersion: function() {        return this._version;    },    getApplication: function() {        return this._application;    },    getUserId: function() {        return this._user_id;    },    getRichmediaCode: function() {        return this._richmedia_code;    },    getDeviceType: function() {        return this._device_type;    },    getMessageHash: function() {        return this._message_hash;    },    getInAppCode: function() {        return this._inapp_code;    },    getCustomData: function() {         var customData = pushwooshImpl.getCustomData();         if (customData) {             return JSON.parse(customData);         } else {             return null;         }    },    registerForPushNotifications: function() {        pushwooshImpl.registerForPushNotifications();    },    openAppSettings: function() {        pushwooshImpl.openAppSettings();    },    getChannels: function(callback) {        var clb = _pwCallbackHelper.registerCallback(function(channels) {             callback(JSON.parse(channels));        });        pushwooshImpl.getChannels(clb);    },    unregisterForPushNotifications: function(callback) {        var clb = _pwCallbackHelper.registerCallback(callback);        pushwooshImpl.unregisterForPushNotifications(clb);    },    isRegisteredForPushNotifications: function(callback) {        var clb = _pwCallbackHelper.registerCallback(function(state) {           if (state == 'true') {callback(true);} else if (state == 'false') {callback(false);}        });        pushwooshImpl.isRegisteredForPushNotifications(clb);    },    setEmail: function(email) {        pushwooshImpl.setEmail(email);    }};}());";
        this.f = !resource.isInApp() ? resource.getCode().substring(2) : "";
        this.g = resource.isInApp() ? resource.getCode() : "";
        webView.loadUrl(str2);
    }

    @JavascriptInterface
    public void openAppSettings() {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            PWLog.warn("[InApp]PushwooshJSInterface", "openAppSettings skipped: application context is null");
            return;
        }
        Intent intent = new Intent();
        intent.setAction("android.settings.APP_NOTIFICATION_SETTINGS");
        intent.putExtra("app_package", applicationContext.getPackageName());
        intent.putExtra("app_uid", applicationContext.getApplicationInfo().uid);
        intent.addFlags(268435456);
        intent.putExtra("android.provider.extra.APP_PACKAGE", applicationContext.getPackageName());
        applicationContext.startActivity(intent);
    }

    @JavascriptInterface
    public void postEvent(String str, String str2, final String str3, final String str4) {
        try {
            PushwooshPlatform.getInstance().pushwooshInApp().postEvent(str, Tags.fromJson(new JSONObject(str2)), new Callback() { // from class: com.pushwoosh.o.c$$ExternalSyntheticLambda0
                @Override // com.pushwoosh.function.Callback
                public final void process(Result result) {
                    this.f$0.b(str3, str4, result);
                }
            });
        } catch (Exception e) {
            PWLog.error("postEvent method was failed", e);
            a(str4, e.getLocalizedMessage());
        }
    }

    @JavascriptInterface
    public void registerForPushNotifications() {
        Pushwoosh.getInstance().registerForPushNotifications();
    }

    @JavascriptInterface
    public void richMediaAction(String str, String str2, int i, String str3, final String str4, final String str5) {
        try {
            PushwooshPlatform.getInstance().pushwooshInApp().sendRichMediaAction(str2, str, this.d, str3, i, new Callback() { // from class: com.pushwoosh.o.c$$ExternalSyntheticLambda3
                @Override // com.pushwoosh.function.Callback
                public final void process(Result result) {
                    this.f$0.c(str4, str5, result);
                }
            });
        } catch (Exception e) {
            PWLog.error("[InApp]PushwooshJSInterface", "failed to send /richMediaAction request", e);
            a(str5, e.getLocalizedMessage());
        }
    }

    @JavascriptInterface
    public void sendTags(String str) {
        try {
            Pushwoosh.getInstance().setTags(new TagsBundle.Builder().putAll(new JSONObject(str)).build());
        } catch (JSONException e) {
            PWLog.error("Invalid tags format, expected object with string properties", e);
        }
    }

    @JavascriptInterface
    public void setEmail(String str) {
        Pushwoosh.getInstance().setEmail(str);
    }

    @JavascriptInterface
    public void unregisterForPushNotifications(final String str) {
        Pushwoosh.getInstance().unregisterForPushNotifications(new Callback() { // from class: com.pushwoosh.o.c$$ExternalSyntheticLambda2
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.a(str, result);
            }
        });
    }

    public final void a(String str, String str2) {
        final String str3 = "javascript:_pwCallbackHelper.invokeCallback(\"" + str + "\", \"" + (str2 == null ? "" : str2.replace("\"", "\\\"")) + "\");";
        this.e.post(new Runnable() { // from class: com.pushwoosh.o.c$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.c(str3);
            }
        });
    }

    public final void b(String str) {
        WebView webView = (WebView) this.b.get();
        if (webView != null) {
            webView.loadUrl(str);
        }
    }

    public final /* synthetic */ void a(String str, String str2, Result result) {
        if (result.isSuccess()) {
            TagsBundle tagsBundle = (TagsBundle) result.getData();
            a(str, (tagsBundle == null ? new JSONObject() : tagsBundle.toJson()).toString());
        } else {
            a(str2, ((GetTagsException) result.getException()).getMessage());
        }
    }

    public final void c(String str) {
        WebView webView = (WebView) this.b.get();
        if (webView != null) {
            webView.loadUrl(str);
        }
    }

    public final /* synthetic */ void a(String str, Result result) {
        if (result.getException() == null) {
            a(str);
        } else {
            a(str, ((UnregisterForPushNotificationException) result.getException()).getMessage());
        }
    }
}
