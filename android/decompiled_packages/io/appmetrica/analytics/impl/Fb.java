package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.networktasks.internal.ConfigProvider;
import kotlin.Lazy;
import kotlin.LazyKt;

/* JADX INFO: loaded from: classes7.dex */
public final class Fb implements ConfigProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2085e5 f5675a;
    public final Lazy b = LazyKt.lazy(new Eb(this));

    public Fb(C2085e5 c2085e5) {
        this.f5675a = c2085e5;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.ConfigProvider
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2378ph getConfig() {
        return (C2378ph) this.b.getValue();
    }
}
