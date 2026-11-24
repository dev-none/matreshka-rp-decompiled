package io.appmetrica.analytics.impl;

import android.os.FileObserver;
import android.text.TextUtils;
import io.appmetrica.analytics.coreapi.internal.backport.Consumer;
import java.io.File;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.l6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class FileObserverC2267l6 extends FileObserver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Consumer f6185a;
    public final File b;
    public final C2168ha c;

    public FileObserverC2267l6(File file, C2317n6 c2317n6, C2168ha c2168ha) {
        super(file.getAbsolutePath(), 8);
        this.f6185a = c2317n6;
        this.b = file;
        this.c = c2168ha;
    }

    @Override // android.os.FileObserver
    public final void onEvent(int i, String str) {
        if (i != 8 || TextUtils.isEmpty(str)) {
            return;
        }
        Consumer consumer = this.f6185a;
        C2168ha c2168ha = this.c;
        File file = this.b;
        c2168ha.getClass();
        consumer.consume(new File(file, str));
    }
}
