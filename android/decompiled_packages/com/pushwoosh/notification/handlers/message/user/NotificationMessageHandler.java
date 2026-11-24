package com.pushwoosh.notification.handlers.message.user;

import com.pushwoosh.notification.PushMessage;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public abstract class NotificationMessageHandler implements MessageHandler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final NotificationPrefs f5295a = RepositoryModule.getNotificationPreferences();

    protected abstract void handleNotification(PushMessage pushMessage);

    @Override // com.pushwoosh.notification.handlers.message.user.MessageHandler
    public void handlePushMessage(PushMessage pushMessage) {
        if (this.f5295a.notificationEnabled().get()) {
            handleNotification(pushMessage);
        }
    }
}
