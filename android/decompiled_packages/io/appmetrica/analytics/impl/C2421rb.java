package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.AppMetricaConfig;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.rb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2421rb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2338o2 f6292a = new C2338o2();
    public final C2416r6 b = new C2416r6();
    public Bn c;
    public boolean d;
    public boolean e;

    public final synchronized void a(Context context, AppMetricaConfig appMetricaConfig, InterfaceC1988ab interfaceC1988ab) {
        if (this.e) {
            return;
        }
        CollectionsKt.addAll(this.b.f6288a, new Ma[]{this.f6292a.a(context, appMetricaConfig, interfaceC1988ab)});
        this.e = true;
    }

    public final synchronized void b() {
        if (this.d) {
            return;
        }
        C2416r6 c2416r6 = this.b;
        ArrayList arrayList = C2213j4.l().i.f6260a;
        ArrayList arrayList2 = new ArrayList(CollectionsKt.collectionSizeOrDefault(arrayList, 10));
        Iterator it = arrayList.iterator();
        if (it.hasNext()) {
            it.next().getClass();
            throw new ClassCastException();
        }
        c2416r6.f6288a.addAll(arrayList2);
        this.d = true;
    }

    public final synchronized void c() {
        if (this.c != null) {
            return;
        }
        X1 x1 = new X1(this.b);
        this.c = new Bn(x1);
        An an = new An();
        an.f5601a.add(x1);
        Thread.UncaughtExceptionHandler defaultUncaughtExceptionHandler = Thread.getDefaultUncaughtExceptionHandler();
        if (defaultUncaughtExceptionHandler != null) {
            an.f5601a.add(defaultUncaughtExceptionHandler);
        }
        Thread.setDefaultUncaughtExceptionHandler(an);
    }

    public final synchronized void a() {
        this.b.f6288a.clear();
        this.d = false;
        this.e = false;
    }
}
