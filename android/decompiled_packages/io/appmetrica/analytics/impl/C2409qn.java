package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.services.SafePackageManager;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.qn, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2409qn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InterfaceC2458sn f6281a;
    public final InterfaceC2458sn b;

    public C2409qn(Context context) {
        if (new SafePackageManager().hasSystemFeature(context, "android.hardware.telephony")) {
            this.f6281a = new T2(new C2431rl(context));
            this.b = new T2(new Sc(context));
        } else {
            this.f6281a = new C2088e8();
            this.b = new C2088e8();
        }
    }
}
