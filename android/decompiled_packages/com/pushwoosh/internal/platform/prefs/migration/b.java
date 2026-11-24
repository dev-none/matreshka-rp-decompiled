package com.pushwoosh.internal.platform.prefs.migration;

/* JADX INFO: loaded from: classes6.dex */
public abstract /* synthetic */ class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final /* synthetic */ int[] f5204a;

    static {
        int[] iArr = new int[MigrationScheme.AvailableType.values().length];
        f5204a = iArr;
        try {
            iArr[MigrationScheme.AvailableType.STRING.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f5204a[MigrationScheme.AvailableType.BOOLEAN.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f5204a[MigrationScheme.AvailableType.LONG.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            f5204a[MigrationScheme.AvailableType.INT.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
    }
}
