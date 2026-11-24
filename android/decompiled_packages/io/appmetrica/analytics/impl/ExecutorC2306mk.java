package io.appmetrica.analytics.impl;

import android.os.Handler;
import java.util.concurrent.Executor;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.mk, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class ExecutorC2306mk implements Executor {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Handler f6212a;

    public ExecutorC2306mk(Handler handler) {
        this.f6212a = handler;
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        this.f6212a.post(runnable);
    }
}
