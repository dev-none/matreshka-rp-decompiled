package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;

/* JADX INFO: loaded from: classes7.dex */
public final class Jc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2000an f5745a;
    public final C2000an b;
    public final C2464t4 c;
    public final PublicLogger d;
    public final String e;

    public Jc(String str, PublicLogger publicLogger) {
        this(new C2464t4(30), new C2000an(50, str.concat("map key"), publicLogger), new C2000an(4000, str.concat("map value"), publicLogger), str, publicLogger);
    }

    public Jc(C2464t4 c2464t4, C2000an c2000an, C2000an c2000an2, String str, PublicLogger publicLogger) {
        this.c = c2464t4;
        this.f5745a = c2000an;
        this.b = c2000an2;
        this.e = str;
        this.d = publicLogger;
    }
}
