package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import java.util.LinkedHashMap;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒬ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0642 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f2244;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final /* synthetic */ C0448 f2245;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ LinkedHashMap f2246;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ List f2247;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ String f2248;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Context f2249;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f2250;

    public C0642(C0418 c0418, String str, Context context, String str2, List list, LinkedHashMap linkedHashMap, C0448 c0448) {
        this.f2244 = c0418;
        this.f2250 = str;
        this.f2249 = context;
        this.f2248 = str2;
        this.f2247 = list;
        this.f2246 = linkedHashMap;
        this.f2245 = c0448;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
        String str = this.f2250;
        String str2 = this.f2244.f1525;
        C0653 c0653 = (C0653) ((C0896) abstractC0895M8747).mo8763().get(str);
        if (c0653 != null && c0653.m8608(str2)) {
            JSONObject jSONObject = new JSONObject();
            this.f2244.m8533(this.f2250, jSONObject);
            C0418.m8517(this.f2244).put(this.f2250, jSONObject);
            AbstractC1766n.m8387(new C0643(this), AbstractC0895.m8747().mo8764());
            return;
        }
        C0418 c0418 = this.f2244;
        Context context = this.f2249;
        String str3 = this.f2248;
        String str4 = this.f2250;
        List list = this.f2247;
        C0644 c0644 = new C0644(this);
        c0418.getClass();
        AbstractC1766n.m8388(new C0626(c0418, str4, context, str3, list, c0644));
    }
}
