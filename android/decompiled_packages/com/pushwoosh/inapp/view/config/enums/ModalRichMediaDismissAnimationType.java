package com.pushwoosh.inapp.view.config.enums;

import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public enum ModalRichMediaDismissAnimationType {
    FADE_OUT("FADE_OUT"),
    SLIDE_UP("SLIDE_UP"),
    SLIDE_RIGHT("SLIDE_RIGHT"),
    SLIDE_DOWN("SLIDE_DOWN"),
    SLIDE_LEFT("SLIDE_LEFT"),
    NONE("NONE");


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5184a;

    ModalRichMediaDismissAnimationType(String str) {
        this.f5184a = i;
    }

    public static ModalRichMediaDismissAnimationType fromString(String str) {
        if (str == null) {
            return null;
        }
        String lowerCase = str.toLowerCase();
        lowerCase.getClass();
        lowerCase.hashCode();
        switch (lowerCase) {
            case "up":
                return SLIDE_UP;
            case "down":
                return SLIDE_DOWN;
            case "left":
                return SLIDE_LEFT;
            case "none":
                return NONE;
            case "right":
                return SLIDE_RIGHT;
            case "fade_out":
                return FADE_OUT;
            default:
                return null;
        }
    }

    public static ModalRichMediaDismissAnimationType getByCode(int i) {
        for (ModalRichMediaDismissAnimationType modalRichMediaDismissAnimationType : values()) {
            if (modalRichMediaDismissAnimationType.f5184a == i) {
                return modalRichMediaDismissAnimationType;
            }
        }
        PWLog.error("Unknown code of source: " + i);
        return null;
    }

    public int compare(ModalRichMediaDismissAnimationType modalRichMediaDismissAnimationType) {
        return Integer.compare(modalRichMediaDismissAnimationType.f5184a, this.f5184a);
    }

    public int getCode() {
        return this.f5184a;
    }
}
