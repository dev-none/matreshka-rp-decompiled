package com.my.tracker.obfuscated;

import android.content.Context;
import android.text.TextUtils;
import java.util.UUID;

/* JADX INFO: loaded from: classes6.dex */
public abstract class c3 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile String f4926a;

    public static String a(Context context) {
        String strK;
        String str = f4926a;
        if (str != null) {
            return str;
        }
        synchronized (c3.class) {
            strK = f4926a;
            if (strK == null) {
                strK = p1.a(context).k();
                if (TextUtils.isEmpty(strK)) {
                    strK = UUID.randomUUID().toString();
                    p1.a(context).k(strK);
                    f4926a = strK;
                }
            }
        }
        return strK;
    }
}
