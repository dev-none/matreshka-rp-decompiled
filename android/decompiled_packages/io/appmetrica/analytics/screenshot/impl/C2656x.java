package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.modulesapi.internal.client.ClientContext;
import io.appmetrica.analytics.modulesapi.internal.common.InternalModuleEvent;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.x, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2656x implements U {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ClientContext f6580a;

    public C2656x(ClientContext clientContext) {
        this.f6580a = clientContext;
    }

    public final void a(String str) {
        this.f6580a.getInternalClientModuleFacade().reportEvent(InternalModuleEvent.INSTANCE.newBuilder(4).withName("appmetrica_system_event_screenshot").withAttributes(MapsKt.mapOf(TuplesKt.to("type", str))).withCategory(InternalModuleEvent.Category.SYSTEM).build());
    }
}
