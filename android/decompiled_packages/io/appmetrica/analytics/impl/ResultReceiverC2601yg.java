package io.appmetrica.analytics.impl;

import android.os.Bundle;
import android.os.Handler;
import android.os.ResultReceiver;
import com.adjust.sdk.Constants;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.yg, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class ResultReceiverC2601yg extends ResultReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InterfaceC2251kg f6416a;

    public ResultReceiverC2601yg(Handler handler, InterfaceC2251kg interfaceC2251kg) {
        super(handler);
        this.f6416a = interfaceC2251kg;
    }

    public static void a(ResultReceiver resultReceiver, C2451sg c2451sg) {
        if (resultReceiver != null) {
            Bundle bundle = new Bundle();
            bundle.putByteArray(Constants.REFERRER, c2451sg == null ? null : c2451sg.a());
            resultReceiver.send(1, bundle);
        }
    }

    @Override // android.os.ResultReceiver
    public final void onReceiveResult(int i, Bundle bundle) {
        if (i == 1) {
            C2451sg c2451sg = null;
            try {
                byte[] byteArray = bundle.getByteArray(Constants.REFERRER);
                if (byteArray != null && byteArray.length != 0) {
                    c2451sg = new C2451sg(byteArray);
                }
            } catch (Throwable unused) {
            }
            this.f6416a.a(c2451sg);
        }
    }
}
