package com.pushwoosh.internal.preference;

import android.content.SharedPreferences;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public class PreferenceIntValue implements PreferenceValue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SharedPreferences f5209a;
    private final String b;
    private int c;

    public PreferenceIntValue(SharedPreferences sharedPreferences, String str, int i) {
        int i2;
        this.b = str;
        if (sharedPreferences == null) {
            i2 = i;
        } else {
            try {
                i2 = sharedPreferences.getInt(str, i);
            } catch (Exception e) {
                PWLog.exception(e);
                this.c = i;
            }
        }
        this.c = i2;
        this.f5209a = sharedPreferences;
    }

    public int get() {
        return this.c;
    }

    public void set(int i) {
        this.c = i;
        SharedPreferences sharedPreferences = this.f5209a;
        if (sharedPreferences == null) {
            PWLog.error("Incorrect state of the app preferences is null");
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        editorEdit.putInt(this.b, i);
        editorEdit.apply();
    }
}
