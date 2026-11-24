package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import android.util.Base64;
import io.appmetrica.analytics.protobuf.nano.MessageNano;

/* JADX INFO: loaded from: classes7.dex */
public final class Sf implements vo {
    @Override // io.appmetrica.analytics.impl.vo
    public final byte[] a(S8 s8, C2378ph c2378ph) {
        if (!TextUtils.isEmpty(s8.b)) {
            try {
                byte[] bArrDecode = Base64.decode(s8.b, 0);
                C2451sg c2451sg = (bArrDecode == null || bArrDecode.length == 0) ? null : new C2451sg(bArrDecode);
                C1993ag c1993ag = new C1993ag();
                String str = c2451sg.f6314a;
                c1993ag.f6003a = str == null ? new byte[0] : str.getBytes();
                c1993ag.c = c2451sg.b;
                c1993ag.b = c2451sg.c;
                int iOrdinal = c2451sg.d.ordinal();
                int i = 1;
                if (iOrdinal != 1) {
                    i = 2;
                    if (iOrdinal != 2) {
                        i = 0;
                    }
                }
                c1993ag.d = i;
                return MessageNano.toByteArray(c1993ag);
            } catch (Throwable unused) {
            }
        }
        return new byte[0];
    }
}
