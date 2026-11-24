package io.appmetrica.analytics.impl;

import android.os.Handler;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;

/* JADX INFO: loaded from: classes7.dex */
public final class Z3 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Y3 f5980a;
    public volatile G9 b;
    public volatile G9 c;

    public Z3() {
        this(new Y3());
    }

    public final IHandlerExecutor a() {
        if (this.b == null) {
            synchronized (this) {
                if (this.b == null) {
                    this.f5980a.getClass();
                    HandlerThreadC2220jb handlerThreadC2220jbA = G9.a("IAA-CDE");
                    this.b = new G9(handlerThreadC2220jbA, handlerThreadC2220jbA.getLooper(), new Handler(handlerThreadC2220jbA.getLooper()));
                }
            }
        }
        return this.b;
    }

    public final ICommonExecutor b() {
        if (this.c == null) {
            synchronized (this) {
                if (this.c == null) {
                    this.f5980a.getClass();
                    HandlerThreadC2220jb handlerThreadC2220jbA = G9.a("IAA-CRS");
                    this.c = new G9(handlerThreadC2220jbA, handlerThreadC2220jbA.getLooper(), new Handler(handlerThreadC2220jbA.getLooper()));
                }
            }
        }
        return this.c;
    }

    public Z3(Y3 y3) {
        this.f5980a = y3;
    }
}
