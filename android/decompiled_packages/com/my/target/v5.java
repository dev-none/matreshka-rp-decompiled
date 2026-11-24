package com.my.target;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class v5 extends t {
    public final int b;
    public final String c;
    public final ArrayList d = new ArrayList();
    public final ArrayList e = new ArrayList();
    public final ArrayList f = new ArrayList();
    public final ArrayList g = new ArrayList();
    public int h = 10;
    public int i = -1;

    public v5(String str) {
        this.c = str;
        str.getClass();
        str.hashCode();
        switch (str) {
            case "preroll":
                this.b = 1;
                break;
            case "postroll":
                this.b = 3;
                break;
            case "pauseroll":
                this.b = 4;
                break;
            case "midroll":
                this.b = 2;
                break;
            default:
                this.b = 0;
                break;
        }
    }

    public static v5 a(String str) {
        return b(str);
    }

    public static v5 b(String str) {
        return new v5(str);
    }

    public void c() {
        this.g.clear();
    }

    public List d() {
        return new ArrayList(this.d);
    }

    public int e() {
        return this.h;
    }

    public int f() {
        return this.i;
    }

    public ArrayList g() {
        return new ArrayList(this.f);
    }

    public String h() {
        return this.c;
    }

    public boolean i() {
        return (this.f.isEmpty() && this.e.isEmpty()) ? false : true;
    }

    public u j() {
        if (this.e.size() > 0) {
            return (u) this.e.remove(0);
        }
        return null;
    }

    public void a(int i) {
        this.h = i;
    }

    public void b(int i) {
        this.i = i;
    }

    public void a(s5 s5Var) {
        s5Var.e(this.b);
        this.d.add(s5Var);
    }

    public void a(s5 s5Var, int i) {
        int size = this.d.size();
        if (i < 0 || i > size) {
            return;
        }
        s5Var.e(this.b);
        this.d.add(i, s5Var);
        ArrayList arrayList = this.g;
        int size2 = arrayList.size();
        int i2 = 0;
        while (i2 < size2) {
            Object obj = arrayList.get(i2);
            i2++;
            u uVar = (u) obj;
            int iA = uVar.A();
            if (iA >= i) {
                uVar.d(iA + 1);
            }
        }
    }

    @Override // com.my.target.t
    public int a() {
        return this.d.size();
    }

    public ArrayList a(float f) {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = this.f;
        int size = arrayList2.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList2.get(i);
            i++;
            u uVar = (u) obj;
            if (uVar.y() == f) {
                arrayList.add(uVar);
            }
        }
        if (arrayList.size() > 0) {
            this.f.removeAll(arrayList);
        }
        return arrayList;
    }

    public void a(u uVar) {
        if (uVar.H()) {
            this.f.add(uVar);
        } else if (uVar.F()) {
            this.e.add(uVar);
        } else {
            this.g.add(uVar);
        }
    }

    public void a(v5 v5Var) {
        ArrayList arrayList = v5Var.d;
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            a((s5) obj);
        }
        this.e.addAll(v5Var.e);
        this.f.addAll(v5Var.f);
    }
}
