package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.IronSourceAdQuality;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Calendar;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Κ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public class C0322 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f1186 = StringFog.decrypt("BEXGpb93AL88c/Khq34avwJE+bWseh2kNw==\n", "RSGX0N4bacs=\n");

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final long f1187;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C1745d0 f1188;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Context f1189;

    public C0322(Context context, C1745d0 c1745d0, long j) {
        this.f1189 = context;
        this.f1188 = c1745d0;
        this.f1187 = j;
        new C1014(context);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final JSONObject m8469(boolean z) {
        JSONObject jSONObjectMo8468 = mo8468(new JSONObject(), z, true, false);
        try {
            String string = this.f1189.getSharedPreferences(AbstractC1739b0.f354, 0).getString(AbstractC1739b0.f353, null);
            if (!TextUtils.isEmpty(string)) {
                jSONObjectMo8468.put(StringFog.decrypt("MCQbIA==\n", "WUB9SSGoK5Y=\n"), string);
            }
            return jSONObjectMo8468;
        } catch (Throwable th) {
            String str = AbstractC1739b0.f355;
            AbstractC0323.m8479(str, str, StringFog.decrypt("++K87SOKwi+Y7K3lZ7GLMsz06cAjl8Uy3OugoTOLxTHL4qc=\n", "uI3JgUfk5Vs=\n"), th, null, false);
            return jSONObjectMo8468;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public JSONObject mo8468(JSONObject jSONObject, boolean z, boolean z2, boolean z3) throws JSONException {
        String str;
        String str2;
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        JSONObject jSONObjectM8815 = AbstractC0939.m8815(jSONObject, false);
        if (!TextUtils.isEmpty(this.f1188.f367)) {
            jSONObjectM8815.put(StringFog.decrypt("gNB58lTq\n", "4aAJuTGTc6w=\n"), this.f1188.f367);
        } else if (!TextUtils.isEmpty(this.f1188.f366)) {
            jSONObjectM8815.put(StringFog.decrypt("9/9E\n", "kLYgSiHLsuQ=\n"), this.f1188.f366);
        }
        String str3 = this.f1188.f363;
        if (!TextUtils.isEmpty(str3)) {
            jSONObjectM8815.put(StringFog.decrypt("kvB3rw==\n", "+4MFzC8/33Y=\n"), str3);
        }
        if (z2) {
            if (this.f1187 > 0) {
                jSONObjectM8815.put(StringFog.decrypt("xZaAfg==\n", "qfX0DRMisss=\n"), this.f1187);
            }
            jSONObjectM8815.put(StringFog.decrypt("e7BJk20=\n", "GN854wyB82M=\n"), this.f1188.f362);
            jSONObjectM8815.put(StringFog.decrypt("e4vp\n", "H+Kdr2Auo4k=\n"), this.f1188.f361);
            String strDecrypt = StringFog.decrypt("bNRM\n", "Gb0oRpAO+WA=\n");
            C1745d0 c1745d0 = this.f1188;
            synchronized (c1745d0) {
                str = c1745d0.f365;
            }
            jSONObjectM8815.put(strDecrypt, str);
            jSONObjectM8815.put(StringFog.decrypt("GH4=\n", "bR0y5gS40Vw=\n"), this.f1188.f364);
            jSONObjectM8815.put(StringFog.decrypt("W5g=\n", "L+JrXAbS0Fw=\n"), ((double) Calendar.getInstance().getTimeZone().getRawOffset()) / 3600000.0d);
            jSONObjectM8815.put(StringFog.decrypt("jdVr3Hc=\n", "+aU9uQWwT2o=\n"), IronSourceAdQuality.getSDKVersion());
            String strDecrypt2 = StringFog.decrypt("tA==\n", "wHjTFALTMcE=\n");
            String str4 = AbstractC0533.f1857;
            try {
                try {
                    Class.forName(StringFog.decrypt("dUSJS3LwXRNvGIBLd/JVHnNZyjBp90AeRkeFHGLs\n", "FivkZQeeNGc=\n"));
                    str2 = AbstractC0533.f1851;
                } catch (ClassNotFoundException unused) {
                    Class.forName(StringFog.decrypt("jRlK/SsaukedGVKhIQ37SIoHUrIuAaFQnRJM/TEMvgePH1X9EQe6RIIXc6EjC7BLjxVMljocsEed\nH0i9\n", "7nYn00Jo1Sk=\n"));
                    str2 = AbstractC0533.f1850;
                }
            } catch (ClassNotFoundException unused2) {
                str2 = AbstractC0533.f1849;
            }
            jSONObjectM8815.put(strDecrypt2, str2);
            jSONObjectM8815.put(StringFog.decrypt("g3XtLco=\n", "7hqJSKZCQkg=\n"), Build.MODEL);
            jSONObjectM8815.put(StringFog.decrypt("JpKBlKXAkJA+gYqT\n", "S/Pv4cOh8+Q=\n"), Build.MANUFACTURER);
            jSONObjectM8815.put(StringFog.decrypt("kt+0ZDAr4rg=\n", "4rPVEFZEkNU=\n"), StringFog.decrypt("sHVsegB7DA==\n", "0RsICG8SaFw=\n"));
            String strDecrypt3 = StringFog.decrypt("IOo0\n", "T5lC09wrzBI=\n");
            String str5 = AbstractC1148.f4049;
            jSONObjectM8815.put(strDecrypt3, Build.VERSION.RELEASE);
            AbstractC0533.m8573(this.f1189, jSONObjectM8815);
            Context context = this.f1189;
            try {
                if (context.checkCallingOrSelfPermission(StringFog.decrypt("htcZylwVOB+X3A/VWg8vWIjXU/lwPxlitOYq8XU1A2Kz+Cn9\n", "57l9uDN8XDE=\n")) == 0) {
                    AbstractC0939.m8817(jSONObjectM8815, AbstractC1148.m8949(context), false);
                }
            } catch (Throwable th) {
                String str6 = AbstractC1148.f4049;
                AbstractC0323.m8479(str6, str6, StringFog.decrypt("Kx2MbrRo4XMKBpBm5j/pcQdPl2+gJ6BjAU+bd6Mm9A==\n", "bm/+AcZIgBc=\n"), th, null, false);
            }
            Context context2 = this.f1189;
            try {
                ConnectivityManager connectivityManager = (ConnectivityManager) context2.getSystemService(StringFog.decrypt("4uhTyx02Gp/37knc\n", "gYc9pXhVbvY=\n"));
                TelephonyManager telephonyManager = (TelephonyManager) context2.getSystemService(StringFog.decrypt("iCfqyMU=\n", "+E+FpqB/Xpg=\n"));
                NetworkInfo networkInfo = connectivityManager.getNetworkInfo(0);
                if (networkInfo != null) {
                    jSONObjectM8815.put(AbstractC1148.f4035, networkInfo.getState());
                    if (networkInfo.getState() == NetworkInfo.State.CONNECTED) {
                        jSONObjectM8815.put(AbstractC1148.f4034, networkInfo.getType());
                        jSONObjectM8815.put(AbstractC1148.f4033, networkInfo.getTypeName());
                        jSONObjectM8815.put(AbstractC1148.f4032, networkInfo.getSubtype());
                        jSONObjectM8815.put(AbstractC1148.f4031, networkInfo.getSubtypeName());
                        jSONObjectM8815.put(AbstractC1148.f4030, telephonyManager.getNetworkOperator());
                        jSONObjectM8815.put(AbstractC1148.f4029, telephonyManager.getNetworkOperatorName());
                        jSONObjectM8815.put(AbstractC1148.f4028, telephonyManager.getNetworkCountryIso());
                        if (z3) {
                            jSONObjectM8815.put(AbstractC1148.f4027, telephonyManager.getSimOperator());
                            jSONObjectM8815.put(AbstractC1148.f4026, telephonyManager.getSimOperatorName());
                        }
                    }
                }
            } catch (Throwable th2) {
                String str7 = AbstractC1148.f4049;
                AbstractC0323.m8479(str7, str7, StringFog.decrypt("6grFi/YXOgfLEdmDpFo0AcYU0sTtWT0MjwzYxOFBPg3b\n", "r3i35IQ3W2M=\n"), th2, null, false);
            }
            AbstractC1148.m8956(jSONObjectM8815);
            AbstractC1148.m8950(jSONObjectM8815);
            jSONObjectM8815.put(StringFog.decrypt("YP0DiA==\n", "Dopi/rBReCc=\n"), z);
            AbstractC1148.m8955(this.f1189, jSONObjectM8815);
            try {
                jSONObjectM8815.put(AbstractC1148.f4040, AbstractC0939.m8815(AbstractC1148.m8952(), false));
            } catch (JSONException unused3) {
            }
            try {
                JSONObject jSONObject2 = new JSONObject(this.f1188.f360);
                jSONObject2.remove(StringFog.decrypt("jCLtzUcLvn+yJPD9TA==\n", "7Uacki5l1ws=\n"));
                jSONObject2.remove(StringFog.decrypt("X1LeKxqQ2BNZWtU2GpfSC09d\n", "KjO6WEXjvWA=\n"));
                if (jSONObject2.length() > 0) {
                    jSONObjectM8815.putOpt(StringFog.decrypt("DT20bw==\n", "YEnQG2iCf+0=\n"), jSONObject2);
                }
            } catch (Exception e) {
                String str8 = f1186;
                AbstractC0323.m8479(str8, str8, StringFog.decrypt("OZgAFzzWvvQYgxwfbpu65B3KFhk6l//6D4UcWDqZ//UKjxwM\n", "fOpyeE7235A=\n"), e, null, false);
            }
        }
        return jSONObjectM8815;
    }
}
