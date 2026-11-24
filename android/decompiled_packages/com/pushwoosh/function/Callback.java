package com.pushwoosh.function;

import com.pushwoosh.exception.PushwooshException;

/* JADX INFO: loaded from: classes6.dex */
public interface Callback<T, E extends PushwooshException> {
    void process(Result<T, E> result);
}
