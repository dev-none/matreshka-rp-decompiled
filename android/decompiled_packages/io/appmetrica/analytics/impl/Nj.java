package io.appmetrica.analytics.impl;

import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public final class Nj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Map f5811a;

    public Nj(Map map) {
        this.f5811a = map;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportAnr(this.f5811a);
    }
}
