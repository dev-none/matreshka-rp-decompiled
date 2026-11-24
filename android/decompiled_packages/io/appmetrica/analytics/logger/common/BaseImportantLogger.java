package io.appmetrica.analytics.logger.common;

import android.util.Log;
import io.appmetrica.analytics.logger.common.impl.a;
import io.appmetrica.analytics.logger.common.impl.b;
import io.appmetrica.analytics.logger.common.impl.c;
import io.appmetrica.analytics.logger.common.impl.d;

/* JADX INFO: loaded from: classes7.dex */
public abstract class BaseImportantLogger {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final c f6466a;

    public BaseImportantLogger(String str) {
        this.f6466a = new c(new d(str), new a(), new b());
    }

    public void info(String str, String str2, Object... objArr) {
        c cVar = this.f6466a;
        cVar.b.getClass();
        for (String str3 : cVar.c.a(a.a(str, str2, objArr))) {
            String str4 = cVar.f6469a.f6470a;
            if (str3 == null) {
                str3 = "";
            }
            Log.println(4, str4, str3);
        }
    }
}
