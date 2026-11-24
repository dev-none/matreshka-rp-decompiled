package com.my.target;

import android.content.Context;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class v3 extends v.a {
    public final int b;

    public v3(int i) {
        this.b = i;
    }

    public static v a(int i) {
        return new v3(i);
    }

    @Override // com.my.target.v.a
    public Map a(j jVar, h6 h6Var, Context context) {
        Map mapA = super.a(jVar, h6Var, context);
        mapA.put("duration", Integer.toString(this.b));
        return mapA;
    }
}
