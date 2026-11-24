package io.appmetrica.analytics.screenshot.impl;

import android.os.Bundle;
import io.appmetrica.analytics.modulesapi.internal.client.BundleToServiceConfigConverter;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.h, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2641h implements BundleToServiceConfigConverter {
    @Override // io.appmetrica.analytics.modulesapi.internal.client.BundleToServiceConfigConverter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final D fromBundle(Bundle bundle) {
        bundle.setClassLoader(D.class.getClassLoader());
        D d = (D) bundle.getParcelable("config");
        return d == null ? new D(new j0()) : d;
    }
}
