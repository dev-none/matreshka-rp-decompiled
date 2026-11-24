package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.backport.Consumer;
import java.io.File;
import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.n6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2317n6 implements Consumer {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Executor f6220a;
    public final Zg b;

    public C2317n6(Context context, InterfaceC2241k6 interfaceC2241k6, EnumC2195ib enumC2195ib, InterfaceC2101el interfaceC2101el, Executor executor, String str) {
        this.f6220a = executor;
        this.b = new Zg(context, interfaceC2241k6, enumC2195ib, interfaceC2101el);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.backport.Consumer
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void consume(File file) {
        if (file == null) {
            return;
        }
        Executor executor = this.f6220a;
        Zg zg = this.b;
        C2496ub c2496ub = zg.c;
        Consumer consumer = zg.e;
        Context context = zg.f5988a;
        if (C2142ga.c == null) {
            synchronized (Reflection.getOrCreateKotlinClass(C2142ga.class)) {
                if (C2142ga.c == null) {
                    C2142ga.c = new C2142ga(context);
                }
                Unit unit = Unit.INSTANCE;
            }
        }
        C2142ga c2142ga = C2142ga.c;
        if (c2142ga == null) {
            Intrinsics.throwUninitializedPropertyAccessException("INSTANCE");
            c2142ga = null;
        }
        executor.execute(new Yf(file, c2496ub, c2496ub, consumer, c2142ga, zg.b));
    }
}
