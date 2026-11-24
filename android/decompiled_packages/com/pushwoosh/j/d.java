package com.pushwoosh.j;

import android.text.TextUtils;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.exception.MergeUserException;
import com.pushwoosh.exception.PostEventException;
import com.pushwoosh.exception.PushwooshException;
import com.pushwoosh.exception.SetEmailException;
import com.pushwoosh.exception.SetUserException;
import com.pushwoosh.exception.SetUserIdException;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.inapp.view.InAppViewEvent;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.event.UserIdUpdatedEvent;
import com.pushwoosh.internal.network.NetworkException;
import com.pushwoosh.internal.network.NetworkModule;
import com.pushwoosh.internal.preference.PreferenceStringValue;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RepositoryModule;
import com.pushwoosh.tags.TagsBundle;
import java.io.File;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Objects;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final com.pushwoosh.m.c f5222a;
    public final com.pushwoosh.k.c b;
    public final b c;
    public final com.pushwoosh.h.e d;
    public final ExecutorService f;
    public final AtomicBoolean e = new AtomicBoolean(false);
    public final ConcurrentHashMap g = new ConcurrentHashMap();

    public d(com.pushwoosh.m.c cVar, com.pushwoosh.k.c cVar2, com.pushwoosh.h.e eVar, com.pushwoosh.m.a aVar, ExecutorService executorService) {
        this.f5222a = cVar;
        this.b = cVar2;
        this.d = eVar;
        this.f = executorService;
        this.c = new b(cVar, aVar);
        EventBus.subscribe(InAppViewEvent.class, new EventListener() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda13
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                d.a((InAppViewEvent) event);
            }
        });
    }

    public static /* synthetic */ void a(InAppViewEvent inAppViewEvent) {
        PreferenceStringValue preferenceStringValueMessageHash = RepositoryModule.getNotificationPreferences().messageHash();
        String messageHash = preferenceStringValueMessageHash.get();
        if (inAppViewEvent.hasOwnMessageHash()) {
            messageHash = inAppViewEvent.getMessageHash();
        }
        PWLog.noise("[InApp]InAppRepository", "Sending show analytics for: " + inAppViewEvent.getResource().getCode());
        NetworkModule.getRequestManager().sendRequest(new l(inAppViewEvent.getResource().getCode(), messageHash, inAppViewEvent.getResource().getCode()));
        if (!inAppViewEvent.hasOwnMessageHash() || Objects.equals(preferenceStringValueMessageHash.get(), messageHash)) {
            RepositoryModule.getNotificationPreferences().messageHash().set(null);
        }
    }

    public static /* synthetic */ void d(Callback callback, Result result) {
        if (result.isSuccess()) {
            callback.process(Result.fromData(Boolean.TRUE));
        } else {
            callback.process(Result.fromException(result.getException()));
        }
    }

    public static /* synthetic */ void e(Callback callback, Result result) {
        if (result.isSuccess()) {
            callback.process(Result.fromData(Boolean.TRUE));
        } else {
            callback.process(Result.fromException(result.getException()));
        }
    }

    public static /* synthetic */ void f(Callback callback, Result result) {
        if (callback == null) {
            return;
        }
        if (result.isSuccess()) {
            callback.process(Result.fromData((Void) result.getData()));
        } else if (result.getException() != null) {
            callback.process(Result.fromException(new com.pushwoosh.c.c(((NetworkException) result.getException()).getMessage())));
            PWLog.warn("[InApp]InAppRepository", ((NetworkException) result.getException()).getMessage(), result.getException());
        }
    }

    public final void b(String str, Callback callback, Result result) {
        if (!result.isSuccess()) {
            String strA = a("an error occurred during /registerUser request", result);
            if (callback != null) {
                callback.process(Result.fromException(new SetUserIdException(strA)));
                return;
            }
            return;
        }
        PWLog.info("User ID \"" + str + "\" successfully set");
        EventBus.sendEvent(new UserIdUpdatedEvent());
        if (callback != null) {
            callback.process(Result.fromData(Boolean.TRUE));
        }
    }

    public final void c(final String str, final Callback callback) {
        NetworkModule.getRequestManager().sendRequest(new j(str), new Callback() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda11
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.b(str, callback, result);
            }
        });
    }

    public final void g(Callback callback, Result result) {
        if (callback == null) {
            return;
        }
        if (result.isSuccess()) {
            callback.process(Result.fromData(Boolean.TRUE));
        } else {
            callback.process(Result.fromException(new PushwooshException(a("an error occurred during /registerEmailUser request", result))));
        }
    }

    public final void h(Callback callback, Result result) {
        if (callback == null) {
            return;
        }
        if (result.isSuccess()) {
            callback.process(Result.fromData(Boolean.TRUE));
        } else {
            callback.process(Result.fromException(new SetUserException(a("an error occurred during /registerEmail request", result))));
        }
    }

    public final void c(final String str) {
        this.f.submit(new Runnable() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str);
            }
        });
    }

    public final void b(List list, final Callback callback) {
        a(list, new Callback() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda2
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.h(callback, result);
            }
        });
    }

    public final void b(final String str, final Callback callback) {
        a(str, new Callback() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda8
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.a(str, callback, result);
            }
        });
    }

    public static /* synthetic */ void b(Callback callback, Result result) {
        if (callback != null) {
            if (result.isSuccess()) {
                callback.process(Result.fromData(null));
            } else if (result.getException() != null) {
                callback.process(Result.fromException(new MergeUserException(((NetworkException) result.getException()).getMessage())));
            }
        }
    }

    public final void b(String str) {
        PWLog.noise("[InApp]InAppRepository", "prefetchRichMedia(), rich media: " + str);
        try {
            Resource richMedia = Resource.parseRichMedia(str);
            if (!a(richMedia)) {
                Result.fromException(new com.pushwoosh.g.a("Can't download or update richMedia: " + richMedia.getCode()));
                return;
            }
            Result.fromData(richMedia);
        } catch (com.pushwoosh.g.a e) {
            Result.fromException(e);
        }
    }

    public final boolean a(Resource resource) {
        String code = resource.getCode();
        CountDownLatch countDownLatch = new CountDownLatch(1);
        CountDownLatch countDownLatch2 = (CountDownLatch) this.g.putIfAbsent(code, countDownLatch);
        if (countDownLatch2 != null) {
            PWLog.noise("[InApp]InAppRepository", "Joining in-flight download: " + resource.getCode());
            try {
                boolean zAwait = countDownLatch2.await(60000L, TimeUnit.MILLISECONDS);
                boolean zA = this.c.a(resource);
                String code2 = resource.getCode();
                StringBuilder sb = new StringBuilder("Joined in-flight download of ");
                sb.append(code2);
                sb.append(": deployed=");
                sb.append(zA);
                sb.append(", timedOut=");
                sb.append(!zAwait);
                PWLog.noise("[InApp]InAppRepository", sb.toString());
                return zA;
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                PWLog.error("[InApp]InAppRepository", "Deploy interrupted", e);
                return false;
            }
        }
        try {
            if (this.c.a(resource)) {
                this.g.remove(code, countDownLatch);
                countDownLatch.countDown();
                return true;
            }
            PWLog.noise("[InApp]InAppRepository", "Starting download for resource: " + code);
            boolean zIsEmpty = this.b.a(Collections.singletonList(resource)).f5233a.isEmpty();
            boolean z = zIsEmpty ^ true;
            if (!zIsEmpty && resource.getUrl() != null) {
                ((com.pushwoosh.m.b) this.f5222a).a(Collections.singletonList(resource));
            }
            this.g.remove(code, countDownLatch);
            countDownLatch.countDown();
            if (!zIsEmpty) {
                PWLog.info("[InApp]InAppRepository", "Successfully downloaded resource: " + code);
                return z;
            }
            PWLog.error("[InApp]InAppRepository", "Failed to download resource: " + code);
            return z;
        } catch (Throwable th) {
            this.g.remove(code, countDownLatch);
            countDownLatch.countDown();
            throw th;
        }
    }

    public final Result b(Resource resource) {
        PWLog.noise("[InApp]InAppRepository", "ensureResolvedAndDeployed: code=" + resource.getCode() + ", inAppListReady=" + this.e.get());
        if (resource.isNotDownload()) {
            try {
                if (this.e.get()) {
                    Resource resourceA = ((com.pushwoosh.m.b) this.f5222a).a(resource.getCode());
                    if (resourceA == null) {
                        return Result.fromException(new com.pushwoosh.g.a("Rich media with code " + resource.getCode() + " does not exist."));
                    }
                    resource = resourceA;
                }
            } catch (Exception e) {
                return Result.fromException(new com.pushwoosh.g.a("Can't download or update richMedia: " + resource.getCode(), e));
            }
        }
        if (!this.c.a(resource) && !a(resource)) {
            return Result.fromException(new com.pushwoosh.g.a("Can't download or update richMedia: " + resource.getCode()));
        }
        return Result.fromData(resource);
    }

    public final void a(List list, final Callback callback) {
        if (list.isEmpty()) {
            PWLog.warn("emails array list is empty or null");
            return;
        }
        final c cVar = new c(list.size());
        Iterator it = list.iterator();
        while (it.hasNext()) {
            final String str = (String) it.next();
            b(str, new Callback() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda4
                @Override // com.pushwoosh.function.Callback
                public final void process(Result result) {
                    this.f$0.a(callback, cVar, str, result);
                }
            });
        }
    }

    public final void a(Callback callback, c cVar, String str, Result result) {
        if (callback == null) {
            return;
        }
        if (result.isSuccess()) {
            cVar.b++;
        } else {
            callback.process(Result.fromException(new SetEmailException(a("an error occurred during registration of " + str, result))));
        }
        if (cVar.b == cVar.f5221a) {
            callback.process(Result.fromData(Boolean.TRUE));
        }
    }

    public final void a(String str, final Callback callback, Result result) {
        if (result.isSuccess()) {
            a(str, RepositoryModule.getRegistrationPreferences().userId().get(), new Callback() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda9
                @Override // com.pushwoosh.function.Callback
                public final void process(Result result2) {
                    this.f$0.g(callback, result2);
                }
            });
            return;
        }
        String strA = a("an error occurred during /registerEmail request", result);
        if (callback != null) {
            callback.process(Result.fromException(new PushwooshException(strA)));
        }
    }

    public static void a(String str, final Callback callback) {
        NetworkModule.getRequestManager().sendRequest(new h(str), new Callback() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                d.d(callback, result);
            }
        });
    }

    public static void a(String str, String str2, final Callback callback) {
        NetworkModule.getRequestManager().sendRequest(new i(str2, str), new Callback() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda10
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                d.e(callback, result);
            }
        });
    }

    public static void a(String str, String str2, String str3, String str4, int i, final Callback callback) {
        NetworkModule.getRequestManager().sendRequest(new k(str, str2, str3, str4, i), new Callback() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda12
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                d.f(callback, result);
            }
        });
    }

    public final void a(String str, TagsBundle tagsBundle, final Callback callback) {
        NetworkModule.getRequestManager().sendRequest(new f(str, PushwooshPlatform.getInstance().pushwooshRepository().getCurrentSessionHash(), tagsBundle), new Callback() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda7
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.c(callback, result);
            }
        });
    }

    public static void a(String str, String str2, boolean z, final Callback callback) {
        NetworkModule.getRequestManager().sendRequest(new e(str, str2, z), new Callback() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda5
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                d.b(callback, result);
            }
        });
    }

    public final /* synthetic */ void a(String str) {
        try {
            b(str);
            PushwooshPlatform.getInstance().pushwooshRepository().prefetchTags();
        } catch (Throwable th) {
            PWLog.error("[InApp]InAppRepository", "Receive-time prefetch failed", th);
        }
    }

    public static String a(String str, Result result) {
        return (result.getException() == null || TextUtils.isEmpty(result.getException().getMessage())) ? str : result.getException().getMessage();
    }

    public final Result a() {
        List list;
        try {
            Result resultSendRequestSync = NetworkModule.getRequestManager().sendRequestSync(new a());
            if (!resultSendRequestSync.isSuccess()) {
                PWLog.error("[InApp]InAppRepository", "Failed to get rich media resource: getInApps request failed");
                list = Collections.EMPTY_LIST;
            } else {
                list = (List) resultSendRequestSync.getData();
                if (list == null || list.isEmpty()) {
                    PWLog.noise("[InApp]InAppRepository", "GetInApps response has no inapp data");
                    list = Collections.EMPTY_LIST;
                }
            }
            if (list != null && !list.isEmpty()) {
                a(list);
                ArrayList arrayList = new ArrayList(list);
                Collections.sort(arrayList);
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    a((Resource) it.next());
                }
                return Result.fromData(null);
            }
            return Result.fromData(null);
        } finally {
            this.e.set(true);
        }
    }

    public final void a(List list) {
        List<String> listA = ((com.pushwoosh.m.b) this.f5222a).a(list);
        if (listA.isEmpty()) {
            return;
        }
        PWLog.info("[InApp]InAppRepository", String.format(Locale.US, "Removing old files for %d updated resources: %s", Integer.valueOf(listA.size()), listA));
        for (String str : listA) {
            com.pushwoosh.k.c cVar = this.b;
            synchronized (cVar.f5234a) {
                File fileA = cVar.b.a(str);
                if (fileA != null && fileA.exists()) {
                    PWLog.noise("[InApp]InAppDownloader", "Deleting old files for resource: " + str);
                    com.pushwoosh.e0.e.a(fileA);
                }
            }
        }
    }

    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void c(final Callback callback, final Result result) {
        if (callback == null) {
            return;
        }
        if (result.isSuccess()) {
            final g gVar = (g) result.getData();
            if (gVar != null) {
                this.f.submit(new Runnable() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda3
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(result, gVar, callback);
                    }
                });
                return;
            }
            return;
        }
        NetworkException networkException = (NetworkException) result.getException();
        if (networkException == null) {
            return;
        }
        callback.process(Result.fromException(new PostEventException(networkException.getMessage())));
        PWLog.warn("[InApp]InAppRepository", networkException.getMessage(), networkException);
    }

    public final void a(Result result, g gVar, final Callback callback) {
        List list;
        g gVar2 = (g) result.getData();
        PWLog.noise("[InApp]InAppRepository", "getResourceFromPostEvent()");
        final Resource richMedia = null;
        try {
            String str = gVar2.f5225a;
            String str2 = gVar2.b;
            Resource resourceA = ((com.pushwoosh.m.b) this.f5222a).a(str);
            if (resourceA != null) {
                PWLog.noise("[InApp]InAppRepository", "get inapp resource " + str + " from local storage");
                richMedia = resourceA;
            } else if (str != null && !str.isEmpty()) {
                Result resultSendRequestSync = NetworkModule.getRequestManager().sendRequestSync(new a());
                if (!resultSendRequestSync.isSuccess()) {
                    PWLog.error("[InApp]InAppRepository", "Failed to get rich media resource: getInApps request failed");
                    list = Collections.EMPTY_LIST;
                } else {
                    list = (List) resultSendRequestSync.getData();
                    if (list == null || list.isEmpty()) {
                        PWLog.noise("[InApp]InAppRepository", "GetInApps response has no inapp data");
                        list = Collections.EMPTY_LIST;
                    }
                }
                Iterator it = list.iterator();
                while (true) {
                    if (it.hasNext()) {
                        Resource resource = (Resource) it.next();
                        if (str.equals(resource.getCode())) {
                            a(Collections.singletonList(resource));
                            a(resource);
                            PWLog.noise("[InApp]InAppRepository", "get inapp resource " + str + " from server");
                            richMedia = resource;
                            break;
                        }
                    } else {
                        PWLog.error("[InApp]InAppRepository", "can't load inapp resource, code " + str + " not found on server");
                        break;
                    }
                }
            } else if (str2 != null && !str2.isEmpty()) {
                PWLog.noise("[InApp]InAppRepository", "get rich media resource from string: ".concat(str2));
                b(str2);
                richMedia = Resource.parseRichMedia(str2);
            }
        } catch (Exception e) {
            PWLog.error("[InApp]InAppRepository", "getResourceFromPostEvent failed", e);
        }
        if (richMedia != null && !TextUtils.isEmpty(gVar.c)) {
            PWLog.info("[InApp]InAppRepository", "Setting messageHash from postEvent response: " + gVar.c);
            RepositoryModule.getNotificationPreferences().messageHash().set(gVar.c);
        }
        BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.j.d$$ExternalSyntheticLambda6
            @Override // java.lang.Runnable
            public final void run() {
                callback.process(Result.fromData(richMedia));
            }
        });
    }
}
