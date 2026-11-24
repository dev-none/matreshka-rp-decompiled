package com.pushwoosh.b;

import android.app.Application;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.inapp.InAppManager;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.tags.TagsBundle;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;

/* JADX INFO: loaded from: classes6.dex */
public final class k {
    public static volatile j b;
    public static final Object c = new Object();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final EventListener f5043a = new EventListener() { // from class: com.pushwoosh.b.k$$ExternalSyntheticLambda0
        @Override // com.pushwoosh.internal.event.EventListener
        public final void onReceive(Event event) {
            this.f$0.a((com.pushwoosh.w.b) event);
        }
    };

    public final /* synthetic */ void a(com.pushwoosh.w.b bVar) {
        EventBus.unsubscribe(com.pushwoosh.w.b.class, this.f5043a);
        b();
    }

    public final void b(final String str, final long j, final int i) {
        com.pushwoosh.s.c.d.a(new Runnable() { // from class: com.pushwoosh.b.k$$ExternalSyntheticLambda6
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str, j, i);
            }
        });
    }

    public final void d(final String str, final long j, final int i) {
        com.pushwoosh.s.c.d.a(new Runnable() { // from class: com.pushwoosh.b.k$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.c(str, j, i);
            }
        });
    }

    public final void c(String str, long j, int i) {
        TagsBundle.Builder builderA = a();
        if (str != null) {
            builderA.putString(FirebaseAnalytics.Param.SCREEN_NAME, str);
        }
        builderA.putLong("session_duration", j);
        builderA.putInt("exit_intent_seconds", i);
        InAppManager.getInstance().postEvent("PW_ApplicationExit", builderA.build());
    }

    public static TagsBundle.Builder a() {
        TagsBundle.Builder builder = new TagsBundle.Builder();
        builder.putInt(CommonUrlParts.DEVICE_TYPE, DeviceSpecificProvider.getInstance().deviceType());
        if (AndroidPlatformModule.getAppInfoProvider() != null && AndroidPlatformModule.getAppInfoProvider().getVersionName() != null) {
            builder.putString("application_version", AndroidPlatformModule.getAppInfoProvider().getVersionName());
        }
        return builder;
    }

    public final void b(final String str, final String str2) {
        com.pushwoosh.s.c.d.a(new Runnable() { // from class: com.pushwoosh.b.k$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str, str2);
            }
        });
    }

    public final void b() {
        synchronized (c) {
            if (b == null) {
                Application application = (Application) AndroidPlatformModule.getApplicationContext();
                if (application == null) {
                    EventBus.subscribe(com.pushwoosh.w.b.class, this.f5043a);
                } else {
                    int i = ((com.pushwoosh.a.a) PushwooshPlatform.getInstance().getConfig()).z;
                    g gVar = i > 0 ? new g() { // from class: com.pushwoosh.b.k$$ExternalSyntheticLambda3
                        @Override // com.pushwoosh.b.g
                        public final void a(String str, long j, int i2) {
                            this.f$0.b(str, j, i2);
                        }
                    } : null;
                    int i2 = ((com.pushwoosh.a.a) PushwooshPlatform.getInstance().getConfig()).A;
                    b = new j(new h() { // from class: com.pushwoosh.b.k$$ExternalSyntheticLambda5
                        @Override // com.pushwoosh.b.h
                        public final void a(String str, String str2) {
                            this.f$0.b(str, str2);
                        }
                    }, i, gVar, i2, i2 > 0 ? new a() { // from class: com.pushwoosh.b.k$$ExternalSyntheticLambda4
                        @Override // com.pushwoosh.b.a
                        public final void a(String str, long j, int i3) {
                            this.f$0.d(str, j, i3);
                        }
                    } : null);
                    application.registerActivityLifecycleCallbacks(b);
                }
            }
        }
    }

    public final void a(String str, long j, int i) {
        TagsBundle.Builder builderA = a();
        if (str != null) {
            builderA.putString(FirebaseAnalytics.Param.SCREEN_NAME, str);
        }
        builderA.putInt("idle_seconds", i);
        builderA.putLong("session_duration", j);
        InAppManager.getInstance().postEvent("PW_UserIdle", builderA.build());
    }

    public final void a(String str, String str2) {
        str.getClass();
        str.hashCode();
        switch (str) {
            case "ScreenOpened":
                TagsBundle.Builder builderA = a();
                if (str2 != null) {
                    builderA.putString(FirebaseAnalytics.Param.SCREEN_NAME, str2);
                }
                InAppManager.getInstance().postEvent("PW_ScreenOpen", builderA.build());
                break;
            case "ApplicationClosed":
                InAppManager.getInstance().postEvent("PW_ApplicationMinimized", a().build());
                break;
            case "ApplicationOpened":
                InAppManager.getInstance().postEvent("PW_ApplicationOpen", a().build());
                break;
        }
    }
}
