package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import java.util.LinkedHashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ۊ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0496 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f1791;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ LinkedHashMap f1792;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Context f1793;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0259 f1794;

    public C0496(C0418 c0418, C0259 c0259, Context context, LinkedHashMap linkedHashMap) {
        this.f1791 = c0418;
        this.f1794 = c0259;
        this.f1793 = context;
        this.f1792 = linkedHashMap;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        boolean zMo8748;
        AbstractC1766n.m8384(new C0506(this));
        C0418 c0418 = this.f1791;
        Context context = this.f1793;
        LinkedHashMap linkedHashMap = this.f1792;
        synchronized (c0418) {
            zMo8748 = AbstractC0895.m8747().mo8748();
        }
        if (!zMo8748) {
            AbstractC1766n.m8389(new C0457(c0418), AbstractC0895.m8747().mo8765());
        }
        AbstractC1766n.m8384(new C0427(c0418, context, linkedHashMap));
    }
}
