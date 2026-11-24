package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.Revenue;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class Si implements uo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final to f5886a = new to();

    @Override // io.appmetrica.analytics.impl.uo
    public final so a(Revenue revenue) {
        so soVar;
        to toVar = this.f5886a;
        so[] soVarArr = new so[1];
        Xf xf = new Xf();
        Integer num = revenue.quantity;
        if (num == null || num.intValue() > 0) {
            soVar = new so(xf, true, "");
        } else {
            soVar = new so(xf, false, "Invalid quantity value " + num);
        }
        soVarArr[0] = soVar;
        List<so> listAsList = Arrays.asList(soVarArr);
        toVar.getClass();
        return toVar.a(listAsList);
    }
}
