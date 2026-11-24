package com.pushwoosh.g0;

import com.pushwoosh.exception.UnregisterForPushNotificationException;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.event.Subscription;
import com.pushwoosh.notification.event.DeregistrationErrorEvent;
import com.pushwoosh.notification.event.DeregistrationSuccessEvent;

/* JADX INFO: loaded from: classes6.dex */
public final class h {
    public static h d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Callback f5087a;
    public Subscription b;
    public Subscription c;

    public h(Callback callback) {
        this.f5087a = callback;
    }

    public final void a() {
        this.b = EventBus.subscribe(DeregistrationSuccessEvent.class, new EventListener() { // from class: com.pushwoosh.g0.h$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((DeregistrationSuccessEvent) event);
            }
        });
        this.c = EventBus.subscribe(DeregistrationErrorEvent.class, new EventListener() { // from class: com.pushwoosh.g0.h$$ExternalSyntheticLambda1
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((DeregistrationErrorEvent) event);
            }
        });
    }

    public final void a(DeregistrationSuccessEvent deregistrationSuccessEvent) {
        Subscription subscription = this.b;
        if (subscription != null) {
            subscription.unsubscribe();
        }
        Subscription subscription2 = this.c;
        if (subscription2 != null) {
            subscription2.unsubscribe();
        }
        d = null;
        this.f5087a.process(Result.fromData(deregistrationSuccessEvent.getData()));
    }

    public final void a(DeregistrationErrorEvent deregistrationErrorEvent) {
        Subscription subscription = this.b;
        if (subscription != null) {
            subscription.unsubscribe();
        }
        Subscription subscription2 = this.c;
        if (subscription2 != null) {
            subscription2.unsubscribe();
        }
        d = null;
        this.f5087a.process(Result.fromException(new UnregisterForPushNotificationException(deregistrationErrorEvent.getData())));
    }
}
