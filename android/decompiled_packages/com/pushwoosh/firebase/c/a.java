package com.pushwoosh.firebase.c;

import com.pushwoosh.firebase.internal.registrar.FcmRegistrar;
import com.pushwoosh.internal.registrar.PushRegistrar;
import com.pushwoosh.internal.specific.DeviceSpecific;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements DeviceSpecific {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final FcmRegistrar f5080a = new FcmRegistrar();

    @Override // com.pushwoosh.internal.specific.DeviceSpecific
    public final int deviceType() {
        return 3;
    }

    @Override // com.pushwoosh.internal.specific.DeviceSpecific
    public final String permission(String str) {
        return str + ".permission.C2D_MESSAGE";
    }

    @Override // com.pushwoosh.internal.specific.DeviceSpecific
    public final PushRegistrar pushRegistrar() {
        return this.f5080a;
    }

    @Override // com.pushwoosh.internal.specific.DeviceSpecific
    public final String type() {
        return DeviceSpecificProvider.FCM_ANDROID_TYPE;
    }
}
