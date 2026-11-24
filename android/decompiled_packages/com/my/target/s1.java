package com.my.target;

import android.os.Build;

/* JADX INFO: loaded from: classes6.dex */
public final class s1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4810a;
    public final String b;
    public final String c;
    public final String d;
    public final String e;
    public final String f;
    public final int g;
    public final String h;
    public final String i;
    public final String j;

    public s1() {
        this.f4810a = "Android";
        this.b = Build.VERSION.RELEASE;
        this.c = Build.DEVICE;
        this.d = Build.MODEL;
        this.e = Build.MANUFACTURER;
        this.f = "5.27.2";
        this.g = 5027002;
        this.j = "";
        this.h = "";
        this.i = "";
    }

    public s1(String str, String str2, String str3) {
        this.f4810a = "Android";
        this.b = Build.VERSION.RELEASE;
        this.c = Build.DEVICE;
        this.d = Build.MODEL;
        this.e = Build.MANUFACTURER;
        this.f = "5.27.2";
        this.g = 5027002;
        this.j = str;
        this.h = str2;
        this.i = str3;
    }
}
