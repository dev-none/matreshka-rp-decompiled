package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufStateStorage;

/* JADX INFO: loaded from: classes7.dex */
public final class po implements Ra {
    @Override // io.appmetrica.analytics.impl.Ra
    public final String a(Context context) {
        C2333nm c2333nm;
        try {
            Um umA = Tm.a(C2333nm.class);
            if (umA == null) {
                return null;
            }
            Vm vm = (Vm) umA;
            ProtobufStateStorage<Object> protobufStateStorageA = vm.a(context, vm.a(context));
            if (protobufStateStorageA == null || (c2333nm = (C2333nm) protobufStateStorageA.read()) == null) {
                return null;
            }
            return c2333nm.f6228a;
        } catch (Throwable unused) {
            return null;
        }
    }
}
