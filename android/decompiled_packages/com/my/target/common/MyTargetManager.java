package com.my.target.common;

import android.content.Context;
import com.my.target.a7;
import com.my.target.d2;
import com.my.target.f0;
import com.my.target.gb;
import com.my.target.i6;
import com.my.target.o5;
import com.my.target.q5;
import com.my.target.r5;
import com.my.target.t1;
import com.my.target.v1;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.HashMap;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTargetManager {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final AtomicBoolean f4584a = new AtomicBoolean();
    public static volatile MyTargetConfig b = new MyTargetConfig.Builder().build();

    public static /* synthetic */ void a(Context context) {
        v1.a(context);
        r5.c(context);
        d2.b().a(b, context);
        a7.a(context);
        f0.b();
        b(context);
        t1 t1VarA = d2.b().a();
        if (t1VarA == null) {
            i6.a(StringUtils.UNDEFINED, StringUtils.UNDEFINED, StringUtils.UNDEFINED, context);
        } else {
            i6.a(t1VarA.f4822a, t1VarA.d, t1VarA.e, context);
        }
    }

    public static void b(Context context) {
        String strA = o5.a();
        HashMap map = new HashMap(1);
        map.put("kotlin_version", strA);
        q5.b("SDK Launch").a(map).b(context);
    }

    public static String getBidderToken(Context context) {
        return d2.b().a(b, MyTargetPrivacy.currentPrivacy(), context);
    }

    public static MyTargetConfig getSdkConfig() {
        return b;
    }

    public static void initSdk(Context context) {
        final Context applicationContext = context.getApplicationContext();
        if (applicationContext == null) {
            gb.c("MyTarget cannot be initialized due to a null application context");
        } else if (f4584a.compareAndSet(false, true)) {
            gb.c("MyTarget initialization");
            f0.b(new Runnable() { // from class: com.my.target.common.MyTargetManager$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    MyTargetManager.a(applicationContext);
                }
            });
        }
    }

    public static boolean isSdkInitialized() {
        return f4584a.get();
    }

    public static void setDebugMode(boolean z) {
        gb.f4640a = z;
        if (z) {
            gb.a("Debug mode enabled");
        }
    }

    public static void setSdkConfig(MyTargetConfig myTargetConfig) {
        b = myTargetConfig;
    }
}
