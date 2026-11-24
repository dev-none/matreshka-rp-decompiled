package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.i0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1757i0 implements k1 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1767n0 f410;

    public C1757i0(C1767n0 c1767n0) {
        this.f410 = c1767n0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.k1
    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final void mo8364(View view) {
        view.removeOnLayoutChangeListener(this.f410.f466);
        this.f410.f463.remove(view);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.k1
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void mo8365(View view) {
        view.addOnLayoutChangeListener(this.f410.f466);
        C1767n0 c1767n0 = this.f410;
        c1767n0.f463.put(view, c1767n0.f466);
    }
}
