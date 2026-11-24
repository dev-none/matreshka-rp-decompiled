package io.appmetrica.analytics.impl;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.os.Process;
import io.appmetrica.analytics.coreapi.internal.model.ScreenInfo;
import io.appmetrica.analytics.coreutils.internal.services.SafePackageManager;
import io.appmetrica.analytics.internal.AppMetricaService;

/* JADX INFO: loaded from: classes7.dex */
public abstract class Ek {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final SafePackageManager f5663a = new SafePackageManager();

    public static Intent a(Context context) {
        Bundle bundle;
        C2151gj c2151gj;
        Intent intentAddFlags = new Intent(context, (Class<?>) AppMetricaService.class).setAction("io.appmetrica.analytics.IAppMetricaService").setData(new Uri.Builder().scheme("appmetrica").authority(context.getPackageName()).build()).addFlags(32);
        try {
            bundle = f5663a.getApplicationInfo(context, context.getPackageName(), 128).metaData;
            if (bundle == null) {
                bundle = new Bundle();
            }
        } catch (Throwable unused) {
            bundle = new Bundle();
        }
        Intent intentPutExtras = intentAddFlags.putExtras(bundle);
        intentPutExtras.setData(intentPutExtras.getData().buildUpon().path("client").appendQueryParameter("pid", String.valueOf(Process.myPid())).appendQueryParameter("psid", Gf.c).build());
        C2213j4 c2213j4L = C2213j4.l();
        synchronized (c2213j4L) {
            if (c2213j4L.o == null) {
                C2151gj c2151gj2 = new C2151gj();
                c2213j4L.o = c2151gj2;
                c2213j4L.h.a(c2151gj2);
            }
            c2151gj = c2213j4L.o;
        }
        ScreenInfo screenInfoA = c2151gj.a(context);
        intentPutExtras.putExtra("screen_size", screenInfoA == null ? null : AbstractC2322nb.a(screenInfoA));
        return intentPutExtras.setPackage(context.getApplicationContext().getPackageName());
    }
}
