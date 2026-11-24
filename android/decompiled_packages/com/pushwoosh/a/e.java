package com.pushwoosh.a;

import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.utils.PWLog;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public final class e implements EventListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ AtomicBoolean f5035a;
    public final /* synthetic */ CountDownLatch b;
    public final /* synthetic */ com.pushwoosh.a c;

    public e(com.pushwoosh.a aVar, AtomicBoolean atomicBoolean, CountDownLatch countDownLatch) {
        this.c = aVar;
        this.f5035a = atomicBoolean;
        this.b = countDownLatch;
    }

    @Override // com.pushwoosh.internal.event.EventListener
    public final void onReceive(Event event) {
        try {
            PWLog.debug("PushwooshStartWorker", "fetched application code:" + this.c.b.applicationId().get());
            EventBus.unsubscribe(com.pushwoosh.g0.f.class, this);
            this.b.countDown();
        } catch (Throwable th) {
            PWLog.error("PushwooshStartWorker", "can't fetch application code", th);
            this.f5035a.set(true);
            EventBus.unsubscribe(com.pushwoosh.g0.f.class, this);
            CountDownLatch countDownLatch = this.b;
            while (countDownLatch.getCount() > 0) {
                countDownLatch.countDown();
            }
        }
    }
}
