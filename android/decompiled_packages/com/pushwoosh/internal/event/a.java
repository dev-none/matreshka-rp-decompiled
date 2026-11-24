package com.pushwoosh.internal.event;

import java.util.Iterator;
import java.util.LinkedList;

/* JADX INFO: loaded from: classes6.dex */
public final class a extends Emitter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public boolean f5195a = false;
    public final LinkedList b = new LinkedList();
    public final /* synthetic */ Emitter c;
    public final /* synthetic */ Emitter d;

    public a(Emitter emitter, Emitter emitter2) {
        this.c = emitter;
        this.d = emitter2;
    }

    public final /* synthetic */ void a(Event event) {
        if (this.f5195a) {
            emit(event);
        } else {
            this.b.add(event);
        }
    }

    public final /* synthetic */ void b(Event event) {
        this.f5195a = true;
        Iterator it = this.b.iterator();
        while (it.hasNext()) {
            emit((Event) it.next());
        }
    }

    @Override // com.pushwoosh.internal.event.Emitter
    public final void bind(EventListener eventListener) {
        super.bind(eventListener);
        this.c.bind(new EventListener() { // from class: com.pushwoosh.internal.event.a$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.a(event);
            }
        });
        this.d.bind(new EventListener() { // from class: com.pushwoosh.internal.event.a$$ExternalSyntheticLambda1
            @Override // com.pushwoosh.internal.event.EventListener
            public final void onReceive(Event event) {
                this.f$0.b(event);
            }
        });
    }
}
