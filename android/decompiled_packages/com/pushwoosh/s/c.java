package com.pushwoosh.s;

import com.pushwoosh.internal.utils.PWLog;
import java.util.Iterator;
import java.util.concurrent.ConcurrentLinkedQueue;

/* JADX INFO: loaded from: classes6.dex */
public final class c {
    public static final c d = new c();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public volatile int f5311a = 1;
    public final ConcurrentLinkedQueue b = new ConcurrentLinkedQueue();
    public final Object c = new Object();

    public final void a(Runnable runnable) {
        PWLog.noise("c", "executeOrQueue() called with task: " + runnable);
        if (this.f5311a == 2) {
            runnable.run();
            return;
        }
        synchronized (this.c) {
            if (this.f5311a == 2) {
                runnable.run();
                PWLog.noise("c", "SDK is ready, executing task immediately.");
            } else if (this.f5311a == 1) {
                PWLog.noise("c", "SDK is initializing, adding task to the queue.");
                this.b.add(runnable);
            } else {
                PWLog.warn("c", "SDK is in ERROR state, task will be ignored.");
            }
        }
    }

    public final void b() {
        PWLog.noise("c", "setReady()");
        synchronized (this.c) {
            if (this.f5311a != 1) {
                return;
            }
            ConcurrentLinkedQueue concurrentLinkedQueue = new ConcurrentLinkedQueue(this.b);
            this.b.clear();
            this.f5311a = 2;
            PWLog.debug("c", "Executing " + concurrentLinkedQueue.size() + " queued tasks.");
            Iterator it = concurrentLinkedQueue.iterator();
            while (it.hasNext()) {
                try {
                    ((Runnable) it.next()).run();
                } catch (Exception e) {
                    PWLog.error("c", "Error executing queued task", e);
                }
            }
            PWLog.debug("c", "All queued tasks executed.");
        }
    }

    public final void a() {
        PWLog.noise("c", "setError()");
        PWLog.error("c", "SDK state is changing to ERROR.");
        synchronized (this.c) {
            this.f5311a = 3;
            this.b.clear();
        }
        PWLog.info("c", "SDK current state: ".concat(b.a(this.f5311a)));
    }
}
