package com.my.target;

import android.content.Context;

/* JADX INFO: loaded from: classes6.dex */
public abstract class c2 {
    public static boolean a(String str, Context context) {
        int iCheckCallingOrSelfPermission;
        try {
            iCheckCallingOrSelfPermission = context.checkCallingOrSelfPermission(str);
        } catch (Throwable th) {
            gb.a("FPDataProvider: Unable to check " + str + " permission! Unexpected throwable in Context.checkCallingOrSelfPermission() method - " + th.getMessage());
            iCheckCallingOrSelfPermission = -1;
        }
        return iCheckCallingOrSelfPermission == 0;
    }
}
