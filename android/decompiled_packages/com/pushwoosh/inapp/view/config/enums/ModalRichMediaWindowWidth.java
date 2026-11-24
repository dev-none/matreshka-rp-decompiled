package com.pushwoosh.inapp.view.config.enums;

import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public enum ModalRichMediaWindowWidth {
    FULL_SCREEN("FULL_SCREEN"),
    WRAP_CONTENT("WRAP_CONTENT");


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5188a;

    ModalRichMediaWindowWidth(String str) {
        this.f5188a = i;
    }

    public static ModalRichMediaWindowWidth getByCode(int i) {
        for (ModalRichMediaWindowWidth modalRichMediaWindowWidth : values()) {
            if (modalRichMediaWindowWidth.f5188a == i) {
                return modalRichMediaWindowWidth;
            }
        }
        PWLog.error("Unknown code of source: " + i);
        return null;
    }

    public int compare(ModalRichMediaWindowWidth modalRichMediaWindowWidth) {
        return Integer.compare(modalRichMediaWindowWidth.f5188a, this.f5188a);
    }

    public int getCode() {
        return this.f5188a;
    }
}
