package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.reflect.InvocationTargetException;
import java.util.Arrays;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﹱ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC1055 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final /* synthetic */ int f3806 = 0;

    static {
        StringFog.decrypt("zuLelhDPgurj6d6WD/m95Ozs2pIOzpzk8f78kx39hODw\n", "go2993yN8IU=\n");
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static Object m8873(Context context) {
        Class<?> cls;
        try {
            String strDecrypt = StringFog.decrypt("jHFwaVl8mSrDc3t4V3mfIIJ+cHhXZok/jHF1fFNn0zGCcWB+WGHTHoJ8dXd0Z5IziXx1aEJYnDyM\neHFp\n", "7R8UGzYV/VI=\n");
            String str = AbstractC0765.f2620;
            try {
                cls = Class.forName(strDecrypt);
            } catch (Throwable unused) {
                cls = null;
            }
            return AbstractC0765.m8716(cls, StringFog.decrypt("laiczQSQemOcro0=\n", "8s3ohGrjDgI=\n"), Arrays.asList(context)).invoke(null, context);
        } catch (IllegalAccessException | InvocationTargetException unused2) {
            return null;
        }
    }
}
