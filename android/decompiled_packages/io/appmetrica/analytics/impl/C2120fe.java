package io.appmetrica.analytics.impl;

import java.util.Collection;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.fe, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2120fe implements uo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6076a;

    public C2120fe(String str) {
        this.f6076a = str;
    }

    @Override // io.appmetrica.analytics.impl.uo
    public final so a(Collection<Object> collection) {
        if (!no.a((Collection) collection)) {
            return new so(this, true, "");
        }
        return new so(this, false, this.f6076a + " is null or empty.");
    }
}
