package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.h5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2163h5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6105a;

    public C2163h5(String str) {
        this.f6105a = str;
    }

    public final PublicLogger a() {
        return LoggerStorage.getOrCreatePublicLogger(this.f6105a);
    }
}
