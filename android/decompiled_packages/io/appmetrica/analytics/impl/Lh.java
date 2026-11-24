package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class Lh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5777a;
    public final /* synthetic */ List b;
    public final /* synthetic */ C2279li c;

    public Lh(C2279li c2279li, String str, List list) {
        this.c = c2279li;
        this.f5777a = str;
        this.b = list;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.c;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportEvent(this.f5777a, CollectionUtils.getMapFromList(this.b));
    }
}
