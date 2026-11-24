package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public abstract /* synthetic */ class H {
    public static /* synthetic */ String a(int i) {
        if (i == 1) {
            return "ALLOWED";
        }
        if (i == 2) {
            return "FORBIDDEN_BY_CLIENT_CONFIG";
        }
        if (i != 3) {
            return i != 4 ? "null" : "UNKNOWN";
        }
        return "FORBIDDEN_BY_REMOTE_CONFIG";
    }
}
