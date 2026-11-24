package com.my.target;

import android.util.Pair;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class y7 extends t {
    public final String b;
    public final ArrayList c = new ArrayList();
    public final ArrayList d = new ArrayList();
    public JSONObject e;
    public boolean f;
    public String g;
    public String h;
    public String i;
    public String j;
    public String k;
    public String l;

    public y7(String str) {
        this.b = str;
    }

    public static y7 b(String str) {
        return new y7(str);
    }

    public void a(JSONObject jSONObject) {
        this.e = jSONObject;
    }

    public List c() {
        return new ArrayList(this.c);
    }

    public String d() {
        return this.i;
    }

    public void e(String str) {
        this.h = str;
    }

    public String f() {
        return this.h;
    }

    public void g(String str) {
        this.j = str;
    }

    public void h(String str) {
        this.g = str;
    }

    public String i() {
        return this.b;
    }

    public JSONObject j() {
        return this.e;
    }

    public ArrayList k() {
        return this.d;
    }

    public String l() {
        return this.g;
    }

    public boolean m() {
        return this.f;
    }

    public void a(boolean z) {
        this.f = z;
    }

    public void c(String str) {
        this.i = str;
    }

    public void d(String str) {
        this.k = str;
    }

    public String e() {
        return this.k;
    }

    public void f(String str) {
        this.l = str;
    }

    public String g() {
        return this.l;
    }

    public String h() {
        return this.j;
    }

    public void a(s7 s7Var) {
        this.c.add(s7Var);
    }

    @Override // com.my.target.t
    public int a() {
        return this.c.size();
    }

    public String a(String str) {
        ArrayList arrayList = this.d;
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            Pair pair = (Pair) obj;
            if (str.equals(pair.first)) {
                return (String) pair.second;
            }
        }
        return null;
    }
}
