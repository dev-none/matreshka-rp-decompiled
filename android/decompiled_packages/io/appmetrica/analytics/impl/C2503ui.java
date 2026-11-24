package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.control.DataSendingRestrictionController;
import io.appmetrica.analytics.coreapi.internal.io.IExecutionPolicy;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ui, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2503ui implements IExecutionPolicy {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final DataSendingRestrictionController f6353a;
    public final String b = "data restriction based";

    public C2503ui(DataSendingRestrictionController dataSendingRestrictionController) {
        this.f6353a = dataSendingRestrictionController;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.io.IExecutionPolicy
    public final boolean canBeExecuted() {
        return !this.f6353a.isRestrictedForSdk();
    }

    @Override // io.appmetrica.analytics.coreapi.internal.io.IExecutionPolicy
    public final String description() {
        return this.b;
    }
}
