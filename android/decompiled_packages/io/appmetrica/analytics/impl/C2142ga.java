package io.appmetrica.analytics.impl;

import android.content.Context;
import java.util.HashMap;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ga, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2142ga {
    public static volatile C2142ga c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6091a;
    public final HashMap b = new HashMap();

    public C2142ga(Context context) {
        this.f6091a = context;
    }

    public static final C2142ga a(Context context) {
        if (c == null) {
            synchronized (Reflection.getOrCreateKotlinClass(C2142ga.class)) {
                if (c == null) {
                    c = new C2142ga(context);
                }
                Unit unit = Unit.INSTANCE;
            }
        }
        C2142ga c2142ga = c;
        if (c2142ga != null) {
            return c2142ga;
        }
        Intrinsics.throwUninitializedPropertyAccessException("INSTANCE");
        return null;
    }

    public final synchronized E9 b(String str) {
        Object e9;
        HashMap map = this.b;
        e9 = map.get(str);
        if (e9 == null) {
            e9 = new E9(this.f6091a, str);
            map.put(str, e9);
        }
        return (E9) e9;
    }

    public final synchronized void a(String str) {
        this.b.remove(str);
    }
}
