package com.ironsource.adqualitysdk.sdk.i;

import android.view.Choreographer;
import java.util.HashMap;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｿ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1151 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C1139 f4052;

    public C1151(C1139 c1139) {
        this.f4052 = c1139;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C1139 c1139 = this.f4052;
        if (!c1139.f3990) {
            c1139.f3987 = null;
            return;
        }
        HashMap map = new HashMap(c1139.f3989);
        Iterator it = map.keySet().iterator();
        while (it.hasNext()) {
            this.f4052.f3988.post((Runnable) map.get((InterfaceC0369) it.next()));
        }
        C1139 c11310 = this.f4052;
        if (c11310.f3987 == null) {
            c11310.f3987 = new ChoreographerFrameCallbackC1154(this);
        }
        Choreographer.getInstance().postFrameCallback(this.f4052.f3987);
    }
}
