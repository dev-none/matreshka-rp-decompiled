package com.pushwoosh.internal.network;

import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.v.d;
import com.pushwoosh.v.e;
import com.pushwoosh.v.j;

/* JADX INFO: loaded from: classes6.dex */
public class NetworkModule {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final e f5196a;
    private static volatile RequestManager b;

    static {
        e eVar = new e();
        f5196a = eVar;
        b = eVar;
    }

    public static RequestManager getRequestManager() {
        return b;
    }

    public static synchronized void init(RegistrationPrefs registrationPrefs, j jVar, boolean z) {
        if (b == f5196a) {
            b = new a(registrationPrefs, jVar, z, new d());
        }
    }

    public static synchronized void setRequestManager(RequestManager requestManager) {
        if (requestManager == null) {
            requestManager = f5196a;
        }
        b = requestManager;
    }
}
