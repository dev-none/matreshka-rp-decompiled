package com.my.target;

import android.content.Context;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class d3 extends l {
    public final List h;
    public final u9 i;
    public Runnable j;

    public static class a implements l.a {
        @Override // com.my.target.l.a
        public v a() {
            return v.a();
        }

        @Override // com.my.target.l.a
        public s b() {
            return g3.a();
        }

        @Override // com.my.target.l.a
        public boolean c() {
            return true;
        }

        @Override // com.my.target.l.a
        public q d() {
            return f3.a();
        }
    }

    public d3(j jVar, h6.a aVar, int i) {
        this(null, jVar, aVar, i);
    }

    public static l a(j jVar, h6.a aVar, int i) {
        return new d3(jVar, aVar, i);
    }

    public final /* synthetic */ void c(h6 h6Var, Context context) {
        this.i.b(this.j);
        a((t) null, m.o, h6Var, context);
    }

    public d3(List list, j jVar, h6.a aVar, int i) {
        super(new a(), jVar, aVar);
        this.h = list;
        this.i = u9.a(i * 1000);
    }

    public static l a(u uVar, j jVar, h6.a aVar, int i) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(uVar);
        return new d3(arrayList, jVar, aVar, i);
    }

    public static l a(List list, j jVar, h6.a aVar, int i) {
        return new d3(list, jVar, aVar, i);
    }

    @Override // com.my.target.l
    public l a(final h6 h6Var, final Context context) {
        if (this.j == null) {
            this.j = new Runnable() { // from class: com.my.target.d3$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.c(h6Var, context);
                }
            };
        }
        this.i.a(this.j);
        return super.a(h6Var, context);
    }

    @Override // com.my.target.l
    public void a(h6 h6Var, Context context, l.b bVar) {
        if (this.h != null) {
            n nVarB = n.b();
            h3 h3Var = (h3) a((h3) a(this.h, (t) null, this.f4684a.d(), k2.a(), h6Var, nVarB, context), nVarB, context);
            bVar.a(h3Var, h3Var != null ? null : nVarB.a());
            return;
        }
        super.a(h6Var, context, bVar);
    }
}
