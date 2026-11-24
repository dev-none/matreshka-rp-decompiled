package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.view.View;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.k0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1761k0 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C1767n0 f426;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ View f427;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Activity f428;

    public C1761k0(C1767n0 c1767n0, Activity activity, View view) {
        this.f426 = c1767n0;
        this.f428 = activity;
        this.f427 = view;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f426.f460.clear();
        C1767n0 c1767n0 = this.f426;
        Activity activity = this.f428;
        View view = this.f427;
        Class cls = c1767n0.f462;
        C1765m0 c1765m0 = c1767n0.f461;
        boolean z = c1765m0.f444;
        List list = c1765m0.f440;
        List list2 = c1765m0.f438;
        ArrayList arrayList = c1767n0.f460;
        if (view != null) {
            AbstractC1769o0.m8402(view, cls, null, false, z, list, list2, arrayList);
        } else {
            AbstractC1769o0.m8405(activity, cls, -1, null, false, z, list, list2, arrayList);
        }
        View view2 = this.f427;
        C1767n0 c1767n1 = this.f426;
        Class cls2 = c1767n1.f462;
        C1765m0 c1765m1 = c1767n1.f461;
        if (AbstractC1769o0.m8407(view2, cls2, null, c1765m1.f440, c1765m1.f438)) {
            this.f426.f460.add(this.f427);
        }
        ArrayList arrayList2 = new ArrayList(this.f426.f460);
        C1767n0 c1767n2 = this.f426;
        if (c1767n2.f461.f441) {
            AbstractC1766n.m8386(new C1759j0(this, arrayList2));
        } else {
            C1767n0.m8390(c1767n2, arrayList2);
        }
    }
}
