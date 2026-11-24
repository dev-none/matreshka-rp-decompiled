package com.pushwoosh.r;

import com.pushwoosh.inapp.view.config.enums.ModalRichMediaDismissAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaPresentAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaViewPosition;

/* JADX INFO: loaded from: classes6.dex */
public abstract /* synthetic */ class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final /* synthetic */ int[] f5304a;
    public static final /* synthetic */ int[] b;
    public static final /* synthetic */ int[] c;

    static {
        int[] iArr = new int[ModalRichMediaViewPosition.values().length];
        c = iArr;
        try {
            iArr[ModalRichMediaViewPosition.BOTTOM.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            c[ModalRichMediaViewPosition.TOP.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        int[] iArr2 = new int[ModalRichMediaPresentAnimationType.values().length];
        b = iArr2;
        try {
            iArr2[ModalRichMediaPresentAnimationType.FADE_IN.ordinal()] = 1;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            b[ModalRichMediaPresentAnimationType.SLIDE_FROM_LEFT.ordinal()] = 2;
        } catch (NoSuchFieldError unused4) {
        }
        try {
            b[ModalRichMediaPresentAnimationType.SLIDE_FROM_RIGHT.ordinal()] = 3;
        } catch (NoSuchFieldError unused5) {
        }
        try {
            b[ModalRichMediaPresentAnimationType.SLIDE_UP.ordinal()] = 4;
        } catch (NoSuchFieldError unused6) {
        }
        try {
            b[ModalRichMediaPresentAnimationType.DROP_DOWN.ordinal()] = 5;
        } catch (NoSuchFieldError unused7) {
        }
        try {
            b[ModalRichMediaPresentAnimationType.NONE.ordinal()] = 6;
        } catch (NoSuchFieldError unused8) {
        }
        int[] iArr3 = new int[ModalRichMediaDismissAnimationType.values().length];
        f5304a = iArr3;
        try {
            iArr3[ModalRichMediaDismissAnimationType.FADE_OUT.ordinal()] = 1;
        } catch (NoSuchFieldError unused9) {
        }
        try {
            f5304a[ModalRichMediaDismissAnimationType.SLIDE_LEFT.ordinal()] = 2;
        } catch (NoSuchFieldError unused10) {
        }
        try {
            f5304a[ModalRichMediaDismissAnimationType.SLIDE_RIGHT.ordinal()] = 3;
        } catch (NoSuchFieldError unused11) {
        }
        try {
            f5304a[ModalRichMediaDismissAnimationType.SLIDE_DOWN.ordinal()] = 4;
        } catch (NoSuchFieldError unused12) {
        }
        try {
            f5304a[ModalRichMediaDismissAnimationType.SLIDE_UP.ordinal()] = 5;
        } catch (NoSuchFieldError unused13) {
        }
    }
}
