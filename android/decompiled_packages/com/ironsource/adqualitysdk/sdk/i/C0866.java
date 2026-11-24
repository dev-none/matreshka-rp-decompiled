package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ṛ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0866 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0865 f3089;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0908 f3090;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC0408 f3091;

    public C0866(C0865 c0865, InterfaceC0408 interfaceC0408, C0908 c0908) {
        this.f3089 = c0865;
        this.f3091 = interfaceC0408;
        this.f3090 = c0908;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        boolean z;
        InterfaceC0408 interfaceC0408 = this.f3091;
        C0908 c0908 = this.f3090;
        C0808 c0808 = this.f3089.f3088;
        synchronized (c0808) {
            z = c0808.f2882;
        }
        if (!z) {
            m8739(interfaceC0408, c0908);
            return;
        }
        try {
            C0686 c0686M8779 = AbstractC0911.m8779(c0908.f3225, c0908.f3224, c0908.f3223, c0908.f3222, c0908.f3221);
            if (c0686M8779 == null) {
                AbstractC1766n.m8384(new C0891(c0686M8779, interfaceC0408));
                return;
            }
            String str = c0686M8779.f2404;
            AbstractC0323.m8471(StringFog.decrypt("1YghCIa9emH6gzQYjL0=\n", "m+1Vf+nPESw=\n"), StringFog.decrypt("iwF1YChlocWvDWQzOmWg1b8ebi46IPLWvgFsYDogoMapHCE3IDG6kKgPdSFzZQ==\n", "zG4BQElF0rA=\n") + str);
            AbstractC1766n.m8384(new C0892(c0686M8779, interfaceC0408));
        } catch (Exception e) {
            interfaceC0408.mo8514(null, StringFog.decrypt("6Slpc4P0cmbTZ3t0gfVycck0fH6CsSB3zTJtYpux\n", "vEcIEe+RUhI=\n") + e.getLocalizedMessage());
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8739(InterfaceC0408 interfaceC0408, C0908 c0908) {
        C0808 c0808 = this.f3089.f3088;
        C0884 c0884 = new C0884(this, interfaceC0408, c0908);
        synchronized (c0808) {
            c0808.f2881.add(c0884);
        }
    }
}
