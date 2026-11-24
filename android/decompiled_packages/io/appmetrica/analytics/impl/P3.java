package io.appmetrica.analytics.impl;

import android.content.Context;
import android.os.Bundle;
import io.appmetrica.analytics.AppMetrica;
import io.appmetrica.analytics.internal.CounterConfiguration;

/* JADX INFO: loaded from: classes7.dex */
public class P3 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Gf f5829a;
    public final CounterConfiguration b;

    public P3(Gf gf, CounterConfiguration counterConfiguration) {
        this.f5829a = gf;
        this.b = counterConfiguration;
    }

    public static P3 a(Context context, Bundle bundle) {
        Gf gf;
        String str = Gf.c;
        if (bundle != null) {
            try {
                gf = (Gf) bundle.getParcelable("PROCESS_CFG_OBJ");
            } catch (Throwable unused) {
                gf = null;
            }
        } else {
            gf = null;
        }
        CounterConfiguration counterConfigurationFromBundle = CounterConfiguration.fromBundle(bundle);
        if (counterConfigurationFromBundle == null || gf == null || !context.getPackageName().equals(gf.f5692a.getAsString("PROCESS_CFG_PACKAGE_NAME")) || gf.f5692a.getAsInteger("PROCESS_CFG_SDK_API_LEVEL").intValue() != AppMetrica.getLibraryApiLevel()) {
            return null;
        }
        return new P3(gf, counterConfigurationFromBundle);
    }

    public final CounterConfiguration b() {
        return this.b;
    }

    public final String toString() {
        return "ClientConfiguration{mProcessConfiguration=" + this.f5829a + ", mCounterConfiguration=" + this.b + '}';
    }

    public final Gf a() {
        return this.f5829a;
    }
}
