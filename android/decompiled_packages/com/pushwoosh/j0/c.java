package com.pushwoosh.j0;

import com.pushwoosh.internal.network.NetworkModule;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public final class c implements e {
    @Override // com.pushwoosh.j0.e
    public final boolean a(String str) {
        if (str != null && !str.isEmpty()) {
            return NetworkModule.getRequestManager().updateBaseUrl(str);
        }
        PWLog.warn("BaseUrlHandler", "Empty URL value");
        return false;
    }
}
