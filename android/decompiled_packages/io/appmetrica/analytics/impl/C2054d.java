package io.appmetrica.analytics.impl;

import android.os.Debug;
import java.util.Iterator;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.d, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2054d extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final AtomicBoolean f6035a = new AtomicBoolean(true);
    public final /* synthetic */ C2079e b;

    public C2054d(C2079e c2079e) {
        this.b = c2079e;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        while (!isInterrupted() && this.f6035a.get()) {
            this.b.e.set(false);
            C2079e c2079e = this.b;
            c2079e.c.postAtFrontOfQueue(c2079e.f);
            int i = this.b.b.get();
            while (i > 0) {
                try {
                    Thread.sleep(C2079e.g);
                    if (this.b.e.get()) {
                        break;
                    } else {
                        i--;
                    }
                } catch (InterruptedException unused) {
                    return;
                }
            }
            if (i == 0 && !Debug.isDebuggerConnected()) {
                Iterator it = this.b.f6052a.iterator();
                while (it.hasNext()) {
                    ((InterfaceC2028c) it.next()).onAppNotResponding();
                }
            }
            while (!this.b.e.get()) {
                Thread.sleep(C2079e.g);
            }
        }
    }
}
