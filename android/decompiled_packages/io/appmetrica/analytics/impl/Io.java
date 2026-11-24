package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.backport.Consumer;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes7.dex */
public final class Io {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f5735a = new ArrayList();
    public PublicLogger b;

    public final synchronized void a(Consumer consumer) {
        PublicLogger publicLogger = this.b;
        if (publicLogger == null) {
            this.f5735a.add(consumer);
        } else {
            consumer.consume(publicLogger);
        }
    }
}
