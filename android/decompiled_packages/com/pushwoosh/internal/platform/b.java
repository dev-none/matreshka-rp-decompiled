package com.pushwoosh.internal.platform;

import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final AtomicBoolean f5200a = new AtomicBoolean(false);

    public b() {
        EventBus.subscribe(ApplicationOpenDetector.ApplicationMovedToForegroundEvent.class, new EventListener() { // from class: com.pushwoosh.internal.platform.b$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((ApplicationOpenDetector.ApplicationMovedToForegroundEvent) event);
            }
        });
        EventBus.subscribe(com.pushwoosh.w.a.class, new EventListener() { // from class: com.pushwoosh.internal.platform.b$$ExternalSyntheticLambda1
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((com.pushwoosh.w.a) event);
            }
        });
    }

    public final /* synthetic */ void a(ApplicationOpenDetector.ApplicationMovedToForegroundEvent applicationMovedToForegroundEvent) {
        this.f5200a.set(true);
    }

    public final /* synthetic */ void a(com.pushwoosh.w.a aVar) {
        this.f5200a.set(false);
    }
}
