package io.appmetrica.analytics.coreapi.internal.executors;

/* JADX INFO: loaded from: classes7.dex */
public class InterruptionSafeThread extends Thread implements IInterruptionSafeThread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private volatile boolean f5465a;

    public InterruptionSafeThread() {
        this.f5465a = true;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.executors.IInterruptionSafeThread
    public synchronized boolean isRunning() {
        return this.f5465a;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.executors.IInterruptionSafeThread
    public synchronized void stopRunning() {
        this.f5465a = false;
        interrupt();
    }

    public InterruptionSafeThread(Runnable runnable, String str) {
        super(runnable, str);
        this.f5465a = true;
    }

    public InterruptionSafeThread(String str) {
        super(str);
        this.f5465a = true;
    }

    public InterruptionSafeThread(Runnable runnable) {
        super(runnable);
        this.f5465a = true;
    }
}
