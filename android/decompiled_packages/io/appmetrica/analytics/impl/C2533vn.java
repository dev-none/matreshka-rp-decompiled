package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.data.TempCacheStorage;
import java.util.Collection;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.vn, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2533vn implements TempCacheStorage {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final TempCacheStorage f6376a;

    public C2533vn(Context context, Wm wm, TempCacheStorage tempCacheStorage) {
        this.f6376a = tempCacheStorage;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.TempCacheStorage
    public final TempCacheStorage.Entry get(String str) {
        return this.f6376a.get(str);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.TempCacheStorage
    public final long put(String str, long j, byte[] bArr) {
        return this.f6376a.put(str, j, bArr);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.TempCacheStorage
    public final void remove(long j) {
        this.f6376a.remove(j);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.TempCacheStorage
    public final void removeOlderThan(String str, long j) {
        this.f6376a.removeOlderThan(str, j);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.TempCacheStorage
    public final Collection<TempCacheStorage.Entry> get(String str, int i) {
        return this.f6376a.get(str, i);
    }
}
