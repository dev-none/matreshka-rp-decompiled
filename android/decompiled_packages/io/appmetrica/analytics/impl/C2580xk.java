package io.appmetrica.analytics.impl;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufStateStorage;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.xk, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2580xk implements Pc {
    public static final boolean a(SQLiteDatabase sQLiteDatabase) {
        return true;
    }

    public static void b(Context context) {
        IBinaryDataHelper iBinaryDataHelperF;
        C2555wk c2555wk = new C2555wk();
        C2530vk c2530vk = new C2530vk();
        C2284ln c2284ln = new C2284ln(c2530vk, c2530vk, new C2545wa(false), new InterfaceC2309mn() { // from class: io.appmetrica.analytics.impl.xk$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.impl.InterfaceC2309mn
            public final boolean a(SQLiteDatabase sQLiteDatabase) {
                return C2580xk.a(sQLiteDatabase);
            }
        });
        C2139g7 c2139g7A = C2139g7.a(context);
        c2139g7A.getClass();
        Context context2 = c2139g7A.e;
        C2191i7 c2191i7 = c2139g7A.p;
        byte[] bArr = new C1980a3(new C2506ul(new C2113f7(context2, new C2165h7(c2191i7.f6127a, c2191i7.b, false).a(context2, c2555wk), c2284ln, PublicLogger.getAnonymousInstance())), "binary_data").get("auto_inapp_collecting_info_data");
        if (bArr == null) {
            int i = C2505uk.f6355a;
            return;
        }
        C2139g7 c2139g7A2 = C2139g7.a(context);
        synchronized (c2139g7A2) {
            iBinaryDataHelperF = c2139g7A2.f();
        }
        ((C1980a3) iBinaryDataHelperF).insert("auto_inapp_collecting_info_data", bArr);
    }

    @Override // io.appmetrica.analytics.impl.Pc
    public final void a(Context context) {
        Vm vm = (Vm) Tm.a(C2333nm.class);
        ProtobufStateStorage<Object> protobufStateStorageA = vm.a(context, vm.b(context));
        C2333nm c2333nm = (C2333nm) protobufStateStorageA.read();
        C2308mm c2308mmA = c2333nm.a(c2333nm.m);
        c2308mmA.o = 0L;
        protobufStateStorageA.save(new C2333nm(c2308mmA));
        b(context);
    }
}
