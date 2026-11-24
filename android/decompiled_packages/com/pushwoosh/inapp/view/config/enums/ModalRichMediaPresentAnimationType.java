package com.pushwoosh.inapp.view.config.enums;

import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public enum ModalRichMediaPresentAnimationType {
    FADE_IN("FADE_IN"),
    DROP_DOWN("DROP_DOWN"),
    SLIDE_FROM_LEFT("SLIDE_FROM_LEFT"),
    SLIDE_UP("SLIDE_UP"),
    SLIDE_FROM_RIGHT("SLIDE_FROM_RIGHT"),
    NONE("NONE");


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5185a;

    ModalRichMediaPresentAnimationType(String str) {
        this.f5185a = i;
    }

    public static ModalRichMediaPresentAnimationType fromString(String str) {
        if (str == null) {
            return null;
        }
        String lowerCase = str.toLowerCase();
        lowerCase.getClass();
        lowerCase.hashCode();
        switch (lowerCase) {
            case "fade_in":
                return FADE_IN;
            case "up":
                return SLIDE_UP;
            case "down":
                return DROP_DOWN;
            case "left":
                return SLIDE_FROM_LEFT;
            case "none":
                return NONE;
            case "right":
                return SLIDE_FROM_RIGHT;
            default:
                return null;
        }
    }

    public static ModalRichMediaPresentAnimationType getByCode(int i) {
        for (ModalRichMediaPresentAnimationType modalRichMediaPresentAnimationType : values()) {
            if (modalRichMediaPresentAnimationType.f5185a == i) {
                return modalRichMediaPresentAnimationType;
            }
        }
        PWLog.error("Unknown code of source: " + i);
        return null;
    }

    public int compare(ModalRichMediaPresentAnimationType modalRichMediaPresentAnimationType) {
        return Integer.compare(modalRichMediaPresentAnimationType.f5185a, this.f5185a);
    }

    public int getCode() {
        return this.f5185a;
    }
}
