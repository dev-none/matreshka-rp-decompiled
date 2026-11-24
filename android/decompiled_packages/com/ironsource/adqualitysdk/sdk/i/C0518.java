package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ঌ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0518 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f1828;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0929 f1829;

    public C0518(C0418 c0418, C0929 c0929) {
        this.f1828 = c0418;
        this.f1829 = c0929;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0418 c0418 = this.f1828;
        C0929 c0929 = this.f1829;
        synchronized (c0418) {
            if (c0418.f1535.get()) {
                AbstractC1766n.m8388(new C0515(c0929));
            } else {
                ((ArrayList) c0418.m8525()).add(c0929);
            }
        }
    }
}
