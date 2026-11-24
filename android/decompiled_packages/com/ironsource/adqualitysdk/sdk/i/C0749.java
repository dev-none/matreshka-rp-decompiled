package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.concurrent.Executors;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᖿ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0749 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0748 f2570;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f2571;

    public C0749(C0748 c0748, JSONObject jSONObject) {
        this.f2570 = c0748;
        this.f2571 = jSONObject;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        String strM8676;
        JSONObject jSONObject;
        C0905 c0905 = this.f2570.f2567;
        JSONObject jSONObject2 = this.f2571;
        c0905.f3215.f2605.m8411(jSONObject2);
        C0763 c0763 = c0905.f3215;
        C0865 c0865 = c0763.f2615;
        C1738b c1738b = c0763.f2617;
        if (((C0896) AbstractC0895.m8747()).f3168) {
            strM8676 = c0763.m8707().m8676();
        } else {
            C0742 c0742M8707 = c0763.m8707();
            synchronized (c0742M8707) {
                jSONObject = c0742M8707.f2592;
            }
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(StringFog.decrypt("VPE4\n", "IYNU7+YQOGQ=\n"));
            strM8676 = jSONObjectOptJSONObject != null ? jSONObjectOptJSONObject.optString(StringFog.decrypt("dw==\n", "B+GU7PFvXS8=\n"), c0742M8707.f2554) : c0742M8707.f2554;
        }
        String str = c1738b.f351;
        StringBuilder sb = new StringBuilder();
        if (str == null) {
            str = "";
        }
        sb.append(str);
        sb.append(StringFog.decrypt("/A==\n", "0+e3kZUAXUw=\n"));
        if (strM8676 == null) {
            strM8676 = "";
        }
        sb.append(strM8676);
        String string = sb.toString();
        C0763 c0764 = c0905.f3215;
        C1745d0 c1745d0 = c0764.f2613.f1188;
        Context context = c0764.f2607;
        C0896 c0896 = (C0896) AbstractC0895.m8747();
        boolean z = c0896.m8772() && c0896.f3169 != c0896.m8774();
        C0906 c0906 = new C0906(c0905);
        c0865.getClass();
        if (TextUtils.isEmpty(string)) {
            String str2 = C0865.f3086;
            AbstractC0323.m8473(str2, str2, StringFog.decrypt("4nnDpvRnOEvYN9Kr63Y4XMJk1qv1ImpaxmLHt+wifVbDf8e2uFdKc5d40OTqZ2tP2HnRodBjdlvb\nctDk72dqWpd5zbC4cmpQwX7Gofw=\n", "txeixJgCGD8=\n"), true);
            return;
        }
        C0908 c0908 = new C0908(jSONObject2, string, c1745d0, context, z);
        if (c0865.f3087) {
            AbstractC0323.m8470(C0865.f3086, StringFog.decrypt("yBPd6N4ILDPvDtno1UY9fLsV3vveDSxB/g3F6MISaWTzGd6t/wM9ZPQO28DQCCh0/g6Q+tAVaWDz\nCcTp3hEn\n", "m3ywjbFmSRM=\n"));
            return;
        }
        C0866 c0866 = new C0866(c0865, c0906, c0908);
        String str3 = AbstractC0202.f862;
        try {
            Executors.newSingleThreadExecutor().execute(c0866);
        } catch (Throwable th) {
            AbstractC1104.m8887(AbstractC0202.f862, StringFog.decrypt("33dALPYTxOj/Zkc37V3GsPt2Sy3nE9Xx6W4=\n", "mgUyQ4QzoZA=\n"), th, false);
        }
    }
}
