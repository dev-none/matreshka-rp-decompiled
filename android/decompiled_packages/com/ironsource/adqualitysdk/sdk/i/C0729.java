package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.io.IOException;
import java.nio.charset.Charset;
import java.util.Calendar;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᕝ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0729 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ C0719 f2468;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC1023 f2469;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ String f2470;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ AbstractC0620 f2471;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f2472;

    public C0729(C0719 c0719, String str, AbstractC0620 abstractC0620, String str2, InterfaceC1023 interfaceC1023) {
        this.f2468 = c0719;
        this.f2472 = str;
        this.f2471 = abstractC0620;
        this.f2470 = str2;
        this.f2469 = interfaceC1023;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        boolean z;
        int i;
        String str = this.f2472;
        AbstractC0620 abstractC0620 = this.f2471;
        String str2 = this.f2470;
        InterfaceC1023 interfaceC1023 = this.f2469;
        C0808 c0808 = this.f2468.f2457.f3088;
        synchronized (c0808) {
            z = c0808.f2882;
        }
        if (!z) {
            m8664(abstractC0620, interfaceC1023);
            return;
        }
        try {
            C0686 c0686M8778 = AbstractC0911.m8778(str);
            if (c0686M8778 == null || c0686M8778.f2403.f2408 != 200) {
                boolean z2 = c0686M8778 != null && ((i = c0686M8778.f2403.f2408) == 403 || i == 404);
                if (!this.f2468.f2457.f3088.m8735()) {
                    m8664(abstractC0620, interfaceC1023);
                    return;
                }
                if (z2 && str.contains(StringFog.decrypt("5U2NAQ==\n", "gCP7LjITzZI=\n"))) {
                    abstractC0620.f2161 = false;
                    this.f2468.m8660(abstractC0620, interfaceC1023);
                    return;
                }
                if (z2 && str.endsWith(StringFog.decrypt("wtgOy1TWtkLNxQI=\n", "qKthpXqxzGw=\n"))) {
                    abstractC0620.f2160 = false;
                    this.f2468.m8660(abstractC0620, interfaceC1023);
                    return;
                }
                int i2 = c0686M8778 != null ? c0686M8778.f2403.f2408 : -1;
                AbstractC1104.m8887(StringFog.decrypt("jDJnmBItXJs=\n", "3lcK92ZIGNk=\n"), StringFog.decrypt("RSzHhJzhhEFmOc2AkOvDBw==\n", "A02u6PmFpCc=\n") + str + StringFog.decrypt("wyOTBwKLE7zPYI8XBt8=\n", "7wPgc2P/Zs8=\n") + i2, (Throwable) null, false);
                this.f2468.getClass();
                AbstractC1766n.m8386(new C0727(interfaceC1023, str2, null));
                return;
            }
            String strM8663 = m8663(c0686M8778.f2404);
            if (!Charset.forName(StringFog.decrypt("c09wdeFDBec=\n", "JhxdNLIATK4=\n")).newEncoder().canEncode(strM8663)) {
                AbstractC1104.m8887(StringFog.decrypt("YTcseI0uPJI=\n", "M1JBF/lLeNA=\n"), StringFog.decrypt("gI98KHWwOzigymwufqkhOuSMbTVh4A==\n", "xOofWgzAT10=\n") + str + StringFog.decrypt("Rh6zaUo1/gIVXbVpSDX7BQJdv29fJuQ=\n", "Zn3cBz5Ul2w=\n"), (Throwable) null, false);
                this.f2468.getClass();
                AbstractC1766n.m8386(new C0727(interfaceC1023, str2, null));
                return;
            }
            if (TextUtils.isEmpty(strM8663)) {
                AbstractC1104.m8887(StringFog.decrypt("l9Kk3oN5AX4=\n", "xbfJsfccRTw=\n"), StringFog.decrypt("1qokqw+KdpT95XS/BYd7mfzlYqwThjQ=\n", "mMUE3nzrFPg=\n") + str, (Throwable) null, false);
                this.f2468.getClass();
                AbstractC1766n.m8386(new C0727(interfaceC1023, str2, null));
                return;
            }
            C0783 c0783 = this.f2468.f2458;
            c0783.m8724(str2, strM8663);
            String str3 = str2 + StringFog.decrypt("VNMW+pER6QgbyxI=\n", "er93ieVkmWw=\n");
            String str4 = AbstractC0202.f862;
            c0783.m8724(str3, Long.toString(Calendar.getInstance().getTimeInMillis()));
            this.f2468.getClass();
            AbstractC1766n.m8386(new C0727(interfaceC1023, str2, strM8663));
        } catch (Exception e) {
            if (!this.f2468.f2457.f3088.m8735()) {
                m8664(abstractC0620, interfaceC1023);
                return;
            }
            AbstractC1104.m8887(StringFog.decrypt("HmtoJFIX+ic=\n", "TA4FSyZyvmU=\n"), AbstractC0343.m8497("M7ZsVlBcqBECsHdXRVy9ERuralwCL7sGH6p5GUQOoBlW\n", "dsQeOSJ8z3Q=\n", new StringBuilder(), str), (Throwable) e, false);
            this.f2468.getClass();
            AbstractC1766n.m8386(new C0727(interfaceC1023, str2, null));
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8663(String str) {
        JSONObject jSONObject = new JSONObject(str);
        String strOptString = jSONObject.optString(StringFog.decrypt("96Yp\n", "kshKw3wYe2I=\n"));
        if (TextUtils.isEmpty(strOptString)) {
            return str;
        }
        byte[] bArrM8438 = AbstractC0202.m8438(strOptString, C0719.f2454, jSONObject.optString(StringFog.decrypt("4TY=\n", "iEC6w+2FBKo=\n")), jSONObject.optString(StringFog.decrypt("rdqb9g==\n", "3rv3gr2EFwU=\n")));
        if (bArrM8438 == null) {
            return "";
        }
        try {
            if (bArrM8438.length >= 2 && (bArrM8438[0] & 255) == 31 && (bArrM8438[1] & 255) == 139) {
                bArrM8438 = AbstractC0253.m8455(bArrM8438);
            }
            return new String(bArrM8438, StringFog.decrypt("IV9mTqw=\n", "dAsgY5TRbzc=\n"));
        } catch (IOException e) {
            AbstractC1104.m8887(StringFog.decrypt("xqwfrzym0PE=\n", "lMlywEjDlLM=\n"), StringFog.decrypt("3LWlvgeWqtL/q7alHNiknP69vqEF06ec6aauvRrXpw==\n", "mcfX0XW2w7w=\n"), (Throwable) e, false);
            return "";
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8664(AbstractC0620 abstractC0620, InterfaceC1023 interfaceC1023) {
        C0808 c0808 = this.f2468.f2457.f3088;
        C0827 c0827 = new C0827(this, abstractC0620, interfaceC1023);
        synchronized (c0808) {
            c0808.f2881.add(c0827);
        }
    }
}
