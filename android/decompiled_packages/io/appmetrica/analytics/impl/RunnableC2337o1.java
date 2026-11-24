package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.o1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2337o1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6232a;
    public final /* synthetic */ List b;
    public final /* synthetic */ C2436s1 c;

    public RunnableC2337o1(C2436s1 c2436s1, String str, List list) {
        this.c = c2436s1;
        this.f6232a = str;
        this.b = list;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.c).reportEvent(this.f6232a, CollectionUtils.getMapFromList(this.b));
    }
}
