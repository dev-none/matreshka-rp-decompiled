package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.io.FileUtils;
import java.io.BufferedOutputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileOutputStream;
import java.io.PrintWriter;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.u6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2491u6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2168ha f6345a;
    public final C2292m6 b;
    public final Context c;
    public final C2142ga d;

    public C2491u6(Context context) {
        this(context, new C2168ha(), new C2292m6(), C2142ga.a(context));
    }

    /* JADX WARN: Code duplicated, block: B:30:0x0099 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    public final void a(Ah ah) {
        boolean zMkdir;
        String str;
        E9 e9B;
        PrintWriter printWriter;
        C2142ga c2142ga;
        File crashesDirectory = FileUtils.getCrashesDirectory(this.c);
        this.b.getClass();
        if (crashesDirectory == null) {
            return;
        }
        try {
            try {
                if (crashesDirectory.exists()) {
                    if (!crashesDirectory.isDirectory()) {
                        if (!crashesDirectory.delete()) {
                            return;
                        } else {
                            zMkdir = crashesDirectory.mkdir();
                        }
                    }
                    Gf gf = ah.e.f5829a;
                    str = gf.f5692a.getAsInteger("PROCESS_CFG_PROCESS_ID") + "-" + gf.f5692a.getAsString("PROCESS_CFG_PROCESS_SESSION_ID");
                    e9B = this.d.b(str);
                    e9B.f5656a.lock();
                    e9B.b.a();
                    this.f6345a.getClass();
                    printWriter = new PrintWriter(new BufferedOutputStream(new FileOutputStream(new File(crashesDirectory, str))));
                    printWriter.write(new C2397qb(ah.f5597a, ah.e, ah.d).k());
                    no.a((Closeable) printWriter);
                    e9B.c();
                    c2142ga = this.d;
                    synchronized (c2142ga) {
                        c2142ga.b.remove(str);
                    }
                    return;
                }
                zMkdir = crashesDirectory.mkdir();
                printWriter.write(new C2397qb(ah.f5597a, ah.e, ah.d).k());
                no.a((Closeable) printWriter);
                e9B.c();
                c2142ga = this.d;
                synchronized (c2142ga) {
                    c2142ga.b.remove(str);
                    return;
                }
            } catch (Throwable unused) {
                no.a((Closeable) printWriter);
                e9B.c();
                this.d.a(str);
                return;
            }
            e9B.f5656a.lock();
            e9B.b.a();
            this.f6345a.getClass();
            printWriter = new PrintWriter(new BufferedOutputStream(new FileOutputStream(new File(crashesDirectory, str))));
        } catch (Throwable unused2) {
            printWriter = null;
        }
        if (!zMkdir) {
            return;
        }
        Gf gf2 = ah.e.f5829a;
        str = gf2.f5692a.getAsInteger("PROCESS_CFG_PROCESS_ID") + "-" + gf2.f5692a.getAsString("PROCESS_CFG_PROCESS_SESSION_ID");
        e9B = this.d.b(str);
    }

    public C2491u6(Context context, C2168ha c2168ha, C2292m6 c2292m6, C2142ga c2142ga) {
        this.c = context;
        this.f6345a = c2168ha;
        this.b = c2292m6;
        this.d = c2142ga;
    }
}
