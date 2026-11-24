package io.appmetrica.analytics.impl;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.wa, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2545wa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashMap f6383a;
    public final boolean b;

    public C2545wa() {
        this(false);
    }

    public final void a(Object obj, Object obj2) {
        Collection collection = (Collection) this.f6383a.get(obj);
        ArrayList arrayList = collection == null ? new ArrayList() : new ArrayList(collection);
        arrayList.add(obj2);
    }

    public final String toString() {
        return this.f6383a.toString();
    }

    public C2545wa(boolean z) {
        this.f6383a = new HashMap();
        this.b = z;
    }
}
