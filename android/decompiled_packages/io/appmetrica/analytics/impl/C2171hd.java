package io.appmetrica.analytics.impl;

import android.content.Intent;
import io.appmetrica.analytics.modulesapi.internal.service.ModuleServiceLifecycleController;
import io.appmetrica.analytics.modulesapi.internal.service.ModuleServiceLifecycleObserver;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.hd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2171hd implements ModuleServiceLifecycleController {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final T1 f6110a;

    public C2171hd(T1 t1) {
        this.f6110a = t1;
    }

    public static final void a(ModuleServiceLifecycleObserver moduleServiceLifecycleObserver, Intent intent) {
        moduleServiceLifecycleObserver.onFirstClientConnected();
    }

    public static final void b(ModuleServiceLifecycleObserver moduleServiceLifecycleObserver, Intent intent) {
        moduleServiceLifecycleObserver.onAllClientsDisconnected();
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ModuleServiceLifecycleController
    public final void registerObserver(final ModuleServiceLifecycleObserver moduleServiceLifecycleObserver) {
        this.f6110a.b(new S1() { // from class: io.appmetrica.analytics.impl.hd$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.impl.S1
            public final void a(Intent intent) {
                C2171hd.a(moduleServiceLifecycleObserver, intent);
            }
        });
        this.f6110a.a(new S1() { // from class: io.appmetrica.analytics.impl.hd$$ExternalSyntheticLambda1
            @Override // io.appmetrica.analytics.impl.S1
            public final void a(Intent intent) {
                C2171hd.b(moduleServiceLifecycleObserver, intent);
            }
        });
    }
}
