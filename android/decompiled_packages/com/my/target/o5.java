package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public abstract class o5 {
    public static String a() {
        try {
            Object obj = Class.forName("kotlin.KotlinVersion").getDeclaredField("CURRENT").get(new Object());
            return obj == null ? "0" : obj.toString();
        } catch (Throwable unused) {
            return "0";
        }
    }
}
