package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.services.SafePackageManager;
import java.util.ArrayList;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.jg, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2225jg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2402qg f6154a;
    public final Ga b;
    public final Bg c;
    public final Lazy d = LazyKt.lazy(new C2148gg(this));
    public final Lazy e = LazyKt.lazy(new C2096eg(this));
    public final Lazy f = LazyKt.lazy(new C2199ig(this));
    public final ArrayList g = new ArrayList();

    public C2225jg(C2402qg c2402qg, Ag ag, Ga ga, Bg bg) {
        this.f6154a = c2402qg;
        this.b = ga;
        this.c = bg;
    }

    public static final InterfaceC2019bg a(C2225jg c2225jg) {
        return (InterfaceC2019bg) c2225jg.d.getValue();
    }

    public static final void a(C2225jg c2225jg, C2451sg c2451sg, InterfaceC2019bg interfaceC2019bg) {
        boolean zAreEqual;
        c2225jg.g.add(c2451sg);
        Bg bg = c2225jg.c;
        if (c2451sg == null) {
            bg.getClass();
        } else {
            SafePackageManager safePackageManager = bg.b;
            Context context = bg.f5613a;
            String installerPackageName = safePackageManager.getInstallerPackageName(context, context.getPackageName());
            int iOrdinal = c2451sg.d.ordinal();
            if (iOrdinal == 1) {
                zAreEqual = Intrinsics.areEqual(bg.f, installerPackageName);
            } else if (iOrdinal == 2) {
                zAreEqual = Intrinsics.areEqual(bg.g, installerPackageName);
            }
            if (zAreEqual) {
                c2225jg.a(c2451sg);
                return;
            }
        }
        interfaceC2019bg.a();
    }

    public final void a(C2451sg c2451sg) {
        C2402qg c2402qg = this.f6154a;
        synchronized (c2402qg) {
            c2402qg.b = c2451sg;
            c2402qg.c = true;
            c2402qg.d.a(c2451sg);
            c2402qg.d.d();
            c2402qg.a(c2402qg.b);
        }
    }
}
