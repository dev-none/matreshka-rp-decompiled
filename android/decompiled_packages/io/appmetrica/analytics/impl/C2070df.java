package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.df, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2070df {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6046a;
    public final String b;

    public C2070df(String str, String str2) {
        this.f6046a = str;
        this.b = a(str2);
    }

    public final String a(String str) {
        if (str == null) {
            return this.f6046a;
        }
        return this.f6046a + str;
    }
}
