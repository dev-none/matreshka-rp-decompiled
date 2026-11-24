package com.pushwoosh.n;

import com.pushwoosh.inapp.event.ActivityBroughtOnTopEvent;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;

/* JADX INFO: loaded from: classes6.dex */
public final class g implements EventListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Resource f5264a;

    public g(Resource resource) {
        this.f5264a = resource;
    }

    @Override // com.pushwoosh.internal.event.EventListener
    public final void onReceive(Event event) {
        if (((ActivityBroughtOnTopEvent) event).count.get() <= 1) {
            j.a(this.f5264a);
        }
        EventBus.unsubscribe(ActivityBroughtOnTopEvent.class, this);
        ActivityBroughtOnTopEvent.resetCount();
    }
}
