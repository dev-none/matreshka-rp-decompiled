package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONException;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﺣ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1084 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C1072 f3871;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0873 f3872;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C1141 f3873;

    public C1084(C1072 c1072, C1141 c1141, C0873 c0873) {
        this.f3871 = c1072;
        this.f3873 = c1141;
        this.f3872 = c0873;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0873 c0873;
        int iM8487;
        try {
            C1072 c1072 = this.f3871;
            C0783 c0783 = c1072.f3855;
            String str = c1072.f3856 + StringFog.decrypt("jw==\n", "paaHGq0WwDo=\n");
            C0385 c0385 = c0783.f2640;
            c0385.getClass();
            try {
                iM8487 = c0385.f1449.m8487(str);
            } catch (Throwable unused) {
                iM8487 = 0;
            }
            this.f3871.getClass();
            if (iM8487 <= 10000) {
                C1072 c1073 = this.f3871;
                C1141 c1141 = this.f3873;
                c1073.getClass();
                String str2 = c1073.f3856 + c1141.f3992;
                if (TextUtils.isEmpty(str2)) {
                    AbstractC0323.m8479(C1072.m8880(this.f3871), StringFog.decrypt("agBS2lrf99tbAFbX\n", "KWExsj+Mg7Q=\n"), StringFog.decrypt("EWlfIarqcs8nYFJzqsBggWJ1FjXv9yGcMW5EM+3mIYQgeBY05fEhgCdrUzH+\n", "RQE2UoqDAe8=\n"), null, null, true);
                    if (c0873 != null) {
                        return;
                    } else {
                        return;
                    }
                } else {
                    try {
                        String string = this.f3873.m8927().toString();
                        AbstractC0323.m8478(C1072.m8880(this.f3871), StringFog.decrypt("QYJSCilgva9wglYH\n", "AuMxYkwzycA=\n"), StringFog.decrypt("oNYTn/qGMCqM1RqS8Jxt\n", "47dw95PoVwo=\n"), string, true);
                        this.f3871.f3855.m8724(str2, string);
                    } catch (JSONException unused2) {
                        if (c0873 != null) {
                            return;
                        } else {
                            return;
                        }
                    }
                }
            }
        } finally {
            c0873 = this.f3872;
            if (c0873 != null) {
                AbstractC1766n.m8385(c0873);
            }
        }
    }
}
