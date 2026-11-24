package io.appmetrica.analytics.impl;

import java.util.HashMap;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ne, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2325ne {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashMap f6225a;

    public C2325ne() {
        HashMap map = new HashMap();
        this.f6225a = map;
        map.put("google_aid", "g");
        map.put("huawei_oaid", "h");
        map.put("sim_info", "si");
        map.put("features_collecting", "fc");
        map.put("permissions_collecting", "pc");
        map.put("retry_policy", "rp");
        map.put("cache_control", "cc");
        map.put("attribution", "at");
        map.put("startup_update", "su");
        map.put("ssl_pinning", "sp");
        map.put("external_attribution", "exta");
    }

    public final String a(String str) {
        return this.f6225a.containsKey(str) ? (String) this.f6225a.get(str) : str;
    }
}
