package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import android.view.View;
import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.WeakHashMap;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Τ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0325 extends AbstractC0963 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public C0434 f1197;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public M0 f1198;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final WeakHashMap f1199 = new WeakHashMap();

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public C0336 f1196 = new C0336();

    static {
        StringFog.decrypt("49XSUEZq3LDAzv9YfWjAscnFzA==\n", "paC+PDUJrtU=\n");
    }

    public AbstractC0325(C0434 c0434) {
        this.f1197 = c0434;
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final void m8483(Object obj) {
        JSONObject jSONObject = new JSONObject();
        Y0 y0 = m8484(obj).f232;
        mo8357(jSONObject, y0 != null ? (WebView) y0.f347.f249.get() : null, obj);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0963, com.ironsource.adqualitysdk.sdk.i.InterfaceC0510
    /* JADX INFO: renamed from: ｋ */
    public final void mo8335(JSONObject jSONObject, View view, Object obj) {
        mo8333(jSONObject, (WebView) view, obj);
    }

    /* JADX INFO: renamed from: ﾇ */
    public abstract View mo8379(Object obj);

    /* JADX INFO: renamed from: ﾇ */
    public abstract M0 mo8380();

    /* JADX INFO: renamed from: ﾇ */
    public abstract void mo8381(Object obj, ArrayList arrayList);

    /* JADX INFO: renamed from: ﾒ */
    public abstract InterfaceC0510 mo8382();

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8486(JSONObject jSONObject, Object obj, String str) {
        C0336 c0336 = this.f1196;
        boolean z = c0336.f1313 && !TextUtils.isEmpty(c0336.f1316);
        M0 m0M8484 = m8484(obj);
        if (m0M8484 == null) {
            m0M8484 = mo8380();
            if (this.f1196.f1308) {
                this.f1199.put(obj, m0M8484);
            } else {
                this.f1198 = m0M8484;
            }
            m0M8484.f3380 = mo8382();
        }
        for (WebView webView : m0M8484.f231.keySet()) {
            webView.removeOnLayoutChangeListener(m0M8484);
            Y0 y0 = (Y0) m0M8484.f231.get(webView);
            Iterator it = m0M8484.f229.iterator();
            while (it.hasNext()) {
                y0.f346.remove((InterfaceC0252) it.next());
            }
        }
        m0M8484.f229.clear();
        m0M8484.f232 = null;
        m0M8484.f231.clear();
        C0336 c0337 = this.f1196;
        String str2 = c0337.f1316;
        List list = c0337.f1315;
        boolean z2 = c0337.f1310;
        boolean z3 = c0337.f1309;
        m0M8484.f234 = z;
        m0M8484.f230 = new V0(str2, z3);
        m0M8484.f233 = z2;
        m0M8484.f236 = list;
        m0M8484.f235 = str;
        if (!this.f1196.f1311) {
            super.mo8335(jSONObject, null, obj);
            return;
        }
        ArrayList arrayList = new ArrayList();
        mo8381(obj, arrayList);
        List arrayList2 = new ArrayList();
        C0434 c0434 = this.f1197;
        if (c0434 != null) {
            try {
                C0944 c0944 = c0434.f1572;
                C1013 c1013 = c0434.f1570;
                C0704 c0704 = c1013.f3677;
                arrayList2 = (List) c0944.m8820(c0704, c0704.f2434, c1013, Collections.singletonList(obj)).f3060;
            } catch (Exception unused) {
                AbstractC0323.m8470(StringFog.decrypt("TMD3R/8/hOpSzOlc7jSg/A==\n", "HqWaKItaxY4=\n"), StringFog.decrypt("7WXVlN5XOATcY86Vy1coBMpBzp7bBH8H2njK2w==\n", "qBen+6x3X2E=\n") + c0434.f1571);
                arrayList2 = null;
            }
        }
        String str3 = AbstractC0202.f862;
        HashSet hashSet = new HashSet(arrayList);
        if (arrayList2 != null) {
            hashSet.addAll(arrayList2);
        }
        ArrayList arrayList3 = new ArrayList(hashSet);
        if (arrayList3.isEmpty() || this.f1196.f1312) {
            View viewMo8379 = mo8379(obj);
            if (viewMo8379 != null) {
                viewMo8379.addOnLayoutChangeListener(new ViewOnLayoutChangeListenerC0361(this, obj));
            }
            if (arrayList3.isEmpty()) {
                super.mo8335(jSONObject, null, obj);
                return;
            }
        }
        if (this.f1196.f1307) {
            AbstractC1766n.f458.post(new RunnableC0339(this, obj, arrayList3, jSONObject));
        } else {
            m8485(obj, arrayList3);
            super.mo8335(jSONObject, (WebView) arrayList3.get(0), obj);
        }
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final M0 m8484(Object obj) {
        if (this.f1196.f1308) {
            return (M0) this.f1199.get(obj);
        }
        return this.f1198;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8482(AbstractC0325 abstractC0325, JSONObject jSONObject, WebView webView, Object obj) {
        super.mo8335(jSONObject, webView, obj);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8485(Object obj, ArrayList arrayList) {
        M0 m0M8484 = m8484(obj);
        m0M8484.getClass();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            m0M8484.m8338((WebView) it.next());
        }
        if (this.f1196.f1314) {
            m8484(obj).f235 = Integer.toHexString(((WebView) arrayList.get(0)).hashCode());
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0963
    /* JADX INFO: renamed from: ﾒ */
    public final String mo8337(Object obj) {
        return m8484(obj).f235;
    }
}
