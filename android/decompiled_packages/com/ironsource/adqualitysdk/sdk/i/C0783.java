package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.os.Handler;
import android.os.HandlerThread;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴠ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0783 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static Handler f2639;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0385 f2640;

    public C0783(Context context, String str, String str2) {
        this.f2640 = new C0385(context, str, str2);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static Handler m8721() {
        Handler handler;
        synchronized (C0783.class) {
            if (f2639 == null) {
                HandlerThread handlerThread = new HandlerThread(StringFog.decrypt("WGTv7WCSkg5AdfnJYJmC\n", "EwGWuwH+52s=\n"));
                handlerThread.start();
                f2639 = new Handler(handlerThread.getLooper());
            }
            handler = f2639;
        }
        return handler;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final void m8722(String str) {
        C0385 c0385 = this.f2640;
        c0385.getClass();
        try {
            C0326 c0326 = c0385.f1449;
            synchronized (c0326) {
                c0326.f1204.delete(C0326.f1203, StringFog.decrypt("bNfH6GQ=\n", "B7K+1Vu70G4=\n"), new String[]{str});
            }
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String m8723(String str) {
        C0385 c0385 = this.f2640;
        c0385.getClass();
        try {
            String strM8488 = c0385.f1449.m8488(str);
            if (strM8488 == null || TextUtils.isEmpty(strM8488)) {
                return strM8488;
            }
            try {
                return c0385.f1450.m8506(strM8488);
            } catch (C0393 unused) {
                return "";
            }
        } catch (Throwable unused2) {
            return null;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8724(String str, String str2) {
        C0385 c0385 = this.f2640;
        c0385.getClass();
        try {
            c0385.f1449.m8490(str, c0385.f1450.m8507(str2));
        } catch (Throwable unused) {
        }
    }
}
