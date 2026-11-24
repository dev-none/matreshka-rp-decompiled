package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public enum N8 {
    NONE(0),
    EXTERNALLY_ENCRYPTED_EVENT_CRYPTER(1),
    AES_VALUE_ENCRYPTION(2);


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5803a;

    N8(int i) {
        this.f5803a = i;
    }

    public static N8 a(Integer num) {
        if (num != null) {
            for (N8 n8 : values()) {
                if (n8.f5803a == num.intValue()) {
                    return n8;
                }
            }
        }
        return NONE;
    }
}
