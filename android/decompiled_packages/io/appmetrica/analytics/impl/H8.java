package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.StringUtils;

/* JADX INFO: loaded from: classes7.dex */
public final class H8 implements vo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final M8 f5703a;

    public H8() {
        this(new M8());
    }

    @Override // io.appmetrica.analytics.impl.vo
    public final byte[] a(S8 s8, C2378ph c2378ph) {
        String str = s8.b;
        return ((L8) this.f5703a.f5788a.a(s8.o)).a(str != null ? StringUtils.getUTF8Bytes(str) : new byte[0]);
    }

    public H8(M8 m8) {
        this.f5703a = m8;
    }
}
