package com.my.target;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class w3 extends t {
    public final int b;
    public final String c;
    public final ArrayList d = new ArrayList();
    public final ArrayList e = new ArrayList();
    public final ArrayList f = new ArrayList();
    public final ArrayList g = new ArrayList();
    public int h = 10;
    public int i = -1;

    public w3(String str) {
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

    public static w3 a(String str) {
        return new w3(str);
    }

    public static w3 b(String str) {
        return a(str);
    }

    public void c() {
        this.g.clear();
    }

    public List d() {
        return Collections.unmodifiableList(this.d);
    }

    public int e() {
        return this.h;
    }

    public int f() {
        return this.i;
    }

    public List g() {
        return Collections.unmodifiableList(this.f);
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

    public void a(k0 k0Var) {
        k0Var.e(this.b);
        this.d.add(k0Var);
    }

    public void a(k0 k0Var, int i) {
        int size = this.d.size();
        if (i >= 0 && i <= size) {
            k0Var.e(this.b);
            this.d.add(i, k0Var);
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
            return;
        }
        gb.a("InstreamVideoAdSection: can't add banner, wrong position");
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

    public void a(w3 w3Var) {
        ArrayList arrayList = w3Var.d;
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            a((k0) obj);
        }
        this.e.addAll(w3Var.e);
        this.f.addAll(w3Var.f);
    }
}
