package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.io.FileUtils;
import java.io.File;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.h7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2165h7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final P6 f6107a;
    public final List b;
    public final boolean c;

    public C2165h7(P6 p6, ArrayList arrayList, boolean z) {
        this.f6107a = p6;
        this.b = arrayList;
        this.c = z;
    }

    public final String a(Context context, InterfaceC2087e7 interfaceC2087e7) {
        File parentFile;
        try {
            File fileA = this.f6107a.a(context, interfaceC2087e7.b());
            if (!fileA.exists() && (parentFile = fileA.getParentFile()) != null && (parentFile.exists() || parentFile.mkdirs())) {
                a(context, interfaceC2087e7.a(), fileA);
            }
            return fileA.getPath();
        } catch (Throwable unused) {
            return interfaceC2087e7.b();
        }
    }

    public final void a(Context context, String str, File file) {
        List list = this.b;
        if ((list instanceof Collection) && list.isEmpty()) {
            return;
        }
        Iterator it = list.iterator();
        while (it.hasNext()) {
            File fileA = ((P6) it.next()).a(context, str);
            if (fileA.exists()) {
                try {
                    if (this.c) {
                        FileUtils.copyToNullable(fileA, file);
                    } else {
                        FileUtils.move(fileA, file);
                    }
                    String path = fileA.getPath();
                    String path2 = file.getPath();
                    for (String str2 : CollectionsKt.listOf((Object[]) new String[]{"-journal", "-shm", "-wal"})) {
                        File file2 = new File(path + str2);
                        File file3 = new File(path2 + str2);
                        if (this.c) {
                            FileUtils.copyToNullable(file2, file3);
                        } else {
                            FileUtils.move(file2, file3);
                        }
                    }
                    return;
                } catch (Throwable unused) {
                    continue;
                }
            }
        }
    }
}
