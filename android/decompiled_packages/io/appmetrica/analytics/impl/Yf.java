package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.backport.Consumer;
import io.appmetrica.analytics.coreapi.internal.backport.Function;
import java.io.File;

/* JADX INFO: loaded from: classes7.dex */
public final class Yf implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final File f5971a;
    public final Function b;
    public final Consumer c;
    public final Consumer d;
    public final C2142ga e;
    public final InterfaceC2101el f;

    public Yf(File file, Function function, Consumer consumer, Consumer consumer2, C2142ga c2142ga, InterfaceC2101el interfaceC2101el) {
        this.f5971a = file;
        this.b = function;
        this.c = consumer;
        this.d = consumer2;
        this.e = c2142ga;
        this.f = interfaceC2101el;
    }

    public static final void a(File file) {
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.f5971a.exists()) {
            E9 e9B = this.e.b(this.f5971a.getName());
            Consumer consumer = this.c;
            try {
                e9B.f5656a.lock();
                e9B.b.a();
                if (!this.f5971a.exists()) {
                    consumer.consume(this.f5971a);
                    e9B.c();
                    C2142ga c2142ga = this.e;
                    String name = this.f5971a.getName();
                    synchronized (c2142ga) {
                        c2142ga.b.remove(name);
                    }
                    return;
                }
                Object objApply = this.b.apply(this.f5971a);
                if (objApply != null) {
                    if (this.f.a(objApply)) {
                        this.d.consume(objApply);
                    } else {
                        consumer = new Consumer() { // from class: io.appmetrica.analytics.impl.Yf$$ExternalSyntheticLambda0
                            @Override // io.appmetrica.analytics.coreapi.internal.backport.Consumer
                            public final void consume(Object obj) {
                                Yf.a((File) obj);
                            }
                        };
                    }
                }
            } catch (Throwable unused) {
            }
            consumer.consume(this.f5971a);
            e9B.c();
            this.e.a(this.f5971a.getName());
        }
    }
}
