package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Savable;

/* JADX INFO: loaded from: classes7.dex */
public final class I implements Savable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ J f5715a;

    public I(J j) {
        this.f5715a = j;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Savable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Boolean getValue() {
        return Boolean.valueOf(this.f5715a.f5736a.a(false));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Savable
    public final /* bridge */ /* synthetic */ void setValue(Object obj) {
        a(((Boolean) obj).booleanValue());
    }

    public final void a(boolean z) {
        this.f5715a.f5736a.e(z);
    }
}
