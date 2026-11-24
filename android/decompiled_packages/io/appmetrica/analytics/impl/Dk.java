package io.appmetrica.analytics.impl;

import android.content.Context;
import android.database.sqlite.SQLiteOpenHelper;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufBinaryStateStorageFactory;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufStateSerializer;
import io.appmetrica.analytics.coreapi.internal.data.TempCacheStorage;
import io.appmetrica.analytics.coreutils.internal.io.FileUtils;
import io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences;
import io.appmetrica.analytics.modulesapi.internal.service.ServiceStorageProvider;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import java.io.File;

/* JADX INFO: loaded from: classes7.dex */
public final class Dk implements ServiceStorageProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5644a;
    public final InterfaceC2606yl b;
    public final SQLiteOpenHelper c;

    public Dk(Context context, InterfaceC2606yl interfaceC2606yl, SQLiteOpenHelper sQLiteOpenHelper) {
        this.f5644a = context;
        this.b = interfaceC2606yl;
        this.c = sQLiteOpenHelper;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ServiceStorageProvider
    public final <T, P extends MessageNano> ProtobufBinaryStateStorageFactory<T> createBinaryStateStorageFactory(String str, ProtobufStateSerializer<P> protobufStateSerializer, ProtobufConverter<T, P> protobufConverter) {
        Sm.f5890a.getClass();
        return new Rm(str, protobufStateSerializer, protobufConverter);
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ServiceStorageProvider
    public final File getAppDataStorage() {
        return FileUtils.getAppDataDir(this.f5644a);
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ServiceStorageProvider
    public final File getAppFileStorage() {
        return FileUtils.getAppStorageDirectory(this.f5644a);
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ServiceStorageProvider
    public final SQLiteOpenHelper getDbStorage() {
        return this.c;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ServiceStorageProvider
    public final File getSdkDataStorage() {
        return FileUtils.sdkStorage(this.f5644a);
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ServiceStorageProvider
    public final TempCacheStorage getTempCacheStorage() {
        C2533vn c2533vn;
        C2139g7 c2139g7A = C2139g7.a(this.f5644a);
        synchronized (c2139g7A) {
            if (c2139g7A.l == null) {
                Context context = c2139g7A.e;
                Wm wm = Wm.SERVICE;
                if (c2139g7A.k == null) {
                    c2139g7A.k = new C2508un(new C2506ul(c2139g7A.h()), "temp_cache");
                }
                c2139g7A.l = new C2533vn(context, wm, c2139g7A.k);
            }
            c2533vn = c2139g7A.l;
        }
        return c2533vn;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ServiceStorageProvider
    public final ModulePreferences legacyModulePreferences() {
        return new Gb(this.b);
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ServiceStorageProvider
    public final ModulePreferences modulePreferences(String str) {
        return new C2093ed(str, this.b);
    }
}
