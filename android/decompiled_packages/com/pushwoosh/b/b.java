package com.pushwoosh.b;

import android.os.Handler;
import android.os.Looper;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5037a;
    public final long b;
    public final a c;
    public final Handler d;
    public final Runnable e;
    public String f;
    public long g;

    public b(int i, a aVar) {
        if (i < 10) {
            PWLog.warn("ExitIntentDetector", "Exit Intent timeout " + i + "s is below minimum (10s). Using 10s.");
        } else if (i > 30) {
            PWLog.warn("ExitIntentDetector", "Exit Intent timeout " + i + "s exceeds maximum (30s). Using 30s.");
        }
        int iMin = Math.min(30, Math.max(10, i));
        this.f5037a = iMin;
        this.b = ((long) iMin) * 1000;
        this.c = aVar;
        this.d = new Handler(Looper.getMainLooper());
        this.e = new Runnable() { // from class: com.pushwoosh.b.b$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a();
            }
        };
    }

    public final void a() {
        PWLog.debug("ExitIntentDetector", "Exit intent detected for " + this.f + " after " + this.f5037a + "s");
        this.c.a(this.f, this.g, this.f5037a);
        this.f = null;
        this.g = 0L;
    }
}
