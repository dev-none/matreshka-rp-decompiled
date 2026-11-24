package com.pushwoosh.a;

import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.event.ReverseProxyReadyEvent;
import com.pushwoosh.internal.utils.PWLog;
import java.util.concurrent.CountDownLatch;

/* JADX INFO: loaded from: classes6.dex */
public final class f implements EventListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ CountDownLatch f5036a;

    public f(CountDownLatch countDownLatch) {
        this.f5036a = countDownLatch;
    }

    @Override // com.pushwoosh.internal.event.EventListener
    public final void onReceive(Event event) {
        PWLog.debug("PushwooshStartWorker", "reverse proxy configured");
        EventBus.unsubscribe(ReverseProxyReadyEvent.class, this);
        this.f5036a.countDown();
    }
}
