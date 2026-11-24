package com.my.target;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class o7 extends t {
    public final ArrayList b = new ArrayList();
    public long c;

    public static o7 f() {
        return new o7();
    }

    public void a(b7 b7Var) {
        this.b.add(b7Var);
    }

    public List c() {
        return new ArrayList(this.b);
    }

    public b7 d() {
        if (this.b.size() > 0) {
            return (b7) this.b.get(0);
        }
        return null;
    }

    public long e() {
        return this.c;
    }

    @Override // com.my.target.t
    public int a() {
        return this.b.size();
    }

    public void a(long j) {
        this.c = j;
    }
}
