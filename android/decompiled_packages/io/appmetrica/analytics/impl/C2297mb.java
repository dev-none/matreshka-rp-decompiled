package io.appmetrica.analytics.impl;

import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.mb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2297mb extends JSONObject {
    public C2297mb() {
    }

    public final Long a(String str) {
        try {
            return Long.valueOf(getLong(str));
        } catch (Throwable unused) {
            return null;
        }
    }

    public C2297mb(String str) {
        super(str);
    }

    public final String b(String str) {
        if (!has(str)) {
            return "";
        }
        try {
            return getString(str);
        } catch (Throwable unused) {
            return "";
        }
    }
}
