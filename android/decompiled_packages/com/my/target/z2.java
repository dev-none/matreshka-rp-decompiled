package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;

/* JADX INFO: loaded from: classes6.dex */
public final class z2 extends u5 {
    public static volatile z2 b;

    public static z2 a() {
        z2 z2Var;
        z2 z2Var2 = b;
        if (z2Var2 != null) {
            return z2Var2;
        }
        synchronized (z2.class) {
            z2Var = b;
            if (z2Var == null) {
                z2Var = new z2();
                b = z2Var;
            }
        }
        return z2Var;
    }

    public void b(final String str, final u5.a aVar, final Context context) {
        f0.c(new Runnable() { // from class: com.my.target.z2$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str, aVar, context);
            }
        });
    }

    public final /* synthetic */ void a(String str, u5.a aVar, Context context) {
        if (a(str, aVar)) {
            gb.a("ImageLoader: can't load. Image already loading");
        } else {
            a(str, (Bitmap) l2.a().a(str, (String) null, context.getApplicationContext()).c());
        }
    }
}
