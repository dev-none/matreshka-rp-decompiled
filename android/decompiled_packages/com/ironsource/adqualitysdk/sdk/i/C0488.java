package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ڹ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0488 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0483 f1781;

    public C0488(C0483 c0483) {
        this.f1781 = c0483;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        AbstractRunnableC0910 c0483;
        C0483 c0484 = this.f1781;
        C0418 c0418 = c0484.f1772;
        Context context = c0484.f1776;
        ArrayList arrayList = c0484.f1775;
        ArrayList arrayList2 = c0484.f1774;
        C0496 c0496 = c0484.f1773;
        String str = C0418.f1521;
        c0418.getClass();
        if (arrayList.isEmpty()) {
            return;
        }
        AbstractC0265 abstractC0265 = (AbstractC0265) arrayList.remove(0);
        String str2 = (String) arrayList2.remove(0);
        if (!arrayList.isEmpty()) {
            c0483 = c0496;
            c0483 = new C0483(c0418, context, arrayList, arrayList2, c0496);
        }
        c0483 = c0496;
        AbstractC1766n.m8384(new C0473(c0418, str2, context, abstractC0265, c0483));
    }
}
