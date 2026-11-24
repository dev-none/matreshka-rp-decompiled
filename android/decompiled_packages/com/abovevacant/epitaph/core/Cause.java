package com.abovevacant.epitaph.core;

/* JADX INFO: loaded from: classes4.dex */
public final class Cause {
    public final String humanReadable;
    public final MemoryError memoryError;

    public Cause(final String humanReadable, final MemoryError memoryError) {
        this.humanReadable = humanReadable;
        this.memoryError = memoryError;
    }
}
