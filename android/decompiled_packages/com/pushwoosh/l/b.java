package com.pushwoosh.l;

/* JADX INFO: loaded from: classes6.dex */
public abstract class b {
    public static String a(String str, String str2) {
        if (str2 == null) {
            throw new IllegalArgumentException("Missing code in richMedia url: " + str);
        }
        if (str2.contains(".")) {
            str2 = str2.substring(0, str2.lastIndexOf("."));
        }
        return "r-" + str2;
    }
}
