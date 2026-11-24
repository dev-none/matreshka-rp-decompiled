package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.b3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2006b3 implements IBinaryDataHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final IBinaryDataHelper f6011a;

    public C2006b3(IBinaryDataHelper iBinaryDataHelper) {
        this.f6011a = iBinaryDataHelper;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper
    public final byte[] get(String str) {
        return this.f6011a.get(str);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper
    public final void insert(String str, byte[] bArr) {
        this.f6011a.insert(str, bArr);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper
    public final void remove(String str) {
        this.f6011a.remove(str);
    }
}
