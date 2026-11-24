package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class wo implements vo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final H8 f6394a;

    public wo() {
        this(new H8());
    }

    @Override // io.appmetrica.analytics.impl.vo
    public final byte[] a(S8 s8, C2378ph c2378ph) {
        if (!((C2085e5) c2378ph.l).B() && !TextUtils.isEmpty(s8.b)) {
            try {
                JSONObject jSONObject = new JSONObject(s8.b);
                jSONObject.remove("preloadInfo");
                s8.b = jSONObject.toString();
            } catch (Throwable unused) {
            }
        }
        return this.f6394a.a(s8, c2378ph);
    }

    public wo(H8 h8) {
        this.f6394a = h8;
    }
}
