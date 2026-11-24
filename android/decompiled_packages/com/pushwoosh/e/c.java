package com.pushwoosh.e;

import com.pushwoosh.inapp.PushwooshInAppImpl;
import com.pushwoosh.internal.event.Event;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.EventListener;
import com.pushwoosh.internal.event.ServerCommunicationStartedEvent;

/* JADX INFO: loaded from: classes6.dex */
public final class c implements EventListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ PushwooshInAppImpl f5062a;

    public c(PushwooshInAppImpl pushwooshInAppImpl) {
        this.f5062a = pushwooshInAppImpl;
    }

    @Override // com.pushwoosh.internal.event.EventListener
    public final void onReceive(Event event) {
        EventBus.unsubscribe(ServerCommunicationStartedEvent.class, this);
        this.f5062a.checkForUpdates();
    }
}
