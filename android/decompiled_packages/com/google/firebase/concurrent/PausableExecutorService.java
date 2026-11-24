package com.google.firebase.concurrent;

import androidx.media3.muxer.AacWriter$$ExternalSyntheticBackport0;
import java.util.concurrent.ExecutorService;

/* JADX INFO: loaded from: classes4.dex */
public interface PausableExecutorService extends ExecutorService, PausableExecutor, AutoCloseable {
    @Override // java.lang.AutoCloseable
    /* synthetic */ default void close() {
        AacWriter$$ExternalSyntheticBackport0.m((ExecutorService) this);
    }
}
