package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.control.DataSendingRestrictionController;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.lh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public abstract class AbstractC2278lh implements InterfaceC2303mh {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final DataSendingRestrictionController f6192a;

    public AbstractC2278lh(DataSendingRestrictionController dataSendingRestrictionController) {
        this.f6192a = dataSendingRestrictionController;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2303mh
    public boolean a(Boolean bool) {
        return ((Boolean) WrapUtils.getOrDefault(bool, Boolean.TRUE)).booleanValue();
    }
}
