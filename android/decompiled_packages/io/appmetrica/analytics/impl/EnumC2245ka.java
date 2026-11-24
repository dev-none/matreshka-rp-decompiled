package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ka, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public enum EnumC2245ka {
    UNKNOWN(0),
    FIRST_OCCURRENCE(1),
    NON_FIRST_OCCURENCE(2);


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f6171a;

    EnumC2245ka(int i) {
        this.f6171a = i;
    }

    public static EnumC2245ka a(Integer num) {
        if (num != null) {
            for (EnumC2245ka enumC2245ka : values()) {
                if (enumC2245ka.f6171a == num.intValue()) {
                    return enumC2245ka;
                }
            }
        }
        return UNKNOWN;
    }
}
