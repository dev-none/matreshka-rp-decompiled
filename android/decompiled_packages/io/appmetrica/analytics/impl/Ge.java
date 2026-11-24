package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.io.FileUtils;
import java.io.File;
import java.io.FileOutputStream;
import java.util.Locale;
import java.util.UUID;
import kotlin.text.StringsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class Ge {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5691a;
    public final qo b;
    public final ro c;

    public Ge(Context context) {
        this(context, new qo(), new ro());
    }

    public final String a(String str) {
        try {
            this.c.getClass();
            if (!ro.a(str)) {
                this.b.getClass();
                str = StringsKt.replace$default(UUID.randomUUID().toString(), "-", "", false, 4, (Object) null).toLowerCase(Locale.US);
            }
            File fileFromSdkStorage = FileUtils.getFileFromSdkStorage(this.f5691a, "uuid.dat");
            if (fileFromSdkStorage != null && str != null) {
                Qa.a(str, new FileOutputStream(fileFromSdkStorage));
            }
            return str;
        } catch (Throwable unused) {
            return null;
        }
    }

    public Ge(Context context, qo qoVar, ro roVar) {
        this.f5691a = context;
        this.b = qoVar;
        this.c = roVar;
    }

    public final void a() {
        File fileFromAppStorage;
        File fileFromSdkStorage = FileUtils.getFileFromSdkStorage(this.f5691a, "uuid.dat");
        if (fileFromSdkStorage == null || fileFromSdkStorage.exists() || (fileFromAppStorage = FileUtils.getFileFromAppStorage(this.f5691a, "uuid.dat")) == null || !fileFromAppStorage.exists()) {
            return;
        }
        FileUtils.copyToNullable(fileFromAppStorage, fileFromSdkStorage);
    }
}
