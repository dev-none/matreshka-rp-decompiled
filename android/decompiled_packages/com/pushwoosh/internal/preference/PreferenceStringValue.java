package com.pushwoosh.internal.preference;

import android.content.SharedPreferences;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public class PreferenceStringValue implements PreferenceValue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SharedPreferences f5213a;
    private final String b;
    private String c;

    public PreferenceStringValue(SharedPreferences sharedPreferences, String str, String str2) {
        String string;
        this.b = str;
        if (sharedPreferences == null) {
            string = str2;
        } else {
            try {
                string = sharedPreferences.getString(str, str2);
            } catch (Exception e) {
                PWLog.exception(e);
                this.c = str2;
            }
        }
        this.c = string;
        this.f5213a = sharedPreferences;
    }

    public String get() {
        return this.c;
    }

    public void set(String str) {
        this.c = str;
        SharedPreferences sharedPreferences = this.f5213a;
        if (sharedPreferences == null) {
            PWLog.error("Incorrect state of the app preferences is null");
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        editorEdit.putString(this.b, str);
        editorEdit.apply();
    }
}
