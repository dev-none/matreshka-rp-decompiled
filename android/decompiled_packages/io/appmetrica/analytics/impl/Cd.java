package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.identifiers.IdentifierStatus;
import io.appmetrica.analytics.coreutils.internal.io.FileUtils;
import io.appmetrica.analytics.internal.IdentifiersResult;

/* JADX INFO: loaded from: classes7.dex */
public final class Cd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5624a;
    public final Ra b;
    public final E9 c;
    public final Ge d;
    public final ro e;
    public volatile IdentifiersResult f;

    public Cd(Context context, Ra ra) {
        this(context, ra, Dd.a(context), new Ge(context), new ro());
    }

    /* JADX WARN: Code duplicated, block: B:17:0x003d A[Catch: all -> 0x0079, TryCatch #1 {all -> 0x0079, blocks: (B:10:0x0019, B:12:0x0029, B:14:0x002f, B:17:0x003d, B:19:0x0056, B:20:0x0064, B:22:0x006f), top: B:34:0x0019 }] */
    /* JADX WARN: Code duplicated, block: B:19:0x0056 A[Catch: all -> 0x0079, TryCatch #1 {all -> 0x0079, blocks: (B:10:0x0019, B:12:0x0029, B:14:0x002f, B:17:0x003d, B:19:0x0056, B:20:0x0064, B:22:0x006f), top: B:34:0x0019 }] */
    /* JADX WARN: Code duplicated, block: B:22:0x006f A[Catch: all -> 0x0079, TRY_LEAVE, TryCatch #1 {all -> 0x0079, blocks: (B:10:0x0019, B:12:0x0029, B:14:0x002f, B:17:0x003d, B:19:0x0056, B:20:0x0064, B:22:0x006f), top: B:34:0x0019 }] */
    public final IdentifiersResult a() {
        String strA;
        IdentifiersResult identifiersResult = this.f;
        if (identifiersResult != null && identifiersResult.status == IdentifierStatus.OK) {
            ro roVar = this.e;
            String str = identifiersResult.id;
            roVar.getClass();
            if (ro.a(str)) {
                return identifiersResult;
            }
        }
        try {
            E9 e9 = this.c;
            e9.f5656a.lock();
            e9.b.a();
            identifiersResult = this.f;
            if (identifiersResult == null || identifiersResult.status != IdentifierStatus.OK) {
                strA = Qa.a(FileUtils.getFileFromSdkStorage(this.d.f5691a, "uuid.dat"));
                this.e.getClass();
                if (!ro.a(strA)) {
                    strA = this.d.a(this.b.a(this.f5624a));
                }
                this.e.getClass();
                if (ro.a(strA)) {
                    IdentifiersResult identifiersResult2 = new IdentifiersResult(strA, IdentifierStatus.OK, null);
                    try {
                        this.f = identifiersResult2;
                    } catch (Throwable unused) {
                    }
                    identifiersResult = identifiersResult2;
                }
            } else {
                ro roVar2 = this.e;
                String str2 = identifiersResult.id;
                roVar2.getClass();
                if (!ro.a(str2)) {
                    strA = Qa.a(FileUtils.getFileFromSdkStorage(this.d.f5691a, "uuid.dat"));
                    this.e.getClass();
                    if (!ro.a(strA)) {
                        strA = this.d.a(this.b.a(this.f5624a));
                    }
                    this.e.getClass();
                    if (ro.a(strA)) {
                        IdentifiersResult identifiersResult3 = new IdentifiersResult(strA, IdentifierStatus.OK, null);
                        this.f = identifiersResult3;
                        identifiersResult = identifiersResult3;
                    }
                }
            }
        } catch (Throwable unused2) {
        }
        E9 e10 = this.c;
        e10.b.b();
        e10.f5656a.unlock();
        return identifiersResult != null ? identifiersResult : new IdentifiersResult(null, IdentifierStatus.UNKNOWN, "Uuid must be obtained via async API AppMetrica#requestStartupParams(Context, StartupParamsCallback, List<String>)");
    }

    public Cd(Context context, Ra ra, E9 e9, Ge ge, ro roVar) {
        this.f5624a = context;
        this.b = ra;
        this.c = e9;
        this.d = ge;
        this.e = roVar;
        try {
            e9.a();
            ge.a();
            e9.b();
        } catch (Throwable unused) {
            this.c.b();
        }
    }
}
