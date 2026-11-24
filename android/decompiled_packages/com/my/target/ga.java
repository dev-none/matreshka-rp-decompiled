package com.my.target;

import android.content.Context;
import java.lang.ref.WeakReference;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public final class ga implements s8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final fa f4639a;
    public final e1 b;
    public final WeakReference c;
    public final da d;

    public ga(fa faVar, e1 e1Var, da daVar, Context context) {
        this.f4639a = faVar;
        this.b = e1Var;
        this.d = daVar;
        this.c = new WeakReference(context.getApplicationContext());
    }

    @Override // com.my.target.s8
    public void a(r8 r8Var) {
        b4 b4Var;
        if (this.d == null) {
            gb.a("ShoppablePostMessageHandler hasn't shoppableAdsData");
            return;
        }
        if (!r8Var.f4805a.equals("shoppable")) {
            gb.a("ShoppablePostMessageHandler has wrong postMessage type");
            return;
        }
        if (!r8Var.b.equals("click")) {
            gb.a("ShoppablePostMessageHandler has wrong postMessage action");
            return;
        }
        ha haVarA = new ia().a(r8Var.c);
        if (haVarA == null) {
            gb.a("ShoppablePostMessageHandler has wrong parse post message params");
            return;
        }
        String str = haVarA.f4654a;
        Context context = (Context) this.c.get();
        if (context == null) {
            gb.a("ShoppablePostMessageHandler hasn't context");
            return;
        }
        Iterator it = this.d.a().iterator();
        do {
            if (!it.hasNext()) {
                b4Var = null;
                break;
            }
            b4Var = (b4) it.next();
        } while (!str.equals(b4Var.id));
        if (b4Var == null) {
            gb.a("ShoppablePostMessageHandler cannot find internalShoppableAdsData by id");
            return;
        }
        bb.b(b4Var.f4554a, "click", 2, context);
        b4 b4Var2 = b4Var;
        this.b.a(this.f4639a, b4Var2.deeplink, b4Var2.deeplinkFallbackUrl, b4Var2.url, context);
    }
}
