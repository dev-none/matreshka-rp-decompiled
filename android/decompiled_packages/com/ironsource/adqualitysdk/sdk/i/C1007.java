package com.ironsource.adqualitysdk.sdk.i;

import androidx.media3.muxer.AacWriter$$ExternalSyntheticBackport0;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.צּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1007 extends ThreadPoolExecutor implements InterfaceC0486, AutoCloseable {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0982 f3644;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0566 f3645;

    /* JADX WARN: Illegal instructions before constructor call */
    public C1007(C0982 c0982, ThreadPoolExecutor threadPoolExecutor, C0566 c0566) {
        this.f3644 = c0982;
        int corePoolSize = threadPoolExecutor.getCorePoolSize();
        int maximumPoolSize = threadPoolExecutor.getMaximumPoolSize();
        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
        super(corePoolSize, maximumPoolSize, threadPoolExecutor.getKeepAliveTime(timeUnit), timeUnit, threadPoolExecutor.getQueue());
        this.f3645 = c0566;
    }

    @Override // java.lang.AutoCloseable
    public /* synthetic */ void close() {
        AacWriter$$ExternalSyntheticBackport0.m((ExecutorService) this);
    }

    @Override // java.util.concurrent.ThreadPoolExecutor, java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        this.f3644.m8501(this, this.f3645, StringFog.decrypt("OMrfB2ef/T8D+skacIrhKAmm/wdnn/0/CQ==\n", "bIiafwL8iEs=\n"), runnable);
        super.execute(runnable);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0486
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8342() {
        return this;
    }
}
