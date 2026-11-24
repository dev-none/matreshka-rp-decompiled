package com.my.tracker.obfuscated;

import android.content.Context;
import android.os.Build;

/* JADX INFO: loaded from: classes6.dex */
public abstract class m1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final boolean f4972a;
    public static final boolean b;

    static {
        int i = Build.VERSION.SDK_INT;
        f4972a = i <= 30;
        b = i <= 30 && !Build.MODEL.equals("Pixel 5");
    }

    public static boolean a() {
        return false;
    }

    public static boolean a(String str, Context context) {
        return context.checkCallingOrSelfPermission(str) == 0;
    }
}
