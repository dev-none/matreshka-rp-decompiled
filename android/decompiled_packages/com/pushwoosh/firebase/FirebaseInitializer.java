package com.pushwoosh.firebase;

import android.content.Context;
import com.pushwoosh.firebase.c.a;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;

/* JADX INFO: loaded from: classes6.dex */
public class FirebaseInitializer {
    public static void init(Context context) {
        new DeviceSpecificProvider.Builder().setDeviceSpecific(new a()).build(true);
    }
}
