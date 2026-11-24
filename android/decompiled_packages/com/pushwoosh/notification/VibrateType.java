package com.pushwoosh.notification;

/* JADX INFO: loaded from: classes6.dex */
public enum VibrateType {
    DEFAULT_MODE("DEFAULT_MODE"),
    NO_VIBRATE("NO_VIBRATE"),
    ALWAYS("ALWAYS");


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5289a;

    VibrateType(String str) {
        this.f5289a = i;
    }

    public static VibrateType fromInt(int i) {
        if (i == 0) {
            return DEFAULT_MODE;
        }
        if (i != 1) {
            return i != 2 ? DEFAULT_MODE : ALWAYS;
        }
        return NO_VIBRATE;
    }

    public int getValue() {
        return this.f5289a;
    }
}
