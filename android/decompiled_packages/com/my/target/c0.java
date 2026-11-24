package com.my.target;

import android.content.Context;

/* JADX INFO: loaded from: classes6.dex */
public abstract class c0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String[] f4562a = {"com.vkontakte.android", "com.my.targetdemo5.initauto", "com.my.targetdemo5.initmanual", "com.my.targetdemo5.logoff"};

    public static boolean a(Context context) {
        String packageName = context.getPackageName();
        for (String str : f4562a) {
            if (str.equals(packageName)) {
                return true;
            }
        }
        return false;
    }
}
