package com.my.target;

import android.content.Context;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class p7 extends v.a {
    public static p7 b() {
        return new p7();
    }

    @Override // com.my.target.v.a
    public int a(j jVar, Context context) {
        return v8.a(context).c();
    }

    @Override // com.my.target.v.a
    public Map a(j jVar, h6 h6Var, Context context) {
        Map mapA = super.a(jVar, h6Var, context);
        a2.b bVarA = a2.e.a(jVar.g().h);
        String str = bVarA.f4523a;
        if (!str.isEmpty()) {
            mapA.put("exb", str);
            gb.a("NativeAdServiceBuilder: Exclude list - " + str);
        }
        String str2 = bVarA.b;
        if (!str2.isEmpty()) {
            mapA.put("excrid", str2);
        }
        return mapA;
    }
}
