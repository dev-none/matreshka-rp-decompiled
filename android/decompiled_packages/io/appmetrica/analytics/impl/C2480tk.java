package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufStateStorage;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.tk, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2480tk implements Pc {
    @Override // io.appmetrica.analytics.impl.Pc
    public final void a(Context context) {
        Vm vm = (Vm) Tm.a(C2333nm.class);
        ProtobufStateStorage<Object> protobufStateStorageA = vm.a(context, vm.b(context));
        C2333nm c2333nm = (C2333nm) protobufStateStorageA.read();
        C2308mm c2308mmA = c2333nm.a(c2333nm.m);
        c2308mmA.o = 0L;
        protobufStateStorageA.save(new C2333nm(c2308mmA));
    }
}
