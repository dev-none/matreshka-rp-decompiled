package com.pushwoosh.n;

import com.pushwoosh.inapp.event.ActivityBroughtOnTopEvent;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;

/* JADX INFO: loaded from: classes6.dex */
public final class i implements EventListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ j f5266a;

    public i(j jVar) {
        this.f5266a = jVar;
    }

    @Override // com.pushwoosh.internal.event.EventListener
    public final void onReceive(Event event) {
        EventBus.unsubscribe(ActivityBroughtOnTopEvent.class, this);
        this.f5266a.d();
    }
}
