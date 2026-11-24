package io.appmetrica.analytics.impl;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.gg, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2148gg extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2225jg f6097a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C2148gg(C2225jg c2225jg) {
        super(0);
        this.f6097a = c2225jg;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        return new C2122fg(this.f6097a);
    }
}
