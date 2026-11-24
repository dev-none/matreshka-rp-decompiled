package com.pushwoosh.internal.preference;

import android.content.SharedPreferences;

/* JADX INFO: loaded from: classes6.dex */
public class PreferenceValueFactory {
    public PreferenceArrayListValue<String> buildPreferenceArrayListValue(SharedPreferences sharedPreferences, String str, int i) {
        return new PreferenceArrayListValue<>(sharedPreferences, str, i, String.class);
    }

    public PreferenceIntValue buildPreferenceIntValue(SharedPreferences sharedPreferences, String str, int i) {
        return new PreferenceIntValue(sharedPreferences, str, i);
    }
}
