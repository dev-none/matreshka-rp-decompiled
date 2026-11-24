package com.google.android.play.core.assetpacks;

import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
final class dw {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final com.google.android.play.core.assetpacks.internal.o f4296a = new com.google.android.play.core.assetpacks.internal.o("ExtractorTaskFinder");
    private final dt b;
    private final bm c;
    private final cf d;

    dw(dt dtVar, bm bmVar, cf cfVar) {
        this.b = dtVar;
        this.c = bmVar;
        this.d = cfVar;
    }

    private final boolean b(dq dqVar, dr drVar) {
        dp dpVar = dqVar.c;
        String str = dpVar.f4291a;
        long j = dpVar.b;
        return new fd(this.c, str, dqVar.b, j, drVar.f4293a).m();
    }

    private static boolean c(dr drVar) {
        int i = drVar.f;
        return i == 1 || i == 2;
    }

    /* JADX WARN: Code duplicated, block: B:106:0x0368 A[PHI: r8
  0x0368: PHI (r8v2 com.google.android.play.core.assetpacks.dv) = (r8v1 com.google.android.play.core.assetpacks.dv), (r8v4 com.google.android.play.core.assetpacks.dv) binds: [B:46:0x0179, B:61:0x01f3] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:107:0x036a A[PHI: r7
  0x036a: PHI (r7v2 com.google.android.play.core.assetpacks.dv) = (r7v1 com.google.android.play.core.assetpacks.dv), (r7v4 com.google.android.play.core.assetpacks.dv) binds: [B:21:0x0099, B:33:0x0108] A[DONT_GENERATE, DONT_INLINE]] */
    final dv a() {
        dv elVar;
        dv dvVar;
        dv fgVar;
        co coVar;
        ev evVar;
        int iA;
        try {
            this.b.j();
            ArrayList arrayList = new ArrayList();
            for (dq dqVar : this.b.i().values()) {
                if (bl.b(dqVar.c.d)) {
                    arrayList.add(dqVar);
                }
            }
            if (arrayList.isEmpty()) {
                dvVar = null;
            } else {
                Map mapT = this.c.t();
                Iterator it = arrayList.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        elVar = null;
                        break;
                    }
                    dq dqVar2 = (dq) it.next();
                    Long l = (Long) mapT.get(dqVar2.c.f4291a);
                    if (l != null && dqVar2.c.b == l.longValue()) {
                        f4296a.a("Found promote pack task for session %s with pack %s.", Integer.valueOf(dqVar2.f4292a), dqVar2.c.f4291a);
                        int i = dqVar2.f4292a;
                        String str = dqVar2.c.f4291a;
                        elVar = new ey(i, str, this.c.a(str), dqVar2.b, dqVar2.c.b);
                        break;
                    }
                }
                if (elVar == null) {
                    Iterator it2 = arrayList.iterator();
                    while (true) {
                        if (!it2.hasNext()) {
                            elVar = null;
                            break;
                        }
                        dq dqVar3 = (dq) it2.next();
                        try {
                            bm bmVar = this.c;
                            dp dpVar = dqVar3.c;
                            if (bmVar.b(dpVar.f4291a, dqVar3.b, dpVar.b) == dqVar3.c.f.size()) {
                                f4296a.a("Found final move task for session %s with pack %s.", Integer.valueOf(dqVar3.f4292a), dqVar3.c.f4291a);
                                int i2 = dqVar3.f4292a;
                                dp dpVar2 = dqVar3.c;
                                elVar = new el(i2, dpVar2.f4291a, dqVar3.b, dpVar2.b, dpVar2.c);
                                break;
                            }
                        } catch (IOException e) {
                            throw new cz(String.format("Failed to check number of completed merges for session %s, pack %s", Integer.valueOf(dqVar3.f4292a), dqVar3.c.f4291a), e, dqVar3.f4292a);
                        }
                    }
                    if (elVar == null) {
                        Iterator it3 = arrayList.iterator();
                        loop3: while (true) {
                            if (!it3.hasNext()) {
                                fgVar = null;
                                break;
                            }
                            dq dqVar4 = (dq) it3.next();
                            dp dpVar3 = dqVar4.c;
                            if (bl.b(dpVar3.d)) {
                                for (dr drVar : dpVar3.f) {
                                    bm bmVar2 = this.c;
                                    dp dpVar4 = dqVar4.c;
                                    if (bmVar2.q(dpVar4.f4291a, dqVar4.b, dpVar4.b, drVar.f4293a).exists()) {
                                        f4296a.a("Found merge task for session %s with pack %s and slice %s.", Integer.valueOf(dqVar4.f4292a), dqVar4.c.f4291a, drVar.f4293a);
                                        int i3 = dqVar4.f4292a;
                                        dp dpVar5 = dqVar4.c;
                                        fgVar = new ei(i3, dpVar5.f4291a, dqVar4.b, dpVar5.b, drVar.f4293a);
                                        break loop3;
                                    }
                                }
                            }
                        }
                        if (fgVar == null) {
                            Iterator it4 = arrayList.iterator();
                            loop5: while (true) {
                                if (!it4.hasNext()) {
                                    fgVar = null;
                                    break;
                                }
                                dq dqVar5 = (dq) it4.next();
                                dp dpVar6 = dqVar5.c;
                                if (bl.b(dpVar6.d)) {
                                    for (dr drVar2 : dpVar6.f) {
                                        if (b(dqVar5, drVar2)) {
                                            bm bmVar3 = this.c;
                                            dp dpVar7 = dqVar5.c;
                                            if (bmVar3.p(dpVar7.f4291a, dqVar5.b, dpVar7.b, drVar2.f4293a).exists()) {
                                                f4296a.a("Found verify task for session %s with pack %s and slice %s.", Integer.valueOf(dqVar5.f4292a), dqVar5.c.f4291a, drVar2.f4293a);
                                                int i4 = dqVar5.f4292a;
                                                dp dpVar8 = dqVar5.c;
                                                fgVar = new fg(i4, dpVar8.f4291a, dqVar5.b, dpVar8.b, drVar2.f4293a, drVar2.b, drVar2.c);
                                                break loop5;
                                            }
                                        }
                                    }
                                }
                            }
                            if (fgVar == null) {
                                Iterator it5 = arrayList.iterator();
                                loop7: while (true) {
                                    if (!it5.hasNext()) {
                                        coVar = null;
                                        break;
                                    }
                                    dq dqVar6 = (dq) it5.next();
                                    dp dpVar9 = dqVar6.c;
                                    if (bl.b(dpVar9.d)) {
                                        for (dr drVar3 : dpVar9.f) {
                                            if (!c(drVar3)) {
                                                bm bmVar4 = this.c;
                                                dp dpVar10 = dqVar6.c;
                                                try {
                                                    iA = new fd(bmVar4, dpVar10.f4291a, dqVar6.b, dpVar10.b, drVar3.f4293a).a();
                                                } catch (IOException e2) {
                                                    f4296a.b("Slice checkpoint corrupt, restarting extraction. %s", e2);
                                                    iA = 0;
                                                }
                                                if (iA != -1 && ((Cdo) drVar3.d.get(iA)).f4290a) {
                                                    f4296a.a("Found extraction task using compression format %s for session %s, pack %s, slice %s, chunk %s.", Integer.valueOf(drVar3.e), Integer.valueOf(dqVar6.f4292a), dqVar6.c.f4291a, drVar3.f4293a, Integer.valueOf(iA));
                                                    InputStream inputStreamA = this.d.a(dqVar6.f4292a, dqVar6.c.f4291a, drVar3.f4293a, iA);
                                                    int i5 = dqVar6.f4292a;
                                                    dp dpVar11 = dqVar6.c;
                                                    String str2 = dpVar11.f4291a;
                                                    int i6 = dqVar6.b;
                                                    long j = dpVar11.b;
                                                    String str3 = dpVar11.c;
                                                    String str4 = drVar3.f4293a;
                                                    int i7 = drVar3.e;
                                                    int size = drVar3.d.size();
                                                    dp dpVar12 = dqVar6.c;
                                                    coVar = new co(i5, str2, i6, j, str3, str4, i7, iA, size, dpVar12.e, dpVar12.d, inputStreamA);
                                                    break loop7;
                                                }
                                            }
                                        }
                                    }
                                }
                                if (coVar == null) {
                                    Iterator it6 = arrayList.iterator();
                                    loop9: while (true) {
                                        if (!it6.hasNext()) {
                                            evVar = null;
                                            break;
                                        }
                                        dq dqVar7 = (dq) it6.next();
                                        dp dpVar13 = dqVar7.c;
                                        if (bl.b(dpVar13.d)) {
                                            for (dr drVar4 : dpVar13.f) {
                                                if (c(drVar4) && ((Cdo) drVar4.d.get(0)).f4290a && !b(dqVar7, drVar4)) {
                                                    f4296a.a("Found patch slice task using patch format %s for session %s, pack %s, slice %s.", Integer.valueOf(drVar4.f), Integer.valueOf(dqVar7.f4292a), dqVar7.c.f4291a, drVar4.f4293a);
                                                    InputStream inputStreamA2 = this.d.a(dqVar7.f4292a, dqVar7.c.f4291a, drVar4.f4293a, 0);
                                                    int i8 = dqVar7.f4292a;
                                                    String str5 = dqVar7.c.f4291a;
                                                    evVar = new ev(i8, str5, this.c.a(str5), this.c.c(dqVar7.c.f4291a), dqVar7.b, dqVar7.c.b, drVar4.f, drVar4.f4293a, drVar4.c, inputStreamA2);
                                                    break loop9;
                                                }
                                            }
                                        }
                                    }
                                    if (evVar != null) {
                                        this.b.l();
                                        return evVar;
                                    }
                                    dvVar = null;
                                } else {
                                    dvVar = coVar;
                                }
                            } else {
                                dvVar = fgVar;
                            }
                        } else {
                            dvVar = fgVar;
                        }
                    } else {
                        dvVar = elVar;
                    }
                } else {
                    dvVar = elVar;
                }
            }
            this.b.l();
            return dvVar;
        } catch (Throwable th) {
            this.b.l();
            throw th;
        }
    }
}
