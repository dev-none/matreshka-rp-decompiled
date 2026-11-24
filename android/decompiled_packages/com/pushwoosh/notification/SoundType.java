package com.pushwoosh.notification;

/* JADX INFO: loaded from: classes6.dex */
public enum SoundType {
    DEFAULT_MODE("DEFAULT_MODE"),
    NO_SOUND("NO_SOUND"),
    ALWAYS("ALWAYS");


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5286a;

    SoundType(String str) {
        this.f5286a = i;
    }

    public static SoundType fromInt(int i) {
        if (i == 0) {
            return DEFAULT_MODE;
        }
        if (i != 1) {
            return i != 2 ? DEFAULT_MODE : ALWAYS;
        }
        return NO_SOUND;
    }

    public int getValue() {
        return this.f5286a;
    }
}
