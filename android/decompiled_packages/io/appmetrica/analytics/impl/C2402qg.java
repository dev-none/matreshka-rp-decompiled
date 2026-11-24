package io.appmetrica.analytics.impl;

import android.content.Context;
import java.util.HashSet;
import java.util.Iterator;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.qg, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2402qg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashSet f6275a = new HashSet();
    public C2451sg b;
    public boolean c;
    public final yo d;
    public final Context e;

    public C2402qg(Context context, yo yoVar) {
        this.e = context;
        this.d = yoVar;
        this.b = yoVar.b();
        this.c = yoVar.c();
    }

    public final void a() {
        if (this.c) {
            return;
        }
        Context context = this.e;
        Va vaA = Ag.a(context, C2495ua.H.d.a());
        InterfaceC2576xg interfaceC2576xg = (InterfaceC2576xg) new C2225jg(this, new Ag(vaA), new Ga(context), new Bg(context)).f.getValue();
        try {
            vaA.a(interfaceC2576xg);
        } catch (Throwable th) {
            interfaceC2576xg.a(th);
        }
    }

    public final synchronized void a(C2501ug c2501ug) {
        this.f6275a.add(c2501ug);
        if (this.c) {
            c2501ug.a(this.b);
        }
    }

    public final synchronized void a(C2451sg c2451sg) {
        Iterator it = this.f6275a.iterator();
        while (it.hasNext()) {
            ((C2501ug) it.next()).a(c2451sg);
        }
    }
}
