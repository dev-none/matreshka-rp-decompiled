package io.appmetrica.analytics.impl;

import java.util.Map;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.xd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2573xd extends Lambda implements Function1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2297mb f6401a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C2573xd(C2297mb c2297mb) {
        super(1);
        this.f6401a = c2297mb;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        C2119fd c2119fd = (C2119fd) ((Map.Entry) obj).getValue();
        return c2119fd.b.parse(this.f6401a);
    }
}
