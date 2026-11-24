package io.appmetrica.analytics.impl;

import android.os.Bundle;
import android.os.Handler;
import android.os.ResultReceiver;

/* JADX INFO: loaded from: classes7.dex */
public final class I6 extends ResultReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final H6 f5721a;

    public I6(Handler handler, H6 h6) {
        super(handler);
        this.f5721a = h6;
    }

    public static void a(ResultReceiver resultReceiver, C1981a4 c1981a4) {
        if (resultReceiver != null) {
            Bundle bundle = new Bundle();
            c1981a4.b(bundle);
            resultReceiver.send(1, bundle);
        }
    }

    @Override // android.os.ResultReceiver
    public final void onReceiveResult(int i, Bundle bundle) {
        if (bundle == null) {
            bundle = new Bundle();
        }
        this.f5721a.a(i, bundle);
    }

    public static void a(ResultReceiver resultReceiver, Nl nl, C1981a4 c1981a4) {
        if (resultReceiver != null) {
            Bundle bundle = new Bundle();
            bundle.putInt("startup_error_key_code", nl.f5812a);
            c1981a4.b(bundle);
            resultReceiver.send(2, bundle);
        }
    }
}
