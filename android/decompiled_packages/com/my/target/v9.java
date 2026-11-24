package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class v9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f4847a;
    public final ab b;
    public int c = -1;

    public v9(za zaVar) {
        ArrayList arrayList = new ArrayList();
        for (ya yaVar : zaVar.b("playheadTimerValue").f4536a) {
            if (yaVar instanceof x9) {
                arrayList.add((x9) yaVar);
            }
        }
        this.f4847a = arrayList;
        ab abVarA = ab.a(new ArrayList(), zaVar.a());
        this.b = abVarA;
        zaVar.a(abVarA);
    }

    public static v9 a(za zaVar) {
        return new v9(zaVar);
    }

    public void a(int i, int i2, Context context) {
        if (i2 < 0 || i < 0 || i == this.c) {
            return;
        }
        this.c = i;
        if (!this.f4847a.isEmpty() && i != 0) {
            ArrayList arrayList = this.f4847a;
            int size = arrayList.size();
            int i3 = 0;
            while (i3 < size) {
                Object obj = arrayList.get(i3);
                i3++;
                a(i, (x9) obj, context);
            }
        }
        ab abVarA = ab.a(new ArrayList(), this.b.b);
        while (!this.b.f4536a.isEmpty()) {
            List list = this.b.f4536a;
            if (((w8) list.get(list.size() - 1)).e() > i) {
                break;
            }
            List list2 = this.b.f4536a;
            abVarA.f4536a.add((w8) list2.remove(list2.size() - 1));
        }
        bb.b(abVarA, 1, context);
    }

    public final void a(int i, x9 x9Var, Context context) {
        int iF = x9Var.f();
        int iD = x9Var.d();
        if (iF <= i) {
            if ((iD == 0 || iD >= i) && (i - iF) % x9Var.e() == 0) {
                String strReplace = x9Var.b().replace("[CONTENTPLAYHEAD]", String.valueOf(i));
                if (TextUtils.isEmpty(strReplace)) {
                    return;
                }
                bb.c(strReplace, context);
            }
        }
    }
}
