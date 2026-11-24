package com.pushwoosh.notification.handlers.message.user;

import com.pushwoosh.internal.event.Event;
import com.pushwoosh.notification.PushMessage;

/* JADX INFO: loaded from: classes6.dex */
public class NotificationCreatedEvent implements Event {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5294a;
    private final String b;
    private final PushMessage c;

    NotificationCreatedEvent(int i, String str, PushMessage pushMessage) {
        this.f5294a = i;
        this.b = str;
        this.c = pushMessage;
    }

    public PushMessage getMessage() {
        return this.c;
    }

    public int getMessageId() {
        return this.f5294a;
    }

    public String getMessageTag() {
        return this.b;
    }
}
