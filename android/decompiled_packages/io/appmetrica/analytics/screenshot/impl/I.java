package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.modulesapi.internal.client.ClientContext;
import java.util.List;
import kotlin.collections.CollectionsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class I implements InterfaceC2642i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ClientContext f6538a;
    public final U b;

    public I(ClientContext clientContext, U u) {
        this.f6538a = clientContext;
        this.b = u;
    }

    @Override // io.appmetrica.analytics.screenshot.impl.InterfaceC2642i
    public final List<T> a() {
        return CollectionsKt.listOf((Object[]) new T[]{new C2654v(this.f6538a, this.b), new g0(this.f6538a, this.b)});
    }
}
