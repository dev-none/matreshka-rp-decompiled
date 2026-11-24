package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufStateStorage;
import io.appmetrica.analytics.coreutils.internal.parsing.JsonUtils;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.lm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2283lm implements InterfaceC2358om {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public volatile C2231jm f6195a;
    public final CopyOnWriteArrayList b = new CopyOnWriteArrayList();

    @Override // io.appmetrica.analytics.impl.InterfaceC2358om
    public final void a(C2231jm c2231jm) {
        this.f6195a = c2231jm;
        Iterator it = this.b.iterator();
        while (it.hasNext()) {
            ((InterfaceC2358om) it.next()).a(c2231jm);
        }
    }

    public final C2231jm b() {
        C2231jm c2231jm = this.f6195a;
        if (c2231jm != null) {
            return c2231jm;
        }
        Intrinsics.throwUninitializedPropertyAccessException("startupState");
        return null;
    }

    public final void b(InterfaceC2358om interfaceC2358om) {
        this.b.remove(interfaceC2358om);
    }

    public final void a(InterfaceC2358om interfaceC2358om) {
        this.b.add(interfaceC2358om);
        if (this.f6195a != null) {
            C2231jm c2231jm = this.f6195a;
            if (c2231jm == null) {
                Intrinsics.throwUninitializedPropertyAccessException("startupState");
                c2231jm = null;
            }
            interfaceC2358om.a(c2231jm);
        }
    }

    public final void a(Context context) {
        String strOptStringOrNull;
        ProtobufStateStorage<Object> protobufStateStorageCreate = ((Vm) Tm.a(C2333nm.class)).create(context);
        yo yoVarA = C2495ua.k().D().a();
        synchronized (yoVarA) {
            strOptStringOrNull = JsonUtils.optStringOrNull(yoVarA.f6420a.a(), "device_id");
        }
        a(new C2231jm(strOptStringOrNull, yoVarA.a(), (C2333nm) protobufStateStorageCreate.read()));
    }
}
