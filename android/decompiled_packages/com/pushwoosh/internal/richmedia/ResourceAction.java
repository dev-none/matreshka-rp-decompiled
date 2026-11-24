package com.pushwoosh.internal.richmedia;

import android.text.TextUtils;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.g.a;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.q.b;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public final class ResourceAction {
    public static void performRichMediaAction(String str) {
        PWLog.noise("ResourceAction", "performRichMediaAction()");
        if (TextUtils.isEmpty(str)) {
            PWLog.warn("ResourceAction", "richMedia is null or empty");
            return;
        }
        PushwooshPlatform pushwooshPlatform = PushwooshPlatform.getInstance();
        if (pushwooshPlatform == null) {
            PWLog.warn("ResourceAction", "Pushwoosh is not initialized, skipping Rich Media action");
            return;
        }
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        if (notificationPreferences == null) {
            PWLog.warn("ResourceAction", "notification preferences unavailable, skipping Rich Media action");
            return;
        }
        int i = 1;
        Resource richMedia = null;
        if (!TextUtils.isEmpty(str)) {
            try {
                richMedia = Resource.parseRichMedia(str);
                if (richMedia != null && !richMedia.isInApp()) {
                    i = 2;
                }
            } catch (a e) {
                PWLog.error("Can't parse richMedia: " + str, e);
            }
        }
        b bVar = new b(richMedia, "", false, i, notificationPreferences.richMediaDelayMs().get());
        com.pushwoosh.richmedia.a richMediaController = pushwooshPlatform.getRichMediaController();
        if (richMediaController != null) {
            richMediaController.a(bVar);
        }
    }
}
