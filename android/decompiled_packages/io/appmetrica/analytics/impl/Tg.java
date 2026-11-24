package io.appmetrica.analytics.impl;

import android.net.Uri;
import android.text.TextUtils;
import android.util.Pair;
import com.adjust.sdk.Constants;
import io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper;
import java.util.HashSet;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class Tg extends Wg {
    public Tg(C2085e5 c2085e5) {
        super(c2085e5);
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        String value = w5.getValue();
        if (TextUtils.isEmpty(value)) {
            return false;
        }
        try {
            JSONObject jSONObject = new JSONObject(value);
            if (!"open".equals(jSONObject.optString("type"))) {
                return false;
            }
            zo zoVar = this.f5944a.t;
            synchronized (zoVar) {
                zoVar.c(zoVar.b() + 1);
            }
            if (!a(jSONObject.optString("link"))) {
                return false;
            }
            w5.n = Boolean.TRUE;
            b();
            return false;
        } catch (Throwable unused) {
            return false;
        }
    }

    public final void b() {
        zo zoVar = this.f5944a.t;
        synchronized (zoVar) {
            zoVar.a(zoVar.a() + 1);
        }
        this.f5944a.z();
        R8 r8 = this.f5944a.l;
        if (r8.c == null) {
            r8.a();
        }
        T8 t8 = r8.c;
        t8.getClass();
        t8.b = new HashSet();
        t8.d = 0;
        T8 t9 = r8.c;
        t9.f5901a = true;
        W8 w8 = r8.b;
        IBinaryDataHelper iBinaryDataHelper = w8.c;
        V8 v8 = w8.b;
        w8.f5942a.getClass();
        iBinaryDataHelper.insert("event_hashes", v8.toByteArray(U8.a(t9)));
    }

    public final boolean a(String str) {
        if (!TextUtils.isEmpty(str)) {
            try {
                String queryParameter = Uri.parse(str).getQueryParameter(Constants.REFERRER);
                if (!TextUtils.isEmpty(queryParameter)) {
                    C2487u2 c2487u2 = this.f5944a.t().y;
                    for (String str2 : Uri.decode(queryParameter).split("&")) {
                        String strDecode = Uri.decode(str2);
                        int iIndexOf = strDecode.indexOf("=");
                        if (iIndexOf >= 0 && a(Uri.decode(strDecode.substring(0, iIndexOf)), Uri.decode(strDecode.substring(iIndexOf + 1)), c2487u2)) {
                            return true;
                        }
                    }
                }
            } catch (Throwable unused) {
            }
        }
        return false;
    }

    public static boolean a(String str, String str2, C2487u2 c2487u2) {
        Object obj;
        if ("reattribution".equals(str) && "1".equals(str2)) {
            return true;
        }
        if (c2487u2 == null) {
            return false;
        }
        for (Pair pair : c2487u2.f6342a) {
            if (no.a(pair.first, str) && ((obj = pair.second) == null || ((C2462t2) obj).f6323a.equals(str2))) {
                return true;
            }
        }
        return false;
    }
}
