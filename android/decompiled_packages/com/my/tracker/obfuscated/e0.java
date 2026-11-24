package com.my.tracker.obfuscated;

import android.content.Context;
import android.text.TextUtils;
import com.my.tracker.MyTrackerConfig;
import com.my.tracker.ads.AdEvent;
import com.my.tracker.miniapps.MiniAppEvent;
import com.unity3d.ads.metadata.InAppPurchaseMetaData;
import java.text.DecimalFormat;
import java.text.DecimalFormatSymbols;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class e0 {
    public static final DecimalFormat l;
    final y2 b;
    final Context c;
    final b d;
    f1 h;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final Map f4935a = new HashMap();
    protected boolean e = false;
    protected b3 f = b3.j;
    protected String g = "";
    private final q i = new q(65536);
    final g1 j = g1.b();
    long k = 0;

    public interface a {
        void b(List list);
    }

    public interface b {
        void a();

        void a(String str);
    }

    public interface c {
        void a(List list);
    }

    static {
        DecimalFormat decimalFormat = new DecimalFormat("0.0#####");
        l = decimalFormat;
        decimalFormat.setDecimalFormatSymbols(DecimalFormatSymbols.getInstance(Locale.ROOT));
    }

    private e0(y2 y2Var, b bVar, Context context) {
        this.b = y2Var;
        this.d = bVar;
        this.c = context.getApplicationContext();
    }

    public static e0 a(y2 y2Var, b bVar, Context context) {
        return new e0(y2Var, bVar, context);
    }

    static boolean b(Map map) {
        if (map == null) {
            return false;
        }
        for (Map.Entry entry : map.entrySet()) {
            if (c((String) entry.getKey()) || c((String) entry.getValue())) {
                return true;
            }
        }
        return false;
    }

    static boolean c(String str) {
        if (str == null || str.length() <= 255) {
            return false;
        }
        x2.b("EventTracker error: length of the string " + str + " is more than 255, event ignored");
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void e() {
        if (a(this.h)) {
            return;
        }
        c();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void f() {
        if (this.h != null) {
            x2.b("EventTracker error: tracker has already been initialized");
            return;
        }
        d1 d1VarA = d1.a(this.b.g(), this.c);
        if (d1VarA == null) {
            return;
        }
        f1 f1VarA = f1.a(d1VarA);
        this.h = f1VarA;
        if (a(f1VarA)) {
            return;
        }
        this.k = p1.a(this.c).l();
        this.b.m().a(new s() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda16
            @Override // com.my.tracker.obfuscated.s
            public final void a(Object obj) {
                this.f$0.a((b3) obj);
            }
        }, new s() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda17
            @Override // com.my.tracker.obfuscated.s
            public final void a(Object obj) {
                this.f$0.c((b3) obj);
            }
        });
        b();
    }

    public void d() {
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda23
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.f();
            }
        });
    }

    public void g() {
        final long jA = v2.a();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda5
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(jA);
            }
        });
    }

    static boolean a(f1 f1Var) {
        if (f1Var != null) {
            return false;
        }
        x2.b("EventTracker error: repository is null");
        return true;
    }

    public void d(Map map) {
        final long jA = v2.a();
        final Map mapA = a(map);
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda11
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(mapA, jA);
            }
        });
    }

    private static Map a(Map map) {
        if (map == null || map.isEmpty()) {
            return null;
        }
        return new HashMap(map);
    }

    private static void a(Runnable runnable) {
        m.a(runnable);
    }

    public void b(final String str, final String str2, Map map) {
        final long jA = v2.a();
        final Map mapA = a(map);
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda10
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(mapA, str, str2, jA);
            }
        });
    }

    private static int a(r1 r1Var, f1 f1Var, y2.a aVar, boolean z, b3 b3Var, String str, g1 g1Var, String str2, MyTrackerConfig.OkHttpClientProvider okHttpClientProvider, Context context) {
        if (!f1Var.j()) {
            return 3;
        }
        long jI = f1Var.i();
        x1 x1VarB = f1Var.b();
        z1 z1VarC = f1Var.c();
        return g1Var.a(r1Var, aVar, z, b3Var, str, g0.a().a(aVar.m, aVar.g, aVar.e, z, str2, okHttpClientProvider, context), jI, f1Var.f(), x1VarB, z1VarC);
    }

    public void d(final String str) {
        final long jA = v2.a();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda13
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str, jA);
            }
        });
    }

    public void c(Map map) {
        final long jA = v2.a();
        final Map mapA = a(map);
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda22
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(mapA, jA);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(Map map, String str, String str2, long j) {
        byte[] bArrB;
        if (a(this.h) || b(map) || (bArrB = this.j.b(this.e, str, str2, map)) == null || !this.h.r(bArrB, j)) {
            return;
        }
        b();
    }

    public void d(final List list) {
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(list);
            }
        });
    }

    public void c(final List list) {
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda14
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(list);
            }
        });
    }

    public void c(final float f) {
        final long jCurrentTimeMillis = System.currentTimeMillis();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda31
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.c(jCurrentTimeMillis, f);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void c(long j, float f) {
        if (a(this.h) || a(29, j)) {
            return;
        }
        long jB = v2.b(j);
        byte[] bArrC = this.j.c((long) (f * 1000.0f));
        if (bArrC != null) {
            this.h.p(bArrC, jB);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(Map map, long j) {
        byte[] bArrB;
        if (a(this.h) || b(map) || (bArrB = this.j.b(map)) == null || !this.h.k(bArrB, j)) {
            return;
        }
        b();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(b3 b3Var) {
        this.f = b3Var;
    }

    public void a() {
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda12
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.e();
            }
        });
    }

    public void c(final Boolean bool) {
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda29
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(bool);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c(final b3 b3Var) {
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(b3Var);
            }
        });
    }

    public void a(final String str, Map map) {
        final long jA = v2.a();
        final Map mapA = a(map);
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda24
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str, mapA, jA);
            }
        });
    }

    public void c() {
        if (a(this.h)) {
            return;
        }
        this.d.a();
        if (!s0.a(this.c)) {
            x2.a("MyTrackerRepository: no network connection");
            return;
        }
        String strA = a(this.e, this.f, this.g, this.h);
        if (strA != null) {
            this.d.a(strA);
        }
        b(this.h);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, Map map, long j) {
        byte[] bArrA;
        if (a(this.h) || c(str) || b(map) || (bArrA = this.j.a(str, map)) == null || !this.h.d(bArrA, j)) {
            return;
        }
        b();
    }

    public void b(final String str, final String str2, final long j, final long j2) {
        final long jA = v2.a();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda8
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(str, str2, j, j2, jA);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(String str, String str2, long j, long j2, long j3) {
        byte[] bArrB;
        if (a(this.h) || (bArrB = this.j.b(str, str2, j, j2)) == null || !this.h.h(bArrB, j3)) {
            return;
        }
        b();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(long j) {
        if (a(this.h)) {
            return;
        }
        boolean zA = this.h.a(j, p1.a(this.c).n());
        if (this.h.b(j)) {
            zA = true;
        }
        if (zA) {
            c();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(List list) {
        if (a(this.h)) {
            return;
        }
        Iterator it = list.iterator();
        while (it.hasNext()) {
            o0 o0Var = (o0) it.next();
            a(o0Var.e(), o0Var.d(), o0Var.a(), (Map) null, o0Var.f());
            this.h.b(o0Var);
        }
        b();
    }

    public void a(final String str, final String str2, Map map) {
        final long jA = v2.a();
        final Map mapA = a(map);
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda32
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(mapA, str, str2, jA);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Map map, String str, String str2, long j) {
        byte[] bArrA;
        if (a(this.h) || b(map) || (bArrA = this.j.a(this.e, str, str2, map)) == null || !this.h.m(bArrA, j)) {
            return;
        }
        b();
    }

    public void b(final float f, final float f2, final float f3) {
        final long jCurrentTimeMillis = System.currentTimeMillis();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda28
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(jCurrentTimeMillis, f, f2, f3);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(long j, float f, float f2, float f3) {
        if (a(this.h) || a(26, j)) {
            return;
        }
        long jB = v2.b(j);
        byte[] bArrB = this.j.b((long) (f * 1000.0f), (long) (f2 * 1000.0f), (long) (f3 * 1000.0f));
        if (bArrB != null) {
            this.h.n(bArrB, jB);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Map map, long j) {
        byte[] bArrA;
        if (a(this.h) || b(map) || (bArrA = this.j.a(map)) == null || !this.h.j(bArrA, j)) {
            return;
        }
        b();
    }

    public void b(final float f) {
        final long jCurrentTimeMillis = System.currentTimeMillis();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda30
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(jCurrentTimeMillis, f);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(long j, float f) {
        if (a(this.h) || a(28, j)) {
            return;
        }
        long jB = v2.b(j);
        byte[] bArrB = this.j.b((long) (f * 1000.0f));
        if (bArrB != null) {
            this.h.o(bArrB, jB);
        }
    }

    public void a(final int i, Map map) {
        final long jA = v2.a();
        final Map mapA = a(map);
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda9
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(mapA, i, jA);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Map map, int i, long j) {
        byte[] bArrA;
        if (a(this.h) || b(map) || (bArrA = this.j.a(i, map)) == null || !this.h.k(bArrA, j)) {
            return;
        }
        b();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(c cVar) {
        if (a(this.h)) {
            cVar.a(Collections.EMPTY_LIST);
        } else {
            cVar.a(this.h.g());
        }
    }

    public void a(final long j, final String str, final o1.a aVar) {
        final long jA = v2.a();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda36
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(j, str, aVar, jA);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(a aVar) {
        if (a(this.h)) {
            aVar.b(Collections.EMPTY_LIST);
        } else {
            aVar.b(this.h.e());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(long j, String str, o1.a aVar, long j2) {
        byte[] bArrA;
        if (a(this.h) || (bArrA = this.j.a(j, str, aVar)) == null || !this.h.i(bArrA, j2)) {
            return;
        }
        p1.a(this.c).c(j2);
        this.k = j2;
        b();
    }

    public void b(Boolean bool) {
        this.e = bool.booleanValue();
    }

    public void b(final String str) {
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda15
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(b3 b3Var) {
        x2.a("onUserInfoStateChanged: customUserIds=" + Arrays.toString(b3Var.g));
        if (l.a(this.f.g, b3Var.g) != 0 && !a(this.h)) {
            b(this.e, this.f, this.g, this.h);
        }
        this.f = b3Var;
    }

    public void a(final String str, final String str2, final Runnable runnable) {
        final long jA = v2.a();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda20
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str, str2, jA, runnable);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, String str2, long j, Runnable runnable) {
        if (a(this.h)) {
            return;
        }
        byte[] bArrB = this.j.b(str, str2);
        if (bArrB != null && this.h.q(bArrB, j)) {
            b();
        }
        if (runnable != null) {
            runnable.run();
        }
    }

    void b(boolean z, b3 b3Var, String str, f1 f1Var) {
        x2.a("createAndStorePartialPacket: start");
        y2.a aVarO = this.b.o();
        String strH = this.b.h();
        MyTrackerConfig.OkHttpClientProvider okHttpClientProviderN = this.b.n();
        this.i.a();
        int iA = a(this.i, f1Var, aVarO, z, b3Var, str, this.j, strH, okHttpClientProviderN, this.c);
        x2.a("createAndStorePartialPacket: writeResult=" + iA);
        if (iA == 1) {
            f1Var.a();
            f1Var.a(this.i.c());
        } else if (iA == 2) {
            f1Var.a();
        }
        this.i.d();
    }

    public void a(final String str, final String str2, final long j, final long j2) {
        final long jA = v2.a();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda27
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str, str2, j, j2, jA);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, String str2, long j, long j2, long j3) {
        byte[] bArrA;
        if (a(this.h) || (bArrA = this.j.a(str, str2, j, j2)) == null || !this.h.a(bArrA, j3)) {
            return;
        }
        b();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, long j) {
        byte[] bArrA;
        if (a(this.h) || (bArrA = this.j.a(str)) == null || !this.h.b(bArrA, j)) {
            return;
        }
        b();
    }

    public void a(final String str, final String str2, final String str3, final String str4, final String str5) {
        final long jA = v2.a();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda7
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str, str2, str3, str4, str5, jA);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, String str2, String str3, String str4, String str5, long j) {
        byte[] bArrA;
        if (a(this.h) || (bArrA = this.j.a(str, str2, str3, str4, str5)) == null || !this.h.s(bArrA, j)) {
            return;
        }
        p1.a(this.c).c(j);
        this.k = j;
        b();
    }

    public void a(final JSONObject jSONObject, final JSONObject jSONObject2, final String str, Map map) {
        final long jA = v2.a();
        final Map mapA = a(map);
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda33
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(mapA, jSONObject, jSONObject2, str, jA);
            }
        });
    }

    void b(f1 f1Var) {
        String strQ = this.b.q();
        MyTrackerConfig.OkHttpClientProvider okHttpClientProviderN = this.b.n();
        try {
            com.my.tracker.obfuscated.b bVarD = f1Var.d();
            try {
                if (bVarD == null) {
                    x2.a("EventTracker error: iterator is null");
                    if (bVarD == null) {
                        return;
                    }
                } else {
                    while (bVarD.b()) {
                        long jA = bVarD.a();
                        byte[] bArrI = bVarD.i();
                        this.i.a();
                        this.i.b(bArrI);
                        s0.b bVarA = a(strQ, okHttpClientProviderN, this.i);
                        if (bVarA == null || !bVarA.c()) {
                            break;
                            break;
                        }
                        String str = (String) bVarA.b();
                        if (!TextUtils.isEmpty(str)) {
                            this.d.a(str);
                        }
                        f1Var.a(jA);
                    }
                }
                bVarD.close();
            } catch (Throwable th) {
                if (bVarD != null) {
                    try {
                        bVarD.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                }
                throw th;
            }
        } catch (Throwable th3) {
            x2.b("EventTracker error: ", th3);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Map map, JSONObject jSONObject, JSONObject jSONObject2, String str, long j) {
        if (a(this.h) || b(map) || !a(jSONObject, jSONObject2, str, map, j)) {
            return;
        }
        b();
    }

    public void a(final JSONObject jSONObject, final String str, final String str2, final String str3, Map map) {
        final long jA = v2.a();
        final Map mapA = a(map);
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda18
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(mapA, jSONObject, str, str2, str3, jA);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Map map, JSONObject jSONObject, String str, String str2, String str3, long j) {
        if (a(this.h) || b(map) || !a(jSONObject, str, str2, str3, map, j)) {
            return;
        }
        b();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(List list) {
        String string;
        if (a(this.h)) {
            return;
        }
        Iterator it = list.iterator();
        while (it.hasNext()) {
            f fVar = (f) it.next();
            try {
                string = fVar.e().toString();
            } catch (Throwable th) {
                x2.a("Error: purchase data: ", th);
                string = null;
            }
            a(fVar.d(), string, fVar.a(), fVar.f(), (Map) null, fVar.h());
            this.h.b(fVar);
        }
        b();
    }

    public void a(final String str, final String str2) {
        final long jA = v2.a();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda35
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(str, str2, jA);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, String str2, long j) {
        byte[] bArrA;
        if (a(this.h) || (bArrA = this.j.a(str, str2)) == null || !this.h.e(bArrA, j)) {
            return;
        }
        b();
    }

    public void a(final int i, final byte[] bArr, final boolean z, final boolean z2, final Runnable runnable) {
        final long jA = v2.a();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda26
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(i, bArr, z, z2, jA, runnable);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(int i, byte[] bArr, boolean z, boolean z2, long j, Runnable runnable) {
        if (!a(this.h) && this.h.a(i, bArr, z, z2, j)) {
            b();
        }
        if (runnable != null) {
            runnable.run();
        }
    }

    public void a(final AdEvent adEvent) {
        final long jA = v2.a();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda34
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(adEvent, jA);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(AdEvent adEvent, long j) {
        byte[] bArrA;
        if (a(this.h) || (bArrA = this.j.a(adEvent, l.format(adEvent.revenue))) == null || !this.h.a(adEvent.f4936a, bArrA, j)) {
            return;
        }
        b();
    }

    public void a(final MiniAppEvent miniAppEvent) {
        final long jA = v2.a();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda6
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(miniAppEvent, jA);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(MiniAppEvent miniAppEvent, long j) {
        String str;
        Map<String, String> map;
        if (a(this.h) || c(miniAppEvent.name) || b(miniAppEvent.eventParams)) {
            return;
        }
        int i = miniAppEvent.f4936a;
        String str2 = (i == 24 || i == 22 || i == 23) ? miniAppEvent.customUserId : null;
        if (i == 24) {
            str = miniAppEvent.name;
            map = miniAppEvent.eventParams;
        } else {
            str = null;
            map = null;
        }
        byte[] bArrA = this.j.a(i, str2, miniAppEvent.miniAppId, str, miniAppEvent.platformUserId, i == 20 ? miniAppEvent.query : null, map);
        if (bArrA == null || !this.h.b(i, bArrA, j)) {
            return;
        }
        b();
    }

    void b() {
        int iF;
        if (a(this.h)) {
            return;
        }
        if (this.h.h() != 0 || ((iF = this.b.f()) > 0 && v2.a() - this.k <= iF)) {
            c();
        }
    }

    public void a(final float f) {
        final long jCurrentTimeMillis = System.currentTimeMillis();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda21
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(jCurrentTimeMillis, f);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(long j, float f) {
        if (a(this.h) || a(25, j)) {
            return;
        }
        long jB = v2.b(j);
        byte[] bArrA = this.j.a((long) (f * 1000.0f));
        if (bArrA != null) {
            this.h.l(bArrA, jB);
        }
    }

    public void a(final float f, final float f2, final float f3) {
        final long jCurrentTimeMillis = System.currentTimeMillis();
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda4
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(jCurrentTimeMillis, f, f2, f3);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(long j, float f, float f2, float f3) {
        if (a(this.h) || a(27, j)) {
            return;
        }
        long jB = v2.b(j);
        byte[] bArrA = this.j.a((long) (f * 1000.0f), (long) (f2 * 1000.0f), (long) (f3 * 1000.0f));
        if (bArrA != null) {
            this.h.g(bArrA, jB);
        }
    }

    public void a(final List list, final c cVar) {
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda3
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(cVar, list);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(c cVar, List list) {
        if (a(this.h)) {
            cVar.a(Collections.EMPTY_LIST);
            return;
        }
        Iterator it = list.iterator();
        while (it.hasNext()) {
            this.h.a((o0) it.next());
        }
        cVar.a(list);
    }

    public void a(final List list, final a aVar) {
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda19
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(aVar, list);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(a aVar, List list) {
        if (a(this.h)) {
            aVar.b(Collections.EMPTY_LIST);
            return;
        }
        Iterator it = list.iterator();
        while (it.hasNext()) {
            this.h.a((f) it.next());
        }
        aVar.b(list);
    }

    public void a(final c cVar) {
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda25
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(cVar);
            }
        });
    }

    public void a(final a aVar) {
        a(new Runnable() { // from class: com.my.tracker.obfuscated.e0$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(aVar);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Boolean bool) {
        x2.a("updateKidMode: newKidMode=" + bool);
        if (bool.booleanValue() == this.e) {
            return;
        }
        if (!a(this.h)) {
            b(this.e, this.f, this.g, this.h);
        }
        this.e = bool.booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str) {
        x2.a("setRemoteConfig: remoteConfig=" + str);
        if (this.g.equals(str)) {
            return;
        }
        if (!a(this.h)) {
            b(this.e, this.f, this.g, this.h);
        }
        this.g = str;
    }

    /* JADX WARN: Code duplicated, block: B:14:0x0053  */
    private String a(boolean z, b3 b3Var, String str, f1 f1Var) {
        String str2;
        s0.b bVarA;
        y2.a aVarO = this.b.o();
        String strQ = this.b.q();
        String strH = this.b.h();
        MyTrackerConfig.OkHttpClientProvider okHttpClientProviderN = this.b.n();
        this.i.a();
        if (a(this.i, f1Var, aVarO, z, b3Var, str, this.j, strH, okHttpClientProviderN, this.c) == 1 && (bVarA = a(strQ, okHttpClientProviderN, this.i)) != null) {
            if (bVarA.c()) {
                x2.a("Events were sent successfully");
                f1Var.a();
            }
            str2 = (String) bVarA.b();
            if (TextUtils.isEmpty(str2)) {
                str2 = null;
            }
        } else {
            str2 = null;
        }
        this.i.d();
        return str2;
    }

    private s0.b a(String str, MyTrackerConfig.OkHttpClientProvider okHttpClientProvider, q qVar) {
        if (this.j.a(qVar, v2.a())) {
            return s0.a(new r(qVar), okHttpClientProvider, true).a(str);
        }
        return null;
    }

    private boolean a(JSONObject jSONObject, JSONObject jSONObject2, String str, Map map, long j) {
        String string;
        String string2;
        String str2;
        f1 f1Var;
        String strOptString = null;
        try {
            string = jSONObject2.toString();
        } catch (Throwable th) {
            x2.a("Error: can't convert purchaseData json to string", th);
            string = null;
        }
        if (jSONObject != null) {
            try {
                string2 = jSONObject.toString();
            } catch (Throwable th2) {
                x2.a("Error: can't convert skuDetails json to string", th2);
                string2 = null;
            }
        } else {
            string2 = null;
        }
        try {
            str2 = l.format(Double.parseDouble(jSONObject.optString("price_amount_micros")) / 1000000.0d);
        } catch (Throwable th3) {
            x2.a("Error: wrong price in micros in sku details: ", th3);
            str2 = null;
        }
        try {
            strOptString = jSONObject.optString("price_currency_code");
        } catch (Throwable th4) {
            x2.a("Error: wrong currency in sku details: ", th4);
        }
        byte[] bArrA = this.j.a(str, string, string2, str2, strOptString, map);
        return (bArrA == null || (f1Var = this.h) == null || !f1Var.f(bArrA, j)) ? false : true;
    }

    private boolean a(JSONObject jSONObject, String str, String str2, String str3, Map map, long j) {
        String strValueOf;
        f1 f1Var;
        if (str == null) {
            x2.a("Error: empty data " + str);
            return false;
        }
        try {
            if (TextUtils.isEmpty(new JSONObject(str).optString(InAppPurchaseMetaData.KEY_PRODUCT_ID))) {
                x2.a("Error: empty productId in data " + str);
                return false;
            }
            String string = null;
            if (jSONObject != null) {
                try {
                    string = jSONObject.toString();
                } catch (Throwable th) {
                    x2.a("Error: can't convert productInfo json to string", th);
                }
            }
            try {
                strValueOf = String.valueOf(jSONObject.optDouble("microsPrice") / 1000000.0d);
            } catch (Throwable th2) {
                x2.a("Error: wrong price in micros in sku details: ", th2);
                strValueOf = null;
            }
            byte[] bArrA = this.j.a(string, str, str2, str3, 0, strValueOf, jSONObject.optString("currency"), map);
            return (bArrA == null || (f1Var = this.h) == null || !f1Var.c(bArrA, j)) ? false : true;
        } catch (Throwable th3) {
            x2.b("Error: creating object failed", th3);
            return false;
        }
    }

    protected boolean a(int i, long j) {
        Long l2 = (Long) this.f4935a.get(Integer.valueOf(i));
        if (l2 != null && j - l2.longValue() < 800) {
            x2.a("EventTracker: event with type " + i + " was throttled");
            return true;
        }
        this.f4935a.put(Integer.valueOf(i), Long.valueOf(j));
        return false;
    }
}
