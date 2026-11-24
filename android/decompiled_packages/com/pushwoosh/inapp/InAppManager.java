package com.pushwoosh.inapp;

import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.exception.PostEventException;
import com.pushwoosh.exception.ReloadInAppsException;
import com.pushwoosh.function.Callback;
import com.pushwoosh.tags.TagsBundle;

/* JADX INFO: loaded from: classes6.dex */
public class InAppManager {
    private static final InAppManager b = new InAppManager();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final PushwooshInAppImpl f5099a;

    private InAppManager() {
        if (PushwooshPlatform.getInstance() != null) {
            this.f5099a = PushwooshPlatform.getInstance().pushwooshInApp();
        } else {
            PushwooshPlatform.notifyNotInitialized();
            this.f5099a = null;
        }
    }

    public static InAppManager getInstance() {
        return b;
    }

    public void addJavascriptInterface(Object obj, String str) {
        PushwooshInAppImpl pushwooshInAppImpl = this.f5099a;
        if (pushwooshInAppImpl != null) {
            pushwooshInAppImpl.addJavascriptInterface(obj, str);
        }
    }

    public void postEvent(String str) {
        PushwooshInAppImpl pushwooshInAppImpl = this.f5099a;
        if (pushwooshInAppImpl != null) {
            pushwooshInAppImpl.postEvent(str, null, null);
        }
    }

    public void registerJavascriptInterface(String str, String str2) {
        PushwooshInAppImpl pushwooshInAppImpl = this.f5099a;
        if (pushwooshInAppImpl != null) {
            pushwooshInAppImpl.registerJavascriptInterface(str, str2);
        }
    }

    public void reloadInApps() {
        reloadInApps(null);
    }

    public void removeJavascriptInterface(String str) {
        PushwooshInAppImpl pushwooshInAppImpl = this.f5099a;
        if (pushwooshInAppImpl != null) {
            pushwooshInAppImpl.removeJavascriptInterface(str);
        }
    }

    public void postEvent(String str, TagsBundle tagsBundle) {
        PushwooshInAppImpl pushwooshInAppImpl = this.f5099a;
        if (pushwooshInAppImpl != null) {
            pushwooshInAppImpl.postEvent(str, tagsBundle, null);
        }
    }

    public void reloadInApps(Callback<Boolean, ReloadInAppsException> callback) {
        PushwooshInAppImpl pushwooshInAppImpl = this.f5099a;
        if (pushwooshInAppImpl != null) {
            pushwooshInAppImpl.reloadInApps(callback);
        }
    }

    public void postEvent(String str, TagsBundle tagsBundle, Callback<Void, PostEventException> callback) {
        PushwooshInAppImpl pushwooshInAppImpl = this.f5099a;
        if (pushwooshInAppImpl != null) {
            pushwooshInAppImpl.postEvent(str, tagsBundle, callback);
        }
    }
}
