package io.appmetrica.analytics.impl;

import android.content.Context;
import android.os.ResultReceiver;
import io.appmetrica.analytics.internal.CounterConfigurationReporterType;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class E4 implements La, Ul, Na {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5651a;
    public final X4 b;
    public final Em c;
    public final Eh d;
    public final L4 e;
    public final C2359on f;
    public ArrayList g;
    public final Y4 h;
    public final C2402qg i;
    public final C2007b4 j;
    public final C2526vg k;
    public final Object l;

    public E4(Context context, Ll ll, X4 x4, C2539w4 c2539w4, C2402qg c2402qg) {
        this(context, ll, x4, c2539w4, new Eh(c2539w4.b), c2402qg, new Y4(), new G4(), new C2526vg());
    }

    public static void b(C2539w4 c2539w4) {
        C2495ua.H.c().b(!Boolean.FALSE.equals(c2539w4.b.n));
    }

    @Override // io.appmetrica.analytics.impl.La
    public final void a(C2514v4 c2514v4) {
        Eh eh = this.d;
        eh.f5661a = eh.f5661a.mergeFrom(c2514v4);
    }

    @Override // io.appmetrica.analytics.impl.La
    public final CounterConfigurationReporterType c() {
        return CounterConfigurationReporterType.COMMUTATION;
    }

    public final C2514v4 d() {
        return this.d.f5661a;
    }

    public final C2402qg e() {
        return this.i;
    }

    @Override // io.appmetrica.analytics.impl.La
    public final Context getContext() {
        return this.f5651a;
    }

    public E4(Context context, Ll ll, X4 x4, C2539w4 c2539w4, Eh eh, C2402qg c2402qg, Y4 y4, G4 g4, C2526vg c2526vg) {
        this.g = new ArrayList();
        this.l = new Object();
        Context applicationContext = context.getApplicationContext();
        this.f5651a = applicationContext;
        this.b = x4;
        this.d = eh;
        this.h = y4;
        this.e = G4.a(this);
        b(c2539w4);
        Em emA = ll.a(applicationContext, x4, c2539w4.f6378a);
        this.c = emA;
        this.j = AbstractC2033c4.a(emA, C2495ua.k().c());
        this.f = g4.a(this, emA);
        this.i = c2402qg;
        this.k = c2526vg;
        ll.a(x4, this);
    }

    public final synchronized void a(B4 b4) {
        this.h.f5965a.add(b4);
        I6.a(b4.c, this.j.a(Jm.a(this.c.e().l)));
    }

    public final synchronized void b(B4 b4) {
        this.h.f5965a.remove(b4);
    }

    @Override // io.appmetrica.analytics.impl.La
    public final X4 b() {
        return this.b;
    }

    public final void a(W5 w5, B4 b4) {
        L4 l4 = this.e;
        l4.getClass();
        l4.a(w5, new K4(b4));
    }

    @Override // io.appmetrica.analytics.impl.Ul
    public final void a(Nl nl, C2231jm c2231jm) {
        synchronized (this.l) {
            for (C2091eb c2091eb : this.g) {
                I6.a(c2091eb.f6060a, nl, this.j.a(c2091eb.c));
            }
            this.g.clear();
        }
    }

    @Override // io.appmetrica.analytics.impl.Ul
    public final void a(C2231jm c2231jm) {
        synchronized (this.l) {
            for (B4 b4 : this.h.f5965a) {
                I6.a(b4.c, this.j.a(Jm.a(c2231jm.l)));
            }
            ArrayList arrayList = new ArrayList();
            for (C2091eb c2091eb : this.g) {
                if (AbstractC2154gm.a(c2231jm, c2091eb.b, c2091eb.c, new C2040cb())) {
                    I6.a(c2091eb.f6060a, this.j.a(c2091eb.c));
                } else {
                    arrayList.add(c2091eb);
                }
            }
            this.g = new ArrayList(arrayList);
            if (!arrayList.isEmpty()) {
                this.f.c();
            }
        }
    }

    public final void a(C2091eb c2091eb) {
        ResultReceiver resultReceiver;
        HashMap map;
        List<String> list;
        HashMap map2 = new HashMap();
        if (c2091eb != null) {
            list = c2091eb.b;
            resultReceiver = c2091eb.f6060a;
            map = c2091eb.c;
        } else {
            resultReceiver = null;
            map = map2;
            list = null;
        }
        boolean zA = this.c.a(list, map);
        if (!zA) {
            I6.a(resultReceiver, this.j.a(map));
        }
        if (!this.c.g()) {
            if (zA) {
                I6.a(resultReceiver, this.j.a(map));
            }
        } else {
            synchronized (this.l) {
                if (zA && c2091eb != null) {
                    this.g.add(c2091eb);
                }
            }
            this.f.c();
        }
    }

    public final void a(ResultReceiver resultReceiver) {
        this.k.a(new D4(resultReceiver));
    }

    public final C2007b4 a() {
        return this.j;
    }

    @Override // io.appmetrica.analytics.impl.Na
    public final void a(C2539w4 c2539w4) {
        this.c.a(c2539w4.f6378a);
        a(c2539w4.b);
    }
}
