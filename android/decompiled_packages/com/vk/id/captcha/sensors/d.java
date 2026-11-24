package com.vk.id.captcha.sensors;

import android.os.HandlerThread;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HandlerThreadProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5345a;
    private volatile HandlerThread b;
    private AtomicInteger c;

    public d(String str) {
        Intrinsics.checkNotNullParameter(str, "");
        this.f5345a = str;
        this.c = new AtomicInteger();
    }

    public final HandlerThread a() {
        HandlerThread handlerThread = this.b;
        if (handlerThread != null) {
            this.c.incrementAndGet();
            return handlerThread;
        }
        synchronized (this) {
            HandlerThread handlerThread2 = this.b;
            if (handlerThread2 != null) {
                this.c.incrementAndGet();
                return handlerThread2;
            }
            HandlerThread handlerThread3 = new HandlerThread(this.f5345a);
            handlerThread3.start();
            this.b = handlerThread3;
            this.c.incrementAndGet();
            return handlerThread3;
        }
    }

    public final void b() {
        if (this.b == null) {
            this.c.decrementAndGet();
            return;
        }
        synchronized (this) {
            if (this.c.decrementAndGet() == 0) {
                HandlerThread handlerThread = this.b;
                if (handlerThread != null) {
                    handlerThread.quit();
                }
                this.b = null;
            }
            Unit unit = Unit.INSTANCE;
        }
    }
}
