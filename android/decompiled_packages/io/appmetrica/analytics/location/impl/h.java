package io.appmetrica.analytics.location.impl;

import android.location.Location;
import io.appmetrica.analytics.coreapi.internal.backport.Consumer;

/* JADX INFO: loaded from: classes7.dex */
public final class h implements Consumer {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final m f6449a;

    public h(m mVar) {
        this.f6449a = mVar;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.backport.Consumer
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void consume(Location location) {
        if (location != null) {
            this.f6449a.updateData(location);
        }
    }
}
