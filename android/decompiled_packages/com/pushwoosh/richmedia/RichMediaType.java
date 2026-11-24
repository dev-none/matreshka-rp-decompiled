package com.pushwoosh.richmedia;

/* JADX INFO: loaded from: classes6.dex */
public enum RichMediaType {
    MODAL,
    DEFAULT;

    public static RichMediaType fromString(String str) {
        for (RichMediaType richMediaType : values()) {
            if (richMediaType.name().equalsIgnoreCase(str)) {
                return richMediaType;
            }
        }
        return DEFAULT;
    }
}
