package com.pushwoosh.internal.preference;

import android.content.SharedPreferences;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public class PreferenceLongValue implements PreferenceValue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SharedPreferences f5211a;
    private final String b;
    private long c;

    public PreferenceLongValue(SharedPreferences sharedPreferences, String str, long j) {
        long j2;
        this.b = str;
        this.f5211a = sharedPreferences;
        if (sharedPreferences == null) {
            j2 = j;
        } else {
            try {
                j2 = sharedPreferences.getLong(str, j);
            } catch (Exception e) {
                PWLog.exception(e);
                this.c = j;
                return;
            }
        }
        this.c = j2;
    }

    public long get() {
        return this.c;
    }

    public void set(long j) {
        this.c = j;
        SharedPreferences sharedPreferences = this.f5211a;
        if (sharedPreferences == null) {
            PWLog.error("Incorrect state of the app preferences is null");
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        editorEdit.putLong(this.b, j);
        editorEdit.apply();
    }
}
