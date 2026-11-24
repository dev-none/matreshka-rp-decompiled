package io.appmetrica.analytics.impl;

import android.content.Context;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: loaded from: classes7.dex */
public final class Q extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ U f5842a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public Q(U u) {
        super(0);
        this.f5842a = u;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        U u = this.f5842a;
        N n = u.f;
        Context context = u.f5913a;
        n.getClass();
        return N.a(new L(n, context));
    }
}
