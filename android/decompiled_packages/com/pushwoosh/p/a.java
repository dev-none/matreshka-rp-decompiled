package com.pushwoosh.p;

import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.Looper;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.e0.e;
import com.pushwoosh.function.Result;
import com.pushwoosh.h.c;
import com.pushwoosh.inapp.nativeui.NativeInAppPresenter;
import com.pushwoosh.inapp.nativeui.NativeInAppPresenterProvider;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.inapp.view.RichMediaWebActivity;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.j.d;
import com.pushwoosh.n.j;
import com.pushwoosh.q.b;
import com.pushwoosh.repository.RepositoryModule;
import com.pushwoosh.richmedia.RichMediaManager;
import com.pushwoosh.richmedia.RichMediaType;
import java.io.File;
import java.io.IOException;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Handler f5300a = new Handler(Looper.getMainLooper());

    public final void a(final b bVar) {
        String str;
        if (bVar == null) {
            PWLog.warn("[InApp]ResourceViewStrategyFactory", "resourceWrapper is null, aborting show");
            return;
        }
        final Resource resource = bVar.f5303a;
        if (resource == null) {
            PWLog.warn("[InApp]ResourceViewStrategyFactory", "resource is null, aborting show");
            return;
        }
        final Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            PWLog.error("[InApp]ResourceViewStrategyFactory", "context is null");
            return;
        }
        int i = bVar.d;
        String code = resource.getCode();
        String url = resource.getUrl();
        StringBuilder sb = new StringBuilder("presenting resource ");
        if (i != 1) {
            str = i != 2 ? "null" : "RICH_MEDIA";
        } else {
            str = "IN_APP";
        }
        sb.append(str);
        sb.append(" with code: ");
        sb.append(code);
        sb.append(", url: ");
        sb.append(url);
        PWLog.info("[InApp]ResourceViewStrategyFactory", sb.toString());
        BackgroundExecutor.executeOnPool(new Runnable() { // from class: com.pushwoosh.p.a$$ExternalSyntheticLambda3
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(applicationContext, bVar, resource);
            }
        });
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v14, types: [java.util.HashMap] */
    /* JADX WARN: Type inference failed for: r1v8, types: [java.util.Map] */
    /* JADX WARN: Type inference failed for: r1v9, types: [java.util.Map] */
    /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
    public final void b(final Context context, final b bVar, final Resource resource) {
        ?? map;
        JSONObject jSONObject;
        d dVarA = com.pushwoosh.e.b.a();
        if (dVarA == null) {
            EventBus.sendEvent(new com.pushwoosh.f.d(resource, new com.pushwoosh.g.a("InAppRepository is not initialized")));
            return;
        }
        Result resultB = dVarA.b(resource);
        if (!resultB.isSuccess()) {
            EventBus.sendEvent(new com.pushwoosh.f.d(resource, (com.pushwoosh.g.a) resultB.getException()));
            return;
        }
        final Resource resource2 = (Resource) resultB.getData();
        if (resource2 == null) {
            EventBus.sendEvent(new com.pushwoosh.f.d(resource, new com.pushwoosh.g.a("Resolved resource is null for: " + resource.getCode())));
            return;
        }
        com.pushwoosh.m.a aVar = com.pushwoosh.e.b.f5061a;
        File fileA = aVar.a(resource2.getCode());
        final String string = null;
        File file = null;
        File file2 = fileA == null ? null : new File(fileA, "native-config.json");
        if (file2 == null || !file2.exists()) {
            this.f5300a.post(new Runnable() { // from class: com.pushwoosh.p.a$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.a(context, bVar, resource);
                }
            });
            return;
        }
        if (bVar.c) {
            PWLog.warn("[InApp]ResourceViewStrategyFactory", "native in-app is not supported on lock screen, skipping: " + resource2.getCode());
            return;
        }
        try {
            String strB = e.b(file2);
            try {
                File fileA2 = aVar.a(resource2.getCode());
                if (fileA2 != null) {
                    file = new File(fileA2, "pushwoosh.json");
                }
                JSONObject jSONObject2 = new JSONObject(e.b(file));
                JSONObject jSONObject3 = jSONObject2.getJSONObject("localization");
                String string2 = jSONObject2.getString("default_language");
                try {
                    jSONObject = jSONObject3.getJSONObject(RepositoryModule.getRegistrationPreferences().language().get());
                } catch (JSONException unused) {
                    jSONObject = jSONObject3.getJSONObject(string2);
                }
                map = new HashMap();
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    map.put(next, jSONObject.getString(next));
                }
            } catch (Throwable th) {
                PWLog.warn("[InApp]ResourceViewStrategyFactory", "no localization dictionary for native in-app, using defaults: " + resource2.getCode(), th);
                map = Collections.EMPTY_MAP;
            }
            Map mapA = com.pushwoosh.h.b.a(RepositoryModule.getNotificationPreferences());
            try {
                JSONObject jSONObject4 = new JSONObject(strB);
                c.a(jSONObject4, (Map) map, mapA);
                string = jSONObject4.toString();
            } catch (Throwable th2) {
                PWLog.warn("[InApp]NativeConfigLocalizer", "native-config.json could not be localized, passing through unchanged", th2);
                string = strB;
            }
        } catch (IOException e) {
            PWLog.error("[InApp]ResourceViewStrategyFactory", "failed to read native-config.json for: " + resource2.getCode(), e);
            EventBus.sendEvent(new com.pushwoosh.f.d(resource, new com.pushwoosh.g.a("Failed to read native-config.json for: " + resource2.getCode(), e)));
        }
        if (string == null) {
            return;
        }
        this.f5300a.postDelayed(new Runnable() { // from class: com.pushwoosh.p.a$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(string, resource2);
            }
        }, bVar.e);
    }

    public final void a(Context context, b bVar, Resource resource) {
        try {
            if (bVar.d == 1) {
                a(context, resource);
            } else if (bVar.c) {
                context.startActivity(RichMediaWebActivity.a(context, resource, bVar.b));
            } else {
                a(context, resource, bVar.e);
            }
        } catch (Throwable th) {
            PWLog.error("[InApp]ResourceViewStrategyFactory", "Failed to show resource", th);
        }
    }

    public final void a(String str, Resource resource) {
        NativeInAppPresenter nativeInAppPresenter = NativeInAppPresenterProvider.get();
        if (nativeInAppPresenter == null) {
            PWLog.error("[InApp]ResourceViewStrategyFactory", "native in-app detected but pushwoosh-inapp-ui module is not connected, skipping: " + resource.getCode());
            return;
        }
        try {
            if (nativeInAppPresenter.present(str, resource)) {
                return;
            }
            PWLog.warn("[InApp]ResourceViewStrategyFactory", "native in-app presenter rejected resource: " + resource.getCode());
        } catch (Throwable th) {
            PWLog.error("[InApp]ResourceViewStrategyFactory", "native in-app presenter failed for: " + resource.getCode(), th);
        }
    }

    public final void a(final Context context, Resource resource) {
        PushwooshPlatform.getInstance().pushwooshRepository().setCurrentInAppCode(resource.getCode());
        PushwooshPlatform.getInstance().pushwooshRepository().setCurrentRichMediaCode(null);
        if (RichMediaManager.getRichMediaType() == RichMediaType.MODAL) {
            j.d(resource);
        } else if (RichMediaManager.getRichMediaType() == RichMediaType.DEFAULT) {
            final Intent intentA = RichMediaWebActivity.a(context, resource);
            this.f5300a.post(new Runnable() { // from class: com.pushwoosh.p.a$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    context.startActivity(intentA);
                }
            });
        }
    }

    public final void a(final Context context, Resource resource, long j) {
        PushwooshPlatform.getInstance().pushwooshRepository().setCurrentRichMediaCode(resource.getCode().substring(2));
        PushwooshPlatform.getInstance().pushwooshRepository().setCurrentInAppCode(null);
        if (RichMediaManager.getRichMediaType() == RichMediaType.MODAL) {
            j.d(resource);
        } else if (RichMediaManager.getRichMediaType() == RichMediaType.DEFAULT) {
            final Intent intentB = RichMediaWebActivity.b(context, resource);
            this.f5300a.postDelayed(new Runnable() { // from class: com.pushwoosh.p.a$$ExternalSyntheticLambda4
                @Override // java.lang.Runnable
                public final void run() {
                    context.startActivity(intentB);
                }
            }, j);
        }
    }
}
