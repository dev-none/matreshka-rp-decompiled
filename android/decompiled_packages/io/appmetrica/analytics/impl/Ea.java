package io.appmetrica.analytics.impl;

import io.sentry.SentryReplayEvent;
import java.util.ArrayList;
import java.util.HashSet;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class Ea {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final HashSet f5657a;

    static {
        HashSet hashSet = new HashSet();
        f5657a = hashSet;
        hashSet.add("get_ad");
        hashSet.add("report");
        hashSet.add("report_ad");
        hashSet.add("startup");
        hashSet.add("diagnostic");
    }

    public static ArrayList a(JSONObject jSONObject, String str) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(str);
            if (jSONObjectOptJSONObject != null) {
                return AbstractC2322nb.a(jSONObjectOptJSONObject.getJSONArray(SentryReplayEvent.JsonKeys.URLS));
            }
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }
}
