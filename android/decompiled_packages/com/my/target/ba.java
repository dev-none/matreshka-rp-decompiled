package com.my.target;

import android.content.Context;
import io.appmetrica.analytics.plugins.PluginErrorDetails;

/* JADX INFO: loaded from: classes6.dex */
public abstract class ba {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f4557a;

    static {
        if (w5.a()) {
            f4557a |= 2;
        }
        if (b()) {
            f4557a |= 1;
        }
    }

    public static void b(final Context context) {
        f0.e(new Runnable() { // from class: com.my.target.ba$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                v8.a(context).b(ba.f4557a);
            }
        });
    }

    public static void c() {
        f4557a |= 8;
    }

    public static void d() {
        f4557a |= 4;
    }

    public static void e() {
        f4557a |= 64;
    }

    public static void f() {
        f4557a |= 128;
    }

    public static void g() {
        f4557a &= -3;
    }

    public static int a() {
        return f4557a;
    }

    public static void b(boolean z) {
        if (z) {
            f4557a |= 32;
        } else {
            f4557a &= -33;
        }
    }

    public static void a(boolean z) {
        if (z) {
            f4557a |= 16;
        } else {
            f4557a &= -17;
        }
    }

    public static boolean b() {
        try {
            try {
                Class.forName("com.unity3d.player.UnityPlayerActivity");
                return true;
            } catch (Throwable unused) {
                return false;
            }
        } catch (Throwable unused2) {
            Runtime.getRuntime().loadLibrary(PluginErrorDetails.Platform.UNITY);
            return true;
        }
    }
}
