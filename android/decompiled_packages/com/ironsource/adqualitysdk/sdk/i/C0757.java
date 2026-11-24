package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᘆ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0757 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0734 f2588;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ ArrayList f2589;

    public C0757(C0734 c0734, ArrayList arrayList) {
        this.f2588 = c0734;
        this.f2589 = arrayList;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        ArrayList arrayListM8404 = AbstractC1769o0.m8404(this.f2588.f2477.f2419, this.f2589);
        for (View view : this.f2589) {
            Iterator it = this.f2588.f2477.f2419.iterator();
            do {
                if (!it.hasNext()) {
                    this.f2588.f2477.f2419.add(new WeakReference(view));
                    AbstractC1766n.m8384(new C0802(this, view));
                    break;
                }
            } while (((WeakReference) it.next()).get() != view);
        }
        for (int i = 0; i < arrayListM8404.size(); i++) {
            AbstractC1766n.m8384(new C0774(this, (View) arrayListM8404.get(i)));
        }
    }
}
