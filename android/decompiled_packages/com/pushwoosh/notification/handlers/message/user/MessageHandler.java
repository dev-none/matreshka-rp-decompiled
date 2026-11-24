package com.pushwoosh.notification.handlers.message.user;

import com.pushwoosh.notification.PushMessage;

/* JADX INFO: loaded from: classes6.dex */
@FunctionalInterface
public interface MessageHandler {
    void handlePushMessage(PushMessage pushMessage);
}
