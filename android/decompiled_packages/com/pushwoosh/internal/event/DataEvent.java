package com.pushwoosh.internal.event;

/* JADX INFO: loaded from: classes6.dex */
public class DataEvent<T> implements Event {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Object f5190a;

    public DataEvent(T t) {
        this.f5190a = t;
    }

    public T getData() {
        return (T) this.f5190a;
    }
}
