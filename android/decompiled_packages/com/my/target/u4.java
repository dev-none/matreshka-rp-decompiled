package com.my.target;

import android.content.Context;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class u4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final j5 f4829a;
    public final ArrayList b = new ArrayList();
    public f5.c c;

    public u4(List list, c1 c1Var) {
        this.f4829a = c1Var;
        c1Var.setCarouselListener(new a());
        for (int i : c1Var.getNumbersOfCurrentShowingCards()) {
            if (i < list.size() && i >= 0) {
                g4 g4Var = (g4) list.get(i);
                this.b.add(g4Var);
                bb.b(g4Var.x(), "show", 1, c1Var.getView().getContext());
            }
        }
    }

    public static u4 a(List list, c1 c1Var) {
        return new u4(list, c1Var);
    }

    public void a(f5.c cVar) {
        this.c = cVar;
    }

    public class a implements c1.b {
        public a() {
        }

        @Override // com.my.target.c1.b
        public void a(g4 g4Var, int i) {
            u4 u4Var = u4.this;
            f5.c cVar = u4Var.c;
            if (cVar != null) {
                cVar.a(g4Var, null, i, u4Var.f4829a.getView().getContext());
            }
        }

        @Override // com.my.target.c1.b
        public void a(List list) {
            Context context = u4.this.f4829a.getView().getContext();
            String strD = kb.d(context);
            Iterator it = list.iterator();
            while (it.hasNext()) {
                g4 g4Var = (g4) it.next();
                if (!u4.this.b.contains(g4Var)) {
                    u4.this.b.add(g4Var);
                    za zaVarX = g4Var.x();
                    if (strD != null) {
                        bb.a(zaVarX, strD, 1, context);
                    }
                    bb.a(zaVarX, "show", 1, context);
                }
            }
        }
    }
}
