package com.my.tracker.obfuscated;

import android.content.Context;
import com.my.tracker.MyTrackerParams;
import java.util.Objects;

/* JADX INFO: loaded from: classes6.dex */
public final class l2 implements u2, t2 {
    private static volatile l2 g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final i2 f4966a = new i2(h2.f4948a, new z2() { // from class: com.my.tracker.obfuscated.l2$$ExternalSyntheticLambda4
        @Override // com.my.tracker.obfuscated.z2
        public final void a(Object obj, Object obj2, Object obj3) {
            this.f$0.b((q2) obj, (Boolean) obj2, (b3) obj3);
        }
    });
    private y2 b;
    private Context c;
    o2 d;
    m2 e;
    k2 f;

    private l2() {
    }

    static l2 c() {
        l2 l2Var;
        l2 l2Var2 = g;
        if (l2Var2 != null) {
            return l2Var2;
        }
        synchronized (l2.class) {
            l2Var = g;
            if (l2Var == null) {
                l2Var = new l2();
                g = l2Var;
            }
        }
        return l2Var;
    }

    public static t2 d() {
        return c();
    }

    public static u2 e() {
        return c();
    }

    @Override // com.my.tracker.obfuscated.t2
    public void a(y2 y2Var, Context context) {
        p2 p2VarA = p2.a(700, y2Var, context);
        this.d = p2VarA;
        this.e = m2.a(10, y2Var, p2VarA);
        final i2 i2Var = this.f4966a;
        Objects.requireNonNull(i2Var);
        s sVar = new s() { // from class: com.my.tracker.obfuscated.l2$$ExternalSyntheticLambda0
            @Override // com.my.tracker.obfuscated.s
            public final void a(Object obj) {
                i2Var.a((Boolean) obj);
            }
        };
        final i2 i2Var2 = this.f4966a;
        Objects.requireNonNull(i2Var2);
        y2Var.a(sVar, new s() { // from class: com.my.tracker.obfuscated.l2$$ExternalSyntheticLambda1
            @Override // com.my.tracker.obfuscated.s
            public final void a(Object obj) {
                i2Var2.b((Boolean) obj);
            }
        });
        MyTrackerParams myTrackerParamsM = y2Var.m();
        final i2 i2Var3 = this.f4966a;
        Objects.requireNonNull(i2Var3);
        s sVar2 = new s() { // from class: com.my.tracker.obfuscated.l2$$ExternalSyntheticLambda2
            @Override // com.my.tracker.obfuscated.s
            public final void a(Object obj) {
                i2Var3.b((b3) obj);
            }
        };
        final i2 i2Var4 = this.f4966a;
        Objects.requireNonNull(i2Var4);
        myTrackerParamsM.a(sVar2, new s() { // from class: com.my.tracker.obfuscated.l2$$ExternalSyntheticLambda3
            @Override // com.my.tracker.obfuscated.s
            public final void a(Object obj) {
                i2Var4.a((b3) obj);
            }
        });
        this.f4966a.a();
        this.f = new k2();
        this.c = context;
        this.b = y2Var;
        x2.a("TimeSpentModule: TimeSpentModule initialized");
    }

    @Override // com.my.tracker.obfuscated.t2
    public synchronized void b() {
        x2.a("TimeSpentModule: onAppGoingBackground");
        if (this.d == null) {
            x2.a("TimeSpentModule: An error occurred during initialization, TimeSpent functionality is not available");
        } else {
            this.f4966a.d();
        }
    }

    @Override // com.my.tracker.obfuscated.u2
    public synchronized void b(int i, boolean z) {
        x2.a("TimeSpentModule: stopTimeSpent id = " + i + ", canUseInBackground = " + z);
        if (this.d == null) {
            x2.c("TimeSpent: An error occurred during initialization, TimeSpent functionality is not available (called stopTimeSpent id = " + i + ")");
            return;
        }
        this.f4966a.b(i, z);
    }

    void b(final q2 q2Var, final Boolean bool, final b3 b3Var) {
        x2.a("TimeSpentModule: core tick DTO collected, sending to repository...");
        if (this.d == null) {
            x2.b("TimeSpentModule: repository was not created, can't store and send this packet, drop");
            return;
        }
        if (this.f == null) {
            x2.a("TimeSpentModule: packetGenerator was not initialized, drop");
        } else if (this.b == null) {
            x2.a("TimeSpentModule: config is not specified, drop");
        } else {
            m.d(new Runnable() { // from class: com.my.tracker.obfuscated.l2$$ExternalSyntheticLambda5
                @Override // java.lang.Runnable
                public final void run() throws Throwable {
                    this.f$0.a(q2Var, bool, b3Var);
                }
            });
        }
    }

    @Override // com.my.tracker.obfuscated.t2
    public synchronized void a() {
        x2.a("TimeSpentModule: onAppGoingForeground");
        if (this.d == null) {
            x2.a("TimeSpentModule: An error occurred during initialization, TimeSpent functionality is not available");
        } else {
            this.f4966a.e();
        }
    }

    @Override // com.my.tracker.obfuscated.u2
    public synchronized void a(int i, boolean z) {
        x2.a("TimeSpentModule: startTimeSpent id = " + i + ", canUseInBackground = " + z);
        if (this.d == null) {
            x2.c("TimeSpent: An error occurred during initialization, TimeSpent functionality is not available (called startTimeSpent id = " + i + ")");
            return;
        }
        this.f4966a.a(i, z);
    }

    @Override // com.my.tracker.obfuscated.u2
    public synchronized void a(int i) {
        x2.a("TimeSpentModule: incrementEventTimeSpent id = " + i);
        if (this.d == null) {
            x2.c("TimeSpent: An error occurred during initialization, TimeSpent functionality is not available (called incrementEventTimeSpent id = " + i + ")");
            return;
        }
        this.f4966a.a(i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(q2 q2Var, Boolean bool, b3 b3Var) throws Throwable {
        if (!r2.a(q2Var)) {
            x2.a("TimeSpentModule: collected dto data is empty, no need to send");
            return;
        }
        if (!r2.c(q2Var)) {
            x2.a("TimeSpentModule: collected dto data is corrupted, sending anyway");
        }
        try {
            this.d.a(q2Var.c(), this.f.a(bool.booleanValue(), this.b.o(), b3Var, q2Var, this.b.h(), this.b.n(), this.c));
            x2.a("TimeSpentModule: successfully stored new time spent tick in repository, notifying sender...");
            this.e.c();
        } catch (Exception unused) {
            x2.b("TimeSpentModule: something went wrong while storing new timeSpentTick in repository, this tick didn't stored and wouldn't be sent");
        }
    }
}
