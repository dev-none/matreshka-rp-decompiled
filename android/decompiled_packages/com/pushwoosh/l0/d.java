package com.pushwoosh.l0;

import android.os.Bundle;
import android.text.TextUtils;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.PushBundleDataProvider;
import com.pushwoosh.notification.handlers.notification.PushNotificationOpenHandler;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public final class d implements PushNotificationOpenHandler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final NotificationPrefs f5238a = RepositoryModule.getNotificationPreferences();

    @Override // com.pushwoosh.notification.handlers.notification.PushNotificationOpenHandler
    public final void postHandleNotification(Bundle bundle) {
        if (PushBundleDataProvider.getTappedButtonId(bundle) != null) {
            return;
        }
        String richMedia = PushBundleDataProvider.getRichMedia(bundle);
        if (TextUtils.isEmpty(richMedia)) {
            return;
        }
        int i = 1;
        Resource richMedia2 = null;
        if (!TextUtils.isEmpty(richMedia)) {
            try {
                richMedia2 = Resource.parseRichMedia(richMedia);
                if (richMedia2 != null && !richMedia2.isInApp()) {
                    i = 2;
                }
            } catch (com.pushwoosh.g.a e) {
                PWLog.error("Can't parse richMedia: " + richMedia, e);
            }
        }
        com.pushwoosh.q.b bVar = new com.pushwoosh.q.b(richMedia2, "", false, i, this.f5238a.richMediaDelayMs().get());
        RepositoryModule.getNotificationPreferences().customData().set(PushBundleDataProvider.getCustomData(bundle));
        com.pushwoosh.richmedia.a richMediaController = PushwooshPlatform.getInstance().getRichMediaController();
        if (richMediaController != null) {
            richMediaController.a(bVar);
        }
    }
}
