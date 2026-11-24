package com.my.target;

import android.content.Context;
import android.os.Looper;
import android.text.TextUtils;
import com.my.target.common.MyTargetManager;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public abstract class l {
    public static String f = "ad.mail.ru";
    public static String g = "https://";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final a f4684a;
    public final j b;
    public final h6.a c;
    public String d;
    public b e;

    public interface a {
        v a();

        s b();

        boolean c();

        q d();
    }

    public interface b {
        void a(t tVar, m mVar);
    }

    public l(a aVar, j jVar, h6.a aVar2) {
        this.f4684a = aVar;
        this.b = jVar;
        this.c = aVar2;
    }

    public static void a(h6 h6Var, int i, long j) {
        h6Var.a(i, System.currentTimeMillis() - j);
    }

    public static long b(h6 h6Var, int i, long j) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        h6Var.b(i, jCurrentTimeMillis - j);
        return jCurrentTimeMillis;
    }

    public final l a(b bVar) {
        this.e = bVar;
        return this;
    }

    public l a(final h6 h6Var, Context context) {
        final Context applicationContext = context.getApplicationContext();
        if (!MyTargetManager.isSdkInitialized()) {
            MyTargetManager.initSdk(applicationContext);
        }
        f0.a(new Runnable() { // from class: com.my.target.l$$ExternalSyntheticLambda3
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(h6Var, applicationContext);
            }
        });
        return this;
    }

    public final /* synthetic */ void b(final h6 h6Var, final Context context) {
        a(h6Var, context, new b() { // from class: com.my.target.l$$ExternalSyntheticLambda1
            @Override // com.my.target.l.b
            public final void a(t tVar, m mVar) {
                this.f$0.a(h6Var, context, tVar, mVar);
            }
        });
    }

    public void a(final h6 h6Var, final Context context, final b bVar) {
        r5.c(context);
        if (!k2.a(context)) {
            this.b.a().a(0, 1002);
            bVar.a(null, m.d);
            return;
        }
        final v8 v8VarA = v8.a(context);
        final ArrayList arrayList = new ArrayList();
        String strF = v8VarA.f();
        if (!TextUtils.isEmpty(strF)) {
            Collections.addAll(arrayList, strF.split(StringUtils.COMMA));
        }
        arrayList.add(f);
        final v vVarA = this.f4684a.a();
        vVarA.a((String) arrayList.get(0), this.b, h6Var, context, new v.b() { // from class: com.my.target.l$$ExternalSyntheticLambda0
            @Override // com.my.target.v.b
            public final void a(u uVar, String str) {
                this.f$0.a(h6Var, arrayList, vVarA, v8VarA, context, bVar, uVar, str);
            }
        });
    }

    public t a(t tVar, n nVar, Context context) {
        s sVarB;
        this.b.a().b(0, 4000);
        return (tVar == null || (sVarB = this.f4684a.b()) == null) ? tVar : sVarB.a(tVar, this.b, nVar, context);
    }

    public w a(u uVar, k2 k2Var, Map map, Context context) {
        o2 o2VarB = k2Var.b(uVar.b, uVar.f4826a, map, context);
        if (o2VarB.d()) {
            return new w(o2VarB, (String) o2VarB.c());
        }
        this.d = o2VarB.a();
        return new w(o2VarB, null);
    }

    public t a(List list, t tVar, q qVar, k2 k2Var, h6 h6Var, n nVar, Context context) {
        if (list.size() <= 0) {
            return tVar;
        }
        Iterator it = list.iterator();
        t tVar2 = tVar;
        while (it.hasNext()) {
            tVar2 = (t) a((u) it.next(), tVar2, qVar, k2Var, h6Var, nVar, context).b;
        }
        return tVar2;
    }

    public w a(u uVar, t tVar, q qVar, k2 k2Var, h6 h6Var, n nVar, Context context) {
        u uVar2;
        t tVarA;
        Context context2 = context;
        long jCurrentTimeMillis = System.currentTimeMillis();
        o2 o2VarA = k2Var.a(uVar.b, null, context2);
        a(h6Var, 1, jCurrentTimeMillis);
        if (!o2VarA.d()) {
            return new w(o2VarA, tVar);
        }
        bb.a(uVar.a("serviceRequested"), this.b.a(), 0, context2);
        int iA = tVar != null ? tVar.a() : 0;
        String str = (String) o2VarA.c();
        if (str != null) {
            long jCurrentTimeMillis2 = System.currentTimeMillis();
            t tVarA2 = qVar.a(str, uVar, tVar, this.b, this.c, h6Var, null, nVar, context2);
            uVar2 = uVar;
            a(h6Var, 2, jCurrentTimeMillis2);
            context2 = context;
            tVarA = a(uVar2.D(), tVarA2, qVar, k2Var, h6Var, nVar, context2);
        } else {
            uVar2 = uVar;
            tVarA = tVar;
        }
        if (iA == (tVarA != null ? tVarA.a() : 0)) {
            bb.a(uVar2.a("serviceAnswerEmpty"), this.b.a(), 0, context2);
            u uVarW = uVar2.w();
            if (uVarW != null) {
                tVarA = (t) a(uVarW, tVarA, qVar, k2Var, h6Var, nVar, context2).b;
            }
        }
        return new w(o2VarA, tVarA);
    }

    public void a(final t tVar, final m mVar, h6 h6Var, Context context) {
        h6Var.b(context);
        if (this.e == null) {
            return;
        }
        if (Looper.myLooper() == Looper.getMainLooper()) {
            this.e.a(tVar, mVar);
            this.e = null;
        } else {
            f0.f(new Runnable() { // from class: com.my.target.l$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.a(tVar, mVar);
                }
            });
        }
    }

    public final /* synthetic */ void a(t tVar, m mVar) {
        b bVar = this.e;
        if (bVar != null) {
            bVar.a(tVar, mVar);
            this.e = null;
        }
    }

    public final void a(u uVar, String str, h6 h6Var, List list, v vVar, v8 v8Var, Context context, b bVar) {
        String str2;
        o2 o2Var;
        Context context2;
        String str3;
        if (uVar == null) {
            this.b.a().a(0, 1003, "adService == null");
            bVar.a(null, m.o);
            return;
        }
        k2 k2VarA = k2.a(this.b.a());
        h6Var.b();
        String str4 = uVar.f4826a;
        StringBuilder sb = new StringBuilder();
        HashMap map = new HashMap();
        this.b.a().b(0, 2000);
        long jCurrentTimeMillis = System.currentTimeMillis();
        int size = list.size() - 1;
        int i = 0;
        o2 o2Var2 = null;
        while (true) {
            if (i <= size) {
                String str5 = (String) list.get(i);
                u uVarA = vVar.a(g + str5 + "/mobile/", this.b, str4);
                w wVarA = a(uVarA, k2VarA, map, context);
                o2 o2Var3 = (o2) wVarA.f4849a;
                if (o2Var3 != null) {
                    o2Var2 = o2Var3;
                }
                str2 = (String) wVarA.b;
                if (q.a(str2)) {
                    this.b.a().a(uVarA.b);
                    o2Var = o2Var2;
                    break;
                } else if (i != size) {
                    if (sb.length() != 0) {
                        sb.append(StringUtils.COMMA);
                    }
                    sb.append(str5);
                    map.put("X-Failed-Hosts", sb.toString());
                    i++;
                }
            }
            o2Var = o2Var2;
            str2 = null;
            break;
        }
        if (str2 == null) {
            if (o2Var != null) {
                str3 = "response: code=" + o2Var.b() + ", error=" + o2Var.a() + ", deflatedRequestParams=" + str4;
            } else {
                str3 = "response==null, deflatedRequestParams=" + str4;
            }
            this.b.a().c(0, 2002, str3);
            a(o2Var, bVar);
            return;
        }
        long jB = b(h6Var, 1, jCurrentTimeMillis);
        List arrayList = new ArrayList();
        q qVarD = this.f4684a.d();
        n nVarB = n.b();
        String str6 = str2;
        h6 h6Var2 = h6Var;
        t tVarA = qVarD.a(str6, uVar, null, this.b, this.c, h6Var2, arrayList, nVarB, context);
        b(h6Var2, 2, jB);
        v8Var.f(arrayList.isEmpty() ? null : TextUtils.join(StringUtils.COMMA, arrayList));
        if (this.f4684a.c()) {
            tVarA = a(uVar.D(), tVarA, qVarD, k2VarA, h6Var2, nVarB, context);
            context2 = context;
            h6Var2 = h6Var2;
        } else {
            context2 = context;
        }
        long jCurrentTimeMillis2 = System.currentTimeMillis();
        t tVarA2 = a(tVarA, nVarB, context2);
        b(h6Var2, 3, jCurrentTimeMillis2);
        bVar.a(tVarA2, nVarB.a());
    }

    public final void a(o2 o2Var, b bVar) {
        if (o2Var == null) {
            bVar.a(null, m.c);
            return;
        }
        int iB = o2Var.b();
        String str = iB + " – " + o2Var.a();
        if (iB == 403) {
            bVar.a(null, m.f);
            return;
        }
        if (iB != 404) {
            if (iB != 408) {
                if (iB == 500) {
                    bVar.a(null, m.h);
                    return;
                } else if (iB != 504) {
                    if (iB == 200) {
                        bVar.a(null, m.j);
                        return;
                    } else {
                        bVar.a(null, m.a(1000, str));
                        return;
                    }
                }
            }
            bVar.a(null, m.e);
            return;
        }
        bVar.a(null, m.g);
    }
}
