package com.pushwoosh.k0;

import android.os.Bundle;
import android.text.TextUtils;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.ApplicationOpenDetector;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.LockScreenUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.j.d;
import com.pushwoosh.m0.m;
import com.pushwoosh.m0.y;
import com.pushwoosh.notification.PushBundleDataProvider;
import com.pushwoosh.notification.PushMessage;
import com.pushwoosh.notification.handlers.message.user.NotificationMessageHandler;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class b extends NotificationMessageHandler {
    public b() {
        EventBus.subscribe(ApplicationOpenDetector.ApplicationMovedToForegroundEvent.class, new EventListener() { // from class: com.pushwoosh.k0.b$$ExternalSyntheticLambda2
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                BackgroundExecutor.executeOnPool(new Runnable() { // from class: com.pushwoosh.k0.b$$ExternalSyntheticLambda1
                    @Override // java.lang.Runnable
                    public final void run() {
                        b.a();
                    }
                });
            }
        });
    }

    @Override // com.pushwoosh.notification.handlers.message.user.NotificationMessageHandler
    public final void handleNotification(PushMessage pushMessage) {
        boolean z;
        String richMedia = PushBundleDataProvider.getRichMedia(pushMessage.toBundle());
        if (TextUtils.isEmpty(richMedia)) {
            return;
        }
        String sound = pushMessage.getSound();
        if (pushMessage.isLockScreen()) {
            if (LockScreenUtils.isScreenLocked()) {
                a(richMedia, sound, true);
                return;
            } else {
                ((m) RepositoryModule.getLockScreenMediaStorage()).a(pushMessage);
                return;
            }
        }
        if (TextUtils.isEmpty(pushMessage.getCustomData()) || !pushMessage.isSilent()) {
            z = false;
        } else {
            try {
                z = new JSONObject(pushMessage.getCustomData()).getBoolean("pw_force_show_rm");
            } catch (JSONException unused) {
                z = false;
            }
        }
        if (z) {
            if (AndroidPlatformModule.isApplicationInForeground()) {
                a(richMedia, sound, false);
            } else {
                ((y) RepositoryModule.getSilentRichMediaStorage()).a(pushMessage);
            }
        }
    }

    @Override // com.pushwoosh.notification.handlers.message.user.NotificationMessageHandler, com.pushwoosh.notification.handlers.message.user.MessageHandler
    public final void handlePushMessage(PushMessage pushMessage) {
        Bundle bundle = pushMessage.toBundle();
        String richMedia = PushBundleDataProvider.getRichMedia(bundle);
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        if (!TextUtils.isEmpty(richMedia)) {
            d dVarA = com.pushwoosh.e.b.a();
            if (dVarA != null) {
                dVarA.c(richMedia);
            }
            if (PushBundleDataProvider.isSilent(bundle)) {
                notificationPreferences.messageHash().set(PushBundleDataProvider.getPushHash(bundle));
            }
        }
        super.handlePushMessage(pushMessage);
    }

    public static void a() {
        com.pushwoosh.richmedia.a richMediaController;
        com.pushwoosh.q.b bVarA = ((y) RepositoryModule.getSilentRichMediaStorage()).a();
        if (bVarA == null || (richMediaController = PushwooshPlatform.getInstance().getRichMediaController()) == null) {
            return;
        }
        richMediaController.a(bVarA);
    }

    public static void a(String str, String str2, boolean z) {
        Resource richMedia = null;
        int i = 1;
        if (!TextUtils.isEmpty(str)) {
            try {
                richMedia = Resource.parseRichMedia(str);
                if (richMedia != null && !richMedia.isInApp()) {
                    i = 2;
                }
            } catch (com.pushwoosh.g.a e) {
                PWLog.error("Can't parse richMedia: " + str, e);
            }
        }
        final com.pushwoosh.q.b bVar = new com.pushwoosh.q.b(richMedia, str2, z, i, 0L);
        BackgroundExecutor.executeOnPool(new Runnable() { // from class: com.pushwoosh.k0.b$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                b.a(bVar);
            }
        });
    }

    public static void a(com.pushwoosh.q.b bVar) {
        com.pushwoosh.richmedia.a richMediaController = PushwooshPlatform.getInstance().getRichMediaController();
        if (richMediaController != null) {
            richMediaController.a(bVar);
        }
    }
}
