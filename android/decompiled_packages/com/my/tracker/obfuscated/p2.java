package com.my.tracker.obfuscated;

import android.content.Context;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes6.dex */
public final class p2 implements o2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final int f4987a;
    b2 b;
    j2 c = null;
    int d = Integer.MIN_VALUE;

    private p2(int i, b2 b2Var) {
        this.f4987a = i;
        this.b = b2Var;
        x2.a("TimeSpentRepository: repository created but not initialized. Will initialized when first timespent tick will arrive");
    }

    public static p2 a(int i, y2 y2Var, final Context context) {
        final String strG = y2Var.g();
        return new p2(i, new b2() { // from class: com.my.tracker.obfuscated.p2$$ExternalSyntheticLambda1
            @Override // com.my.tracker.obfuscated.b2
            public final Object a() {
                return p2.a(strG, context);
            }
        });
    }

    private boolean c() {
        return this.c != null && this.d >= 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ j2 d() {
        return null;
    }

    public void b() throws Exception {
        if (c()) {
            return;
        }
        x2.a("TimeSpentRepository: initializing repository...");
        try {
            j2 j2Var = (j2) this.b.a();
            this.c = j2Var;
            this.d = j2Var.a();
            this.b = new b2() { // from class: com.my.tracker.obfuscated.p2$$ExternalSyntheticLambda0
                @Override // com.my.tracker.obfuscated.b2
                public final Object a() {
                    return p2.d();
                }
            };
            x2.a("TimeSpentRepository: successfully initialized, current size = " + this.d + ", max size = " + this.f4987a);
        } catch (Exception e) {
            x2.b("TimeSpentRepository: error occured while initialization repository, repository not initialized", e);
            this.c = null;
            this.d = Integer.MIN_VALUE;
            throw e;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ j2 a(String str, Context context) {
        try {
            return j2.a(str, context);
        } catch (Exception e) {
            x2.b("TimeSpentRepository: can't initialize sql database", e);
            throw new RuntimeException(e);
        }
    }

    @Override // com.my.tracker.obfuscated.o2
    public synchronized void a(long j, byte[] bArr) {
        if (!c()) {
            b();
        }
        if (this.d >= this.f4987a) {
            try {
                a();
                try {
                    long jA = this.c.a(j, bArr);
                    this.d++;
                    x2.a("TimeSpentRepository: successfully stored new tick packet to db, tickPacketId = " + jA + " (current db size = " + this.d + ")");
                } catch (Exception e) {
                    x2.b("TimeSpentRepository: something went wrong while saving new tick packet in database, this tick wouldn't be stored");
                    throw new Exception(e);
                }
            } catch (Exception e2) {
                x2.b("TimeSpentRepository: free up database failed, can't put new TimeSpentTick (reason: db still full)");
                throw new Exception(e2);
            }
        } else {
            long jA2 = this.c.a(j, bArr);
            this.d++;
            x2.a("TimeSpentRepository: successfully stored new tick packet to db, tickPacketId = " + jA2 + " (current db size = " + this.d + ")");
        }
        throw th;
    }

    @Override // com.my.tracker.obfuscated.o2
    public synchronized s2[] a(int i) {
        s2[] s2VarArr;
        try {
            j2.b bVarB = ((j2) Objects.requireNonNull(this.c)).b(i);
            try {
                ArrayList arrayList = new ArrayList(i);
                while (bVarB.b()) {
                    arrayList.add(new s2(bVarB.n(), bVarB.m()));
                }
                x2.a("TimeSpentRepository: read " + arrayList.size() + " freshest packets from db");
                s2VarArr = arrayList.isEmpty() ? null : (s2[]) arrayList.toArray(new s2[0]);
                bVarB.close();
            } catch (Throwable th) {
                if (bVarB != null) {
                    try {
                        bVarB.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                }
                throw th;
            }
        } catch (Throwable th3) {
            x2.b("TimeSpentRepository: error while reading " + i + " freshest tick packets", th3);
            return null;
        }
        return s2VarArr;
    }

    @Override // com.my.tracker.obfuscated.o2
    public synchronized void a(long[] jArr) {
        try {
            ((j2) Objects.requireNonNull(this.c)).a(jArr);
        } catch (Exception unused) {
            String str = "TimeSpentRepository: something went wrong while deleting " + jArr.length + " packets from db";
            x2.b(str);
            throw new Exception(str);
        }
    }

    private void a() throws Exception {
        int i = (this.d - this.f4987a) + 1;
        try {
            int iA = ((j2) Objects.requireNonNull(this.c)).a(i);
            this.d -= iA;
            x2.a("TimeSpentRepository: successfully deleted " + iA + "(requested = " + i + ") oldest tick packets from db, currentDbSize = " + this.d + " (reason: need free up space for new packet)");
        } catch (Exception e) {
            x2.b("TimeSpentRepository: something went wrong while trying to delete oldest" + i + " tick packets from db (reason: need free up space for new packet, maxSize = " + this.f4987a + ", current size = " + this.d + "), can't store new tick packet", e);
            throw new Exception(e);
        }
    }
}
