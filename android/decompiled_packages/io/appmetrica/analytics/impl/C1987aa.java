package io.appmetrica.analytics.impl;

import com.unity3d.ads.core.domain.AndroidGetIsModulesInitEnabled;
import io.appmetrica.analytics.coreapi.internal.identifiers.IdentifierStatus;
import io.appmetrica.analytics.internal.IdentifiersResult;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.aa, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1987aa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Xl f6000a = new Xl();
    public C2039ca b = new C2039ca();

    public final synchronized void a(C2039ca c2039ca) {
        this.b = c2039ca;
    }

    public final synchronized void a(List list, HashMap map) {
        Boolean bool;
        String str;
        Iterator it = list.iterator();
        while (it.hasNext()) {
            if (Intrinsics.areEqual((String) it.next(), "appmetrica_lib_ssl_enabled") && (bool = this.b.f6027a) != null) {
                boolean zBooleanValue = bool.booleanValue();
                C2039ca c2039ca = this.b;
                IdentifierStatus identifierStatus = c2039ca.b;
                String str2 = c2039ca.c;
                if (zBooleanValue) {
                    str = AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE;
                } else {
                    if (zBooleanValue) {
                        throw new NoWhenBranchMatchedException();
                    }
                    str = "false";
                }
                map.put("appmetrica_lib_ssl_enabled", this.f6000a.a(new IdentifiersResult(str, identifierStatus, str2)));
            }
        }
    }
}
