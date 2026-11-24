package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵒ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0827 implements InterfaceC0424 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0729 f3032;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC1023 f3033;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ AbstractC0620 f3034;

    public C0827(C0729 c0729, AbstractC0620 abstractC0620, InterfaceC1023 interfaceC1023) {
        this.f3032 = c0729;
        this.f3034 = abstractC0620;
        this.f3033 = interfaceC1023;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0424
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8538() {
        C0808 c0808 = this.f3032.f2468.f2457.f3088;
        synchronized (c0808) {
            c0808.f2881.remove(this);
        }
        this.f3032.f2468.m8659(this.f3034, this.f3033);
    }
}
