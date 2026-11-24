package com.pushwoosh.badge.d;

/* JADX INFO: loaded from: classes6.dex */
public final class b extends Exception {
    public b(String str) {
        super(str);
    }

    public b(Exception exc) {
        super("Unable to execute badge", exc);
    }
}
