package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.backport.Consumer;
import java.io.File;

/* JADX INFO: loaded from: classes7.dex */
public final class Zf implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final File f5987a;
    public final Consumer b;

    public Zf(File file, C2317n6 c2317n6) {
        this.f5987a = file;
        this.b = c2317n6;
    }

    @Override // java.lang.Runnable
    public final void run() {
        File[] fileArrListFiles;
        if (!this.f5987a.exists() || !this.f5987a.isDirectory() || (fileArrListFiles = this.f5987a.listFiles()) == null || fileArrListFiles.length == 0) {
            return;
        }
        for (File file : fileArrListFiles) {
            try {
                this.b.consume(file);
            } catch (Throwable unused) {
            }
        }
    }
}
