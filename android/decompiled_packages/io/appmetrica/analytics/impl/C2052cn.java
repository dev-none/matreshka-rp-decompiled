package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.StringUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.cn, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2052cn implements vo {
    @Override // io.appmetrica.analytics.impl.vo
    public final byte[] a(S8 s8, C2378ph c2378ph) {
        return !TextUtils.isEmpty(s8.b) ? StringUtils.getUTF8Bytes(s8.b) : new byte[0];
    }
}
