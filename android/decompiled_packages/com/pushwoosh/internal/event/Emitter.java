package com.pushwoosh.internal.event;

import com.pushwoosh.internal.event.Event;

/* JADX INFO: loaded from: classes6.dex */
public abstract class Emitter<T extends Event> {
    protected EventListener<T> listener;

    public static <T extends Event> Emitter<T> forEvent(Class<T> cls) {
        return new com.pushwoosh.u.a(cls);
    }

    public static <T extends Event> Emitter<T> when(Emitter<T> emitter, Emitter<?> emitter2) {
        return new a(emitter, emitter2);
    }

    public void bind(EventListener<T> eventListener) {
        this.listener = eventListener;
    }

    protected void emit(T t) {
        EventListener<T> eventListener = this.listener;
        if (eventListener != null) {
            eventListener.onReceive(t);
        }
    }

    public void unbind() {
        this.listener = null;
    }
}
