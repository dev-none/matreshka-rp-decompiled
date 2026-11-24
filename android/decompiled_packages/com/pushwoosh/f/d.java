package com.pushwoosh.f;

import com.pushwoosh.exception.PushwooshException;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.event.Event;

/* JADX INFO: loaded from: classes6.dex */
public final class d implements Event {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Resource f5071a;
    public final PushwooshException b;

    public d(Resource resource, PushwooshException pushwooshException) {
        this.f5071a = resource;
        this.b = pushwooshException;
    }
}
