package com.pushwoosh.internal.event;

import com.pushwoosh.internal.event.Event;

/* JADX INFO: loaded from: classes6.dex */
@FunctionalInterface
public interface EventListener<T extends Event> {
    void onReceive(T t);
}
