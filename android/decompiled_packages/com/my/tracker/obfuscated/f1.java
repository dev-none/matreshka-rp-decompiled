package com.my.tracker.obfuscated;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class f1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final d1 f4939a;
    final int b;
    final int c;
    final int d;
    final int e;
    long f;
    long g;

    private f1(d1 d1Var, int i, int i2, int i3, int i4) {
        this.f4939a = d1Var;
        this.b = i;
        this.c = i2;
        this.d = i3;
        this.e = i4;
        Long lB = d1Var.b("timestamp_base");
        if (lB == null) {
            this.f = 0L;
        } else {
            this.f = lB.longValue();
        }
        this.g = d1Var.l();
    }

    public static f1 a(d1 d1Var) {
        return a(d1Var, 1000, 500, 500, 100);
    }

    public x1 b() {
        return new y1(this.f4939a);
    }

    public z1 c() {
        return new a2(this.f4939a, "default_session");
    }

    public boolean d(byte[] bArr, long j) {
        try {
            if (this.f4939a.f(6L) >= this.c) {
                long jLongValue = 0;
                if (this.f4939a.a(6L, bArr) == 0) {
                    x2.a("MyTrackerRepository: maximum count of custom events is exceeded, event has been skipped");
                    Long lB = this.f4939a.b("custom_events_skipped_count");
                    if (lB != null) {
                        jLongValue = lB.longValue();
                    }
                    long j2 = jLongValue + 1;
                    x2.a("MyTrackerRepository: skipped custom events count: " + j2);
                    this.f4939a.a("custom_events_skipped_count", Long.valueOf(j2));
                    return false;
                }
            }
            return a(6, bArr, false, true, j);
        } catch (Throwable th) {
            x2.b("MyTrackerRepository error: event serialization failed, type: 6", th);
            return false;
        }
    }

    public List e() {
        ArrayList arrayList = new ArrayList();
        d1.b bVarH = null;
        try {
            bVarH = this.f4939a.h();
            while (bVarH.b()) {
                f fVarA = f.a(bVarH.m(), bVarH.n(), bVarH.o(), bVarH.p(), bVarH.e());
                if (fVarA != null) {
                    arrayList.add(fVarA.a(Long.valueOf(bVarH.a())));
                }
            }
            bVarH.close();
            return arrayList;
        } catch (Throwable th) {
            try {
                x2.b("MyTrackerRepository error: error while reading purchases", th);
                return arrayList;
            } finally {
                if (bVarH != null) {
                    bVarH.close();
                }
            }
        }
    }

    public long f() {
        try {
            Long lB = this.f4939a.b("custom_events_skipped_count");
            if (lB == null) {
                return 0L;
            }
            return lB.longValue();
        } catch (Throwable th) {
            x2.b("Error: get custom events skipped count", th);
            return 0L;
        }
    }

    public List g() {
        ArrayList arrayList = new ArrayList();
        d1.e eVarK = null;
        try {
            eVarK = this.f4939a.k();
            while (eVarK.b()) {
                o0 o0VarA = o0.a(eVarK.m(), eVarK.n(), eVarK.e());
                if (o0VarA != null) {
                    arrayList.add(o0VarA.a(Long.valueOf(eVarK.a())));
                }
            }
            eVarK.close();
            return arrayList;
        } catch (Throwable th) {
            try {
                x2.b("MyTrackerRepository error: error while reading purchases", th);
                return arrayList;
            } finally {
                if (eVarK != null) {
                    eVarK.close();
                }
            }
        }
    }

    public long h() {
        return this.g;
    }

    public boolean i(byte[] bArr, long j) {
        return a(1, bArr, true, false, j);
    }

    public boolean j(byte[] bArr, long j) {
        return c(9, bArr, j);
    }

    public boolean k(byte[] bArr, long j) {
        return c(13, bArr, j);
    }

    public boolean l(byte[] bArr, long j) {
        return a(25, bArr, false, true, j);
    }

    public boolean m(byte[] bArr, long j) {
        return a(7, bArr, true, true, j);
    }

    public boolean n(byte[] bArr, long j) {
        return a(26, bArr, false, true, j);
    }

    public boolean o(byte[] bArr, long j) {
        return a(28, bArr, false, true, j);
    }

    public boolean p(byte[] bArr, long j) {
        return a(29, bArr, false, true, j);
    }

    public boolean q(byte[] bArr, long j) {
        return a(2, bArr, true, false, j);
    }

    public boolean r(byte[] bArr, long j) {
        return a(8, bArr, true, true, j);
    }

    public boolean s(byte[] bArr, long j) {
        return a(5, bArr, true, false, j);
    }

    static f1 a(d1 d1Var, int i, int i2, int i3, int i4) {
        try {
            return new f1(d1Var, i, i2, i3, i4);
        } catch (Throwable th) {
            x2.b("MyTrackerRepository error: failed to create MyTrackerRepository instance", th);
            return null;
        }
    }

    public boolean b(long j) {
        return c(3, new byte[0], j);
    }

    public boolean c(byte[] bArr, long j) {
        return a(32, bArr, true, false, j);
    }

    public boolean h(byte[] bArr, long j) {
        return a(31, bArr, true, false, j);
    }

    public long i() {
        return this.f;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v0 */
    /* JADX WARN: Type inference failed for: r2v1 */
    /* JADX WARN: Type inference failed for: r2v3, types: [boolean, int] */
    /* JADX WARN: Type inference failed for: r2v4 */
    /* JADX WARN: Type inference failed for: r2v6 */
    /* JADX WARN: Type inference failed for: r2v7 */
    public boolean j() {
        ?? B;
        try {
            d1.c cVarI = this.f4939a.i();
            try {
                B = cVarI.b();
                try {
                    cVarI.close();
                    d1.f fVarA = this.f4939a.a("default_session");
                    try {
                        B = B;
                        if (fVarA.b()) {
                            B++;
                        }
                        fVarA.close();
                    } catch (Throwable th) {
                        if (fVarA != null) {
                            try {
                                fVarA.close();
                            } catch (Throwable th2) {
                                th.addSuppressed(th2);
                            }
                        }
                        throw th;
                    }
                } catch (Exception unused) {
                }
                return B != 0;
            } catch (Throwable th3) {
                if (cVarI != null) {
                    try {
                        cVarI.close();
                    } catch (Throwable th4) {
                        th3.addSuppressed(th4);
                    }
                }
                throw th3;
            }
        } catch (Exception unused2) {
            B = 0;
        }
    }

    public boolean b(byte[] bArr, long j) {
        return a(33, bArr, true, false, j);
    }

    void c(long j) {
        try {
            this.f4939a.a("timestamp_base", Long.valueOf(j));
            this.f = j;
        } catch (Throwable th) {
            x2.b("MyTrackerRepository error: ", th);
        }
    }

    public boolean b(int i, byte[] bArr, long j) {
        Throwable th;
        int i2;
        boolean z = i == 20 || i == 21;
        if (i == 24) {
            try {
                long j2 = i;
                if (this.f4939a.f(j2) >= this.c && this.f4939a.a(j2, bArr) == 0) {
                    x2.a("MyTrackerRepository: maximum count of mini-app custom events is exceeded, event has been skipped");
                    return false;
                }
            } catch (Throwable th2) {
                th = th2;
                i2 = i;
                x2.b("MyTrackerRepository error: event serialization failed, type: " + i2, th);
                return false;
            }
        }
        i2 = i;
        try {
            return a(i2, bArr, z, true, j);
        } catch (Throwable th3) {
            th = th3;
            x2.b("MyTrackerRepository error: event serialization failed, type: " + i2, th);
            return false;
        }
    }

    public boolean a(byte[] bArr, long j) {
        return a(14, bArr, true, false, j);
    }

    public boolean f(byte[] bArr, long j) {
        return a(10, bArr, true, false, j);
    }

    public boolean a(int i, byte[] bArr, long j) {
        return a(i, bArr, true, true, j);
    }

    private boolean c(int i, byte[] bArr, long j) {
        try {
            return a(i, bArr, false, true, j);
        } catch (Throwable th) {
            x2.b("MyTrackerRepository error: event serialization failed, type: " + i, th);
            return false;
        }
    }

    /* JADX WARN: Code duplicated, block: B:37:0x00cc A[DONT_GENERATE] */
    /* JADX WARN: Not initialized variable reg: 20, insn: 0x00be: MOVE (r6 I:??[OBJECT, ARRAY]) = (r20 I:??[OBJECT, ARRAY]), block:B:30:0x00be */
    public boolean a(long j, long j2) {
        boolean zB;
        d1.f fVar;
        d1.f fVar2;
        d1.f fVarA = null;
        try {
            fVarA = this.f4939a.a("default_session");
            try {
                zB = fVarA.b();
                long jB = 0;
                try {
                    if (zB) {
                        long jA = fVarA.a();
                        long jM = fVarA.m();
                        long jC = fVarA.c();
                        fVar2 = fVarA;
                        if (this.f == 0) {
                            c(jM);
                        }
                        x2.a("MyTrackerRepository: finish previous session");
                        if (j2 == 0) {
                            this.f4939a.a(jA, jM - this.f, true, 0L);
                        } else {
                            d1 d1Var = this.f4939a;
                            long j3 = this.f;
                            d1Var.a(jA, jM - j3, false, j2 - j3);
                        }
                        long jG = this.f4939a.g(jA);
                        x2.a("MyTrackerRepository: session timestamps count: " + jG);
                        long j4 = (long) this.d;
                        if (jG > j4) {
                            jB = this.f4939a.b(jA, jG - j4);
                            x2.a("MyTrackerRepository: maximum count of session timestamps is exceeded, remove oldest timestamps, count: " + jB);
                        }
                        x2.a("MyTrackerRepository: start new session");
                        this.f4939a.a(jA, j, jC + jB);
                    } else {
                        fVar2 = fVarA;
                        x2.a("MyTrackerRepository: insert session");
                        if (this.f4939a.a("default_session", j) == d1.y) {
                            x2.b("MyTrackerRepository error: session insertion failed ");
                            fVar2.close();
                            return false;
                        }
                        if (this.f == 0) {
                            c(j);
                        }
                    }
                    fVar2.close();
                    return true;
                } catch (Throwable th) {
                    th = th;
                    fVarA = fVar;
                    try {
                        x2.b("MyTrackerRepository error: session insertion failed ", th);
                        return zB;
                    } finally {
                        if (fVarA != null) {
                            fVarA.close();
                        }
                    }
                }
            } catch (Throwable th2) {
                th = th2;
                zB = false;
                x2.b("MyTrackerRepository error: session insertion failed ", th);
                return zB;
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }

    public void b(o0 o0Var) {
        Long lB = o0Var.b();
        if (lB != null) {
            try {
                this.f4939a.b(lB.longValue());
            } catch (Throwable th) {
                x2.b("MyTrackerRepository error: error while removing raw purchase with id " + lB, th);
            }
        }
    }

    public void b(f fVar) {
        Long lB = fVar.b();
        if (lB != null) {
            try {
                this.f4939a.a(lB.longValue());
            } catch (Throwable th) {
                x2.b("MyTrackerRepository error: error while removing raw appgallery purchase with id " + lB, th);
            }
        }
    }

    public b d() {
        try {
            return this.f4939a.f();
        } catch (Throwable th) {
            x2.b("MyTrackerRepository error: ", th);
            return null;
        }
    }

    public boolean g(byte[] bArr, long j) {
        return a(27, bArr, false, true, j);
    }

    public boolean e(byte[] bArr, long j) {
        return a(15, bArr, true, true, j);
    }

    public void a(o0 o0Var) {
        String string = o0Var.d().toString();
        String strA = o0Var.a();
        try {
            if (this.f4939a.j() >= this.e) {
                x2.a("MyTrackerRepository: max count of raw purchases is reached");
                x2.a("MyTrackerRepository: raw purchase with data: " + string + ", signature " + strA + " isn't inserted");
                return;
            }
            long jA = this.f4939a.a(string, strA, o0Var.f());
            if (jA >= 0) {
                x2.a("MyTrackerRepository: raw purchase was inserted; id: " + jA + ", data: " + string + ", signature: " + strA);
                o0Var.a(Long.valueOf(jA));
            }
        } catch (Throwable th) {
            x2.b("MyTrackerRepository error: can't insert raw purchase with data: " + string + ", signature " + strA, th);
        }
    }

    public void a(f fVar) {
        String string = fVar.e().toString();
        String strA = fVar.a();
        String strF = fVar.f();
        int iG = fVar.g();
        try {
            if (this.f4939a.g() >= this.e) {
                x2.a("MyTrackerRepository: max count of raw purchases is reached");
                x2.a("MyTrackerRepository: appgalleery raw purchase with data: " + string + ", signature " + strA + " isn't inserted");
                return;
            }
            long jA = this.f4939a.a(string, strA, strF, iG, fVar.h());
            if (jA >= 0) {
                x2.a("MyTrackerRepository: appgallery raw purchase was inserted; id: " + jA + ", data: " + string + ", signature: " + strA);
                fVar.a(Long.valueOf(jA));
            }
        } catch (Throwable th) {
            x2.b("MyTrackerRepository error: can't insert appgallery raw purchase with data: " + string + ", signature " + strA, th);
        }
    }

    public boolean a(int i, byte[] bArr, boolean z, boolean z2, long j) {
        boolean z3;
        long j2;
        long jC;
        try {
            long jA = d1.y;
            try {
                if (z2) {
                    d1.c cVarB = null;
                    z3 = false;
                    try {
                        j2 = 0;
                        cVarB = this.f4939a.b(i, bArr);
                        if (cVarB.b()) {
                            long jA2 = cVarB.a();
                            jC = cVarB.c();
                            jA = jA2;
                        } else {
                            jC = 0;
                        }
                        cVarB.close();
                    } catch (Throwable th) {
                        if (cVarB != null) {
                            cVarB.close();
                        }
                        throw th;
                    }
                } else {
                    z3 = false;
                    j2 = 0;
                    jC = 0;
                }
                if (jA == d1.y) {
                    x2.a("MyTrackerRepository: insert " + i + " event");
                    jA = this.f4939a.a(i, bArr, z);
                    if (jA != d1.y && z) {
                        this.g++;
                    }
                } else {
                    x2.a("MyTrackerRepository: aggregate " + i + " event");
                }
                if (jA == d1.y) {
                    x2.b("MyTrackerRepository error: event insertion failed, type: " + i);
                    return z3;
                }
                if (this.f == j2) {
                    c(j);
                }
                this.f4939a.c(jA, j - this.f);
                long jD = this.f4939a.d(jA);
                x2.a("MyTrackerRepository: event timestamps count: " + jD);
                long j3 = (long) this.b;
                if (jD <= j3) {
                    return true;
                }
                long jA3 = this.f4939a.a(jA, jD - j3);
                this.f4939a.d(jA, jC + jA3);
                x2.a("MyTrackerRepository: maximum count of event timestamps is exceeded, remove oldest timestamps, count: " + jA3);
                return true;
            } catch (Throwable th2) {
                th = th2;
                x2.b("MyTrackerRepository error: event insertion failed, type: " + i, th);
                return z3;
            }
        } catch (Throwable th3) {
            th = th3;
            z3 = false;
        }
    }

    public boolean a() {
        try {
            this.f4939a.c();
            this.f4939a.b();
            this.f4939a.e();
            this.f4939a.d();
            this.f4939a.a();
            this.f4939a.a("custom_events_skipped_count", (Long) null);
            this.g = 0L;
            d1.f fVarA = this.f4939a.a("default_session");
            try {
                if (fVarA.b()) {
                    c(fVarA.m());
                } else {
                    c(0L);
                }
                fVarA.close();
                return true;
            } catch (Throwable th) {
                if (fVarA != null) {
                    try {
                        fVarA.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                }
                throw th;
            }
        } catch (Throwable unused) {
            return false;
        }
    }

    public void a(byte[] bArr) {
        try {
            this.f4939a.i(14L);
            this.f4939a.a(bArr);
        } catch (Throwable th) {
            x2.b("MyTrackerRepository error: ", th);
        }
    }

    public void a(long j) {
        try {
            this.f4939a.c(j);
        } catch (Throwable th) {
            x2.b("MyTrackerRepository error: ", th);
        }
    }
}
