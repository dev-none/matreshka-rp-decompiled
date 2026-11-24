package com.pushwoosh.badge.b;

import com.pushwoosh.badge.PushwooshBadge;
import com.pushwoosh.notification.PushMessage;
import com.pushwoosh.notification.handlers.message.user.NotificationMessageHandler;

/* JADX INFO: loaded from: classes6.dex */
public final class a extends NotificationMessageHandler {
    @Override // com.pushwoosh.notification.handlers.message.user.NotificationMessageHandler
    public final void handleNotification(PushMessage pushMessage) {
        int badges = pushMessage.getBadges();
        if (pushMessage.isBadgesAdditive()) {
            PushwooshBadge.addBadgeNumber(badges);
        } else if (badges >= 0) {
            PushwooshBadge.setBadgeNumber(badges);
        }
    }
}
