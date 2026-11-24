package com.pushwoosh.d0;

import android.text.TextUtils;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import java.util.UUID;

/* JADX INFO: loaded from: classes6.dex */
public final class a extends f {
    @Override // com.pushwoosh.d0.f
    public final String b() {
        RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
        String str = registrationPreferences.deviceId().get();
        if (!TextUtils.isEmpty(str)) {
            return str;
        }
        String string = UUID.randomUUID().toString();
        registrationPreferences.deviceId().set(string);
        return string;
    }
}
