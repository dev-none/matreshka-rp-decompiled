package com.my.target;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public class x5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f4861a = new ArrayList();
    public int b = 60;

    public static final x5 c() {
        return new x5();
    }

    public int a() {
        return this.b;
    }

    public boolean b() {
        return !this.f4861a.isEmpty();
    }

    public y5 d() {
        if (this.f4861a.isEmpty()) {
            return null;
        }
        return (y5) this.f4861a.remove(0);
    }

    public void a(int i) {
        this.b = i;
    }

    public void a(y5 y5Var) {
        int size = this.f4861a.size();
        for (int i = 0; i < size; i++) {
            if (y5Var.f() > ((y5) this.f4861a.get(i)).f()) {
                this.f4861a.add(i, y5Var);
                return;
            }
        }
        this.f4861a.add(y5Var);
    }

    public void a(l1 l1Var) {
        ArrayList arrayList = this.f4861a;
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            l1Var.a((y5) obj);
        }
    }
}
