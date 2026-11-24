package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.ISAdQualityInitError;
import com.ironsource.adqualitysdk.sdk.ISAdQualityInitListener;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ก, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0543 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0537 f1968;

    public C0543(C0537 c0537) {
        this.f1968 = c0537;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0331 c0331;
        boolean zMo8441;
        if (C0418.m8519(this.f1968.f1860).containsKey(this.f1968.f1867.f3284.f2309) || (c0331 = this.f1968.f1860.f1526) == null) {
            return;
        }
        AbstractC1766n.m8384(new C0394(c0331, this.f1968.f1867.f3284.f2309, EnumC0405.f1507));
        C0537 c0537 = this.f1968;
        JSONObject jSONObjectM8520 = C0418.m8520(c0537.f1860, c0537.f1867);
        try {
            jSONObjectM8520.put(StringFog.decrypt("aPBB\n", "CYYyuRMTA5k=\n"), false);
        } catch (JSONException unused) {
        }
        C0418.m8517(this.f1968.f1860).put(this.f1968.f1867.f3284.f2309, jSONObjectM8520);
        C0396 c0396M8494 = c0331.m8494(this.f1968.f1867.f3284.f2309);
        String strM8509 = c0396M8494 != null ? c0396M8494.m8509(c0396M8494.f1477) : null;
        C0418.m8519(this.f1968.f1860).put(this.f1968.f1867.f3284.f2309, strM8509);
        C0929 c0929 = this.f1968.f1867;
        synchronized (c0929) {
            zMo8441 = c0929.f3281.mo8441();
        }
        if (zMo8441) {
            ISAdQualityInitListener iSAdQualityInitListenerM8528 = this.f1968.f1860.m8528();
            ISAdQualityInitError iSAdQualityInitError = ISAdQualityInitError.AD_NETWORK_SDK_REQUIRES_NEWER_AD_QUALITY_SDK;
            StringBuilder sb = new StringBuilder();
            sb.append(this.f1968.f1867.f3284.f2308);
            sb.append(StringFog.decrypt("5MfAwAx4gaO33cvFDA==\n", "xLSkqywO5NE=\n"));
            sb.append(this.f1968.f1867.f3281.m8499());
            sb.append(StringFog.decrypt("pcm3I+nRGxH2m4E989UFFaXItjm8zgwG9tK9PLw=\n", "hbvSUpy4aXQ=\n"));
            sb.append(this.f1968.f1867.m8805());
            ((C0345) iSAdQualityInitListenerM8528).adQualitySdkInitFailed(iSAdQualityInitError, AbstractC0970.m8850("pDigIIEXsw72\n", "hFfSAO9yxGs=\n", sb));
        }
        AbstractC1104.m8888(StringFog.decrypt("SYCjwtu49JB4oqzC37zljQ==\n", "Cu/NrL7bgP8=\n"), strM8509, null, true, true, false);
    }
}
