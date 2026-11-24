package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ι, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractRunnableC0910 implements Runnable {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final String f3229 = StringFog.decrypt("r0Gyk55MVqmVbYCQlEw=\n", "+wPh8vgpBNw=\n");

    @Override // java.lang.Runnable
    public final void run() {
        try {
            mo8327();
        } catch (Throwable th) {
            try {
                mo8569(th);
            } catch (Throwable unused) {
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ */
    public abstract void mo8327();

    /* JADX INFO: renamed from: ﾒ */
    public void mo8569(Throwable th) {
        String str = f3229;
        String str2 = StringFog.decrypt("/Xk8aKrWppiYaCJmq4Xv\n", "uAtOB9j2z/Y=\n") + getClass().getName();
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("+a/GVy/Y\n", "usOnJFzwfvc=\n"));
        sb.append(getClass().getName());
        try {
            AbstractC1104.m8886(str, str2, AbstractC0970.m8850("Qw==\n", "auh/oqZLvhU=\n", sb), th, null, null, false, false, false);
        } catch (Throwable unused) {
        }
        AbstractC0323.m8470(str, StringFog.decrypt("haX1Ur5zYV7gtOtcvyAo\n", "wNeHPcxTCDA=\n") + getClass().getName());
        AbstractC0323.m8479(str, str, StringFog.decrypt("+KGQWDt8LRE=\n", "vMTkOVIQXis=\n"), th, null, false);
    }
}
