package com.google.firebase.concurrent;

import androidx.media3.muxer.AacWriter$$ExternalSyntheticBackport0;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.ScheduledExecutorService;

/* JADX INFO: loaded from: classes4.dex */
public interface PausableScheduledExecutorService extends ScheduledExecutorService, PausableExecutorService, AutoCloseable {
    @Override // com.google.firebase.concurrent.PausableExecutorService, java.lang.AutoCloseable
    /* synthetic */ default void close() {
        AacWriter$$ExternalSyntheticBackport0.m((ExecutorService) this);
    }
}
