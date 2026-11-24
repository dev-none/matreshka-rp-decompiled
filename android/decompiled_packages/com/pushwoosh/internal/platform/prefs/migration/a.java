package com.pushwoosh.internal.platform.prefs.migration;

import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements com.pushwoosh.a0.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final com.pushwoosh.z.a f5203a;

    public a(com.pushwoosh.z.a aVar) {
        this.f5203a = aVar;
    }

    public final void a(ArrayList arrayList) {
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((MigrationScheme) it.next()).a(this.f5203a);
        }
    }
}
