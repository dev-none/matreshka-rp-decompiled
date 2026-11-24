package io.appmetrica.analytics.coreutils.internal.cache;

/* JADX INFO: loaded from: classes7.dex */
public final class b implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ LocationDataCacheUpdateScheduler f5501a;

    public b(LocationDataCacheUpdateScheduler locationDataCacheUpdateScheduler) {
        this.f5501a = locationDataCacheUpdateScheduler;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.f5501a.c.shouldUpdate()) {
            this.f5501a.d.f5500a.b.updateLastKnown();
        }
    }
}
