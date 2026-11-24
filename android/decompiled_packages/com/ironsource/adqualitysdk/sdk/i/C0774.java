package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴋ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0774 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0757 f2630;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ View f2631;

    public C0774(C0757 c0757, View view) {
        this.f2630 = c0757;
        this.f2631 = view;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0697 c0697 = this.f2630.f2588.f2477;
        View view = this.f2631;
        C0697 c0698 = C0697.f2416;
        synchronized (c0697) {
            Iterator it = c0697.f2418.iterator();
            while (it.hasNext()) {
                ((k1) it.next()).mo8364(view);
            }
        }
    }
}
