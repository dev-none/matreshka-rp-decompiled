package com.ironsource.adqualitysdk.sdk.i;

import android.os.Handler;
import android.os.Looper;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.לּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1003 {

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static final String f3619 = StringFog.decrypt("eBW4eloPYlxdHqVrTRJuT1oeow==\n", "MXvRDhlgDyw=\n");

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public boolean f3620;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public int f3621;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public boolean f3622;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public int f3623;

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public long f3624;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public volatile int f3625;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public volatile long f3626;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public boolean f3627;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public boolean f3628;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public boolean f3629;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public Handler f3630 = new Handler(Looper.getMainLooper());

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0333 f3631;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0344 f3632;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0363 f3633;

    public C1003(C0363 c0363, C0344 c0344, C0333 c0333) {
        this.f3633 = c0363;
        this.f3632 = c0344;
        this.f3631 = c0333;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8853(boolean z) {
        boolean z2;
        if (this.f3628 || this.f3630 == null) {
            return;
        }
        C1142 c1142M8930 = C1142.m8930();
        synchronized (c1142M8930) {
            z2 = c1142M8930.f4011;
        }
        if (z2) {
            return;
        }
        this.f3628 = true;
        Handler handler = this.f3630;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
        C0331 c0331 = this.f3633.f1362;
        c0331.getClass();
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(StringFog.decrypt("qBNJgw==\n", "3mAn8K5y4zw=\n"), c0331.m8495());
        } catch (Exception unused) {
        }
        AbstractC1766n.m8388(new C0335(new RunnableC1030(this, jSONObject, z, this.f3624, this.f3623)));
    }
}
