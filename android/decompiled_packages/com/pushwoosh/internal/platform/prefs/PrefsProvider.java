package com.pushwoosh.internal.platform.prefs;

import android.content.SharedPreferences;

/* JADX INFO: loaded from: classes6.dex */
public interface PrefsProvider {
    SharedPreferences provideDefault();

    SharedPreferences providePrefs(String str);
}
