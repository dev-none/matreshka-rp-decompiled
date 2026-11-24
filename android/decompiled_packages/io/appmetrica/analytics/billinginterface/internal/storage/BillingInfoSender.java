package io.appmetrica.analytics.billinginterface.internal.storage;

import io.appmetrica.analytics.billinginterface.internal.ProductInfo;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public interface BillingInfoSender {
    void sendInfo(List<ProductInfo> list);
}
