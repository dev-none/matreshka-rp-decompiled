package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.WrapUtils;

/* JADX INFO: loaded from: classes7.dex */
public final class Wj extends AbstractC2278lh {
    public Wj(L6 l6) {
        super(l6);
    }

    @Override // io.appmetrica.analytics.impl.AbstractC2278lh, io.appmetrica.analytics.impl.InterfaceC2303mh
    public final boolean a(Boolean bool) {
        return !this.f6192a.isRestrictedForSdk() && ((Boolean) WrapUtils.getOrDefault(bool, Boolean.TRUE)).booleanValue();
    }
}
