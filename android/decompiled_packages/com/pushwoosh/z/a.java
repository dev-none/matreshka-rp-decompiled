package com.pushwoosh.z;

import android.content.Context;
import android.content.SharedPreferences;
import android.preference.PreferenceManager;
import com.pushwoosh.internal.platform.prefs.PrefsProvider;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements PrefsProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5326a;

    public a(Context context) {
        this.f5326a = context;
    }

    @Override // com.pushwoosh.internal.platform.prefs.PrefsProvider
    public final SharedPreferences provideDefault() {
        Context context = this.f5326a;
        if (context == null) {
            return null;
        }
        return PreferenceManager.getDefaultSharedPreferences(context);
    }

    @Override // com.pushwoosh.internal.platform.prefs.PrefsProvider
    public final SharedPreferences providePrefs(String str) {
        Context context = this.f5326a;
        if (context == null) {
            return null;
        }
        return context.getSharedPreferences(str, 0);
    }
}
