package com.my.target;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class f9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final m9 f4624a;
    public final l8 b;
    public final Context c;
    public final aa d;
    public boolean e = true;

    public f9(m9 m9Var, l8 l8Var, Context context) {
        this.f4624a = m9Var;
        this.b = l8Var;
        this.c = context;
        this.d = aa.a(context);
    }

    public static f9 a(m9 m9Var, l8 l8Var, Context context) {
        return new f9(m9Var, l8Var, context);
    }

    public z b() {
        return new z(this.c);
    }

    public b9 c() {
        return new b9(this.c);
    }

    public Handler d() {
        return new Handler(Looper.getMainLooper());
    }

    public j9 e() {
        return new k9(this.c);
    }

    public void a(boolean z) {
        this.e = z;
    }

    public n9 a(o4 o4Var, View view, View view2, View view3, n9.a aVar) {
        if (!o4Var.S().isEmpty()) {
            return new p9(((g4) o4Var.S().get(0)).L(), view, view2, aVar, view3, this.d, this.c);
        }
        if (o4Var.V() != null) {
            return new r9(view, view2, aVar, view3, this.d, this.c);
        }
        return new q9(view, view2, aVar, view3, this.d, this.c);
    }

    public h9 a(h9.a aVar) {
        return new i9(this.d, this.c, aVar);
    }

    public z4 a(s5 s5Var, z zVar, e5.a aVar) {
        return e5.a(s5Var, zVar, aVar, this, w5.a(this.e, zVar.getContext()));
    }

    public k5 a(b9 b9Var, List list, k5.a aVar) {
        k5 k5VarA = h5.a(b9Var, list, aVar);
        ArrayList arrayList = new ArrayList();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(a((g4) it.next(), k5VarA));
        }
        b9Var.setAdapter(new t0(arrayList, this));
        return k5VarA;
    }

    public c5 a(g4 g4Var, c5.a aVar) {
        return d5.a(g4Var, aVar);
    }

    public v0 a() {
        return new w0(this.c, this.f4624a, this.d);
    }

    public q8 a(s5 s5Var) {
        return q8.a(s5Var, this.b, this.c);
    }
}
