package com.pushwoosh.internal.preference;

import android.content.SharedPreferences;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public class PreferenceBooleanValue implements PreferenceValue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SharedPreferences f5207a;
    private final String b;
    private boolean c;

    public PreferenceBooleanValue(SharedPreferences sharedPreferences, String str, boolean z) {
        boolean z2;
        this.b = str;
        if (sharedPreferences == null) {
            z2 = z;
        } else {
            try {
                z2 = sharedPreferences.getBoolean(str, z);
            } catch (Exception e) {
                PWLog.exception(e);
                this.c = z;
            }
        }
        this.c = z2;
        this.f5207a = sharedPreferences;
    }

    public boolean get() {
        return this.c;
    }

    public void set(boolean z) {
        this.c = z;
        SharedPreferences sharedPreferences = this.f5207a;
        if (sharedPreferences == null) {
            PWLog.error("Incorrect state of the app preferences is null");
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        editorEdit.putBoolean(this.b, z);
        editorEdit.apply();
    }
}
