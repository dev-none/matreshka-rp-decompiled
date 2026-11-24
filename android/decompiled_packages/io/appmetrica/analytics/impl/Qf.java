package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import android.util.Base64;

/* JADX INFO: loaded from: classes7.dex */
public final class Qf implements vo, D8 {
    @Override // io.appmetrica.analytics.impl.D8
    public final int a(N8 n8) {
        return 2;
    }

    @Override // io.appmetrica.analytics.impl.vo
    public final byte[] a(S8 s8, C2378ph c2378ph) {
        return TextUtils.isEmpty(s8.b) ? new byte[0] : Base64.decode(s8.b, 0);
    }
}
