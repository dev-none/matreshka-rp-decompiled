package com.pushwoosh.u;

import com.pushwoosh.internal.event.Emitter;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;

/* JADX INFO: loaded from: classes6.dex */
public final class a extends Emitter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Class f5316a;

    public a(Class cls) {
        this.f5316a = cls;
    }

    @Override // com.pushwoosh.internal.event.Emitter
    public final void bind(EventListener eventListener) {
        super.bind(eventListener);
        EventBus.subscribe(this.f5316a, eventListener);
    }

    @Override // com.pushwoosh.internal.event.Emitter
    public final void unbind() {
        EventBus.unsubscribe(this.f5316a, this.listener);
        super.unbind();
    }
}
