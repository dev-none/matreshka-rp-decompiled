package com.my.target;

import com.my.target.common.models.ImageData;

/* JADX INFO: loaded from: classes6.dex */
public final class u8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4834a;
    public final double b;
    public final boolean c;
    public final Integer d;
    public final ImageData e;

    public u8(String str, double d, boolean z, Integer num, ImageData imageData) {
        this.f4834a = str;
        this.b = d;
        this.c = z;
        this.d = num;
        this.e = imageData;
    }

    public static u8 a(String str, double d, boolean z, Integer num, ImageData imageData) {
        return new u8(str, d, z, num, imageData);
    }

    public double b() {
        return this.b;
    }

    public Integer c() {
        return this.d;
    }

    public boolean d() {
        return this.c;
    }

    public String e() {
        return this.f4834a;
    }

    public ImageData a() {
        return this.e;
    }
}
