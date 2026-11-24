package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.ISAdQualityInitError;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﮇ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1034 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0896 f3764;

    public C1034(C0896 c0896) {
        this.f3764 = c0896;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0865 c0865;
        C0896 c0896 = this.f3764;
        synchronized (c0896) {
            c0865 = c0896.f3180;
        }
        if (!c0865.f3088.m8735()) {
            C0964 c0964 = this.f3764.f3171.f1779.f1190.f3999;
            c0964.m8827(c0964.f3387, ISAdQualityInitError.NO_NETWORK_CONNECTION, StringFog.decrypt("tYgTH91uHYeJjBMS13QEjZiTWh7W\n", "++czcbgaaug=\n"));
            return;
        }
        if (this.f3764.mo8760()) {
            return;
        }
        C0964 c0965 = this.f3764.f3171.f1779.f1190.f3999;
        c0965.m8827(c0965.f3387, ISAdQualityInitError.CONFIG_LOAD_TIMEOUT, StringFog.decrypt("c6cZxJHMk85TgCGAk/25glmbNsap3tLOVZU8gLTQn8dVgSw=\n", "OvRYoMC58qI=\n"));
    }
}
