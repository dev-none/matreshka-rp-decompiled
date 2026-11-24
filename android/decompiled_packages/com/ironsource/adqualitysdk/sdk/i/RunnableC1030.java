package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﮃ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class RunnableC1030 implements Runnable {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C1003 f3701;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ int f3702;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ long f3703;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ boolean f3704;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3705;

    public RunnableC1030(C1003 c1003, JSONObject jSONObject, boolean z, long j, int i) {
        this.f3701 = c1003;
        this.f3705 = jSONObject;
        this.f3704 = z;
        this.f3703 = j;
        this.f3702 = i;
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean z;
        C1003 c1003 = this.f3701;
        JSONObject jSONObject = this.f3705;
        boolean z2 = this.f3704;
        long j = this.f3703;
        int i = this.f3702;
        c1003.getClass();
        C1142 c1142M8930 = C1142.m8930();
        synchronized (c1142M8930) {
            z = c1142M8930.f4011;
        }
        if (z) {
            return;
        }
        try {
            if (c1003.f3626 > 0 && j > 0) {
                jSONObject.put(StringFog.decrypt("R5eG\n", "LvPygb15BMU=\n"), j - c1003.f3626);
            }
            if (c1003.f3625 > 0 && i > 0) {
                jSONObject.put(StringFog.decrypt("CemGkg==\n", "YITr9hY9i6Q=\n"), i - c1003.f3625);
            }
            jSONObject.put(StringFog.decrypt("itS+XH8=\n", "7LvMPxrDXZU=\n"), z2);
        } catch (Exception e) {
            String str = C1003.f3619;
            AbstractC0323.m8479(str, str, StringFog.decrypt("4N2sPrGuh2PMw7o4renFYtXwtz+q+rp1ysKuPab6gDbVzqc9rO+B\n", "pa/eUcOO5RY=\n"), e, null, false);
        }
        c1003.f3632.f1327.f1210.f1412.f1190.f4002.m8710(StringFog.decrypt("gxWAaSMxum6UCrJwIT26VA==\n", "92XfAE1YzjE=\n"), jSONObject);
    }
}
