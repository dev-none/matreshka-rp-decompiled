package com.ironsource.adqualitysdk.sdk.i;

import android.webkit.WebView;
import java.util.ArrayList;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.υ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class RunnableC0339 implements Runnable {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ AbstractC0325 f1319;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f1320;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ ArrayList f1321;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ Object f1322;

    public RunnableC0339(AbstractC0325 abstractC0325, Object obj, ArrayList arrayList, JSONObject jSONObject) {
        this.f1319 = abstractC0325;
        this.f1322 = obj;
        this.f1321 = arrayList;
        this.f1320 = jSONObject;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f1319.m8485(this.f1322, this.f1321);
        AbstractC0325.m8482(this.f1319, this.f1320, (WebView) this.f1321.get(0), this.f1322);
    }
}
