package io.appmetrica.analytics.impl;

import android.content.Context;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.i4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2188i4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Object f6124a;
    public final C2240k5 b;
    public final HashMap c;
    public final C2545wa d;
    public final Context e;
    public final C2365p4 f;

    public C2188i4(Context context, C2240k5 c2240k5) {
        this(context, c2240k5, new C2365p4());
    }

    public final InterfaceC2290m4 a(X3 x3, C2539w4 c2539w4) {
        InterfaceC2290m4 interfaceC2290m4A;
        synchronized (this.f6124a) {
            interfaceC2290m4A = (InterfaceC2290m4) this.c.get(x3);
            if (interfaceC2290m4A == null) {
                this.f.getClass();
                interfaceC2290m4A = C2365p4.a(x3).a(this.e, this.b, x3, c2539w4);
                this.c.put(x3, interfaceC2290m4A);
                this.d.a(new C2162h4(x3.b, x3.c, x3.d), x3);
            }
        }
        return interfaceC2290m4A;
    }

    public C2188i4(Context context, C2240k5 c2240k5, C2365p4 c2365p4) {
        this.f6124a = new Object();
        this.c = new HashMap();
        this.d = new C2545wa();
        this.e = context.getApplicationContext();
        this.b = c2240k5;
        this.f = c2365p4;
    }

    public final void a(String str, Integer num, String str2) {
        synchronized (this.f6124a) {
            C2545wa c2545wa = this.d;
            Collection collection = (Collection) c2545wa.f6383a.remove(new C2162h4(str, num, str2));
            if (!no.a(collection)) {
                collection.size();
                ArrayList arrayList = new ArrayList(collection.size());
                Iterator it = collection.iterator();
                while (it.hasNext()) {
                    arrayList.add((InterfaceC2290m4) this.c.remove((X3) it.next()));
                }
                Iterator it2 = arrayList.iterator();
                while (it2.hasNext()) {
                    ((InterfaceC2290m4) it2.next()).a();
                }
            }
        }
    }
}
