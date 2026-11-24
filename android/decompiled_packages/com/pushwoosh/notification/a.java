package com.pushwoosh.notification;

/* JADX INFO: loaded from: classes6.dex */
public abstract /* synthetic */ class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final /* synthetic */ int[] f5290a;

    static {
        int[] iArr = new int[ActionButton.ActionType.values().length];
        f5290a = iArr;
        try {
            iArr[ActionButton.ActionType.OPEN.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f5290a[ActionButton.ActionType.URL.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f5290a[ActionButton.ActionType.DEEPLINK.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            f5290a[ActionButton.ActionType.CUSTOM.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
    }
}
