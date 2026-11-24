package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufStateStorage;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.im, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2205im {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ProtobufStateStorage f6139a;
    public final yo b;

    public C2205im(ProtobufStateStorage protobufStateStorage, yo yoVar) {
        this.f6139a = protobufStateStorage;
        this.b = yoVar;
    }

    public C2205im(Context context) {
        this(((Vm) Tm.a(C2333nm.class)).create(context), C2495ua.k().D().a());
    }
}
