package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.乁, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0977 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0966 f3417;

    public C0977(C0966 c0966) {
        this.f3417 = c0966;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        ArrayList<m1> arrayList = new ArrayList(this.f3417.f3389.values());
        this.f3417.f3389.clear();
        for (m1 m1Var : arrayList) {
            m1Var.f3380 = null;
            C0697.m8619().m8620(m1Var);
        }
    }
}
