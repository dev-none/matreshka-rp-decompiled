package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.concurrent.Executors;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ỉ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0884 implements InterfaceC0424 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0866 f3138;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0908 f3139;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC0408 f3140;

    public C0884(C0866 c0866, InterfaceC0408 interfaceC0408, C0908 c0908) {
        this.f3138 = c0866;
        this.f3140 = interfaceC0408;
        this.f3139 = c0908;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0424
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8538() {
        C0808 c0808 = this.f3138.f3089.f3088;
        synchronized (c0808) {
            c0808.f2881.remove(this);
        }
        C0865 c0865 = this.f3138.f3089;
        InterfaceC0408 interfaceC0408 = this.f3140;
        C0908 c0908 = this.f3139;
        if (c0865.f3087) {
            AbstractC0323.m8470(C0865.f3086, StringFog.decrypt("yBPd6N4ILDPvDtno1UY9fLsV3vveDSxB/g3F6MISaWTzGd6t/wM9ZPQO28DQCCh0/g6Q+tAVaWDz\nCcTp3hEn\n", "m3ywjbFmSRM=\n"));
            return;
        }
        C0866 c0866 = new C0866(c0865, interfaceC0408, c0908);
        String str = AbstractC0202.f862;
        try {
            Executors.newSingleThreadExecutor().execute(c0866);
        } catch (Throwable th) {
            AbstractC1104.m8887(AbstractC0202.f862, StringFog.decrypt("33dALPYTxOj/Zkc37V3GsPt2Sy3nE9Xx6W4=\n", "mgUyQ4QzoZA=\n"), th, false);
        }
    }
}
