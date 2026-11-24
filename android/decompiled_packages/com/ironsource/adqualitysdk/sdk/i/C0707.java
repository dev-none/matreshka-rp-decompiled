package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;
import java.lang.ref.WeakReference;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᔨ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0707 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0697 f2441;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ k1 f2442;

    public C0707(C0697 c0697, k1 k1Var) {
        this.f2441 = c0697;
        this.f2442 = k1Var;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        Iterator it = this.f2441.f2419.iterator();
        while (it.hasNext()) {
            View view = (View) ((WeakReference) it.next()).get();
            if (view != null) {
                AbstractC1766n.m8384(new C0712(this, view));
            }
        }
    }
}
