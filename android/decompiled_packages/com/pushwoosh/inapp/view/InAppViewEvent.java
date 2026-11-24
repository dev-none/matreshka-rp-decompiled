package com.pushwoosh.inapp.view;

import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.event.Event;

/* JADX INFO: loaded from: classes6.dex */
public class InAppViewEvent implements Event {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Resource f5180a;
    private final String b;
    private final boolean c;

    public InAppViewEvent(Resource resource) {
        this.f5180a = resource;
        this.b = null;
        this.c = false;
    }

    public String getMessageHash() {
        return this.b;
    }

    public Resource getResource() {
        return this.f5180a;
    }

    public boolean hasOwnMessageHash() {
        return this.c;
    }

    public InAppViewEvent(Resource resource, String str) {
        this.f5180a = resource;
        this.b = str;
        this.c = true;
    }
}
