package io.appmetrica.analytics.impl;

import android.os.Handler;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import java.util.HashMap;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ok, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2356ok {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2331nk f6244a;
    public volatile G9 b;
    public volatile G9 c;
    public volatile G9 d;
    public volatile G9 e;
    public volatile G9 f;
    public volatile G9 g;
    public volatile ExecutorC2306mk h;

    public C2356ok() {
        this(new C2331nk());
    }

    public final IHandlerExecutor a() {
        if (this.g == null) {
            synchronized (this) {
                if (this.g == null) {
                    this.f6244a.getClass();
                    HandlerThreadC2220jb handlerThreadC2220jbA = G9.a("IAA-SDE");
                    this.g = new G9(handlerThreadC2220jbA, handlerThreadC2220jbA.getLooper(), new Handler(handlerThreadC2220jbA.getLooper()));
                }
            }
        }
        return this.g;
    }

    public final IHandlerExecutor b() {
        if (this.b == null) {
            synchronized (this) {
                if (this.b == null) {
                    this.f6244a.getClass();
                    HandlerThreadC2220jb handlerThreadC2220jbA = G9.a("IAA-SC");
                    this.b = new G9(handlerThreadC2220jbA, handlerThreadC2220jbA.getLooper(), new Handler(handlerThreadC2220jbA.getLooper()));
                }
            }
        }
        return this.b;
    }

    public final IHandlerExecutor c() {
        if (this.d == null) {
            synchronized (this) {
                if (this.d == null) {
                    this.f6244a.getClass();
                    HandlerThreadC2220jb handlerThreadC2220jbA = G9.a("IAA-SMH-1");
                    this.d = new G9(handlerThreadC2220jbA, handlerThreadC2220jbA.getLooper(), new Handler(handlerThreadC2220jbA.getLooper()));
                }
            }
        }
        return this.d;
    }

    public final IHandlerExecutor d() {
        if (this.e == null) {
            synchronized (this) {
                if (this.e == null) {
                    this.f6244a.getClass();
                    HandlerThreadC2220jb handlerThreadC2220jbA = G9.a("IAA-SNTPE");
                    this.e = new G9(handlerThreadC2220jbA, handlerThreadC2220jbA.getLooper(), new Handler(handlerThreadC2220jbA.getLooper()));
                }
            }
        }
        return this.e;
    }

    public final IHandlerExecutor e() {
        if (this.c == null) {
            synchronized (this) {
                if (this.c == null) {
                    this.f6244a.getClass();
                    HandlerThreadC2220jb handlerThreadC2220jbA = G9.a("IAA-STE");
                    this.c = new G9(handlerThreadC2220jbA, handlerThreadC2220jbA.getLooper(), new Handler(handlerThreadC2220jbA.getLooper()));
                }
            }
        }
        return this.c;
    }

    public C2356ok(C2331nk c2331nk) {
        new HashMap();
        this.f6244a = c2331nk;
    }
}
