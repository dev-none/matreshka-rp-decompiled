package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: loaded from: classes7.dex */
public final class Hg implements U7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InterfaceC2111f5 f5707a;

    public Hg(InterfaceC2111f5 interfaceC2111f5) {
        this.f5707a = interfaceC2111f5;
    }

    @Override // io.appmetrica.analytics.impl.U7
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final Gg a(Context context, X4 x4, C2539w4 c2539w4) {
        return new Gg(context, x4, c2539w4, this.f5707a, new Y4(), Ll.a());
    }

    public final InterfaceC2111f5 a() {
        return this.f5707a;
    }
}
