package com.my.target;

import android.content.Context;

/* JADX INFO: loaded from: classes6.dex */
public final class rb extends u5 {
    public static volatile rb b;

    public static rb a() {
        rb rbVar;
        rb rbVar2 = b;
        if (rbVar2 != null) {
            return rbVar2;
        }
        synchronized (z2.class) {
            rbVar = b;
            if (rbVar == null) {
                rbVar = new rb();
                b = rbVar;
            }
        }
        return rbVar;
    }

    public void b(final String str, final u5.a aVar, final Context context) {
        f0.c(new Runnable() { // from class: com.my.target.rb$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str, aVar, context);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, u5.a aVar, Context context) {
        if (a(str, aVar)) {
            gb.a("VideoLoader: can't load. Video already loading");
        } else {
            a(str, (String) q2.a().a(str, null, context.getApplicationContext()).c());
        }
    }
}
