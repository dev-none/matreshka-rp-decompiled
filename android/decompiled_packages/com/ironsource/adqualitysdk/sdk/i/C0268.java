package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.os.SystemClock;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;
import java.util.HashSet;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʌ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0268 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0262 f966;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ boolean f967;

    public C0268(C0262 c0262, boolean z) {
        this.f966 = c0262;
        this.f967 = z;
    }

    /* JADX WARN: Code duplicated, block: B:14:0x0078 A[Catch: JSONException -> 0x00b0, TryCatch #2 {JSONException -> 0x00b0, blocks: (B:11:0x0069, B:12:0x0074, B:14:0x0078, B:15:0x0083, B:17:0x009d), top: B:43:0x0069 }] */
    /* JADX WARN: Code duplicated, block: B:17:0x009d A[Catch: JSONException -> 0x00b0, TRY_LEAVE, TryCatch #2 {JSONException -> 0x00b0, blocks: (B:11:0x0069, B:12:0x0074, B:14:0x0078, B:15:0x0083, B:17:0x009d), top: B:43:0x0069 }] */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        String strDecrypt;
        HashMap map;
        long j;
        C0763 c0763 = this.f966.f952.f949.f756.f748.f4002;
        String strDecrypt2 = StringFog.decrypt("NF2zuu+mew==\n", "QC3s04HPD4g=\n");
        C0179 c0179 = this.f966.f952.f949.f756;
        if (c0179.f751) {
            strDecrypt = c0179.f750;
            if (strDecrypt == null) {
                strDecrypt = StringFog.decrypt("uqwvbQ==\n", "1NlDAajZmro=\n");
            }
        } else {
            strDecrypt = null;
        }
        C0418 c0418 = this.f966.f952.f949.f756.f748.f4005;
        new C1014(this.f966.f952.f949.f756.f748.f4007);
        C1142 c1142 = this.f966.f952.f949.f756.f748;
        Context context = c1142.f4007;
        boolean z = this.f967;
        C1745d0 c1745d0M8929 = C1142.m8929(c1142);
        String str = AbstractC0318.f1179;
        JSONObject jSONObject = new JSONObject();
        if (z) {
            try {
                jSONObject.put(StringFog.decrypt("8/8=\n", "lYzpiU8i1LA=\n"), true);
                if (c1745d0M8929.f359) {
                    jSONObject.put(StringFog.decrypt("7tMD7FY=\n", "j6Z3hTLWRTI=\n"), true);
                }
                jSONObject.put(StringFog.decrypt("oxmxGw==\n", "02zYf3wrrw4=\n"), strDecrypt);
                j = ((C0896) AbstractC0895.m8747()).f3164;
                if (j > 0) {
                    String strDecrypt3 = StringFog.decrypt("FuWJ\n", "f5ft+K2Bb4k=\n");
                    String str2 = AbstractC0202.f862;
                    jSONObject.put(strDecrypt3, SystemClock.elapsedRealtime() - j);
                }
            } catch (JSONException e) {
                String str3 = AbstractC0318.f1179;
                AbstractC0323.m8479(str3, str3, StringFog.decrypt("KgEu5J7bVBwKEijigpwXGgofOfuDiUNOBh01/8yxZCEh\n", "b3Nci+z7N24=\n"), e, null, false);
            }
        } else {
            if (c1745d0M8929.f359) {
                jSONObject.put(StringFog.decrypt("7tMD7FY=\n", "j6Z3hTLWRTI=\n"), true);
            }
            jSONObject.put(StringFog.decrypt("oxmxGw==\n", "02zYf3wrrw4=\n"), strDecrypt);
            j = ((C0896) AbstractC0895.m8747()).f3164;
            if (j > 0) {
                String strDecrypt4 = StringFog.decrypt("FuWJ\n", "f5ft+K2Bb4k=\n");
                String str4 = AbstractC0202.f862;
                jSONObject.put(strDecrypt4, SystemClock.elapsedRealtime() - j);
            }
        }
        AbstractC0939.m8817(jSONObject, c0418.m8526(), false);
        JSONObject jSONObject2 = new JSONObject();
        JSONObject jSONObject3 = new JSONObject();
        try {
            synchronized (c0418) {
                map = c0418.f1530;
            }
            for (String str5 : new HashSet(map.keySet())) {
                jSONObject3.put(str5, (String) c0418.m8527().get(str5));
            }
            jSONObject2.put(StringFog.decrypt("g8QnVA==\n", "5rZVJ3vroG0=\n"), jSONObject3);
        } catch (JSONException e2) {
            String str6 = C0418.f1521;
            AbstractC0323.m8479(str6, str6, StringFog.decrypt("mXPJkGHunMi4aNWYM62SwrJk2It8vN3JrnPUjWA=\n", "3AG7/xPO/aw=\n"), e2, null, false);
        }
        AbstractC0939.m8817(jSONObject, jSONObject2, false);
        c0763.m8710(strDecrypt2, jSONObject);
        C0179 c01710 = this.f966.f952.f949.f756;
        if (c01710.f749) {
            C0763 c0764 = c01710.f748.f4002;
            c0764.getClass();
            AbstractC1766n.m8385(new C0879(c0764));
        }
    }
}
