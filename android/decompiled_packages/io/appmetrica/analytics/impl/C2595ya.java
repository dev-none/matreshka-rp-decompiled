package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.StringUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ya, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2595ya extends C2570xa {
    public C2595ya(int i, int i2) {
        this(i, new C2620za(i2));
    }

    public final int a(String str) {
        return StringUtils.getUTF8Bytes(str).length;
    }

    @Override // io.appmetrica.analytics.impl.C2570xa
    public final int b(Object obj) {
        return StringUtils.getUTF8Bytes((String) obj).length;
    }

    public C2595ya(int i, C2620za c2620za) {
        super(i, c2620za);
    }
}
