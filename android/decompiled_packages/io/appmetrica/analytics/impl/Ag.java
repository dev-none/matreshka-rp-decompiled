package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.coreutils.internal.reflection.ReflectionUtils;

/* JADX INFO: loaded from: classes7.dex */
public final class Ag {
    public Ag(Va va) {
    }

    public static Va a(Context context, IHandlerExecutor iHandlerExecutor) {
        C2327ng c2327ng;
        if (ReflectionUtils.detectClassExists("com.android.installreferrer.api.InstallReferrerClient")) {
            try {
                c2327ng = new C2327ng(context, iHandlerExecutor);
            } catch (Throwable unused) {
                c2327ng = null;
            }
        } else {
            c2327ng = null;
        }
        return c2327ng == null ? new C2626zg() : c2327ng;
    }
}
