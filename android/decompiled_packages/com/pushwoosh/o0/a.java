package com.pushwoosh.o0;

import com.pushwoosh.richmedia.RichMediaColorScheme;

/* JADX INFO: loaded from: classes6.dex */
public abstract /* synthetic */ class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final /* synthetic */ int[] f5299a;

    static {
        int[] iArr = new int[RichMediaColorScheme.values().length];
        f5299a = iArr;
        try {
            iArr[RichMediaColorScheme.LIGHT.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f5299a[RichMediaColorScheme.DARK.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f5299a[RichMediaColorScheme.SYSTEM.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            f5299a[RichMediaColorScheme.APP.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
    }
}
