package com.pushwoosh.inapp;

import android.text.TextUtils;
import androidx.work.ExistingWorkPolicy;
import androidx.work.OneTimeWorkRequest;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.PushwooshWorkManagerHelper;
import com.pushwoosh.e.b;
import com.pushwoosh.e.c;
import com.pushwoosh.e.e;
import com.pushwoosh.e.f;
import com.pushwoosh.exception.MergeUserException;
import com.pushwoosh.exception.PostEventException;
import com.pushwoosh.exception.ReloadInAppsException;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.ServerCommunicationStartedEvent;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.j.d;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import com.pushwoosh.richmedia.a;
import com.pushwoosh.tags.TagsBundle;
import com.pushwoosh.v.j;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshInAppImpl {
    private static final String[] h = {"PW_ApplicationOpen", "PW_ScreenOpen", "PW_ApplicationMinimized", "PW_ApplicationExit"};
    private final j e;
    private final e f;
    private c g;
    private final HashMap b = new HashMap();
    private final HashMap c = new HashMap();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final RegistrationPrefs f5100a = RepositoryModule.getRegistrationPreferences();
    private final d d = b.a();

    public PushwooshInAppImpl(e eVar, j jVar) {
        this.f = eVar;
        this.e = jVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(final String str, final TagsBundle tagsBundle, final Callback callback) {
        this.d.a(str, tagsBundle, new Callback() { // from class: com.pushwoosh.inapp.PushwooshInAppImpl$$ExternalSyntheticLambda2
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.a(str, tagsBundle, callback, result);
            }
        });
    }

    public void addJavascriptInterface(Object obj, String str) {
        this.b.put(str, obj);
    }

    public void checkForUpdates() {
        if (this.e == null || RepositoryModule.getNotificationPreferences().isServerCommunicationAllowed().get()) {
            ((f) this.f).getClass();
            PushwooshWorkManagerHelper.enqueueOneTimeUniqueWork(new OneTimeWorkRequest.Builder(InAppRetrieverWorker.class).setConstraints(PushwooshWorkManagerHelper.getNetworkAvailableConstraints()).build(), "InAppRetrieverWorker", ExistingWorkPolicy.KEEP);
        } else {
            if (this.g != null) {
                return;
            }
            c cVar = new c(this);
            this.g = cVar;
            EventBus.subscribe(ServerCommunicationStartedEvent.class, cVar);
        }
    }

    public Map<String, Object> getJavascriptInterfaces() {
        HashMap map = new HashMap();
        map.putAll(this.b);
        for (Map.Entry entry : this.c.entrySet()) {
            String str = (String) entry.getKey();
            try {
                Object objNewInstance = Class.forName((String) entry.getValue()).newInstance();
                if (objNewInstance != null) {
                    map.put(str, objNewInstance);
                }
            } catch (Throwable th) {
                PWLog.warn("[InApp]PushwooshInApp", "Failed to instantiate javascript interface for " + str, th);
            }
        }
        return map;
    }

    public void mergeUserId(String str, String str2, boolean z, Callback<Void, MergeUserException> callback) {
        this.d.getClass();
        d.a(str, str2, z, callback);
    }

    public void postEvent(final String str, final TagsBundle tagsBundle, final Callback<Void, PostEventException> callback) {
        com.pushwoosh.s.c.d.a(new Runnable() { // from class: com.pushwoosh.inapp.PushwooshInAppImpl$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str, tagsBundle, callback);
            }
        });
    }

    public void registerJavascriptInterface(String str, String str2) {
        this.c.put(str2, str);
    }

    public void reloadInApps(Callback<Boolean, ReloadInAppsException> callback) {
        if (this.d == null) {
            return;
        }
        new com.pushwoosh.e.d(callback).a();
    }

    public void removeJavascriptInterface(String str) {
        this.b.remove(str);
    }

    public void sendRichMediaAction(String str, String str2, String str3, String str4, int i, Callback<Void, com.pushwoosh.c.c> callback) {
        this.d.getClass();
        d.a(str, str2, str3, str4, i, callback);
    }

    public void setUserId(String str) {
        final String str2 = this.f5100a.userId().get();
        if (TextUtils.equals(str, str2)) {
            return;
        }
        this.f5100a.userId().set(str);
        this.d.c(str, new Callback() { // from class: com.pushwoosh.inapp.PushwooshInAppImpl$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.a(str2, result);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, TagsBundle tagsBundle, Callback callback, Result result) {
        if (!result.isSuccess()) {
            PWLog.error("[InApp]PushwooshInApp", "Failed to post event " + str, result.getException());
            if (callback != null) {
                callback.process(Result.fromException((PostEventException) result.getException()));
                return;
            }
            return;
        }
        Resource resource = (Resource) result.getData();
        String[] strArr = h;
        int i = 0;
        while (true) {
            if (i >= 4) {
                PWLog.info(String.format("Posted event %s, attributes: %s", str, tagsBundle));
                break;
            } else if (strArr[i].equals(str)) {
                break;
            } else {
                i++;
            }
        }
        if (callback != null) {
            callback.process(Result.fromData(null));
        }
        if (resource == null) {
            return;
        }
        if (!this.f5100a.communicationEnable().get()) {
            PWLog.error("[InApp]PushwooshInApp", "can't show inApp because all communication disable");
            return;
        }
        com.pushwoosh.q.b bVar = new com.pushwoosh.q.b(resource, "", false, resource.isInApp() ? 1 : 2, 0L);
        a richMediaController = PushwooshPlatform.getInstance().getRichMediaController();
        if (richMediaController != null) {
            richMediaController.a(bVar);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, Result result) {
        if (result.getException() != null) {
            this.f5100a.userId().set(str);
        }
    }
}
