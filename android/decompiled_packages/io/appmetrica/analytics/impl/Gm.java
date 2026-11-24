package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Gm {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5696a;

    public Gm(int i) {
        this.f5696a = i;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof Gm) && this.f5696a == ((Gm) obj).f5696a;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f5696a);
    }

    public final String toString() {
        return "StartupUpdateConfig(intervalSeconds=" + this.f5696a + ')';
    }
}
