package com.pushwoosh.e;

import com.pushwoosh.internal.platform.AndroidPlatformModule;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes6.dex */
public abstract class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final com.pushwoosh.m.a f5061a;
    public static final com.pushwoosh.k.c b;
    public static final com.pushwoosh.h.e c;
    public static volatile com.pushwoosh.m.b d;
    public static final Object e;
    public static volatile com.pushwoosh.j.d f;
    public static final Object g;

    static {
        com.pushwoosh.m.a aVar = new com.pushwoosh.m.a(AndroidPlatformModule.getApplicationContext());
        f5061a = aVar;
        b = new com.pushwoosh.k.c(aVar);
        c = new com.pushwoosh.h.e(aVar);
        e = new Object();
        g = new Object();
    }

    public static com.pushwoosh.j.d a() {
        synchronized (g) {
            if (f == null) {
                if (AndroidPlatformModule.getApplicationContext() == null) {
                    return null;
                }
                f = new com.pushwoosh.j.d(b(), b, c, f5061a, Executors.newSingleThreadExecutor());
            }
            return f;
        }
    }

    public static com.pushwoosh.m.c b() {
        synchronized (e) {
            if (d == null) {
                if (AndroidPlatformModule.getApplicationContext() == null) {
                    return null;
                }
                d = new com.pushwoosh.m.b(AndroidPlatformModule.getApplicationContext());
            }
            return d;
        }
    }
}
