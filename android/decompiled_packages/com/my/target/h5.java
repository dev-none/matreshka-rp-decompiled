package com.my.target;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class h5 implements k5, a9.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final a9 f4649a;
    public final k5.a b;
    public final boolean[] c;
    public final List d = new ArrayList();
    public final List e;

    public h5(a9 a9Var, List list, k5.a aVar) {
        this.f4649a = a9Var;
        this.b = aVar;
        this.e = new ArrayList(list);
        this.c = new boolean[list.size()];
        a9Var.setListener(this);
    }

    public static k5 a(a9 a9Var, List list, k5.a aVar) {
        return new h5(a9Var, list, aVar);
    }

    @Override // com.my.target.c5.a
    public void a(b bVar, boolean z, int i, int i2) {
        if (!this.f4649a.a(i)) {
            this.f4649a.b(i);
        } else if (z) {
            this.b.a(bVar, i2);
        }
    }

    @Override // com.my.target.c5.a
    public void a(b bVar) {
        if (this.d.contains(bVar)) {
            return;
        }
        this.b.b(bVar);
        this.d.add(bVar);
    }

    @Override // com.my.target.a9.a
    public void a(int[] iArr) {
        for (int i : iArr) {
            if (i >= 0) {
                boolean[] zArr = this.c;
                if (i < zArr.length && !zArr[i]) {
                    zArr[i] = true;
                    this.b.a((b) this.e.get(i));
                }
            }
        }
    }
}
