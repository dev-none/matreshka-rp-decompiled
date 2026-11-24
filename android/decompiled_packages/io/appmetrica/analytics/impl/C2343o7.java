package io.appmetrica.analytics.impl;

import kotlin.jvm.internal.Ref;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.o7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2343o7 implements InterfaceC2433rn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f6236a;

    public C2343o7(Ref.ObjectRef objectRef) {
        this.f6236a = objectRef;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // io.appmetrica.analytics.impl.InterfaceC2433rn
    public final void a(Rc rc) {
        this.f6236a.element = rc != null ? rc.f5864a : 0;
    }
}
