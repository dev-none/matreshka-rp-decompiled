package com.ironsource.adqualitysdk.sdk.i;

import java.util.Arrays;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᘂ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0754 implements InterfaceC0652 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f2583;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0704 f2584;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0944 f2585;

    public C0754(C0944 c0944, C0704 c0704, C1013 c1013) {
        this.f2585 = c0944;
        this.f2584 = c0704;
        this.f2583 = c1013;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0652
    /* JADX INFO: renamed from: ﾒ */
    public final JSONObject mo8566(String str, JSONObject jSONObject) {
        List listAsList = Arrays.asList(str, jSONObject);
        C0944 c0944 = this.f2585;
        C0704 c0704 = this.f2584;
        C1013 c1013 = this.f2583;
        c0944.getClass();
        return (JSONObject) c0944.m8820(c0704, c0704.f2434, c1013, listAsList).f3060;
    }
}
