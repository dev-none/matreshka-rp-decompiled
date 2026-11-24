package com.ironsource.adqualitysdk.sdk.i;

import java.util.concurrent.CountDownLatch;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ܐ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class RunnableC0501 implements Runnable {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ CountDownLatch f1799;

    public RunnableC0501(CountDownLatch countDownLatch) {
        this.f1799 = countDownLatch;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f1799.countDown();
    }
}
