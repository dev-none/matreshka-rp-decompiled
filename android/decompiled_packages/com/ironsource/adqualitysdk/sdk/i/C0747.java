package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.SystemClock;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Calendar;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᖽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0747 extends C0322 {

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public static final String f2560 = StringFog.decrypt("0qnxKtC9xG3gguYjx73qa/2i4ifdpt8=\n", "k8eQRqnJrQ4=\n");

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final Handler f2561;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public int f2562;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public int f2563;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final int f2564;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final String f2565;

    public C0747(Context context, C1745d0 c1745d0, int i, String str, long j) {
        super(context, c1745d0, j);
        this.f2564 = i;
        this.f2563 = 0;
        this.f2562 = 1;
        this.f2565 = str;
        HandlerThread handlerThread = new HandlerThread(StringFog.decrypt("s2ZVdb8CPgmBTUJ8qAIQD5xtRniyGSU=\n", "8gg0GcZ2V2o=\n"));
        handlerThread.start();
        this.f2561 = new Handler(handlerThread.getLooper());
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8684(String str, JSONObject jSONObject, JSONObject jSONObject2, boolean z, C0871 c0871) {
        try {
            try {
                this.f2561.post(new C0751(this, str, jSONObject, jSONObject2, z, c0871));
            } catch (Throwable th) {
                th = th;
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.C0322
    /* JADX INFO: renamed from: ﾒ */
    public final JSONObject mo8468(JSONObject jSONObject, boolean z, boolean z2, boolean z3) throws JSONException {
        long timeInMillis;
        long jElapsedRealtime;
        synchronized (this) {
            String str = AbstractC0202.f862;
            timeInMillis = Calendar.getInstance().getTimeInMillis();
            jElapsedRealtime = SystemClock.elapsedRealtime();
        }
        JSONObject jSONObjectMo8468 = super.mo8468(jSONObject, z, z2, z3);
        try {
            String str2 = AbstractC1033.f3758;
            long jOptLong = jSONObjectMo8468.optLong(str2);
            jSONObjectMo8468.remove(str2);
            if (jOptLong != 0) {
                long j = jElapsedRealtime - (timeInMillis - jOptLong);
                jSONObjectMo8468.put(StringFog.decrypt("Cygm\n", "eFxVB2vOtnY=\n"), timeInMillis);
                jSONObjectMo8468.put(StringFog.decrypt("MEiC\n", "Qz32O4PgMwE=\n"), jElapsedRealtime);
                timeInMillis = jOptLong;
                jElapsedRealtime = j;
            }
            jSONObjectMo8468.put(StringFog.decrypt("cy4u\n", "F1pdBctoOG0=\n"), timeInMillis);
            jSONObjectMo8468.put(StringFog.decrypt("UjY=\n", "J0IIt54KJjM=\n"), jElapsedRealtime);
            jSONObjectMo8468.put(StringFog.decrypt("yiEJTA==\n", "uVRgKHyI+9Q=\n"), this.f2565);
            jSONObjectMo8468.put(StringFog.decrypt("zte6\n", "vb7e5AaX0xI=\n"), this.f2564);
            String strDecrypt = StringFog.decrypt("QJLK\n", "M/ynpjQdA/s=\n");
            int i = this.f2563;
            if (i == 0) {
                i = 1;
            }
            jSONObjectMo8468.put(strDecrypt, i);
            if (AbstractC0895.m8747().mo8748()) {
                jSONObjectMo8468.put(StringFog.decrypt("xehB5g==\n", "ppstgjOsl8o=\n"), true);
            }
            jSONObjectMo8468.put(StringFog.decrypt("FX43\n", "dhlB2Q/nFSs=\n"), AbstractC0895.m8747().mo8767());
            C1128 c1128 = ((C0896) AbstractC0895.m8747()).f3175;
            if (c1128 != null) {
                String strM8892 = c1128.m8892();
                if (!TextUtils.isEmpty(strM8892)) {
                    jSONObjectMo8468.put(StringFog.decrypt("UysY\n", "Nl9sIeV1Jnc=\n"), strM8892);
                }
                Object objM8894 = c1128.m8894();
                if (objM8894 != null) {
                    jSONObjectMo8468.put(StringFog.decrypt("bwxl8Q==\n", "CngRgsQ84Ng=\n"), objM8894);
                }
            }
            if (z2) {
                m8685(jSONObjectMo8468);
            }
            return jSONObjectMo8468;
        } catch (JSONException e) {
            String str3 = f2560;
            AbstractC0323.m8479(str3, str3, StringFog.decrypt("7Dk4zMkExPrMKj7K1UOH7d8uJNf2QdPp\n", "qUtKo7skp4g=\n"), e, null, false);
            return jSONObjectMo8468;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8685(JSONObject jSONObject) {
        C1783w c1783wM8730 = C0806.m8725().m8730();
        try {
            jSONObject.put(StringFog.decrypt("EQXnht70WnYV\n", "fWSU8oqbLxU=\n"), AbstractC0939.m8814(c1783wM8730.f567, c1783wM8730.f566, c1783wM8730.f565, c1783wM8730.f564));
        } catch (JSONException e) {
            String str = f2560;
            AbstractC0323.m8479(str, str, StringFog.decrypt("zr5xLqZu0KvPpW0m9CLQvN+jdiK8bsWgi6l1JLo6\n", "q8wDQdROsc8=\n"), e, null, false);
        }
    }
}
