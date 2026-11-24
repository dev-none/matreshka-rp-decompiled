package com.my.target;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public class h3 extends t {
    public final HashMap b;

    public h3() {
        HashMap map = new HashMap();
        this.b = map;
        map.put("preroll", w3.b("preroll"));
        map.put("pauseroll", w3.b("pauseroll"));
        map.put("midroll", w3.b("midroll"));
        map.put("postroll", w3.b("postroll"));
    }

    public static h3 e() {
        return new h3();
    }

    public w3 a(String str) {
        return (w3) this.b.get(str);
    }

    public ArrayList c() {
        return new ArrayList(this.b.values());
    }

    public boolean d() {
        for (w3 w3Var : this.b.values()) {
            if (w3Var.a() > 0 || w3Var.i()) {
                return true;
            }
        }
        return false;
    }

    @Override // com.my.target.t
    public int a() {
        Iterator it = this.b.values().iterator();
        int iA = 0;
        while (it.hasNext()) {
            iA += ((w3) it.next()).a();
        }
        return iA;
    }
}
