package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public final class ob {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4760a;
    public final String b;
    public final String c;

    public ob(String str, String str2, String str3) {
        this.f4760a = str;
        this.b = str2;
        this.c = str3;
    }

    public static ob a(String str) {
        return new ob(str, null, null);
    }

    public static ob a(String str, String str2, String str3) {
        return new ob(str, str2, str3);
    }
}
