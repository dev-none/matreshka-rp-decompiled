package com.pushwoosh.inapp.view;

import android.app.FragmentTransaction;
import android.content.Context;
import android.content.Intent;
import android.graphics.Color;
import android.media.Ringtone;
import android.media.RingtoneManager;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.window.OnBackInvokedCallback;
import com.pushwoosh.Pushwoosh;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.f.c;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.NotificationUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.n.e;
import com.pushwoosh.n.k;
import com.pushwoosh.n.l;
import com.pushwoosh.n.m;
import com.pushwoosh.repository.RepositoryModule;
import com.pushwoosh.richmedia.animation.RichMediaAnimation;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public class RichMediaWebActivity extends WebActivity implements k {
    private boolean d;
    private boolean f;
    private OnBackInvokedCallback g;
    private l h;
    private String i;
    private int j;
    private com.pushwoosh.i.a k;
    private boolean l;
    private boolean m;
    private boolean o;
    final Handler e = new Handler();
    private boolean n = false;

    static void c(RichMediaWebActivity richMediaWebActivity) {
        if (richMediaWebActivity.n) {
            return;
        }
        richMediaWebActivity.n = true;
        EventBus.sendEvent(new c(richMediaWebActivity.b));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void f() {
        this.d = true;
    }

    private void g() {
        long timeOutBackButtonEnable = PushwooshPlatform.getInstance().getRichMediaStyle().getTimeOutBackButtonEnable();
        if (timeOutBackButtonEnable == 0) {
            this.d = true;
        } else {
            this.e.postDelayed(new Runnable() { // from class: com.pushwoosh.inapp.view.RichMediaWebActivity$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.f();
                }
            }, timeOutBackButtonEnable);
        }
    }

    @Override // com.pushwoosh.inapp.view.WebActivity, com.pushwoosh.n.d
    public final void close() {
        com.pushwoosh.n.c cVar = (com.pushwoosh.n.c) getFragmentManager().findFragmentByTag("RichMediaWebActivitypushwoosh.inAppFragment");
        if (cVar != null) {
            getFragmentManager().beginTransaction().remove(cVar).commitAllowingStateLoss();
        }
        if (this.f) {
            return;
        }
        this.f = true;
        l lVar = this.h;
        if (lVar != null) {
            m mVar = lVar.e;
            if (mVar != null) {
                mVar.h = true;
            }
            a aVar = new a(this);
            l.a(lVar.b, lVar.k, Color.alpha(0));
            RichMediaAnimation richMediaAnimation = lVar.i;
            if (richMediaAnimation != null) {
                richMediaAnimation.closeAnimation(lVar.d, lVar.b, aVar);
            }
        }
    }

    @Override // com.pushwoosh.inapp.view.WebActivity, com.pushwoosh.n.d
    public final void d() {
        super.d();
        if (this.h == null) {
            return;
        }
        PWLog.noise("RichMediaWebActivity", "Preparing to display with animation: " + this.b.getCode());
        if ((this.j & 1) != 0) {
            getWindow().addFlags(524288);
            if (RepositoryModule.getNotificationPreferences().lightScreenOn().get()) {
                NotificationUtils.turnScreenOn();
            }
        }
        Uri soundUri = NotificationUtils.getSoundUri(this.i);
        if (soundUri != null && !this.o) {
            this.o = true;
            a(soundUri);
        }
        if (this.m) {
            return;
        }
        if (!this.l) {
            this.l = true;
            EventBus.sendEvent(new InAppViewEvent(this.b));
        }
        l lVar = this.h;
        if (lVar.f) {
            lVar.b.setBackgroundColor(lVar.k);
        } else {
            l.a(lVar.b, Color.alpha(0), lVar.k);
            lVar.f = true;
            RichMediaAnimation richMediaAnimation = lVar.i;
            if (richMediaAnimation != null) {
                richMediaAnimation.openAnimation(lVar.d, lVar.b);
            }
        }
        PWLog.info("RichMediaWebActivity", "Rich media displayed to user with animation: " + this.b.getCode());
        this.m = true;
    }

    @Override // com.pushwoosh.n.k
    public final void e() {
        l lVar = this.h;
        if (lVar != null) {
            lVar.a();
        }
    }

    @Override // android.app.Activity
    public final void onBackPressed() {
        if (this.d) {
            close();
        }
    }

    @Override // com.pushwoosh.inapp.view.WebActivity, android.app.Activity
    protected final void onCreate(Bundle bundle) {
        try {
            super.onCreate(bundle);
            if (bundle != null) {
                if (bundle.getBoolean("IS_CLOSED")) {
                    finish();
                    return;
                }
                this.m = bundle.getBoolean("IS_ANIMATED");
                this.o = bundle.getBoolean("KEY_IS_SOUND_PLAYED");
                this.i = bundle.getString("extraSound", "");
                this.j = bundle.getInt("extraMode", this.j);
            }
            g();
            if (Build.VERSION.SDK_INT >= 33) {
                this.g = new OnBackInvokedCallback() { // from class: com.pushwoosh.inapp.view.RichMediaWebActivity$$ExternalSyntheticLambda0
                    public final void onBackInvoked() {
                        this.f$0.a();
                    }
                };
                getOnBackInvokedDispatcher().registerOnBackInvokedCallback(0, this.g);
            }
        } catch (Throwable th) {
            PWLog.warn("RichMediaWebActivity", "super.onCreate threw, finishing activity", th);
            finish();
        }
    }

    @Override // com.pushwoosh.inapp.view.WebActivity, android.app.Activity
    protected final void onDestroy() {
        if (Build.VERSION.SDK_INT >= 33 && this.g != null) {
            getOnBackInvokedDispatcher().unregisterOnBackInvokedCallback(this.g);
            this.g = null;
        }
        this.e.removeCallbacksAndMessages(null);
        super.onDestroy();
        if (this.n) {
            return;
        }
        this.n = true;
        EventBus.sendEvent(new c(this.b));
    }

    @Override // com.pushwoosh.inapp.view.WebActivity, android.app.Activity
    protected final void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        bundle.putBoolean("IS_ANIMATED", this.m);
        bundle.putBoolean("IS_CLOSED", this.f);
        bundle.putBoolean("KEY_IS_SOUND_PLAYED", this.o);
        bundle.putString("extraSound", this.i);
        bundle.putInt("extraMode", this.j);
    }

    public static Intent a(Context context, Resource resource) {
        return WebActivity.a(new Intent(context, (Class<?>) RichMediaWebActivity.class), resource, "", 0);
    }

    public static Intent b(Context context, Resource resource) {
        return WebActivity.a(new Intent(context, (Class<?>) RichMediaWebActivity.class), resource, "", 0);
    }

    public static Intent a(Context context, Resource resource, String str) {
        Intent intentA = WebActivity.a(new Intent(context, (Class<?>) RichMediaWebActivity.class), resource, str, 1);
        intentA.addFlags(343932928);
        return intentA;
    }

    @Override // com.pushwoosh.n.k
    public final void b() {
        l lVar = this.h;
        if (lVar != null) {
            lVar.c();
        }
    }

    @Override // com.pushwoosh.inapp.view.WebActivity
    protected final void a(Resource resource, String str, int i) {
        this.i = str;
        this.j = i;
        this.o = false;
        com.pushwoosh.n.c cVar = (com.pushwoosh.n.c) getFragmentManager().findFragmentByTag("RichMediaWebActivitypushwoosh.inAppFragment");
        FragmentTransaction fragmentTransactionBeginTransaction = getFragmentManager().beginTransaction();
        if (cVar != null) {
            fragmentTransactionBeginTransaction.remove(cVar);
        }
        this.l = false;
        com.pushwoosh.n.c cVar2 = new com.pushwoosh.n.c();
        Bundle bundle = new Bundle(1);
        bundle.putSerializable("keyInapp", resource);
        cVar2.setArguments(bundle);
        fragmentTransactionBeginTransaction.add(cVar2, "RichMediaWebActivitypushwoosh.inAppFragment").commitAllowingStateLoss();
        this.l = false;
    }

    @Override // com.pushwoosh.inapp.view.WebActivity
    protected final void a(l lVar) {
        this.h = lVar;
        setContentView(lVar);
        com.pushwoosh.n.c cVar = (com.pushwoosh.n.c) getFragmentManager().findFragmentByTag("RichMediaWebActivitypushwoosh.inAppFragment");
        if (cVar != null) {
            cVar.b();
        }
    }

    @Override // com.pushwoosh.n.k
    public final boolean a(com.pushwoosh.i.a aVar) {
        if (this.h == null || aVar.equals(this.k)) {
            return false;
        }
        this.k = aVar;
        String str = aVar.c;
        String strConcat = aVar.b;
        if (!strConcat.endsWith("/")) {
            strConcat = strConcat.concat("/");
        }
        l lVar = this.h;
        String str2 = RepositoryModule.getNotificationPreferences().messageHash().get();
        String hwid = Pushwoosh.getInstance().getHwid();
        String applicationCode = Pushwoosh.getInstance().getApplicationCode();
        String userId = Pushwoosh.getInstance().getUserId();
        String strSubstring = !this.b.isInApp() ? this.b.getCode().substring(2) : "";
        int iDeviceType = DeviceSpecificProvider.getInstance().deviceType();
        if (str2 == null) {
            str2 = "";
        }
        lVar.a(strConcat, str.replace("<head>", "<head>\n<script type=\"text/javascript\">" + ("(function () {if (window.pushwoosh) return;window._pwCallbackHelper = {    __callbacks: {},    __cbCounter: 0,    invokeCallback: function(cbID) {        var args = Array.prototype.slice.call(arguments);        args.shift();        var cb = this.__callbacks[cbID];        this.__callbacks[cbID] = undefined;        return cb.apply(null, args);    },    registerCallback: function(func) {        var cbID = \"__cb\" + (+new Date) + this.__cbCounter;        this.__cbCounter++;        this.__callbacks[cbID] = func;        return cbID;    }};window.pushwoosh = {    _hwid: \"" + hwid + "\",    _version: \"6.17.1\",    _application: \"" + applicationCode + "\",    _user_id: \"" + userId + "\",    _richmedia_code: \"" + strSubstring + "\",    _device_type: \"" + iDeviceType + "\",    _message_hash: \"" + str2 + "\",    _inapp_code: \"" + (this.b.isInApp() ? this.b.getCode() : "") + "\",    postEvent: function(event, attributes, successCallback, errorCallback) {        if (!attributes) {            attributes = {};        }        if (!successCallback) {            successCallback = function() {};        }        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(successCallback);        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.postEvent(event, JSON.stringify(attributes), successCbId, errorCbId);    },    richMediaAction: function(inAppCode, richMediaCode, actionType, actionAttributes, successCallback, errorCallback) {        if (!successCallback) {            successCallback = function() {};        }        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(successCallback);        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.richMediaAction(inAppCode, richMediaCode, actionType, JSON.stringify(actionAttributes), successCbId, errorCbId);    },    sendTags: function(tags) {        pushwooshImpl.sendTags(JSON.stringify(tags));    },    getTags: function(successCallback, errorCallback) {        if (!errorCallback) {            errorCallback = function(error) {};        }        var successCbId = _pwCallbackHelper.registerCallback(function(tagsString) {            console.log(\"tags: \" + tagsString);            successCallback(JSON.parse(tagsString));        });        var errorCbId = _pwCallbackHelper.registerCallback(errorCallback);        pushwooshImpl.getTags(successCbId, errorCbId);    },    log: function(str) {        pushwooshImpl.log(str);    },    closeInApp: function() {        pushwooshImpl.closeInApp();    },    getHwid: function() {        return this._hwid;    },    getVersion: function() {        return this._version;    },    getApplication: function() {        return this._application;    },    getUserId: function() {        return this._user_id;    },    getRichmediaCode: function() {        return this._richmedia_code;    },    getDeviceType: function() {        return this._device_type;    },    getMessageHash: function() {        return this._message_hash;    },    getInAppCode: function() {        return this._inapp_code;    },    getCustomData: function() {         var customData = pushwooshImpl.getCustomData();         if (customData) {             return JSON.parse(customData);         } else {             return null;         }    },    registerForPushNotifications: function() {        pushwooshImpl.registerForPushNotifications();    },    openAppSettings: function() {        pushwooshImpl.openAppSettings();    },    getChannels: function(callback) {        var clb = _pwCallbackHelper.registerCallback(function(channels) {             callback(JSON.parse(channels));        });        pushwooshImpl.getChannels(clb);    },    unregisterForPushNotifications: function(callback) {        var clb = _pwCallbackHelper.registerCallback(callback);        pushwooshImpl.unregisterForPushNotifications(clb);    },    isRegisteredForPushNotifications: function(callback) {        var clb = _pwCallbackHelper.registerCallback(function(state) {           if (state == 'true') {callback(true);} else if (state == 'false') {callback(false);}        });        pushwooshImpl.isRegisteredForPushNotifications(clb);    },    setEmail: function(email) {        pushwooshImpl.setEmail(email);    }};}());") + "</script>"));
        return true;
    }

    @Override // com.pushwoosh.n.k
    public final void a(com.pushwoosh.g.a aVar) {
        PWLog.error("RichMediaWebActivity", "Failed loading html data", aVar);
        if (this.b.isInApp()) {
            EventBus.sendEvent(new e());
        }
        close();
    }

    private void a(final Uri uri) {
        final WeakReference weakReference = new WeakReference(this);
        BackgroundExecutor.executeOnPool(new Runnable() { // from class: com.pushwoosh.inapp.view.RichMediaWebActivity$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                RichMediaWebActivity.a(weakReference, uri);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void a(WeakReference weakReference, Uri uri) {
        RichMediaWebActivity richMediaWebActivity = (RichMediaWebActivity) weakReference.get();
        if (richMediaWebActivity == null) {
            PWLog.warn("RichMediaWebActivity", "Cannot play sound: activity was destroyed");
            return;
        }
        try {
            final Ringtone ringtone = RingtoneManager.getRingtone(richMediaWebActivity, uri);
            if (ringtone == null) {
                PWLog.warn("RichMediaWebActivity", "Cannot play sound: ringtone is null for uri: " + uri);
                return;
            }
            BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.inapp.view.RichMediaWebActivity$$ExternalSyntheticLambda3
                @Override // java.lang.Runnable
                public final void run() {
                    ringtone.play();
                }
            });
        } catch (Exception e) {
            PWLog.error("RichMediaWebActivity", "Failed to get ringtone: " + uri, e);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a() {
        if (this.d) {
            close();
        }
    }
}
