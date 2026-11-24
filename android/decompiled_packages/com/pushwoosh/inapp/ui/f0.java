package com.pushwoosh.inapp.ui;

import java.util.ArrayList;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import kotlin.ranges.RangesKt;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class f0 extends Lambda implements Function1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final f0 f5121a = new f0();

    public f0() {
        super(1);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Double dE;
        String str;
        k1 k1Var;
        k1 k1Var2;
        JSONObject it = (JSONObject) obj;
        Intrinsics.checkNotNullParameter(it, "it");
        ArrayList arrayListB = g0.b(it);
        if (arrayListB != null && (dE = h0.e(it, "duration")) != null) {
            if (dE.doubleValue() <= 0.0d) {
                dE = null;
            }
            if (dE != null) {
                long jCoerceAtMost = RangesKt.coerceAtMost((long) (dE.doubleValue() * ((double) 1000)), 30000L);
                if (!it.has("image") || it.isNull("image")) {
                    str = null;
                } else {
                    String strF = h0.f(it, "image");
                    if (strF == null) {
                        return null;
                    }
                    str = strF;
                }
                if (!it.has("title") || it.isNull("title")) {
                    k1Var = null;
                } else {
                    k1 k1VarC = g0.c(it.optJSONObject("title"));
                    if (k1VarC == null) {
                        return null;
                    }
                    k1Var = k1VarC;
                }
                if (!it.has("message") || it.isNull("message")) {
                    k1Var2 = null;
                } else {
                    k1 k1VarC2 = g0.c(it.optJSONObject("message"));
                    if (k1VarC2 == null) {
                        return null;
                    }
                    k1Var2 = k1VarC2;
                }
                return new p2(str, k1Var, k1Var2, arrayListB, jCoerceAtMost);
            }
        }
        return null;
    }
}
