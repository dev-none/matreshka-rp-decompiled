package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.text.TextUtils;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ἵ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0896 extends AbstractC0895 {

    /* JADX INFO: renamed from: ᕄ, reason: contains not printable characters */
    public static final String f3158;

    /* JADX INFO: renamed from: ᖭ, reason: contains not printable characters */
    public C1745d0 f3163;

    /* JADX INFO: renamed from: ᖸ, reason: contains not printable characters */
    public volatile long f3164;

    /* JADX INFO: renamed from: ᖺ, reason: contains not printable characters */
    public boolean f3165;

    /* JADX INFO: renamed from: ᗀ, reason: contains not printable characters */
    public ArrayList f3166;

    /* JADX INFO: renamed from: ᘥ, reason: contains not printable characters */
    public C1738b f3167;

    /* JADX INFO: renamed from: ᵆ, reason: contains not printable characters */
    public boolean f3168;

    /* JADX INFO: renamed from: Ḟ, reason: contains not printable characters */
    public int f3169;

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public boolean f3170;

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public C0485 f3171;

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public ArrayList f3172;

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public ArrayList f3173;

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public C0484 f3174;

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public C1128 f3175;

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public C0406 f3176;

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public C0742 f3177;

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public Z0 f3178;

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public Handler f3179;

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public C0865 f3180;

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public C0783 f3181;

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public final String f3182;

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public final String f3183;

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public final int f3184;

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public final int f3185;

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public final int f3186;

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public final int f3187;

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public final String f3188;

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public final String f3189;

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public final String f3190;

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public final String f3191;

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public final String f3192;

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public final String f3193;

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public final String f3194;

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public final String f3195;

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public final String f3196;

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public final String f3197;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public final String f3198;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public final String f3199;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public final String f3200;

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public final String f3201;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final String f3202;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final String f3203;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final String f3204;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final String f3205;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final String f3206;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final String f3207 = StringFog.decrypt("PY/E\n", "WOGysiAe9yA=\n");

    /* JADX INFO: renamed from: ᖫ, reason: contains not printable characters */
    public static final String f3162 = StringFog.decrypt("/chbG1WgsCXBy18T\n", "r602dCHF80o=\n");

    /* JADX INFO: renamed from: ᖩ, reason: contains not printable characters */
    public static final String f3161 = StringFog.decrypt("LSqyV/VpqGc8KL5R9g==\n", "X0ndOZMAz0k=\n");

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f3160 = StringFog.decrypt("yxJ8BtQcFn3UTnYTnxoVMM0FcArFGxRx0QZ0Ag==\n", "v2AdZbF+dx4=\n");

    /* JADX INFO: renamed from: ᕆ, reason: contains not printable characters */
    public static final String f3159 = StringFog.decrypt("lJDRhjbE4ViCnMyOLoj4WYSQ0I0=\n", "5/++61qlzCs=\n");

    static {
        StringFog.decrypt("UyLs\n", "IEaAjXth4nM=\n");
        f3158 = StringFog.decrypt("iR/uRCNZk8zLHOFQeXuY04sV41diSqLNgRH0RllRmtiWBOFOfQ==\n", "5XCAIw04970=\n");
    }

    public C0896() {
        StringFog.decrypt("H2/6\n", "egKejpJb4Ag=\n");
        this.f3206 = StringFog.decrypt("TQIEIQ==\n", "LmVoVW7CfA4=\n");
        this.f3205 = StringFog.decrypt("jM1F6Q==\n", "774pnZUwQs4=\n");
        this.f3204 = StringFog.decrypt("Ip/Gsg==\n", "TPajwoL6OvA=\n");
        this.f3203 = StringFog.decrypt("kyoFUw==\n", "8l5xMQEhC2c=\n");
        this.f3202 = StringFog.decrypt("4tDzrw==\n", "gaOfyzZkGEI=\n");
        this.f3201 = StringFog.decrypt("r2UD\n", "3AlncKJpBu0=\n");
        this.f3200 = StringFog.decrypt("Qm7Nvg==\n", "Jweu2AZjSys=\n");
        this.f3199 = StringFog.decrypt("mqf1\n", "88SRg4L3Tmg=\n");
        this.f3198 = StringFog.decrypt("eTf/IQ==\n", "DVyRQtkHOoo=\n");
        this.f3197 = StringFog.decrypt("SkZ1hw==\n", "OCEN5EPt+oY=\n");
        this.f3196 = StringFog.decrypt("X0hsQQ==\n", "PDoAJXU+r44=\n");
        this.f3195 = StringFog.decrypt("pubGzH0=\n", "0YCyuBFlW3I=\n");
        this.f3194 = StringFog.decrypt("o2uDgQ==\n", "0Ary8pDGEMo=\n");
        this.f3193 = StringFog.decrypt("nQQzFQ==\n", "72dSZn/NAFI=\n");
        this.f3192 = StringFog.decrypt("pG1p\n", "xxoKOBopPgk=\n");
        this.f3191 = StringFog.decrypt("DJPS\n", "eeCmEm5xd/8=\n");
        this.f3190 = StringFog.decrypt("I58j+Q==\n", "TutHjR+Bn98=\n");
        this.f3189 = StringFog.decrypt("BocH\n", "a+50P4vmlqY=\n");
        this.f3188 = StringFog.decrypt("mEP54w==\n", "6yCKitzoT5s=\n");
        TimeUnit timeUnit = TimeUnit.HOURS;
        timeUnit.toMillis(24L);
        TimeUnit timeUnit2 = TimeUnit.SECONDS;
        this.f3187 = (int) timeUnit2.toMillis(5L);
        this.f3186 = (int) timeUnit.toMillis(12L);
        this.f3185 = (int) timeUnit2.toMillis(3L);
        this.f3184 = (int) timeUnit2.toMillis(10L);
        this.f3183 = StringFog.decrypt("R7sH\n", "ItVkwq6AuDk=\n");
        this.f3182 = StringFog.decrypt("IgI1\n", "FSwFv3uOEoM=\n");
        this.f3169 = 0;
        this.f3166 = null;
        this.f3165 = false;
        this.f3164 = 0L;
    }

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public final synchronized void m8770() {
        this.f3170 = false;
    }

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public final synchronized void m8771() {
        Handler handler = this.f3179;
        if (handler != null) {
            handler.post(new C0975(this));
        }
    }

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public final boolean m8772() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optBoolean(this.f3183, false);
    }

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public final synchronized C0865 m8773() {
        return this.f3180;
    }

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public final int m8774() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optInt(StringFog.decrypt("NU5PQQ==\n", "WC0jMxKJYcA=\n"), 3);
    }

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public final void m8775() {
        if (mo8755()) {
            C0526 c0526 = C0526.f1839;
            c0526.getClass();
            try {
                if (c0526.f1842 != null) {
                    return;
                }
                synchronized (c0526) {
                    if (c0526.f1842 != null) {
                        return;
                    }
                    C1787y c1787y = C0657.f2283.f2286;
                    C0547 c0547M8431 = c1787y == null ? null : c1787y.m8431();
                    if (c0547M8431 != null) {
                        c0526.f1842 = c0547M8431;
                    }
                }
            } catch (Exception e) {
                String str = C0526.f1840;
                AbstractC0323.m8479(str, str, StringFog.decrypt("xN3is49K+a70k/elm13jqeDW+KLIXvGz4dby\n", "jbOW1ug4kNo=\n"), e, null, false);
            }
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: 丫 */
    public final boolean mo8748() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optBoolean(this.f3202);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: 乁 */
    public final synchronized void mo8749() {
        this.f3179.removeCallbacksAndMessages(null);
        this.f3179 = null;
        AbstractC1766n.m8384(new C1037(this));
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: 爫 */
    public final boolean mo8750() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optBoolean(this.f3194);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﬤ */
    public final boolean mo8751() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optBoolean(this.f3193);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: טּ */
    public final boolean mo8752() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optBoolean(StringFog.decrypt("Br34CQ==\n", "dNubaGbkrTo=\n"), true);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: סּ */
    public final boolean mo8753() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        if (jSONObject == null) {
            return true;
        }
        return jSONObject.optBoolean(StringFog.decrypt("GVPp\n", "cSeGWwTjANs=\n"), true);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ףּ */
    public final boolean mo8754() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optBoolean(StringFog.decrypt("hnP6\n", "9BefEAe3nPM=\n"), true);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﭖ */
    public final boolean mo8755() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optBoolean(this.f3189, false);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﭴ */
    public final boolean mo8756() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject != null && jSONObject.optBoolean(this.f3198, false);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﭸ */
    public final boolean mo8757() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject != null && jSONObject.optBoolean(this.f3197, false);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﮉ */
    public final boolean mo8758() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        if (jSONObject == null) {
            return false;
        }
        return jSONObject.optBoolean(this.f3200, false);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﮌ */
    public final boolean mo8759() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optBoolean(StringFog.decrypt("LUnE\n", "SC+3e1fhCMc=\n"), false);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﮐ */
    public final synchronized boolean mo8760() {
        return this.f3170;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﱟ */
    public final String mo8761() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        if (jSONObject == null) {
            return null;
        }
        String strOptString = m8687().optString(StringFog.decrypt("DlhlNA==\n", "aiwBQM6yrt0=\n"));
        return TextUtils.isEmpty(strOptString) ? this.f2591.f3319.optString(C0941.f3317, C0941.f3315) : strOptString;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﺙ */
    public final int mo8762() {
        synchronized (this) {
            JSONObject jSONObjectM8687 = m8687();
            if (jSONObjectM8687 == null) {
                return AccessibilityNodeInfoCompat.EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_MAX_LENGTH;
            }
            return jSONObjectM8687.optInt(this.f3199, AccessibilityNodeInfoCompat.EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_MAX_LENGTH);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﻏ */
    public final HashMap mo8763() {
        JSONObject jSONObject;
        HashMap map = new HashMap();
        try {
            synchronized (this) {
                jSONObject = this.f2592;
            }
            String strOptString = jSONObject.optString(StringFog.decrypt("QPrj\n", "JJmQG36ZdZ0=\n"));
            if (!TextUtils.isEmpty(strOptString)) {
                JSONObject jSONObject2 = new JSONObject(strOptString);
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                Iterator<String> itKeys = jSONObject2.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    linkedHashMap.put(next, new C0653(jSONObject2.optJSONObject(next)));
                }
                return linkedHashMap;
            }
        } catch (JSONException e) {
            AbstractC1104.m8887(f3162, StringFog.decrypt("RzvSXiHLww4iLsVFEITEDmcq1F4hmP4PRiDTUDGHzw==\n", "AkmgMVPrqmA=\n"), (Throwable) e, false);
        }
        return map;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﻐ */
    public final int mo8764() {
        int iOptInt;
        synchronized (this) {
            iOptInt = m8687().optInt(this.f3201, 100);
        }
        return iOptInt;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﻛ */
    public final int mo8765() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optInt(this.f3205, this.f3184);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ｋ */
    public final int mo8766() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        if (jSONObject == null) {
            return 2000;
        }
        return Math.max(0, jSONObject.optInt(this.f3196, 2000));
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﾇ */
    public final String mo8767() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optString(StringFog.decrypt("oy3t\n", "wEqbsrAw0ns=\n"), this.f3182);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8769(Context context, C0865 c0865, C1738b c1738b, C0485 c0485, boolean z) {
        JSONObject jSONObject;
        this.f3181 = new C0783(context, f3160, f3159);
        this.f3180 = c0865;
        this.f3170 = false;
        this.f3168 = z;
        this.f3167 = c1738b;
        this.f3179 = new Handler(Looper.getMainLooper());
        C0941 c0941 = new C0941();
        this.f3178 = new Z0(c0941);
        this.f3177 = new C0742(c0941);
        this.f3176 = new C0406(c0941);
        this.f3175 = new C1128();
        String strM8723 = this.f3181.m8723(f3161);
        if (strM8723 != null) {
            try {
                jSONObject = new JSONObject(strM8723);
            } catch (JSONException unused) {
                jSONObject = new JSONObject();
            }
        } else {
            jSONObject = new JSONObject();
        }
        mo8688(jSONObject);
        this.f2591 = c0941;
        this.f3171 = c0485;
        this.f3173 = new ArrayList();
        this.f3172 = new ArrayList();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0895
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8768(Context context, C1745d0 c1745d0, boolean z) {
        JSONObject jSONObject;
        String str = AbstractC0202.f862;
        this.f3164 = SystemClock.elapsedRealtime();
        this.f3163 = c1745d0;
        if (z) {
            C1034 c1034 = new C1034(this);
            C0896 c0896 = (C0896) AbstractC0895.m8747();
            synchronized (c0896) {
                jSONObject = c0896.f2592;
            }
            AbstractC1766n.m8387(c1034, jSONObject.optInt(c0896.f3206, c0896.f3185));
        }
        m8770();
        JSONObject jSONObject2 = new JSONObject();
        try {
            String strM8723 = this.f3181.m8723(f3158);
            jSONObject2 = new C0322(context, c1745d0, !TextUtils.isEmpty(strM8723) ? Long.parseLong(strM8723) : 0L).m8469(m8773().f3088.m8735());
        } catch (JSONException e) {
            String str2 = f3162;
            AbstractC0323.m8479(str2, str2, StringFog.decrypt("7fI3IL5BW4DN4TEmogYYm8bpMW++BEmHzfMx\n", "qIBFT8xhOPI=\n"), e, null, false);
        }
        JSONObject jSONObject3 = jSONObject2;
        C0865 c0865M8773 = m8773();
        C1738b c1738b = this.f3167;
        String strDecrypt = StringFog.decrypt("GzrF+g==\n", "clSsjrw1IXY=\n");
        String str3 = c1738b.f352;
        StringBuilder sb = new StringBuilder();
        if (str3 == null) {
            str3 = "";
        }
        sb.append(str3);
        sb.append(StringFog.decrypt("/A==\n", "0+e3kZUAXUw=\n"));
        if (strDecrypt == null) {
            strDecrypt = "";
        }
        sb.append(strDecrypt);
        String string = sb.toString();
        boolean z2 = true;
        if (!m8772() || this.f3169 == m8774()) {
            z2 = false;
        }
        C0993 c0993 = new C0993(this, context, c1745d0);
        c0865M8773.getClass();
        if (!TextUtils.isEmpty(string)) {
            C0908 c0908 = new C0908(jSONObject3, string, c1745d0, context, z2);
            if (c0865M8773.f3087) {
                AbstractC0323.m8470(C0865.f3086, StringFog.decrypt("yBPd6N4ILDPvDtno1UY9fLsV3vveDSxB/g3F6MISaWTzGd6t/wM9ZPQO28DQCCh0/g6Q+tAVaWDz\nCcTp3hEn\n", "m3ywjbFmSRM=\n"));
                return;
            }
            C0866 c0866 = new C0866(c0865M8773, c0993, c0908);
            String str4 = AbstractC0202.f862;
            try {
                Executors.newSingleThreadExecutor().execute(c0866);
                return;
            } catch (Throwable th) {
                AbstractC1104.m8887(AbstractC0202.f862, StringFog.decrypt("33dALPYTxOj/Zkc37V3GsPt2Sy3nE9Xx6W4=\n", "mgUyQ4QzoZA=\n"), th, false);
                return;
            }
        }
        String str5 = C0865.f3086;
        AbstractC0323.m8473(str5, str5, StringFog.decrypt("4nnDpvRnOEvYN9Kr63Y4XMJk1qv1ImpaxmLHt+wifVbDf8e2uFdKc5d40OTqZ2tP2HnRodBjdlvb\nctDk72dqWpd5zbC4cmpQwX7Gofw=\n", "txeixJgCGD8=\n"), true);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0759
    /* JADX INFO: renamed from: ﾒ */
    public final synchronized void mo8688(JSONObject jSONObject) {
        if (jSONObject.has(StringFog.decrypt("leaShec8\n", "4ZTz7JNPDrg=\n"))) {
            AbstractC0939.m8817(jSONObject, jSONObject.optJSONObject(StringFog.decrypt("Z2k+22NC\n", "Extfshcx2/c=\n")), false);
        }
        super.mo8688(jSONObject);
        this.f3178.mo8688(jSONObject);
        this.f3177.mo8688(jSONObject);
        this.f3176.mo8688(jSONObject);
        this.f3175.mo8688(jSONObject);
    }
}
