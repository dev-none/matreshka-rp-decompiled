package com.pushwoosh.function;

import com.pushwoosh.exception.PushwooshException;

/* JADX INFO: loaded from: classes6.dex */
public class Result<T, E extends PushwooshException> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Object f5082a;
    private final PushwooshException b;

    private Result(Object obj, PushwooshException pushwooshException) {
        this.f5082a = obj;
        this.b = pushwooshException;
    }

    public static <T, E extends PushwooshException> Result<T, E> from(T t, E e) {
        return new Result<>(t, e);
    }

    public static <T, E extends PushwooshException> Result<T, E> fromData(T t) {
        return new Result<>(t, null);
    }

    public static <T, E extends PushwooshException> Result<T, E> fromException(E e) {
        return new Result<>(null, e);
    }

    public T getData() {
        return (T) this.f5082a;
    }

    public E getException() {
        return (E) this.b;
    }

    public boolean isSuccess() {
        return this.b == null;
    }
}
