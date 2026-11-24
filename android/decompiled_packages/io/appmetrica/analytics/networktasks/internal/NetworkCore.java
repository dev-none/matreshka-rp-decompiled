package io.appmetrica.analytics.networktasks.internal;

import io.appmetrica.analytics.coreapi.internal.executors.InterruptionSafeThread;
import io.appmetrica.analytics.coreapi.internal.io.IExecutionPolicy;
import io.appmetrica.analytics.networktasks.impl.d;
import io.appmetrica.analytics.networktasks.impl.f;
import io.appmetrica.analytics.networktasks.impl.g;
import io.appmetrica.analytics.networktasks.impl.h;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.Executor;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes7.dex */
public class NetworkCore extends InterruptionSafeThread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final LinkedBlockingQueue f6503a;
    private final Object b;
    private final Object c;
    private volatile d d;
    private final g e;
    private final IExecutionPolicy f;

    public NetworkCore(IExecutionPolicy iExecutionPolicy) {
        this(iExecutionPolicy, new g());
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        NetworkTask networkTask = null;
        while (isRunning()) {
            try {
                synchronized (this.c) {
                    try {
                    } catch (Throwable th) {
                        throw th;
                    }
                }
                this.d = (d) this.f6503a.take();
                networkTask = this.d.f6492a;
                Executor executor = networkTask.getExecutor();
                this.e.getClass();
                executor.execute(new h(networkTask, this, new f()));
                networkTask.onTaskFinished();
                synchronized (this.c) {
                    this.d = null;
                }
            } catch (InterruptedException unused) {
                if (networkTask != null) {
                    networkTask.onTaskFinished();
                    synchronized (this.c) {
                        this.d = null;
                    }
                } else {
                    continue;
                }
            } catch (Throwable th2) {
                if (networkTask != null) {
                    networkTask.onTaskFinished();
                    synchronized (this.c) {
                        this.d = null;
                        networkTask.onTaskRemoved();
                    }
                }
                throw th2;
            }
            networkTask.onTaskRemoved();
        }
    }

    public void startTask(NetworkTask networkTask) {
        if (this.f.canBeExecuted()) {
            synchronized (this.b) {
                d dVar = new d(networkTask);
                if (isRunning() && !this.f6503a.contains(dVar) && !dVar.equals(this.d) && networkTask.onTaskAdded()) {
                    this.f6503a.offer(dVar);
                }
            }
        }
    }

    public void stopTasks() {
        synchronized (this.c) {
            ArrayList arrayList = new ArrayList(this.f6503a.size());
            this.f6503a.drainTo(arrayList);
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                ((d) it.next()).f6492a.onTaskRemoved();
            }
        }
    }

    NetworkCore(IExecutionPolicy iExecutionPolicy, g gVar) {
        this.f6503a = new LinkedBlockingQueue();
        this.b = new Object();
        this.c = new Object();
        this.f = iExecutionPolicy;
        this.e = gVar;
    }
}
