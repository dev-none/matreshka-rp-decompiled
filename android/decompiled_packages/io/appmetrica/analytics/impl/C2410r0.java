package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.logger.appmetrica.internal.ImportantLogger;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.r0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2410r0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2001ao f6283a;
    public volatile Boolean b;
    public Ia c;
    public Ja d;

    public C2410r0() {
        this(new C2001ao());
    }

    public final synchronized Ia a(Context context, Z3 z3) {
        if (this.c == null) {
            if (a(context)) {
                this.c = new C2460t0();
            } else {
                this.c = new C2386q0(context, z3);
            }
        }
        return this.c;
    }

    public C2410r0(C2001ao c2001ao) {
        this.f6283a = c2001ao;
    }

    public final boolean a(Context context) {
        Boolean boolValueOf = this.b;
        if (boolValueOf == null) {
            synchronized (this) {
                boolValueOf = this.b;
                if (boolValueOf == null) {
                    this.f6283a.getClass();
                    boolean zA = C2001ao.a(context);
                    boolValueOf = Boolean.valueOf(!zA);
                    this.b = boolValueOf;
                    boolValueOf.getClass();
                    if (!zA) {
                        ImportantLogger.INSTANCE.info("AppMetrica", "User is locked. So use stubs. Events will not be sent.", new Object[0]);
                    }
                }
            }
        }
        return boolValueOf.booleanValue();
    }
}
