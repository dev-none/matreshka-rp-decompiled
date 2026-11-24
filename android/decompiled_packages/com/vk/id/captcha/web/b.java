package com.vk.id.captcha.web;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: NetworkConnectionObserver.kt */
/* JADX INFO: loaded from: classes6.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Context f5365a;
    private final Lazy b;

    public b(Context context) {
        Intrinsics.checkNotNullParameter(context, "");
        this.f5365a = context;
        this.b = LazyKt.lazy(new Function0<ConnectivityManager>() { // from class: com.vk.id.captcha.web.b.1
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public final ConnectivityManager invoke() {
                return (ConnectivityManager) b.this.f5365a.getSystemService("connectivity");
            }
        });
    }

    private final ConnectivityManager b() {
        return (ConnectivityManager) this.b.getValue();
    }

    /* JADX WARN: Code duplicated, block: B:21:0x0040  */
    public final boolean a() {
        Network activeNetwork;
        Boolean boolValueOf;
        NetworkCapabilities networkCapabilities;
        boolean z;
        ConnectivityManager connectivityManagerB = b();
        if (connectivityManagerB != null && (activeNetwork = connectivityManagerB.getActiveNetwork()) != null) {
            ConnectivityManager connectivityManagerB2 = b();
            if (connectivityManagerB2 == null || (networkCapabilities = connectivityManagerB2.getNetworkCapabilities(activeNetwork)) == null) {
                boolValueOf = null;
            } else {
                Intrinsics.checkNotNull(networkCapabilities);
                if (networkCapabilities.hasCapability(12)) {
                    z = true;
                    if (!networkCapabilities.hasTransport(1) && !networkCapabilities.hasTransport(4) && !networkCapabilities.hasTransport(0) && !networkCapabilities.hasTransport(3)) {
                        z = false;
                    }
                } else {
                    z = false;
                }
                boolValueOf = Boolean.valueOf(z);
            }
            if (boolValueOf != null) {
                return boolValueOf.booleanValue();
            }
        }
        return false;
    }
}
