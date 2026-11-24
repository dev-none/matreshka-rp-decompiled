package com.abovevacant.epitaph.core;

/* JADX INFO: loaded from: classes4.dex */
public final class StackHistoryBufferEntry {
    public final BacktraceFrame addr;
    public final long fp;
    public final long tag;

    public StackHistoryBufferEntry(final BacktraceFrame addr, final long fp, final long tag) {
        this.addr = addr;
        this.fp = fp;
        this.tag = tag;
    }
}
