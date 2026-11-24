package io.appmetrica.analytics.impl;

import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public final class Uj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5922a;
    public final /* synthetic */ Map b;

    public Uj(String str, Map map) {
        this.f5922a = str;
        this.b = map;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportEvent(this.f5922a, this.b);
    }
}
