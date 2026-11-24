package com.pushwoosh.inapp.view.config.enums;

import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public enum ModalRichMediaViewPosition {
    TOP("TOP"),
    CENTER("CENTER"),
    BOTTOM("BOTTOM"),
    FULLSCREEN("FULLSCREEN");


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5187a;

    ModalRichMediaViewPosition(String str) {
        this.f5187a = i;
    }

    public static ModalRichMediaViewPosition fromString(String str) {
        if (str == null) {
            return null;
        }
        String lowerCase = str.toLowerCase();
        lowerCase.getClass();
        lowerCase.hashCode();
        switch (lowerCase) {
            case "bottom":
                return BOTTOM;
            case "center":
                return CENTER;
            case "top":
                return TOP;
            case "fullscreen":
                return FULLSCREEN;
            default:
                return null;
        }
    }

    public static ModalRichMediaViewPosition getByCode(int i) {
        for (ModalRichMediaViewPosition modalRichMediaViewPosition : values()) {
            if (modalRichMediaViewPosition.f5187a == i) {
                return modalRichMediaViewPosition;
            }
        }
        PWLog.error("Unknown code of source: " + i);
        return null;
    }

    public int compare(ModalRichMediaViewPosition modalRichMediaViewPosition) {
        return Integer.compare(modalRichMediaViewPosition.f5187a, this.f5187a);
    }

    public int getCode() {
        return this.f5187a;
    }
}
