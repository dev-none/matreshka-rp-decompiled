package com.pushwoosh.inapp.view.config.enums;

import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public enum ModalRichMediaSwipeGesture {
    UP(0, 4),
    LEFT(1, 1),
    RIGHT(2, 2),
    DOWN(3, 8),
    NONE(4, 0);


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5186a;
    private final int b;

    ModalRichMediaSwipeGesture(int i, int i2) {
        this.f5186a = i;
        this.b = i2;
    }

    public static ModalRichMediaSwipeGesture fromString(String str) {
        if (str == null) {
            return null;
        }
        String lowerCase = str.toLowerCase();
        lowerCase.getClass();
        lowerCase.hashCode();
        switch (lowerCase) {
            case "up":
                return UP;
            case "down":
                return DOWN;
            case "left":
                return LEFT;
            case "none":
                return NONE;
            case "right":
                return RIGHT;
            default:
                return null;
        }
    }

    public static ModalRichMediaSwipeGesture getByCode(int i) {
        for (ModalRichMediaSwipeGesture modalRichMediaSwipeGesture : values()) {
            if (modalRichMediaSwipeGesture.f5186a == i) {
                return modalRichMediaSwipeGesture;
            }
        }
        PWLog.error("Unknown code of source: " + i);
        return null;
    }

    public int compare(ModalRichMediaSwipeGesture modalRichMediaSwipeGesture) {
        return Integer.compare(modalRichMediaSwipeGesture.f5186a, this.f5186a);
    }

    public int getBit() {
        return this.b;
    }

    public int getCode() {
        return this.f5186a;
    }
}
