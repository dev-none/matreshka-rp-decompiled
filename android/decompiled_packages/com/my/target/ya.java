package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class ya {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4874a;
    public final String b;
    public boolean c = true;

    public ya(String str, String str2) {
        this.f4874a = str;
        this.b = str2;
    }

    public static ya a(String str, String str2) {
        return new ya(str, str2);
    }

    public String b() {
        return this.b;
    }

    public boolean c() {
        return this.c;
    }

    public String a() {
        return this.f4874a;
    }

    public void a(boolean z) {
        this.c = z;
    }
}
