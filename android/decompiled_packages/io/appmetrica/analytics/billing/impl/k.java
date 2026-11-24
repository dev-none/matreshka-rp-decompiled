package io.appmetrica.analytics.billing.impl;

import io.appmetrica.analytics.billinginterface.internal.BillingInfo;
import io.appmetrica.analytics.billinginterface.internal.storage.BillingInfoStorage;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufStateStorage;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class k implements BillingInfoStorage {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ProtobufStateStorage f5413a;
    public C1972a b;

    public k(ProtobufStateStorage<C1972a> protobufStateStorage) {
        this.f5413a = protobufStateStorage;
        this.b = protobufStateStorage.read();
    }

    @Override // io.appmetrica.analytics.billinginterface.internal.storage.BillingInfoStorage
    public final List<BillingInfo> getBillingInfo() {
        return this.b.f5407a;
    }

    @Override // io.appmetrica.analytics.billinginterface.internal.storage.BillingInfoStorage
    public final boolean isFirstInappCheckOccurred() {
        return this.b.b;
    }

    @Override // io.appmetrica.analytics.billinginterface.internal.storage.BillingInfoStorage
    public final void saveInfo(List<? extends BillingInfo> list, boolean z) {
        for (BillingInfo billingInfo : list) {
        }
        C1972a c1972a = new C1972a(list, z);
        this.b = c1972a;
        this.f5413a.save(c1972a);
    }
}
