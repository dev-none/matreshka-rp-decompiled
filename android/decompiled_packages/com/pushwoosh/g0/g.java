package com.pushwoosh.g0;

import com.pushwoosh.exception.RegisterForPushNotificationsException;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.event.Subscription;
import com.pushwoosh.notification.event.RegistrationErrorEvent;
import com.pushwoosh.notification.event.RegistrationSuccessEvent;

/* JADX INFO: loaded from: classes6.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Callback f5086a;
    public Subscription b;
    public Subscription c;

    public g(Callback callback) {
        this.f5086a = callback;
    }

    public final void a() {
        this.b = EventBus.subscribe(RegistrationSuccessEvent.class, new EventListener() { // from class: com.pushwoosh.g0.g$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((RegistrationSuccessEvent) event);
            }
        });
        this.c = EventBus.subscribe(RegistrationErrorEvent.class, new EventListener() { // from class: com.pushwoosh.g0.g$$ExternalSyntheticLambda1
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a((RegistrationErrorEvent) event);
            }
        });
    }

    public final void a(RegistrationSuccessEvent registrationSuccessEvent) {
        Subscription subscription = this.b;
        if (subscription != null) {
            subscription.unsubscribe();
        }
        Subscription subscription2 = this.c;
        if (subscription2 != null) {
            subscription2.unsubscribe();
        }
        this.f5086a.process(Result.fromData(registrationSuccessEvent.getData()));
    }

    public final void a(RegistrationErrorEvent registrationErrorEvent) {
        Subscription subscription = this.b;
        if (subscription != null) {
            subscription.unsubscribe();
        }
        Subscription subscription2 = this.c;
        if (subscription2 != null) {
            subscription2.unsubscribe();
        }
        this.f5086a.process(Result.fromException(new RegisterForPushNotificationsException(registrationErrorEvent.getData())));
    }
}
