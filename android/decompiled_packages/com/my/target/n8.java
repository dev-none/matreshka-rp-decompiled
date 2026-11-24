package com.my.target;

import io.sentry.protocol.Device;

/* JADX INFO: loaded from: classes6.dex */
public class n8 extends ya {
    public final String d;

    public n8(String str, String str2) {
        super(Device.JsonKeys.ORIENTATION, str);
        this.d = str2;
    }

    public static n8 b(String str, String str2) {
        return new n8(str, str2);
    }

    public String d() {
        return this.d;
    }
}
