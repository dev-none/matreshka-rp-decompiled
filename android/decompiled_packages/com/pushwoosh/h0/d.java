package com.pushwoosh.h0;

import com.pushwoosh.notification.Action;

/* JADX INFO: loaded from: classes6.dex */
public abstract /* synthetic */ class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final /* synthetic */ int[] f5093a;

    static {
        int[] iArr = new int[Action.Type.values().length];
        f5093a = iArr;
        try {
            iArr[Action.Type.ACTIVITY.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f5093a[Action.Type.BROADCAST.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
    }
}
