package com.pushwoosh.internal.chain;

import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public interface Chain<T> {
    void addItem(T t);

    Iterator<T> getIterator();

    void removeItem(T t);
}
