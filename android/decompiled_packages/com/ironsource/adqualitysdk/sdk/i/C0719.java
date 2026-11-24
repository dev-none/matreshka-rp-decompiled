package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.os.Handler;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.concurrent.Executors;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᔾ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0719 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final String f2454;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final ArrayList f2455 = new ArrayList();

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String f2456;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0865 f2457;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0783 f2458;

    static {
        StringFog.decrypt("ICn/BQFrEAU=\n", "ckySanUOVEc=\n");
        StringFog.decrypt("EqwMv6eIMIAN8Aaq7I4zzRS7ALO2jzWB\n", "Zt5t3MLqUeM=\n");
        StringFog.decrypt("Cj4kV1srckAcMjlfQ2drVxs=\n", "eVFLOjdKXzM=\n");
        f2454 = StringFog.decrypt("k8vRD1fwyjzbtPBbcPKUe/WeqVVett4h1InnEk/13SGaq+xSTfWJKoKF6gpepog8w4WrB1ixnybj\ngvcsT4yIGNiJ8gYQ6Q==\n", "t/ueYjvE7U8=\n");
    }

    public C0719(Context context, C0865 c0865, String str) {
        this.f2458 = new C0783(context, StringFog.decrypt("8LZAasvtQk3v6kp/gOtBAPahTGba6kdM\n", "hMQhCa6PIy4=\n"), StringFog.decrypt("RjWND/jXTiRQOZAH4JtXM1c=\n", "NVriYpS2Y1c=\n"));
        this.f2457 = c0865;
        this.f2456 = str;
        AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
        C0844 c0844 = new C0844(this);
        C0896 c0896 = (C0896) abstractC0895M8747;
        Handler handler = c0896.f3179;
        if (handler != null) {
            handler.post(new C0949(c0896, c0844));
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final void m8659(AbstractC0620 abstractC0620, InterfaceC1023 interfaceC1023) {
        String str;
        AbstractC0620 abstractC0620M8657 = m8657(abstractC0620);
        String strMo8598 = abstractC0620M8657.mo8598();
        StringBuilder sb = new StringBuilder();
        synchronized (this) {
            str = this.f2456;
        }
        sb.append(str);
        String strM8497 = AbstractC0343.m8497("Yg==\n", "TYDggO3UZSA=\n", sb, strMo8598);
        String strReplace = abstractC0620M8657.mo8598().replace(StringFog.decrypt("Vw==\n", "eAvz17XdJPs=\n"), StringFog.decrypt("9Q==\n", "2xR8/nPm9uo=\n"));
        if (AbstractC0895.m8747().mo8754() && (AbstractC0895.m8747().mo8752() || this.f2458.m8723(strReplace) == null)) {
            C0729 c0729 = new C0729(this, strM8497, abstractC0620, strReplace, interfaceC1023);
            String str2 = AbstractC0202.f862;
            try {
                Executors.newSingleThreadExecutor().execute(c0729);
            } catch (Throwable th) {
                AbstractC1104.m8887(AbstractC0202.f862, StringFog.decrypt("33dALPYTxOj/Zkc37V3GsPt2Sy3nE9Xx6W4=\n", "mgUyQ4QzoZA=\n"), th, false);
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String m8660(AbstractC0620 abstractC0620, InterfaceC1023 interfaceC1023) {
        boolean z;
        if (TextUtils.isEmpty(abstractC0620.f2165) || TextUtils.isEmpty(abstractC0620.f2163)) {
            return null;
        }
        String strReplace = m8657(abstractC0620).mo8598().replace(StringFog.decrypt("Vw==\n", "eAvz17XdJPs=\n"), StringFog.decrypt("9Q==\n", "2xR8/nPm9uo=\n"));
        synchronized (this) {
            if (AbstractC0895.m8747().mo8760()) {
                z = true;
            } else {
                this.f2455.add(new C0833(this, abstractC0620, interfaceC1023));
                z = false;
            }
        }
        if (z) {
            m8659(abstractC0620, interfaceC1023);
        }
        return this.f2458.m8723(strReplace);
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static AbstractC0620 m8657(AbstractC0620 abstractC0620) {
        JSONObject jSONObject;
        if (abstractC0620 instanceof C0660) {
            AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
            C0896 c0896 = (C0896) abstractC0895M8747;
            synchronized (c0896) {
                jSONObject = c0896.f2592;
            }
            if (jSONObject.has(StringFog.decrypt("tT8G\n", "1lhwHBtv4XI=\n"))) {
                String strMo8767 = abstractC0895M8747.mo8767();
                if (!strMo8767.equals(abstractC0620.f2163)) {
                    abstractC0620 = ((C0660) abstractC0620).mo8600(strMo8767);
                }
            }
        }
        m8658(abstractC0620);
        return abstractC0620;
    }

    /* JADX WARN: Code duplicated, block: B:17:0x002d  */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8658(AbstractC0620 abstractC0620) {
        String strDecrypt;
        JSONObject jSONObject;
        if (abstractC0620 instanceof C0660) {
            if (abstractC0620.f2160) {
                C0896 c0896 = (C0896) AbstractC0895.m8747();
                synchronized (c0896) {
                    jSONObject = c0896.f2592;
                }
                if (jSONObject.optBoolean(StringFog.decrypt("Rd7N\n", "IqSuhgWRzSw=\n"))) {
                    strDecrypt = StringFog.decrypt("HTC+w0iy6PoSLbI=\n", "d0PRrWbVktQ=\n");
                } else {
                    strDecrypt = StringFog.decrypt("PK3/bP3tFRc=\n", "Vt6QAtOIe3Q=\n");
                }
            } else {
                strDecrypt = StringFog.decrypt("PK3/bP3tFRc=\n", "Vt6QAtOIe3Q=\n");
            }
            abstractC0620.f2162 = strDecrypt;
        }
    }
}
