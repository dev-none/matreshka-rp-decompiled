package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.modulesapi.internal.client.ClientContext;
import java.util.List;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.w, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2655w implements InterfaceC2642i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ClientContext f6579a;
    public final U b;

    public C2655w(ClientContext clientContext, U u) {
        this.f6579a = clientContext;
        this.b = u;
    }

    @Override // io.appmetrica.analytics.screenshot.impl.InterfaceC2642i
    public final List<T> a() {
        return CollectionsKt.listOf((Object[]) new T[]{new C2637d(this.f6579a, this.b), new C2654v(this.f6579a, this.b), new g0(this.f6579a, this.b)});
    }
}
