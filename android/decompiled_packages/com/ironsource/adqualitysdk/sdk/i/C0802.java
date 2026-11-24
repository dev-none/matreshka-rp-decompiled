package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴹ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0802 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0757 f2867;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ View f2868;

    public C0802(C0757 c0757, View view) {
        this.f2867 = c0757;
        this.f2868 = view;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0697 c0697 = this.f2867.f2588.f2477;
        View view = this.f2868;
        C0697 c0698 = C0697.f2416;
        synchronized (c0697) {
            Iterator it = c0697.f2418.iterator();
            while (it.hasNext()) {
                ((k1) it.next()).mo8365(view);
            }
        }
    }
}
