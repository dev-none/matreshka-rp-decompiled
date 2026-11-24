package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.л, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0367 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C0331 f1366;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ boolean f1367;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0929 f1368;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f1369;

    public C0367(C0331 c0331, String str, C0929 c0929, boolean z) {
        this.f1366 = c0331;
        this.f1369 = str;
        this.f1368 = c0929;
        this.f1367 = z;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0396 c0396M8494 = this.f1366.m8494(this.f1369);
        if (c0396M8494 != null) {
            C0929 c0929 = this.f1368;
            boolean z = this.f1367;
            C0666 c0666 = c0929.f3284;
            c0396M8494.f1485 = c0666.f2309;
            c0396M8494.f1484 = c0666.f2308;
            c0396M8494.f1483 = c0666.f2307;
            c0396M8494.f1482 = c0929.f3281.m8499();
            if (StringFog.decrypt("hbY2XvMc+w==\n", "wPh3HL9Zv5Q=\n").equals(c0396M8494.f1482) || StringFog.decrypt("MQvy2UcHJqs=\n", "dUKhmAVLY+8=\n").equals(c0396M8494.f1482)) {
                c0396M8494.f1482 = C0396.f1471;
            }
            C0666 c0667 = c0929.f3284;
            c0396M8494.f1481 = c0667.f2306;
            c0396M8494.f1480 = c0667.f2305;
            c0396M8494.f1479 = c0929.m8805();
            c0396M8494.f1476 = z;
        }
    }
}
