package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ՙ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0413 {
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return obj != null && getClass() == obj.getClass();
    }

    public int hashCode() {
        return getClass().hashCode();
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0847 m8515(C0704 c0704, C1013 c1013) {
        try {
            c0704.f2430.add(this);
            C0847 c0847Mo8348 = mo8348(c0704, c1013);
            c0704.m8627(this);
            return c0847Mo8348;
        } catch (AbstractC0618 e) {
            throw e;
        } catch (Throwable th) {
            throw new C1106(c1013, c0704, StringFog.decrypt("8PyjfAF4AfLQ7aRnGjYDqsb6sGcWNQHkwa4=\n", "tY7RE3NYZIo=\n") + this + "\n" + th, th);
        }
    }

    /* JADX INFO: renamed from: ﾒ */
    public int mo8373() {
        return 1;
    }

    /* JADX INFO: renamed from: ﾒ */
    public int mo8374(C0704 c0704) {
        return 1;
    }

    /* JADX INFO: renamed from: ﾒ */
    public abstract C0847 mo8348(C0704 c0704, C1013 c1013);
}
