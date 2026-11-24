package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.io.FileUtils;
import java.io.File;
import kotlin.Unit;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ja, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2219ja {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public volatile Boolean f6150a;

    public final void a(Context context) {
        if (this.f6150a == null) {
            synchronized (this) {
                if (this.f6150a == null) {
                    boolean z = false;
                    try {
                        File fileFromAppStorage = FileUtils.getFileFromAppStorage(context, "uuid.dat");
                        boolean zExists = fileFromAppStorage != null ? fileFromAppStorage.exists() : false;
                        File fileFromSdkStorage = FileUtils.getFileFromSdkStorage(context, "uuid.dat");
                        boolean zExists2 = fileFromSdkStorage != null ? fileFromSdkStorage.exists() : false;
                        if (zExists || zExists2) {
                            z = true;
                        }
                    } catch (Throwable unused) {
                    }
                    this.f6150a = Boolean.valueOf(z);
                }
                Unit unit = Unit.INSTANCE;
            }
        }
    }
}
