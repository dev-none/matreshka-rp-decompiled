package io.appmetrica.analytics.impl;

import android.os.HandlerThread;
import io.appmetrica.analytics.coreapi.internal.executors.IInterruptionSafeThread;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.jb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class HandlerThreadC2220jb extends HandlerThread implements IInterruptionSafeThread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public volatile boolean f6151a;

    public HandlerThreadC2220jb(String str) {
        super(str);
        this.f6151a = true;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.executors.IInterruptionSafeThread
    public final synchronized boolean isRunning() {
        return this.f6151a;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.executors.IInterruptionSafeThread
    public final synchronized void stopRunning() {
        this.f6151a = false;
        interrupt();
    }
}
