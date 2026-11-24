package com.my.target;

import com.my.target.common.models.ImageData;

/* JADX INFO: loaded from: classes6.dex */
public final class o1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4755a;
    public final String b;
    public final String c;
    public final Integer d;
    public final Integer e;
    public final ImageData f;

    public o1(String str, String str2, String str3, Integer num, Integer num2, ImageData imageData) {
        this.f4755a = str;
        this.b = str2;
        this.c = str3;
        this.d = num;
        this.e = num2;
        this.f = imageData;
    }

    public static o1 a(String str, String str2, String str3, Integer num, Integer num2, ImageData imageData) {
        return new o1(str, str2, str3, num, num2, imageData);
    }

    public Integer b() {
        return this.d;
    }

    public String c() {
        return this.c;
    }

    public Integer d() {
        return this.e;
    }

    public ImageData e() {
        return this.f;
    }

    public String f() {
        return this.b;
    }

    public String a() {
        return this.f4755a;
    }
}
