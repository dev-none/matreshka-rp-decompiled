package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ModuleEvent;

/* JADX INFO: loaded from: classes7.dex */
public final class Kj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ ModuleEvent f5761a;

    public Kj(ModuleEvent moduleEvent) {
        this.f5761a = moduleEvent;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportEvent(this.f5761a);
    }
}
