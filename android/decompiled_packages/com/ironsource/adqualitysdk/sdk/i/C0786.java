package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴦ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0786 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0782 f2673;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Activity f2674;

    public C0786(C0782 c0782, Activity activity) {
        this.f2673 = c0782;
        this.f2674 = activity;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0444 c0444 = this.f2673.f2638.f2601;
        String strDecrypt = StringFog.decrypt("aNIlRHWM5ix9ySlDY7c=\n", "Dr1GMQbTlEk=\n");
        c0444.getClass();
        AbstractC1766n.m8385(new C0459(c0444, strDecrypt));
        this.f2673.f2638.m8710(StringFog.decrypt("HVvWzJjVkwMIQNrLju4=\n", "ezS1ueuK4WY=\n"), C0782.m8720(this.f2673, this.f2674));
    }
}
