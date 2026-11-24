package com.pushwoosh.j0;

import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public final class d implements e {
    @Override // com.pushwoosh.j0.e
    public final boolean a(String str) {
        if (str == null || str.isEmpty()) {
            return false;
        }
        RepositoryModule.getRegistrationPreferences().logLevel().set(str);
        PWLog.updateLogLevel(str);
        return true;
    }
}
