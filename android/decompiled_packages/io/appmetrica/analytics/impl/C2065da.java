package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.flutter.plugins.firebase.analytics.Constants;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.da, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2065da {
    public static boolean a(JSONObject jSONObject, String str, boolean z) {
        return ((Boolean) WrapUtils.getOrDefault(jSONObject.has(str) ? Boolean.valueOf(jSONObject.getJSONObject(str).getBoolean(Constants.ENABLED)) : null, Boolean.valueOf(z))).booleanValue();
    }
}
