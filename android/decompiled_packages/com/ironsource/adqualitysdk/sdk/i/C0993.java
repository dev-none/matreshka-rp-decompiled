package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Calendar;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.בּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0993 implements InterfaceC0408 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0896 f3532;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C1745d0 f3533;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ Context f3534;

    public C0993(C0896 c0896, Context context, C1745d0 c1745d0) {
        this.f3532 = c0896;
        this.f3534 = context;
        this.f3533 = c1745d0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0408
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8514(C0686 c0686, String str) {
        JSONObject jSONObject;
        int i = c0686 != null ? c0686.f2403.f2408 : -1;
        AbstractC0323.m8472(StringFog.decrypt("tATTHz7Hz/2IB9cX\n", "5mG+cEqijJI=\n"), StringFog.decrypt("W1o2t272xNZqXC22e/bA3HBOLb88sNHccwg3vW6gxsEkCA==\n", "HihE2BzWo7M=\n") + i);
        if (i != 403) {
            C0896 c0896 = this.f3532;
            int i2 = c0896.f3169;
            c0896.f3169 = i2 + 1;
            if (i2 < c0896.m8774()) {
                C0896 c0897 = this.f3532;
                synchronized (c0897) {
                    jSONObject = c0897.f2592;
                }
                m8851(jSONObject.optInt(StringFog.decrypt("TxbV\n", "LGSh2K0oHBA=\n"), c0897.f3187));
            }
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0408
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8513(C0686 c0686) {
        JSONObject jSONObject;
        JSONObject jSONObject2;
        try {
            C0689 c0689 = c0686.f2403;
            int i = c0689.f2408;
            String str = c0689.f2407;
            if (i >= 200 && i <= 299) {
                if (!TextUtils.isEmpty(c0686.f2404)) {
                    jSONObject2 = new JSONObject(c0686.f2404);
                } else {
                    jSONObject2 = new JSONObject();
                }
                if (jSONObject2.optBoolean(StringFog.decrypt("Ocdc\n", "SqMwi6LzZHU=\n"))) {
                    C1142.m8930().m8937();
                }
                String strDecrypt = StringFog.decrypt("gQE+oVKP62S9Ajqp\n", "02RTzibqqAs=\n");
                AbstractC0323.m8478(strDecrypt, strDecrypt, StringFog.decrypt("7Ej8ilHQ6KzKUfOQFNH+qdpU6YxQg/il0Vv2jg4=\n", "vz2f6TSjm8o=\n"), jSONObject2, true);
                JSONObject jSONObjectM8815 = AbstractC0939.m8815(jSONObject2, false);
                C0896 c0896 = this.f3532;
                long jOptLong = jSONObjectM8815.optLong(StringFog.decrypt("FnpOgA==\n", "ehk68xvmdpQ=\n"), 0L);
                if (!c0896.f3165) {
                    C0783 c0783 = c0896.f3181;
                    c0783.getClass();
                    C0783.m8721().post(new C0804(c0783, C0896.f3158, "" + jOptLong));
                    c0896.f3165 = true;
                }
                jSONObjectM8815.remove(StringFog.decrypt("r2n+\n", "3B2NAu2zwu4=\n"));
                C0783 c0784 = this.f3532.f3181;
                String strDecrypt2 = StringFog.decrypt("3rn+bdQoRPvPu/Jr1w==\n", "rNqRA7JBI9U=\n");
                String string = jSONObjectM8815.toString();
                c0784.getClass();
                C0783.m8721().post(new C0793(c0784, strDecrypt2, string));
                String strDecrypt3 = StringFog.decrypt("7vM=\n", "moBHZYV7l1A=\n");
                String str2 = AbstractC0202.f862;
                jSONObject2.put(strDecrypt3, Calendar.getInstance().getTimeInMillis());
                jSONObject2.put(StringFog.decrypt("rO0=\n", "2ZmTYh5GGPE=\n"), SystemClock.elapsedRealtime());
                jSONObject2.put(StringFog.decrypt("LgJrFw==\n", "Q28KYSAI6vU=\n"), AbstractC1148.m8951(this.f3534));
                C0896 c0897 = this.f3532;
                long j = c0686.f2402;
                c0897.getClass();
                if (jSONObject2.has(StringFog.decrypt("GzPM\n", "aEe/31NtZHI=\n"))) {
                    try {
                        jSONObject2.put(StringFog.decrypt("1ErA\n", "pz6z/NDNdhE=\n"), jSONObject2.optLong(StringFog.decrypt("Jmxo\n", "VRgbE4YFxpY=\n")) + (j / 2));
                    } catch (JSONException unused) {
                    }
                }
                this.f3532.mo8688(jSONObject2);
                this.f3532.m8775();
                this.f3532.m8771();
                C0896 c0898 = this.f3532;
                synchronized (c0898) {
                    jSONObject = c0898.f2592;
                }
                m8851(jSONObject.optInt(StringFog.decrypt("50DD\n", "hCG3jF3h2n4=\n"), c0898.f3186));
                if (this.f3532.m8772()) {
                    C0896 c0899 = this.f3532;
                    if (c0899.f3169 == c0899.m8774()) {
                        AbstractC1104.m8887(StringFog.decrypt("NUY3Z3UhvkoJRTNv\n", "ZyNaCAFE/SU=\n"), StringFog.decrypt("BGyDSo69gGo2YJ1Zj+/UY3dsn1+ZttB4eG2UX5m20Hh7KZhSgrvJbTtgi1mP79dlI2HRTIeuyWJ3\nYJ9Vn+/SaSZ8lE+f\n", "VwnxPOvPoAw=\n"), (Throwable) null, true);
                        return;
                    }
                    return;
                }
                return;
            }
            mo8514(c0686, str);
        } catch (Exception e) {
            try {
                AbstractC1104.m8888(StringFog.decrypt("f2BvFNUBRX5DY2sc\n", "LQUCe6FkBhE=\n"), StringFog.decrypt("N7Fo/gdyL+kAsHP/EnIt7R+sbvRVMTDmFKp9sR8hMOY=\n", "csMakXVSX4g=\n"), e, false, true, false);
            } catch (Throwable unused2) {
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8851(int i) {
        synchronized (this.f3532) {
            if (this.f3532.f3179 != null) {
                AbstractC1766n.m8389(new C1026(this), i);
            }
        }
    }
}
