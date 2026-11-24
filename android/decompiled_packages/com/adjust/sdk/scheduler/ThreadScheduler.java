package com.adjust.sdk.scheduler;

/* JADX INFO: loaded from: classes4.dex */
public interface ThreadScheduler extends ThreadExecutor {
    void schedule(Runnable runnable, long j);
}
