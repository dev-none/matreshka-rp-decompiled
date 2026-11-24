package io.appmetrica.analytics.impl;

import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.bj, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2022bj extends Wg {
    public final C2600yf b;

    public C2022bj(C2085e5 c2085e5) {
        this(c2085e5, C2495ua.k().t());
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        JSONObject jSONObjectOptJSONObject;
        try {
            jSONObjectOptJSONObject = new JSONObject(w5.getValue()).optJSONObject("preloadInfo");
        } catch (Throwable unused) {
            jSONObjectOptJSONObject = null;
        }
        this.b.b(C2525vf.a(jSONObjectOptJSONObject));
        return false;
    }

    public C2022bj(C2085e5 c2085e5, C2600yf c2600yf) {
        super(c2085e5);
        this.b = c2600yf;
    }
}
