package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.networktasks.internal.NetworkResponseHandler;
import io.appmetrica.analytics.networktasks.internal.ResponseDataHolder;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class Vl implements NetworkResponseHandler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2051cm f5937a;
    public final C2058d3 b;

    public Vl() {
        this(new C2051cm(), new C2058d3());
    }

    @Override // io.appmetrica.analytics.networktasks.internal.NetworkResponseHandler
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2180hm handle(ResponseDataHolder responseDataHolder) {
        String strOptString;
        String strOptString2;
        if (200 == responseDataHolder.getResponseCode()) {
            byte[] responseData = responseDataHolder.getResponseData();
            Map<String, List<String>> responseHeaders = responseDataHolder.getResponseHeaders();
            List list = responseHeaders != null ? (List) CollectionUtils.getFromMapIgnoreCase(responseHeaders, "Content-Encoding") : null;
            if (!no.a((Collection) list) && "encrypted".equals(list.get(0))) {
                responseData = this.b.a(responseDataHolder.getResponseData());
            }
            if (responseData != null) {
                C2051cm c2051cm = this.f5937a;
                c2051cm.getClass();
                C2180hm c2180hm = new C2180hm();
                try {
                    c2051cm.h.getClass();
                    C2297mb c2297mb = new C2297mb(new String(responseData, "UTF-8"));
                    JSONObject jSONObjectOptJSONObject = c2297mb.optJSONObject("device_id");
                    if (jSONObjectOptJSONObject != null) {
                        strOptString = jSONObjectOptJSONObject.optString("hash");
                        strOptString2 = jSONObjectOptJSONObject.optString("value");
                    } else {
                        strOptString = "";
                        strOptString2 = "";
                    }
                    c2180hm.h = strOptString2;
                    c2180hm.i = strOptString;
                    c2051cm.a(c2180hm, c2297mb);
                    c2180hm.f6117a = TextUtils.isEmpty(c2180hm.i) ? 1 : 2;
                } catch (Throwable unused) {
                    c2180hm = new C2180hm();
                    c2180hm.f6117a = 1;
                }
                if (2 == c2180hm.f6117a) {
                    return c2180hm;
                }
            }
        }
        return null;
    }

    public Vl(C2051cm c2051cm, C2058d3 c2058d3) {
        this.f5937a = c2051cm;
        this.b = c2058d3;
    }
}
