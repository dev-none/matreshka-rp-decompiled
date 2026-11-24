package com.pushwoosh.richmedia;

/* JADX INFO: loaded from: classes6.dex */
public enum RichMediaColorScheme {
    APP,
    SYSTEM,
    LIGHT,
    DARK;

    public static RichMediaColorScheme fromString(String str) {
        for (RichMediaColorScheme richMediaColorScheme : values()) {
            if (richMediaColorScheme.name().equalsIgnoreCase(str)) {
                return richMediaColorScheme;
            }
        }
        return APP;
    }
}
