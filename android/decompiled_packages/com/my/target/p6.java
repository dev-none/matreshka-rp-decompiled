package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class p6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f4769a;
    public final String b;

    public p6() {
        this.f4769a = -1;
        this.b = "none";
    }

    public static p6 a(String str) {
        str.getClass();
        str.hashCode();
        int i = 1;
        switch (str) {
            case "none":
                i = -1;
                break;
            case "portrait":
                break;
            case "landscape":
                i = 0;
                break;
            default:
                return null;
        }
        return new p6(str, i);
    }

    public static p6 b() {
        return new p6();
    }

    public String toString() {
        return this.b;
    }

    public p6(String str, int i) {
        this.b = str;
        this.f4769a = i;
    }

    public int a() {
        return this.f4769a;
    }
}
