package com.my.tracker.obfuscated;

import android.os.SystemClock;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class i2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final z2 f4953a;
    final w2 b;
    protected boolean h = false;
    protected b3 i = b3.j;
    final a c = b();
    final j0 d = new j0();
    final c e = new c();
    final x f = new x();
    final i g = new i();

    final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final int[] f4954a = {0};
        final int[] b = {0};

        a() {
        }

        private boolean d(int i) {
            for (int i2 : this.b) {
                if (i == i2) {
                    x2.c("TimeSpentCore: you can't create timespent with id = " + i + " (reason: reserved for internal use)");
                    return true;
                }
            }
            return false;
        }

        private boolean e(int i) {
            for (int i2 : this.f4954a) {
                if (i == i2) {
                    x2.c("TimeSpentCore: you can't create timespent with id = " + i + " (reason: reserved for internal use)");
                    return true;
                }
            }
            return false;
        }

        boolean a(int i) {
            if (e(i)) {
                return false;
            }
            if (i2.this.e.b(i)) {
                x2.c("TimeSpent: you can't create timespent with id = " + i + " (reason: already have same type timespent with this id)");
                return false;
            }
            if (!i2.this.d.b(i) && !i2.this.f.a(i)) {
                return true;
            }
            x2.c("TimeSpent: you can't create timespent with id = " + i + " (reason: already have another type timespent with this id)");
            return false;
        }

        boolean b(int i) {
            if (e(i)) {
                return false;
            }
            if (i2.this.d.b(i)) {
                x2.c("TimeSpent: you can't create timespent with id = " + i + " (reason: already have same type timespent with this id)");
                return false;
            }
            if (!i2.this.e.b(i) && !i2.this.f.a(i)) {
                return true;
            }
            x2.c("TimeSpent: you can't create timespent with id = " + i + " (reason: already have another type timespent with this id)");
            return false;
        }

        boolean c(int i) {
            if (d(i)) {
                return false;
            }
            if (!i2.this.d.b(i) && !i2.this.e.b(i)) {
                return true;
            }
            x2.c("TimeSpent: you can't create timespent with id = " + i + " (reason: already have another type timespent with this id)");
            return false;
        }
    }

    public i2(long j, z2 z2Var) {
        this.f4953a = z2Var;
        this.b = w2.a(j, new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.f();
            }
        });
        x2.a("TimeSpentCore: created");
    }

    public void a(Boolean bool) {
        this.h = bool.booleanValue();
    }

    public void b(b3 b3Var) {
        this.i = b3Var;
    }

    public void d() {
        final long jUptimeMillis = SystemClock.uptimeMillis();
        m.c(new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.c(jUptimeMillis);
            }
        });
    }

    public void e() {
        final long jUptimeMillis = SystemClock.uptimeMillis();
        m.c(new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda9
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.d(jUptimeMillis);
            }
        });
    }

    public void a() {
        m.c(new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda3
            @Override // java.lang.Runnable
            public final void run() throws Throwable {
                this.f$0.c();
            }
        });
    }

    public void b(final Boolean bool) {
        final long jUptimeMillis = SystemClock.uptimeMillis();
        final long jCurrentTimeMillis = System.currentTimeMillis();
        m.c(new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() throws Throwable {
                this.f$0.a(bool, jUptimeMillis, jCurrentTimeMillis);
            }
        });
    }

    public void f() {
        final long jUptimeMillis = SystemClock.uptimeMillis();
        final long jCurrentTimeMillis = System.currentTimeMillis();
        m.c(new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda11
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(jUptimeMillis, jCurrentTimeMillis);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Boolean bool, long j, long j2) throws Throwable {
        i2 i2Var;
        boolean zBooleanValue = bool.booleanValue();
        boolean z = this.h;
        if (zBooleanValue != z) {
            i2Var = this;
            i2Var.a(j, j2, z, this.i);
        } else {
            i2Var = this;
        }
        i2Var.h = bool.booleanValue();
    }

    synchronized void c() throws Throwable {
        try {
            try {
                x2.a("TimeSpentCore: ***** start generating zero tick *****");
                long jUptimeMillis = SystemClock.uptimeMillis();
                long jCurrentTimeMillis = System.currentTimeMillis();
                this.f.b(0);
                b(jUptimeMillis, jCurrentTimeMillis, this.h, this.i);
                x2.a("TimeSpentCore: ***** zero tick generated *****");
            } catch (Throwable th) {
                th = th;
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    /* JADX INFO: renamed from: d, reason: merged with bridge method [inline-methods] */
    public synchronized void h(long j, int i) {
        try {
            this.d.b(i, j, this.g.c());
        } catch (Exception unused) {
        }
    }

    public void b(final int i, boolean z) {
        final long jUptimeMillis = SystemClock.uptimeMillis();
        if (z) {
            m.c(new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda5
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.g(jUptimeMillis, i);
                }
            });
        } else {
            m.c(new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda6
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.h(jUptimeMillis, i);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
    public synchronized void g(long j, int i) {
        try {
            this.e.b(i, j, this.g.c());
            if (this.g.b() && this.e.b() == 0) {
                this.g.g(j);
                x2.a("TimeSpentCore: there was last anytime TimeSpent during background state, stop tracking app useful background");
            }
        } catch (Exception unused) {
        }
    }

    public void a(final b3 b3Var) {
        final long jUptimeMillis = SystemClock.uptimeMillis();
        final long jCurrentTimeMillis = System.currentTimeMillis();
        m.c(new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda10
            @Override // java.lang.Runnable
            public final void run() throws Throwable {
                this.f$0.a(b3Var, jUptimeMillis, jCurrentTimeMillis);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(long j, long j2) {
        b(j, j2, this.h, this.i);
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public synchronized void d(long j) {
        x2.a("TimeSpentCore: ***** app is going to foreground *****");
        if (this.g.c()) {
            x2.a("TimeSpentCore: something went wrong, already in FOREGROUND state. Skip");
            return;
        }
        this.d.e(j);
        this.e.e(j);
        this.g.e(j);
        this.g.d();
        this.d.c(j);
        this.e.c(j);
        this.g.c(j);
        if (this.b.b()) {
            x2.a("TimeSpentCore: starting ticker... (reason: app going to foreground)");
            this.b.e();
        }
        x2.a("TimeSpentCore: ***** app is on foreground *****");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(b3 b3Var, long j, long j2) throws Throwable {
        i2 i2Var;
        if (l.a(this.i.g, b3Var.g) != 0) {
            i2Var = this;
            i2Var.a(j, j2, this.h, this.i);
        } else {
            i2Var = this;
        }
        i2Var.i = b3Var;
    }

    public void a(final int i, boolean z) {
        final long jUptimeMillis = SystemClock.uptimeMillis();
        if (z) {
            m.c(new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda7
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.e(jUptimeMillis, i);
                }
            });
        } else {
            m.c(new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda8
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.f(jUptimeMillis, i);
                }
            });
        }
    }

    public void a(final int i) {
        m.c(new Runnable() { // from class: com.my.tracker.obfuscated.i2$$ExternalSyntheticLambda4
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.c(i);
            }
        });
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x0011 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    synchronized void a(long r2, long r4, boolean r6, com.my.tracker.obfuscated.b3 r7) throws java.lang.Throwable {
        /*
            r1 = this;
            monitor-enter(r1)
            com.my.tracker.obfuscated.w2 r0 = r1.b     // Catch: java.lang.Throwable -> Lc
            r0.d()     // Catch: java.lang.Throwable -> Lc
            r1.b(r2, r4, r6, r7)     // Catch: java.lang.Throwable -> Lc
            r2 = r1
            monitor-exit(r1)
            return
        Lc:
            r0 = move-exception
            r2 = r1
        Le:
            r3 = r0
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L11
            throw r3
        L11:
            r0 = move-exception
            goto Le
        */
        throw new UnsupportedOperationException("Method not decompiled: com.my.tracker.obfuscated.i2.a(long, long, boolean, com.my.tracker.obfuscated.b3):void");
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public synchronized void c(long j) {
        x2.a("TimeSpentCore: ***** app is going to background *****");
        if (this.g.b()) {
            x2.a("TimeSpentCore: something went wrong, already in BACKGROUND state. Skip");
            return;
        }
        this.d.d(j);
        this.e.d(j);
        this.g.d(j);
        this.g.a(this.e.b());
        this.d.b(j);
        this.e.b(j);
        this.g.b(j);
        x2.a("TimeSpentCore: ***** app is on background *****");
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public synchronized void f(long j, int i) {
        if (this.c.b(i)) {
            this.d.a(i, j, this.g.c());
        }
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public synchronized void c(int i) {
        if (this.c.c(i)) {
            this.f.b(i);
            if (this.b.b()) {
                x2.a("TimeSpentCore: starting ticker... (reason: incremented count based TimeSpent)");
                this.b.e();
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public synchronized void e(long j, int i) {
        if (this.c.a(i)) {
            this.e.a(i, j, this.g.c());
            if (this.g.b() && this.e.b() == 1) {
                this.g.h(j);
                x2.a("TimeSpentCore: this is first anytime TimeSpent during background state, start tracking app useful background");
                this.b.e();
                x2.a("TimeSpentCore: starting ticker... (reason: first anytime timeSpent during background state)");
            }
        }
    }

    synchronized void b(long j, long j2, boolean z, b3 b3Var) {
        x2.a("TimeSpentCore: ***** onTick started ***** timestamp = " + j2);
        if (this.g.b() && this.e.b() == 0 && this.b.a()) {
            x2.a("TimeSpentCore: onTick: stopping ticker... (reason: no useful background)");
            this.b.f();
        }
        q2 q2VarA = a(j, j2);
        x2.a("TimeSpentCore: ***** onTick finished *****");
        this.f4953a.a(q2VarA, Boolean.valueOf(z), b3Var);
    }

    synchronized q2 a(long j, long j2) {
        x2.a("TimeSpentCore: start collecting DTO data, tickTimestamp = " + j2);
        boolean zC = this.g.c();
        ArrayList arrayListA = this.f.a();
        ArrayList arrayListA2 = this.e.a(j, zC);
        ArrayList arrayListA3 = this.d.a(j, zC);
        e2 e2VarA = this.g.a(j);
        ArrayList arrayList = new ArrayList(arrayListA2.size() + arrayListA3.size());
        arrayList.addAll(arrayListA2);
        arrayList.addAll(arrayListA3);
        q2 q2Var = new q2(j2, e2VarA, (e2[]) arrayList.toArray(new e2[0]), (v[]) arrayListA.toArray(new v[0]));
        if (!x2.a()) {
            return q2Var;
        }
        x2.a("TimeSpentCore: collected DTO data:\n" + q2Var);
        return q2Var;
    }

    a b() {
        return new a();
    }
}
