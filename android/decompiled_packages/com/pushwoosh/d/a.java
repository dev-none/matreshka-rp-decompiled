package com.pushwoosh.d;

import com.pushwoosh.e0.l;
import com.pushwoosh.function.Callback;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ com.pushwoosh.featureflags.a f5051a;

    public a(com.pushwoosh.featureflags.a aVar) {
        this.f5051a = aVar;
    }

    /* JADX WARN: Code duplicated, block: B:11:0x002a  */
    @Override // java.lang.Runnable
    public final void run() {
        long j;
        if (this.f5051a.l) {
            return;
        }
        com.pushwoosh.featureflags.a aVar = this.f5051a;
        aVar.e.getClass();
        long jA = l.a() - aVar.c.e.get();
        if (jA >= 0) {
            long j2 = com.pushwoosh.featureflags.a.D;
            if (jA >= j2) {
                j = 0;
            } else {
                j = j2 - jA;
            }
        } else {
            j = 0;
        }
        if (j > 0) {
            this.f5051a.j.postDelayed(this, j);
        } else {
            this.f5051a.b((Callback) null, false);
            this.f5051a.j.postDelayed(this, com.pushwoosh.featureflags.a.D);
        }
    }
}
