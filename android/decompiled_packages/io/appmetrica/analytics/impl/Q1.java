package io.appmetrica.analytics.impl;

import android.content.Context;
import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.io.FileUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class Q1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2168ha f5844a;
    public boolean b;

    public Q1() {
        this(new C2168ha());
    }

    public final synchronized long a(Context context) {
        String strA;
        try {
            this.f5844a.getClass();
            strA = Qa.a(FileUtils.getFileFromAppStorage(context, "metrica_service_settings.dat"));
        } catch (Throwable unused) {
        }
        return !TextUtils.isEmpty(strA) ? new JSONObject(strA).optLong("delay") : 0L;
    }

    public final void b(Context context) {
        synchronized (this) {
        }
        if (this.b) {
            return;
        }
        long jA = a(context);
        if (jA > 0) {
            try {
                Thread.sleep(jA);
            } catch (Throwable unused) {
            }
        }
        this.b = true;
    }

    public Q1(C2168ha c2168ha) {
        this.b = false;
        this.f5844a = c2168ha;
    }
}
