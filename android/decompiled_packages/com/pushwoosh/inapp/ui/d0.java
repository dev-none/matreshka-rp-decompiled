package com.pushwoosh.inapp.ui;

/* JADX INFO: loaded from: classes6.dex */
public abstract class d0 {
    public static int a(long j, long j2, long j3, long j4) {
        return (int) (((j & 255) << 24) | ((j2 & 255) << 16) | ((j3 & 255) << 8) | (j4 & 255));
    }

    public static long a(long j, int i) {
        return ((j >> (i * 4)) & 15) * ((long) 17);
    }
}
