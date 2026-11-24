package com.my.target;

import android.content.Context;
import com.my.target.common.models.ImageData;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class c8 extends s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final a2 f4574a = a2.e;

    public static c8 a() {
        return new c8();
    }

    public final void a(x5 x5Var) {
        x5Var.a(new l1() { // from class: com.my.target.c8$$ExternalSyntheticLambda0
            @Override // com.my.target.l1
            public final void a(Object obj) {
                this.f$0.a((y5) obj);
            }
        });
    }

    public final /* synthetic */ void a(y5 y5Var) {
        if (y5Var.j() && (y5Var.g() instanceof o7)) {
            o7 o7Var = (o7) y5Var.g();
            this.f4574a.a(o7Var.c(), o7Var.e());
        }
    }

    @Override // com.my.target.s
    public o7 a(o7 o7Var, j jVar, n nVar, Context context) {
        List<b7> listC = o7Var.c();
        if (listC.isEmpty()) {
            x5 x5VarB = o7Var.b();
            if (x5VarB != null && x5VarB.b()) {
                a(x5VarB);
                return o7Var;
            }
            nVar.a(m.r);
            return null;
        }
        ArrayList arrayList = new ArrayList();
        int iF = jVar.f();
        boolean z = iF == 0 || iF == 1;
        this.f4574a.a(listC, o7Var.e());
        for (b7 b7Var : listC) {
            ImageData imageDataS = b7Var.s();
            if (imageDataS != null) {
                imageDataS.useCache(true);
                if (z) {
                    arrayList.add(imageDataS);
                }
            }
            ImageData imageDataQ = b7Var.q();
            if (imageDataQ != null) {
                imageDataQ.useCache(true);
                if (z) {
                    arrayList.add(imageDataQ);
                }
            }
            c cVarA = b7Var.a();
            if (cVarA != null) {
                ImageData imageDataC = cVarA.c();
                imageDataC.useCache(true);
                if (z) {
                    arrayList.add(imageDataC);
                }
            }
            ImageData imageDataM = b7Var.M();
            if (imageDataM != null) {
                arrayList.add(imageDataM);
            }
        }
        if (arrayList.size() > 0) {
            a3.a(arrayList).a(jVar.i(), (String) null).a(context);
        }
        return o7Var;
    }
}
