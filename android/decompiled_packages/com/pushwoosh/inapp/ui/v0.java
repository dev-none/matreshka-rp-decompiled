package com.pushwoosh.inapp.ui;

import android.content.Context;
import java.lang.ref.WeakReference;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class v0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final v0 f5172a = new v0();
    public static volatile g1 b;
    public static volatile j0 c;
    public static volatile WeakReference d;

    public final j0 a(Context context) {
        j0 j0Var;
        Intrinsics.checkNotNullParameter(context, "context");
        j0 j0Var2 = c;
        if (j0Var2 != null) {
            return j0Var2;
        }
        synchronized (this) {
            j0Var = c;
            if (j0Var == null) {
                Context applicationContext = context.getApplicationContext();
                Intrinsics.checkNotNullExpressionValue(applicationContext, "context.applicationContext");
                j0Var = new j0(applicationContext);
                c = j0Var;
            }
        }
        return j0Var;
    }

    public final g1 b(Context context) {
        g1 g1Var;
        Intrinsics.checkNotNullParameter(context, "context");
        g1 g1Var2 = b;
        if (g1Var2 != null) {
            return g1Var2;
        }
        synchronized (this) {
            g1Var = b;
            if (g1Var == null) {
                g1Var = new g1(f5172a.a(context), t0.f5166a, u0.f5169a);
                Context appContext = context.getApplicationContext();
                Intrinsics.checkNotNullExpressionValue(appContext, "appContext");
                g1Var.e = new h1(new z(appContext), new a1(g1Var));
                b = g1Var;
            }
        }
        return g1Var;
    }
}
