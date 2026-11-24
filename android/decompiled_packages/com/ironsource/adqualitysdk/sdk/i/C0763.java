package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.os.Handler;
import android.os.HandlerThread;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.UUID;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᘦ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0763 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public final C0444 f2601;

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public final String f2602;

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public C0655 f2603;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public final C1770p f2605;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public C0791 f2606;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public final Context f2607;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public boolean f2610;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public boolean f2611;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final Handler f2612;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final C0747 f2613;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final C1072 f2614;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0865 f2615;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public boolean f2616;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C1738b f2617;

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f2600 = StringFog.decrypt("nNUROpNZryqu\n", "3btwVuotxkk=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f2599 = StringFog.decrypt("9RytNOD4/0rqQKchq/78B+AArTv87vdK8g==\n", "gW7MV4Wanik=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f2598 = StringFog.decrypt("UdJdPxep4XxH3kA3D+X4bkzcXisPoa98\n", "Ir0yUnvIzA8=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f2597 = StringFog.decrypt("z26P/dKuQvTvZA==\n", "pgD706HLMYc=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f2596 = StringFog.decrypt("xuyHxL5TddLa95jBsWEyxQ==\n", "tZj1rdA0W6E=\n");

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final ArrayList f2609 = new ArrayList();

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public final ArrayList f2608 = new ArrayList();

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public final Thread.UncaughtExceptionHandler f2604 = Thread.getDefaultUncaughtExceptionHandler();

    public C0763(Context context, C1745d0 c1745d0, C1738b c1738b, boolean z, String str, C0444 c0444) {
        this.f2601 = c0444;
        Thread.setDefaultUncaughtExceptionHandler(new C0887(this));
        this.f2617 = c1738b;
        this.f2607 = context;
        C0783 c0783 = new C0783(context, StringFog.decrypt("8AffTOF7B9bvW9VZqn0Em+Ub30P9bQ/W9w==\n", "hHW+L4QZZrU=\n"), StringFog.decrypt("LiZL550LS0E4KlbvhUdSUzMoSPOFAwVB\n", "XUkkivFqZjI=\n"));
        this.f2614 = new C1072(c0783, StringFog.decrypt("MdIx5DdvheY=\n", "eYV0klIB8ZU=\n"), StringFog.decrypt("8+dr230V\n", "lpEOtQk7WcY=\n"));
        String str2 = f2597;
        String strM8723 = c0783.m8723(str2);
        int i = !TextUtils.isEmpty(strM8723) ? Integer.parseInt(strM8723) + 1 : 1;
        c0783.m8724(str2, "" + i);
        String str3 = f2596;
        String strM8724 = c0783.m8723(str3);
        if (TextUtils.isEmpty(strM8724)) {
            strM8724 = UUID.randomUUID().toString();
            c0783.m8724(str3, strM8724);
        }
        String strM8725 = ((C0896) AbstractC0895.m8747()).f3181.m8723(C0896.f3158);
        this.f2613 = new C0747(context, c1745d0, i, strM8724, !TextUtils.isEmpty(strM8725) ? Long.parseLong(strM8725) : 0L);
        this.f2615 = new C0865(context);
        this.f2616 = false;
        HandlerThread handlerThread = new HandlerThread(StringFog.decrypt("GxIA0vVrl487FhDJ/0k=\n", "WHNjupA75eA=\n"));
        handlerThread.start();
        Handler handler = new Handler(handlerThread.getLooper());
        this.f2612 = handler;
        this.f2605 = new C1770p(i);
        this.f2611 = !z;
        this.f2602 = str;
        synchronized (this) {
            handler.removeCallbacksAndMessages(null);
            handler.postDelayed(new C0962(this), 0);
        }
        m8701();
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static void m8695(C0763 c0763) {
        synchronized (c0763) {
            c0763.f2610 = false;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8696(C0763 c0763) {
        synchronized (c0763) {
            if (c0763.m8704() && !TextUtils.isEmpty(c0763.f2613.f1188.m8345()) && !c0763.m8706()) {
                c0763.m8700();
                AbstractC0323.m8477(f2600, StringFog.decrypt("jeqi1QeWYNy7+anfGosnmqzgoZENmWSUuw==\n", "3o/MsW74B/w=\n"));
                C1072 c1072 = c0763.f2614;
                int iM8680 = c0763.m8707().m8680();
                C0952 c0952 = new C0952(c0763);
                c1072.getClass();
                C0783.m8721().post(new C1129(c1072, iM8680, c0952));
            }
        }
    }

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final void m8698() {
        C0791 c0791 = this.f2606;
        if (c0791 != null) {
            C0808 c0808 = this.f2615.f3088;
            synchronized (c0808) {
                c0808.f2881.remove(c0791);
            }
        }
        this.f2603.m8609();
        this.f2603 = null;
    }

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final synchronized void m8699() {
        this.f2616 = false;
        Handler handler = this.f2612;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
        C0865 c0865 = this.f2615;
        C0808 c0808 = c0865.f3088;
        c0808.f2883.unregisterReceiver(c0808);
        c0865.f3087 = true;
        m8698();
    }

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final synchronized void m8700() {
        this.f2610 = true;
    }

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final void m8701() {
        C0791 c0791 = new C0791(this);
        this.f2606 = c0791;
        C0808 c0808 = this.f2615.f3088;
        synchronized (c0808) {
            c0808.f2881.add(c0791);
        }
        this.f2603 = new C0655(new C0782(this));
        AbstractC1041.m8867().m8872(new C0780(this));
        AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
        C0772 c0772 = new C0772(this);
        C0896 c0896 = (C0896) abstractC0895M8747;
        Handler handler = c0896.f3179;
        if (handler != null) {
            handler.post(new C0949(c0896, c0772));
        }
    }

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final void m8702() {
        synchronized (this) {
            Handler handler = this.f2612;
            if (handler != null) {
                handler.removeCallbacksAndMessages(null);
            }
            m8713(true);
        }
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final void m8703() {
        try {
            this.f2611 = true;
            AbstractC1766n.m8385(new C0880(this));
            m8702();
        } catch (Exception e) {
            AbstractC1104.m8887(f2600, StringFog.decrypt("W1Ip2AZd6xs+TzX2BA3WGlxBONwTD+0AcEQ=\n", "HiBbt3R9gnU=\n"), (Throwable) e, false);
        }
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final synchronized boolean m8704() {
        return this.f2616;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized boolean m8706() {
        return this.f2610;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final void m8705(JSONObject jSONObject) {
        ArrayList arrayList;
        if (C1142.m8930().m8940()) {
            synchronized (this) {
                arrayList = new ArrayList(this.f2609);
            }
            AbstractC1766n.m8384(new C0890(arrayList, jSONObject));
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8697(C0763 c0763, ArrayList arrayList, C0958 c0958) {
        JSONObject jSONObject;
        c0763.getClass();
        JSONArray jSONArray = new JSONArray();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            C0760 c0760 = (C0760) it.next();
            synchronized (c0760) {
                jSONObject = c0760.f2593.f3993;
            }
            if (!jSONObject.has(StringFog.decrypt("tvfK\n", "0oO5V6Vp5dQ=\n"))) {
                try {
                    jSONObject.put(StringFog.decrypt("QkZN\n", "JjI+dAd3ITM=\n"), jSONObject.optLong(AbstractC1033.f3758));
                } catch (JSONException unused) {
                }
            }
            if (c0763.f2605.m8411(jSONObject)) {
                c0763.f2614.m8881(c0760.f2593, null);
            }
            jSONArray.put(jSONObject);
        }
        C0747 c0747 = c0763.f2613;
        c0747.f2561.post(new C0748(c0747, c0763.f2615.f3088.m8735(), jSONArray, new C0905(c0763, jSONArray, arrayList, c0958)));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8709(C0421 c0421) {
        this.f2609.add(c0421);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8708(C0378 c0378) {
        this.f2608.add(c0378);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8710(String str, JSONObject jSONObject) {
        m8711(str, jSONObject, null, null);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8711(String str, JSONObject jSONObject, JSONObject jSONObject2, C0980 c0980) {
        boolean z;
        String str2 = f2600;
        AbstractC0323.m8478(str2, str2, AbstractC0970.m8850("zoPKMnQQ856ahsJmdV7widQ=\n", "7vSjRhwwluY=\n", AbstractC0502.m8559("dz87d5LlivVMbTF7kuaK5FUoLGrGog==\n", "I01CHvyCqoE=\n", new StringBuilder(), str)), jSONObject, true);
        try {
            if (m8707().m8682().contains(str)) {
                AbstractC0323.m8477(str2, StringFog.decrypt("RyG0/YYywCBgIKf9kCHLKn1ut7SBP44qaCOl59U=\n", "CU7A3fVXrkQ=\n") + str + StringFog.decrypt("r9Di1DOd0Z7qnKfOKdHXn/2O4t55\n", "j/iHrFDxpPo=\n"));
                return;
            }
            AbstractC0323.m8477(str2, StringFog.decrypt("JhqVDSQ5eNYdSJ8BJDp4xwQNghBqKTHWGkiCBSc7YoI=\n", "cmjsZEpeWKI=\n") + str);
            C0747 c0747 = this.f2613;
            C0808 c0808 = this.f2615.f3088;
            synchronized (c0808) {
                z = c0808.f2882;
            }
            c0747.m8684(str, jSONObject, jSONObject2, z, new C0871(this, c0980));
        } catch (Exception e) {
            AbstractC1104.m8888(f2600, StringFog.decrypt("FxHFpgQ1685yENKnElD0xTwX\n", "UmO3yXYVgqA=\n"), e, false, false, true);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized C0742 m8707() {
        return ((C0896) AbstractC0895.m8747()).f3177;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8713(boolean z) {
        try {
            if (z) {
                this.f2612.removeCallbacksAndMessages(null);
                this.f2612.postDelayed(new C0962(this), 0);
            } else {
                C1072 c1072 = this.f2614;
                C0764 c0764 = new C0764(this);
                c1072.getClass();
                C0783.m8721().post(new C1101(c1072, c0764));
            }
        } catch (Throwable th) {
            throw th;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8712(JSONObject jSONObject) {
        JSONObject jSONObject2;
        C0742 c0742M8707 = m8707();
        C0941 c0941 = c0742M8707.f2591;
        JSONObject jSONObject3 = c0941.f3319;
        String str = c0941.f3321;
        List arrayList = new ArrayList();
        String str2 = AbstractC0939.f3313;
        JSONArray jSONArrayOptJSONArray = jSONObject3.optJSONArray(str);
        if (jSONArrayOptJSONArray != null) {
            arrayList = AbstractC0939.m8813(jSONArrayOptJSONArray);
        }
        synchronized (c0742M8707) {
            jSONObject2 = c0742M8707.f2592;
        }
        String strDecrypt = StringFog.decrypt("qzma\n", "zU3i9Plfxf8=\n");
        List arrayList2 = new ArrayList();
        JSONArray jSONArrayOptJSONArray2 = jSONObject2.optJSONArray(strDecrypt);
        if (jSONArrayOptJSONArray2 != null) {
            arrayList2 = AbstractC0939.m8813(jSONArrayOptJSONArray2);
        }
        arrayList.addAll(arrayList2);
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            jSONObject.remove((String) it.next());
        }
    }
}
