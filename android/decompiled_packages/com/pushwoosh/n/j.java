package com.pushwoosh.n;

import android.animation.ValueAnimator;
import android.app.Activity;
import android.graphics.drawable.ColorDrawable;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.PopupWindow;
import androidx.core.util.Consumer;
import com.pushwoosh.Pushwoosh;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.function.Result;
import com.pushwoosh.inapp.event.ActivityBroughtOnTopEvent;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.inapp.view.InAppViewEvent;
import com.pushwoosh.inapp.view.config.ModalConfigResolver;
import com.pushwoosh.inapp.view.config.ModalRichmediaConfig;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaViewPosition;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaWindowWidth;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RepositoryModule;
import com.pushwoosh.richmedia.RichMediaManager;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public final class j extends PopupWindow implements d, a, k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Resource f5267a;
    public final ModalRichmediaConfig b;
    public final int c;
    public final int d;
    public com.pushwoosh.i.a e;
    public final WeakReference f;
    public l g;

    public j(Activity activity, final Resource resource) {
        ModalRichmediaConfig defaultRichMediaConfig;
        super(activity);
        this.c = 0;
        this.d = 0;
        this.f = new WeakReference(null);
        PWLog.noise("ModalRichMediaWindow", "Initializing ModalRichMediaWindow");
        this.f5267a = resource;
        PWLog.noise("[InApp] ModalRichMediaWindow", "loadEffectiveConfig for resource: " + resource.getCode());
        try {
            ModalRichmediaConfig modalRichmediaConfigB = new com.pushwoosh.e.a(new com.pushwoosh.m.a(activity)).b(resource.getCode());
            if (modalRichmediaConfigB != null) {
                resource.setResourceModalConfig(modalRichmediaConfigB);
                defaultRichMediaConfig = ModalConfigResolver.getEffectiveConfig(resource);
            } else {
                PWLog.debug("[InApp] ModalRichMediaWindow", "No resource-specific config found for " + resource.getCode() + ", using global config");
                defaultRichMediaConfig = RichMediaManager.getDefaultRichMediaConfig();
            }
        } catch (Exception e) {
            PWLog.error("[InApp] ModalRichMediaWindow", "Failed to load config for " + resource.getCode() + ": " + e.getMessage(), e);
            defaultRichMediaConfig = RichMediaManager.getDefaultRichMediaConfig();
        }
        this.b = defaultRichMediaConfig;
        if (defaultRichMediaConfig.getWindowWidth() == ModalRichMediaWindowWidth.FULL_SCREEN) {
            setWidth(-1);
        } else if (defaultRichMediaConfig.getWindowWidth() == ModalRichMediaWindowWidth.WRAP_CONTENT) {
            setWidth(-2);
        }
        ModalRichMediaViewPosition viewPosition = defaultRichMediaConfig.getViewPosition();
        ModalRichMediaViewPosition modalRichMediaViewPosition = ModalRichMediaViewPosition.FULLSCREEN;
        if (viewPosition == modalRichMediaViewPosition) {
            setHeight(-1);
            setWidth(-1);
        } else {
            setHeight(-2);
        }
        setFocusable(true);
        setBackgroundDrawable(new ColorDrawable(0));
        setInputMethodMode(1);
        setOnDismissListener(new PopupWindow.OnDismissListener() { // from class: com.pushwoosh.n.j$$ExternalSyntheticLambda1
            @Override // android.widget.PopupWindow.OnDismissListener
            public final void onDismiss() {
                EventBus.sendEvent(new com.pushwoosh.f.c(resource));
            }
        });
        if (defaultRichMediaConfig.getViewPosition() == ModalRichMediaViewPosition.TOP) {
            this.c = com.pushwoosh.r.b.a();
        }
        if (defaultRichMediaConfig.getViewPosition() == ModalRichMediaViewPosition.BOTTOM) {
            this.d = com.pushwoosh.r.b.a(defaultRichMediaConfig);
        }
        setClippingEnabled(false);
        if (Build.VERSION.SDK_INT >= 29) {
            setTouchModal(false);
        }
        setTouchInterceptor(new f(this));
        this.f = new WeakReference(this);
        if (defaultRichMediaConfig.getViewPosition() == modalRichMediaViewPosition) {
            this.g = new l(activity, com.pushwoosh.l.a.b);
        } else {
            this.g = new l(activity, com.pushwoosh.l.a.c);
        }
        this.g.setWebViewClient(new m(this, resource));
        new b(resource, this).a();
        setContentView(this.g);
    }

    public static void a(final Resource resource) {
        PWLog.noise("[InApp] ModalRichMediaWindow", "createPopupWindow for resource: " + resource.getCode());
        com.pushwoosh.r.b.a(new Consumer() { // from class: com.pushwoosh.n.j$$ExternalSyntheticLambda2
            @Override // androidx.core.util.Consumer
            public final void accept(Object obj) {
                j.a(resource, (View) obj);
            }
        });
    }

    public static /* synthetic */ void c(Resource resource) {
        if (PushwooshPlatform.getInstance().getTopActivity() == null) {
            EventBus.subscribe(ActivityBroughtOnTopEvent.class, new g(resource));
        } else {
            a(resource);
        }
    }

    public static void d(final Resource resource) {
        PWLog.noise("[InApp] ModalRichMediaWindow", "showModalRichMediaWindow for resource: " + resource.getCode());
        new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.pushwoosh.n.j$$ExternalSyntheticLambda3
            @Override // java.lang.Runnable
            public final void run() {
                j.c(resource);
            }
        }, 1000L);
    }

    @Override // com.pushwoosh.n.d
    public final int c() {
        return 0;
    }

    @Override // com.pushwoosh.n.d
    public final void close() {
        ValueAnimator valueAnimatorA;
        if (this.g == null) {
            dismiss();
            return;
        }
        ModalRichmediaConfig modalRichmediaConfig = this.b;
        int i = com.pushwoosh.r.b.f5305a;
        int i2 = com.pushwoosh.r.a.f5304a[modalRichmediaConfig.getDismissAnimationType().ordinal()];
        if (i2 == 1) {
            valueAnimatorA = com.pushwoosh.r.b.a(this);
        } else if (i2 == 2) {
            valueAnimatorA = com.pushwoosh.r.b.a(this, com.pushwoosh.r.b.f5305a);
        } else if (i2 == 3) {
            valueAnimatorA = com.pushwoosh.r.b.b(this, com.pushwoosh.r.b.f5305a);
        } else if (i2 != 4) {
            valueAnimatorA = i2 != 5 ? null : com.pushwoosh.r.b.b(this, com.pushwoosh.r.b.b, modalRichmediaConfig);
        } else {
            valueAnimatorA = com.pushwoosh.r.b.a(this, com.pushwoosh.r.b.b, modalRichmediaConfig);
        }
        if (valueAnimatorA != null) {
            Integer animationDuration = this.b.getAnimationDuration();
            valueAnimatorA.setDuration(animationDuration != null ? animationDuration.longValue() : 1000L);
            valueAnimatorA.addListener(new h(this));
            valueAnimatorA.start();
        } else {
            dismiss();
        }
        l lVar = this.g;
        WebView webView = lVar.d;
        if (webView != null) {
            m mVar = lVar.e;
            if (mVar != null) {
                mVar.h = true;
            }
            webView.stopLoading();
            ViewGroup viewGroup = (ViewGroup) lVar.d.getParent();
            if (viewGroup != null) {
                viewGroup.removeView(lVar.d);
            }
            lVar.d.destroy();
            lVar.d = null;
            lVar.e = null;
        }
        this.g = null;
    }

    @Override // com.pushwoosh.n.k
    public final void e() {
        l lVar = this.g;
        if (lVar != null) {
            lVar.a();
        }
    }

    @Override // com.pushwoosh.n.k
    public final void b() {
        l lVar = this.g;
        if (lVar != null) {
            lVar.c();
        }
    }

    /* JADX WARN: Code duplicated, block: B:10:0x0025  */
    /* JADX WARN: Code duplicated, block: B:30:0x0066  */
    /* JADX WARN: Code duplicated, block: B:32:0x006e  */
    /* JADX WARN: Code duplicated, block: B:33:0x0073  */
    /* JADX WARN: Code duplicated, block: B:35:0x007b  */
    /* JADX WARN: Code duplicated, block: B:59:0x00e1 A[Catch: Exception -> 0x0101, TryCatch #0 {Exception -> 0x0101, blocks: (B:42:0x0099, B:59:0x00e1, B:61:0x00e9, B:63:0x00f0, B:64:0x00f6, B:45:0x00a6, B:53:0x00bf, B:54:0x00c6, B:55:0x00cd, B:56:0x00d4, B:57:0x00db), top: B:69:0x0099 }] */
    /* JADX WARN: Code duplicated, block: B:61:0x00e9 A[Catch: Exception -> 0x0101, TryCatch #0 {Exception -> 0x0101, blocks: (B:42:0x0099, B:59:0x00e1, B:61:0x00e9, B:63:0x00f0, B:64:0x00f6, B:45:0x00a6, B:53:0x00bf, B:54:0x00c6, B:55:0x00cd, B:56:0x00d4, B:57:0x00db), top: B:69:0x0099 }] */
    /* JADX WARN: Code duplicated, block: B:62:0x00ee  */
    @Override // com.pushwoosh.n.d
    public final void d() {
        final int i;
        final int i2;
        ValueAnimator valueAnimatorC;
        Integer animationDuration;
        long jLongValue;
        l lVar = this.g;
        if (lVar != null) {
            lVar.a();
            boolean zA = com.pushwoosh.e0.k.a();
            ModalRichmediaConfig modalRichmediaConfig = this.b;
            int i3 = com.pushwoosh.r.b.f5305a;
            final int iA = 0;
            if (zA) {
                i = 0;
            } else {
                int i4 = com.pushwoosh.r.a.b[modalRichmediaConfig.getPresentAnimationType().ordinal()];
                if (i4 == 2) {
                    i = -com.pushwoosh.r.b.f5305a;
                } else if (i4 != 5) {
                    i = 0;
                } else {
                    i = com.pushwoosh.r.b.f5305a;
                }
            }
            ModalRichmediaConfig modalRichmediaConfig2 = this.b;
            if (zA) {
                ModalRichMediaViewPosition viewPosition = modalRichmediaConfig2.getViewPosition();
                if (viewPosition == ModalRichMediaViewPosition.TOP) {
                    iA = com.pushwoosh.r.b.a();
                } else if (viewPosition == ModalRichMediaViewPosition.BOTTOM) {
                    iA = com.pushwoosh.r.b.a(modalRichmediaConfig2);
                }
            } else {
                int i5 = com.pushwoosh.r.a.b[modalRichmediaConfig2.getPresentAnimationType().ordinal()];
                if (i5 == 1) {
                    if (modalRichmediaConfig2.getViewPosition() == ModalRichMediaViewPosition.TOP) {
                        iA = com.pushwoosh.r.b.a();
                    } else if (modalRichmediaConfig2.getViewPosition() == ModalRichMediaViewPosition.BOTTOM) {
                        iA = com.pushwoosh.r.b.a(modalRichmediaConfig2);
                    }
                } else if (i5 == 4) {
                    iA = com.pushwoosh.r.b.b;
                } else if (i5 == 5) {
                    iA = -com.pushwoosh.r.b.b;
                } else if (i5 == 6) {
                    if (modalRichmediaConfig2.getViewPosition() == ModalRichMediaViewPosition.TOP) {
                        iA = com.pushwoosh.r.b.a();
                    } else if (modalRichmediaConfig2.getViewPosition() == ModalRichMediaViewPosition.BOTTOM) {
                        iA = com.pushwoosh.r.b.a(modalRichmediaConfig2);
                    }
                }
            }
            int i6 = com.pushwoosh.r.a.c[this.b.getViewPosition().ordinal()];
            if (i6 != 1) {
                i2 = i6 != 2 ? 17 : 48;
            } else {
                i2 = 80;
            }
            try {
                com.pushwoosh.r.b.a(new Consumer() { // from class: com.pushwoosh.n.j$$ExternalSyntheticLambda4
                    @Override // androidx.core.util.Consumer
                    public final void accept(Object obj) {
                        this.f$0.a(i2, i, iA, (View) obj);
                    }
                });
                ModalRichmediaConfig modalRichmediaConfig3 = this.b;
                if (!zA) {
                    int i7 = com.pushwoosh.r.a.b[modalRichmediaConfig3.getPresentAnimationType().ordinal()];
                    if (i7 == 1) {
                        valueAnimatorC = com.pushwoosh.r.b.c(this);
                    } else if (i7 == 2) {
                        valueAnimatorC = com.pushwoosh.r.b.c(this, com.pushwoosh.r.b.f5305a);
                    } else if (i7 == 3) {
                        valueAnimatorC = com.pushwoosh.r.b.d(this, com.pushwoosh.r.b.f5305a);
                    } else if (i7 == 4) {
                        valueAnimatorC = com.pushwoosh.r.b.c(this, com.pushwoosh.r.b.b, modalRichmediaConfig3);
                    } else if (i7 == 5) {
                        valueAnimatorC = com.pushwoosh.r.b.d(this, com.pushwoosh.r.b.b, modalRichmediaConfig3);
                    }
                    if (valueAnimatorC != null) {
                        animationDuration = this.b.getAnimationDuration();
                        if (animationDuration != null) {
                            jLongValue = animationDuration.longValue();
                        } else {
                            jLongValue = 1000;
                        }
                        valueAnimatorC.setDuration(jLongValue);
                        valueAnimatorC.start();
                    }
                    EventBus.sendEvent(new InAppViewEvent(this.f5267a));
                }
                valueAnimatorC = null;
                if (valueAnimatorC != null) {
                    animationDuration = this.b.getAnimationDuration();
                    if (animationDuration != null) {
                        jLongValue = animationDuration.longValue();
                    } else {
                        jLongValue = 1000;
                    }
                    valueAnimatorC.setDuration(jLongValue);
                    valueAnimatorC.start();
                }
                EventBus.sendEvent(new InAppViewEvent(this.f5267a));
            } catch (Exception e) {
                PWLog.error("[InApp] ModalRichMediaWindow", "Failed to show modal rich media", e);
            }
        }
    }

    public static /* synthetic */ void a(Resource resource, View view) {
        Activity topActivity = PushwooshPlatform.getInstance().getTopActivity();
        if (topActivity != null && view.getWindowToken() != null) {
            new j(topActivity, resource);
        } else {
            PWLog.error("[InApp] ModalRichMediaWindow", "createPopupWindow failed: topActivity or windowToken is null");
        }
    }

    public final void a(int i, int i2, int i3, View view) {
        if (PushwooshPlatform.getInstance().getTopActivity() != null) {
            showAtLocation(view, i, i2, i3);
            PWLog.info("[InApp] ModalRichMediaWindow", "Rich media displayed to user: " + this.f5267a.getCode() + ", position: " + this.b.getViewPosition());
            return;
        }
        EventBus.subscribe(ActivityBroughtOnTopEvent.class, new i(this));
    }

    @Override // com.pushwoosh.n.a
    public final void a() {
        k kVar = (k) this.f.get();
        if (kVar != null) {
            kVar.b();
        }
    }

    @Override // com.pushwoosh.n.a
    public final void a(Result result) {
        k kVar = (k) this.f.get();
        if (kVar == null) {
            return;
        }
        if (result.isSuccess()) {
            if (kVar.a((com.pushwoosh.i.a) result.getData())) {
                return;
            }
            kVar.e();
        } else {
            kVar.e();
            kVar.a((com.pushwoosh.g.a) result.getException());
        }
    }

    @Override // com.pushwoosh.n.k
    public final boolean a(com.pushwoosh.i.a aVar) {
        if (this.g == null || aVar.equals(this.e)) {
            return false;
        }
        this.e = aVar;
        String str = aVar.c;
        String strConcat = aVar.b;
        if (!strConcat.endsWith("/")) {
            strConcat = strConcat.concat("/");
        }
        l lVar = this.g;
        String str2 = RepositoryModule.getNotificationPreferences().messageHash().get();
        String hwid = Pushwoosh.getInstance().getHwid();
        String applicationCode = Pushwoosh.getInstance().getApplicationCode();
        String userId = Pushwoosh.getInstance().getUserId();
        String strSubstring = !this.f5267a.isInApp() ? this.f5267a.getCode().substring(2) : "";
        int iDeviceType = DeviceSpecificProvider.getInstance().deviceType();
        if (str2 == null) {
            str2 = "";
        }
        lVar.a(strConcat, str.replace("<head>", "<head>\n<script type=\"text/javascript\">" + ("(function () {if (window.pushwoosh) return;window._pwCallbackHelper = {    __callbacks: {},    __cbCounter: 0,    invokeCallback: function(cbID) {        var args = Array.prototype.slice.call(arguments);        args.shift();        var cb = this.__callbacks[cbID];        this.__callbacks[cbID] = undefined;        return cb.apply(null, args);    },    registerCallback: function(func) {        var cbID = \"__cb\" + (+new Date) + this.__cbCounter;        this.__cbCounter++;        this.__callbacks[cbID] = func;        return cbID;    }};window.pushwoosh = {    _hwid: \"" + hwid + "\",    _version: \"6.17.1\",    _application: \"" + applicationCode + "\",    _user_id: \"" + userId + "\",    _richmedia_code: \"" + strSubstring + "\",    _device_type: \"" + iDeviceType + "\",    _message_hash: \"" + str2 + "\",    _inapp_code: \"" + (this.f5267a.isInApp() ? this.f5267a.getCode() : "") + "\",    postEvent: function(event, attributes, successCallback, errorCallback) {        if (!attributes) {            attributes = {};        }        if (!successCallback) {            successCallback = function() {};        }        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(successCallback);        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.postEvent(event, JSON.stringify(attributes), successCbId, errorCbId);    },    richMediaAction: function(inAppCode, richMediaCode, actionType, actionAttributes, successCallback, errorCallback) {        if (!successCallback) {            successCallback = function() {};        }        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(successCallback);        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.richMediaAction(inAppCode, richMediaCode, actionType, JSON.stringify(actionAttributes), successCbId, errorCbId);    },    sendTags: function(tags) {        pushwooshImpl.sendTags(JSON.stringify(tags));    },    getTags: function(successCallback, errorCallback) {        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(function(tagsString) {            console.log(\"tags: \" + tagsString);            successCallback(JSON.parse(tagsString));        });        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.getTags(successCbId, errorCbId);    },    log: function(str) {        pushwooshImpl.log(str);    },    closeInApp: function() {        pushwooshImpl.closeInApp();    },    getHwid: function() {        return this._hwid;    },    getVersion: function() {        return this._version;    },    getApplication: function() {        return this._application;    },    getUserId: function() {        return this._user_id;    },    getRichmediaCode: function() {        return this._richmedia_code;    },    getDeviceType: function() {        return this._device_type;    },    getMessageHash: function() {        return this._message_hash;    },    getInAppCode: function() {        return this._inapp_code;    },    getCustomData: function() {         var customData = pushwooshImpl.getCustomData();         if (customData) {             return JSON.parse(customData);         } else {             return null;         }    },    registerForPushNotifications: function() {        pushwooshImpl.registerForPushNotifications();    },    openAppSettings: function() {        pushwooshImpl.openAppSettings();    },    getChannels: function(callback) {        var clb = _pwCallbackHelper.registerCallback(function(channels) {             callback(JSON.parse(channels));        });        pushwooshImpl.getChannels(clb);    },    unregisterForPushNotifications: function(callback) {        var clb = _pwCallbackHelper.registerCallback(callback);        pushwooshImpl.unregisterForPushNotifications(clb);    },    isRegisteredForPushNotifications: function(callback) {        var clb = _pwCallbackHelper.registerCallback(function(state) {           if (state == 'true') {callback(true);} else if (state == 'false') {callback(false);}        });        pushwooshImpl.isRegisteredForPushNotifications(clb);    },    setEmail: function(email) {        pushwooshImpl.setEmail(email);    }};}());") + "</script>"));
        return true;
    }

    @Override // com.pushwoosh.n.k
    public final void a(com.pushwoosh.g.a aVar) {
        PWLog.error("[InApp] ModalRichMediaWindow", "Failed loading html data", aVar);
        if (this.f5267a.isInApp()) {
            EventBus.sendEvent(new e());
        }
        close();
    }
}
