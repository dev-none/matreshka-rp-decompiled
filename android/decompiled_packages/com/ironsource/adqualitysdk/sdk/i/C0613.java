package com.ironsource.adqualitysdk.sdk.i;

import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᐴ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0613 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ AbstractRunnableC0910 f2146;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ AtomicBoolean f2147;

    public C0613(AtomicBoolean atomicBoolean, AbstractRunnableC0910 abstractRunnableC0910) {
        this.f2147 = atomicBoolean;
        this.f2146 = abstractRunnableC0910;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        if (this.f2147.compareAndSet(false, true)) {
            this.f2146.run();
        }
    }
}
