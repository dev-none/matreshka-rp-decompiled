package io.appmetrica.analytics.location.impl;

import android.content.Context;
import android.location.LocationListener;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.coreapi.internal.system.PermissionExtractor;
import io.appmetrica.analytics.locationapi.internal.LastKnownLocationExtractorProvider;

/* JADX INFO: loaded from: classes7.dex */
public final class v implements LastKnownLocationExtractorProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6461a;
    public final s b;
    public final String c;

    public v(String str, s sVar, String str2) {
        this.f6461a = str;
        this.b = sVar;
        this.c = str2;
    }

    @Override // io.appmetrica.analytics.locationapi.internal.LastKnownLocationExtractorProvider
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final u getExtractor(Context context, PermissionExtractor permissionExtractor, IHandlerExecutor iHandlerExecutor, LocationListener locationListener) {
        return new u(context, this.b.a(permissionExtractor), locationListener, this.f6461a);
    }

    @Override // io.appmetrica.analytics.locationapi.internal.Identifiable
    public final String getIdentifier() {
        return this.c;
    }
}
