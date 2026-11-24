package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.ISAdQualityInitError;
import com.ironsource.adqualitysdk.sdk.ISAdQualityInitListener;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᐹ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0616 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f2149;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ String f2150;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ String f2151;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0929 f2152;

    public C0616(C0418 c0418, C0929 c0929, String str, String str2) {
        this.f2149 = c0418;
        this.f2152 = c0929;
        this.f2151 = str;
        this.f2150 = str2;
    }

    /* JADX WARN: Code duplicated, block: B:34:0x0190  */
    /* JADX WARN: Code duplicated, block: B:36:0x01a6  */
    /* JADX WARN: Code duplicated, block: B:37:0x01aa A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:38:0x01ac  */
    /* JADX WARN: Code duplicated, block: B:40:0x01b2  */
    /* JADX WARN: Code duplicated, block: B:41:0x01b6  */
    /* JADX WARN: Code duplicated, block: B:43:0x01bf  */
    /* JADX WARN: Code duplicated, block: B:44:0x01c3  */
    /* JADX WARN: Code duplicated, block: B:46:0x01d5  */
    /* JADX WARN: Code duplicated, block: B:49:0x01e6  */
    /* JADX WARN: Code duplicated, block: B:60:0x01f0 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:62:0x01e0 A[SYNTHETIC] */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() throws JSONException {
        JSONObject jSONObject;
        C0531 c0531;
        String str;
        C0648 c0648;
        RunnableC0395 runnableC0395;
        JSONObject jSONObjectM8520 = C0418.m8520(this.f2149, this.f2152);
        jSONObjectM8520.put(StringFog.decrypt("uFw=\n", "3SQitlA34fQ=\n"), true);
        C0418.m8517(this.f2149).put(this.f2152.f3284.f2309, jSONObjectM8520);
        String strM8499 = this.f2152.f3281.m8499();
        C0331 c0331 = this.f2149.f1526;
        if (StringFog.decrypt("AESapfnE+0w=\n", "RA3J5LuIvgg=\n").equals(strM8499)) {
            AbstractC0323.m8477(StringFog.decrypt("aMLHei6DKCVZ4Mh6Koc5OA==\n", "K62pFEvgXEo=\n"), this.f2152.f3284.f2308 + StringFog.decrypt("mYIeJughhdnWk1Eh9WSCxMqAEyTjIA==\n", "ueFxSIZE5q0=\n"));
            if (c0331 != null) {
                AbstractC1766n.m8384(new C0376(c0331, this.f2151, EnumC0398.f1489));
            }
        } else if (this.f2149.m8534(this.f2151)) {
            AbstractC0323.m8477(StringFog.decrypt("iZX2dKmVRi64t/l0rZFXMw==\n", "yvqYGsz2MkE=\n"), this.f2152.f3284.f2308 + StringFog.decrypt("BzubJMlgJ9VIKtQ9xnZkxU4rlSjLYCCBQSqbJ4dxLMQHK5E40WA2\n", "J1j0SqcFRKE=\n"));
            if (c0331 != null) {
                AbstractC1766n.m8384(new C0376(c0331, this.f2151, EnumC0398.f1489));
            }
            jSONObjectM8520.put(StringFog.decrypt("tS49\n", "0U1OwNjYNyM=\n"), true);
        } else {
            this.f2149.getClass();
            C0896 c0896 = (C0896) AbstractC0895.m8747();
            synchronized (c0896) {
                jSONObject = c0896.f2592;
            }
            if (jSONObject.optBoolean(c0896.f3192)) {
                C0418 c0418 = this.f2149;
                C0929 c0929 = this.f2152;
                String str2 = this.f2151;
                c0418.getClass();
                c0531 = new C0531(c0418, c0929, str2);
                if (this.f2152.m8804()) {
                    AbstractC1766n.m8388(c0531);
                } else if (c0331 != null) {
                    str = this.f2151;
                    c0648 = c0331.f1209;
                    if (c0648 == null) {
                        AbstractC1766n.m8388(c0531);
                    } else {
                        runnableC0395 = new RunnableC0395(c0531);
                        if (c0648.f2257) {
                            AbstractC1766n.m8388(c0531);
                        } else {
                            c0648.f2258.add(new C0649(str, runnableC0395, System.currentTimeMillis()));
                            if (c0648.f2256) {
                                for (C0649 c0649 : new ArrayList(c0648.f2258)) {
                                    if (!c0649.f2260) {
                                        c0649.f2260 = true;
                                        C0331 c0332 = c0648.f2259;
                                        String str3 = c0649.f2263;
                                        EnumC0405 enumC0405 = EnumC0405.f1501;
                                        c0332.getClass();
                                        AbstractC1766n.m8384(new C0394(c0332, str3, enumC0405));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                C0418 c0419 = this.f2149;
                C0929 c09210 = this.f2152;
                c0419.getClass();
                if (C0418.f1520.equals(strM8499) || (!TextUtils.isEmpty(strM8499) && AbstractC0607.m8591(strM8499, c09210.f3284.f2306) >= 0 && AbstractC0607.m8591(strM8499, c09210.f3284.f2305) <= 0)) {
                    C0418 c04110 = this.f2149;
                    C0929 c09211 = this.f2152;
                    String str4 = this.f2151;
                    c04110.getClass();
                    c0531 = new C0531(c04110, c09211, str4);
                    if (this.f2152.m8804()) {
                        AbstractC1766n.m8388(c0531);
                    } else if (c0331 != null) {
                        str = this.f2151;
                        c0648 = c0331.f1209;
                        if (c0648 == null) {
                            AbstractC1766n.m8388(c0531);
                        } else {
                            runnableC0395 = new RunnableC0395(c0531);
                            if (c0648.f2257) {
                                AbstractC1766n.m8388(c0531);
                            } else {
                                c0648.f2258.add(new C0649(str, runnableC0395, System.currentTimeMillis()));
                                if (c0648.f2256) {
                                    while (r1.hasNext()) {
                                        if (!c0649.f2260) {
                                            c0649.f2260 = true;
                                            C0331 c0333 = c0648.f2259;
                                            String str5 = c0649.f2263;
                                            EnumC0405 enumC0406 = EnumC0405.f1501;
                                            c0333.getClass();
                                            AbstractC1766n.m8384(new C0394(c0333, str5, enumC0406));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    jSONObjectM8520.put(StringFog.decrypt("TroY\n", "Pcxr7aq6/XQ=\n"), false);
                    if (c0331 != null) {
                        AbstractC1766n.m8384(new C0394(c0331, this.f2151, EnumC0405.f1506));
                    }
                    String strDecrypt = StringFog.decrypt("39/18+AYNRju/frz5BwkBQ==\n", "nLCbnYV7QXc=\n");
                    StringBuilder sb = new StringBuilder();
                    sb.append(this.f2150);
                    AbstractC1104.m8888(strDecrypt, AbstractC0970.m8850("f3ZvJT7Vum4memglI8++PjBtaGA0mqw3f2t0YHDZoSAxen9xP8g=\n", "Xx8cBVC6zk4=\n", AbstractC0502.m8559("KElrxRVhdQF7c0DgFQ==\n", "CBovjjUXEHM=\n", sb, strM8499)), null, true, true, false);
                    if (this.f2152.m8804()) {
                        ISAdQualityInitListener iSAdQualityInitListenerM8528 = this.f2149.m8528();
                        ISAdQualityInitError iSAdQualityInitError = ISAdQualityInitError.AD_NETWORK_VERSION_NOT_SUPPORTED_YET;
                        StringBuilder sb2 = new StringBuilder();
                        sb2.append(this.f2152.f3284.f2308);
                        sb2.append(StringFog.decrypt("4dARjLW8hxSy6jqptQ==\n", "wYNVx5XK4mY=\n"));
                        sb2.append(this.f2152.f3281.m8499());
                        ((C0345) iSAdQualityInitListenerM8528).adQualitySdkInitFailed(iSAdQualityInitError, AbstractC0970.m8850("woRt+Z2qyGKbiGr5gLDMMo2faryX5d47wpl2vNOm0yyMiH2tnLc=\n", "4u0e2fPFvEI=\n", sb2));
                    }
                }
            }
        }
        jSONObjectM8520.remove(StringFog.decrypt("9yw=\n", "klTeimUywtA=\n"));
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8569(Throwable th) {
        C0331 c0331 = this.f2149.f1526;
        if (c0331 != null) {
            AbstractC1766n.m8384(new C0394(c0331, this.f2151, EnumC0405.f1502));
        }
        AbstractC1104.m8888(StringFog.decrypt("nfzeiICyEqWs3tGIhLYDuA==\n", "3pOw5uXRZso=\n"), StringFog.decrypt("xnl7IgBnJjzqf2AsHi41O+1sKS4dKSE34H9mP1I=\n", "gwsJTXJHT1I=\n") + this.f2151, th, true, true, true);
    }
}
