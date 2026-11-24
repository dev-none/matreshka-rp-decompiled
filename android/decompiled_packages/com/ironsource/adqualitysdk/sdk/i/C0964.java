package com.ironsource.adqualitysdk.sdk.i;

import android.os.SystemClock;
import com.ironsource.adqualitysdk.sdk.ISAdQualityInitError;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.EnumSet;
import java.util.Set;
import java.util.concurrent.CopyOnWriteArraySet;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ノ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0964 {

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final EnumSet f3381 = EnumSet.of(ISAdQualityInitError.CONNECTOR_LOAD_TIMEOUT, ISAdQualityInitError.AD_NETWORK_VERSION_NOT_SUPPORTED_YET, ISAdQualityInitError.AD_NETWORK_SDK_REQUIRES_NEWER_AD_QUALITY_SDK, ISAdQualityInitError.NO_NETWORK_CONNECTION, ISAdQualityInitError.CONFIG_LOAD_TIMEOUT, ISAdQualityInitError.EXCEPTION_ON_INIT);

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0498 f3386;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final CopyOnWriteArraySet f3387 = new CopyOnWriteArraySet();

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public long f3385 = 0;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final AtomicBoolean f3384 = new AtomicBoolean(false);

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public volatile boolean f3383 = false;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public volatile boolean f3382 = false;

    public C0964(C0498 c0498) {
        this.f3386 = c0498;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8827(Set set, ISAdQualityInitError iSAdQualityInitError, String str) {
        long j;
        if (set == null) {
            return;
        }
        if (set == this.f3387 && this.f3383 && f3381.contains(iSAdQualityInitError)) {
            String strDecrypt = StringFog.decrypt("pbuKZhgVXzubuZpQHSRVLqizmVgSEA==\n", "xN/7OXF7Nk8=\n");
            String strName = iSAdQualityInitError.name();
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put(StringFog.decrypt("UdKfM2A=\n", "NKDyQAcpwU4=\n"), strName);
                String strDecrypt2 = StringFog.decrypt("Fgdq\n", "f2MexyK+ptI=\n");
                synchronized (this) {
                    j = this.f3385;
                }
                if (j > 0) {
                    String str2 = AbstractC0202.f862;
                    jSONObject.put(strDecrypt2, SystemClock.elapsedRealtime() - j);
                }
            } catch (JSONException unused) {
            }
            if (this.f3384.compareAndSet(false, true)) {
                AbstractC1766n.m8388(new C0978(this, strDecrypt, jSONObject));
            }
        }
        AbstractC1766n.m8384(new C0979(set, iSAdQualityInitError, str));
    }
}
