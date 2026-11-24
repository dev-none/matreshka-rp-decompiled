package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.StringUtils;

/* JADX INFO: loaded from: classes7.dex */
public final class Df extends C2570xa {
    public Df(int i) {
        super(i);
    }

    @Override // io.appmetrica.analytics.impl.C2570xa
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final int b(Z z) {
        if (z == null) {
            return 0;
        }
        return StringUtils.getUtf8BytesLength(z.b) + 12;
    }
}
