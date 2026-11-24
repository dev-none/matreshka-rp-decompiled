package com.pushwoosh.internal.specific;

import com.pushwoosh.internal.registrar.PushRegistrar;

/* JADX INFO: loaded from: classes6.dex */
public interface DeviceSpecific {
    int deviceType();

    String permission(String str);

    PushRegistrar pushRegistrar();

    String type();
}
