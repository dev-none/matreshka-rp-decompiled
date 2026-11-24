package com.abovevacant.epitaph.core;

/* JADX INFO: loaded from: classes4.dex */
public final class LogMessage {
    public final String message;
    public final int pid;
    public final int priority;
    public final String tag;
    public final int tid;
    public final String timestamp;

    public LogMessage(final String timestamp, final int pid, final int tid, final int priority, final String tag, final String message) {
        this.timestamp = timestamp;
        this.pid = pid;
        this.tid = tid;
        this.priority = priority;
        this.tag = tag;
        this.message = message;
    }
}
