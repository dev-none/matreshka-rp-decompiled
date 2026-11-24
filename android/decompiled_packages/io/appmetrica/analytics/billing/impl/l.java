package io.appmetrica.analytics.billing.impl;

import io.appmetrica.analytics.billinginterface.internal.BillingType;

/* JADX INFO: loaded from: classes7.dex */
public abstract /* synthetic */ class l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final /* synthetic */ int[] f5414a;

    static {
        int[] iArr = new int[BillingType.values().length];
        iArr[BillingType.LIBRARY_V6.ordinal()] = 1;
        iArr[BillingType.LIBRARY_V8.ordinal()] = 2;
        f5414a = iArr;
    }
}
