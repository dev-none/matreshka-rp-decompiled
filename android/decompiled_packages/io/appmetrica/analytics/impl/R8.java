package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;

/* JADX INFO: loaded from: classes7.dex */
public final class R8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5863a;
    public final W8 b;
    public T8 c;

    public R8(W8 w8, int i) {
        this.f5863a = i;
        this.b = w8;
    }

    public final void a() {
        T8 t8;
        W8 w8 = this.b;
        w8.getClass();
        try {
            byte[] bArr = w8.c.get("event_hashes");
            if (bArr == null || bArr.length == 0) {
                U8 u8 = w8.f5942a;
                w8.b.getClass();
                B9 b9 = new B9();
                u8.getClass();
                t8 = new T8(b9.f5610a, b9.b, b9.c, CollectionUtils.hashSetFromIntArray(b9.d));
            } else {
                U8 u9 = w8.f5942a;
                B9 state = w8.b.toState(bArr);
                u9.getClass();
                t8 = new T8(state.f5610a, state.b, state.c, CollectionUtils.hashSetFromIntArray(state.d));
            }
        } catch (Throwable unused) {
            U8 u10 = w8.f5942a;
            w8.b.getClass();
            B9 b10 = new B9();
            u10.getClass();
            t8 = new T8(b10.f5610a, b10.b, b10.c, CollectionUtils.hashSetFromIntArray(b10.d));
        }
        this.c = t8;
        int i = t8.c;
        int i2 = this.f5863a;
        if (i != i2) {
            t8.c = i2;
            t8.d = 0;
            W8 w9 = this.b;
            IBinaryDataHelper iBinaryDataHelper = w9.c;
            V8 v8 = w9.b;
            w9.f5942a.getClass();
            iBinaryDataHelper.insert("event_hashes", v8.toByteArray(U8.a(t8)));
        }
    }
}
