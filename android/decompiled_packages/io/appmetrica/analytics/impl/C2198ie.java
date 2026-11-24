package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ie, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2198ie implements uo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6134a;

    public C2198ie(String str) {
        this.f6134a = str;
    }

    @Override // io.appmetrica.analytics.impl.uo
    public final so a(Object obj) {
        if (obj != null) {
            return new so(this, true, "");
        }
        return new so(this, false, this.f6134a + " is null.");
    }

    public final String a() {
        return this.f6134a;
    }
}
