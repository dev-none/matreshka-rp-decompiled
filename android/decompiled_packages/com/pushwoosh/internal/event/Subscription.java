package com.pushwoosh.internal.event;

import com.pushwoosh.internal.event.Event;

/* JADX INFO: loaded from: classes6.dex */
public class Subscription<T extends Event> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Class f5194a;
    private final EventListener b;

    Subscription(Class cls, EventListener eventListener) {
        this.f5194a = cls;
        this.b = eventListener;
    }

    public void unsubscribe() {
        EventBus.unsubscribe(this.f5194a, this.b);
    }
}
