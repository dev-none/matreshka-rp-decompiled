package com.ironsource.adqualitysdk.sdk.i;

import android.os.SystemClock;
import android.view.MotionEvent;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Calendar;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ḟ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0852 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0806 f3066;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ MotionEvent f3067;

    public C0852(C0806 c0806, MotionEvent motionEvent) {
        this.f3066 = c0806;
        this.f3067 = motionEvent;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        try {
            int iRound = Math.round(this.f3067.getRawX());
            int iRound2 = Math.round(this.f3067.getRawY());
            String str = AbstractC1148.f4049;
            if (iRound >= 0 && iRound2 >= 0 && iRound <= AbstractC0939.m8815(AbstractC1148.m8952(), false).optInt(AbstractC1148.f4042) && iRound2 <= AbstractC0939.m8815(AbstractC1148.m8952(), false).optInt(AbstractC1148.f4041)) {
                String str2 = AbstractC0202.f862;
                C1783w c1783w = new C1783w(iRound, iRound2, Calendar.getInstance().getTimeInMillis(), SystemClock.elapsedRealtime());
                C0806 c0806 = this.f3066;
                synchronized (c0806) {
                    c0806.f2876 = c1783w;
                }
                return;
            }
            AbstractC0323.m8470(StringFog.decrypt("A5uvslOAgdExlKicW5+h2yqSsoNXnqPXJ5I=\n", "RPfA0DLs1b4=\n"), StringFog.decrypt("EM1wTIfdiQUhzHEPnZiPFi3UYEvPkpkHZM1jD42SmR0g0SVMgJKeFy3MZFuKjtZTPw==\n", "RKIFL+/97HM=\n") + iRound + StringFog.decrypt("QNc=\n", "bPeWAlAU51M=\n") + iRound2 + StringFog.decrypt("5g==\n", "m8RoUhtjJ2A=\n"));
        } catch (Throwable th) {
            AbstractC1104.m8887(StringFog.decrypt("5kO39QCFilbUTLDbCJqqXM9KqsQEm6hQwko=\n", "oS/Yl2Hp3jk=\n"), StringFog.decrypt("IB1smedONQtFAHCi+hs/DQ==\n", "ZW8e9pVuXGU=\n"), th, false);
        }
    }
}
