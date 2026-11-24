package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.os.Handler;
import java.util.LinkedHashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ח, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0427 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f1547;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ LinkedHashMap f1548;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Context f1549;

    public C0427(C0418 c0418, Context context, LinkedHashMap linkedHashMap) {
        this.f1547 = c0418;
        this.f1549 = context;
        this.f1548 = linkedHashMap;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f1547.f1527 = AbstractC0895.m8747().mo8763();
        this.f1547.m8531(this.f1549, this.f1548, new C0448(this));
        AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
        C0440 c0440 = new C0440(this);
        C0896 c0896 = (C0896) abstractC0895M8747;
        Handler handler = c0896.f3179;
        if (handler != null) {
            handler.post(new C0949(c0896, c0440));
        }
    }
}
