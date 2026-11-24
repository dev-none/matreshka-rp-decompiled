package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.networktasks.internal.ArgumentsMerger;
import io.appmetrica.analytics.networktasks.internal.BaseRequestConfig;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.v5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public abstract class AbstractC2515v5 implements InterfaceC2202ij {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public BaseRequestConfig f6363a;
    public final BaseRequestConfig.RequestConfigLoader b;
    public S5 c;

    public AbstractC2515v5(BaseRequestConfig.RequestConfigLoader<Object, S5> requestConfigLoader, C2231jm c2231jm, ArgumentsMerger<Object, Object> argumentsMerger) {
        this.b = requestConfigLoader;
        C2495ua.k().v().a(this);
        a(new S5(c2231jm, C2495ua.k().v(), C2495ua.k().s(), argumentsMerger));
    }

    public final synchronized void a(S5 s5) {
        this.c = s5;
    }

    public final synchronized ArgumentsMerger<Object, Object> b() {
        return (ArgumentsMerger) this.c.componentArguments;
    }

    public final synchronized C2231jm c() {
        return this.c.f5877a;
    }

    public final void d() {
        synchronized (this) {
            this.f6363a = null;
        }
    }

    public final synchronized void e() {
        this.f6363a = null;
    }

    public synchronized void a(Object obj) {
        if (!((ArgumentsMerger) this.c.componentArguments).compareWithOtherArguments(obj)) {
            a(new S5(c(), C2495ua.H.v(), C2495ua.H.s(), (ArgumentsMerger) ((ArgumentsMerger) this.c.componentArguments).mergeFrom(obj)));
            e();
        }
    }

    public final synchronized void a(C2231jm c2231jm) {
        a(new S5(c2231jm, C2495ua.H.v(), C2495ua.H.s(), b()));
        e();
    }

    public final synchronized BaseRequestConfig a() {
        if (this.f6363a == null) {
            this.f6363a = this.b.load(this.c);
        }
        return this.f6363a;
    }
}
