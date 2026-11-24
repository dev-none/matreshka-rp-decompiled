package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.ISAdQualitySegment;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﾌ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1161 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1142 f4065;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ ISAdQualitySegment f4066;

    public C1161(C1142 c1142, ISAdQualitySegment iSAdQualitySegment) {
        this.f4065 = c1142;
        this.f4066 = iSAdQualitySegment;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        boolean z;
        C1142 c1142 = this.f4065;
        synchronized (c1142) {
            z = c1142.f4013;
        }
        if (!z) {
            AbstractC0323.m8472(StringFog.decrypt("okchK95MZlmacDQV\n", "4yNwXr8gDy0=\n"), StringFog.decrypt("iPnTN8K+LhK/uM510fM4Gb+4kDD/zRwTmu3cfN/qJFeY3PYw3+19GaTsnXnY9ykeqvTUatP6cw==\n", "y5i9ELaeXXc=\n"));
            return;
        }
        C0601 c0601 = this.f4065.f3997;
        if (c0601 != null) {
            ISAdQualitySegment iSAdQualitySegment = this.f4066;
            C0763 c0763 = c0601.f2122;
            String strDecrypt = StringFog.decrypt("TtdVKFs3YlxY3FU=\n", "PbIhdyhSBTE=\n");
            JSONObject jSONObject = new JSONObject(iSAdQualitySegment.getCustomData());
            try {
                if (!TextUtils.isEmpty(iSAdQualitySegment.getName())) {
                    jSONObject.put(StringFog.decrypt("wkSlwA==\n", "sSPLrVhk320=\n"), iSAdQualitySegment.getName());
                }
                if (iSAdQualitySegment.getAge() != -1) {
                    jSONObject.put(StringFog.decrypt("bBsz1A==\n", "H3pUsZcAt38=\n"), iSAdQualitySegment.getAge());
                }
                if (!TextUtils.isEmpty(iSAdQualitySegment.getGender())) {
                    jSONObject.put(StringFog.decrypt("AO6scA==\n", "c4nJHopfp1U=\n"), iSAdQualitySegment.getGender());
                }
                if (iSAdQualitySegment.getLevel() != -1) {
                    jSONObject.put(StringFog.decrypt("7xsTSw==\n", "nHdlJ9hPFhY=\n"), iSAdQualitySegment.getLevel());
                }
                if (iSAdQualitySegment.getIsPaying() != null) {
                    jSONObject.put(StringFog.decrypt("OFRLbA==\n", "SyQqFVj2QOw=\n"), iSAdQualitySegment.getIsPaying().get());
                }
                if (iSAdQualitySegment.getInAppPurchasesTotal() != -1.0d) {
                    jSONObject.put(StringFog.decrypt("MbNXiLY=\n", "Qto2+MLTe3Q=\n"), iSAdQualitySegment.getInAppPurchasesTotal());
                }
                if (iSAdQualitySegment.getUserCreationDate() != 0) {
                    jSONObject.put(StringFog.decrypt("1gduEg==\n", "pXINdrPuzTw=\n"), iSAdQualitySegment.getUserCreationDate());
                }
            } catch (JSONException unused) {
            }
            c0763.m8710(strDecrypt, jSONObject);
        }
    }
}
