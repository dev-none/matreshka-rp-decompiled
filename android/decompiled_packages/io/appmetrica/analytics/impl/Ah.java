package io.appmetrica.analytics.impl;

import java.util.HashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class Ah {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final W5 f5597a;
    public final boolean b;
    public final int c;
    public final HashMap d;
    public final Kh e;

    public Ah(W5 w5, boolean z, int i, HashMap map, Kh kh) {
        this.f5597a = w5;
        this.b = z;
        this.c = i;
        this.d = map;
        this.e = kh;
    }

    public final String toString() {
        return "ReportToSend(report=" + this.f5597a + ", serviceDataReporterType=" + this.c + ", environment=" + this.e + ", isCrashReport=" + this.b + ", trimmedFields=" + this.d + ')';
    }
}
