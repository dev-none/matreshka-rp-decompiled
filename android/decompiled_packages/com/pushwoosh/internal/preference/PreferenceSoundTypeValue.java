package com.pushwoosh.internal.preference;

import android.content.SharedPreferences;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.SoundType;

/* JADX INFO: loaded from: classes6.dex */
public class PreferenceSoundTypeValue implements PreferenceValue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SharedPreferences f5212a;
    private final String b;
    private int c;

    public PreferenceSoundTypeValue(SharedPreferences sharedPreferences, String str, SoundType soundType) {
        this.b = str;
        try {
            this.c = sharedPreferences == null ? soundType.getValue() : sharedPreferences.getInt(str, soundType.getValue());
        } catch (Exception e) {
            PWLog.exception(e);
            this.c = soundType.getValue();
        }
        this.f5212a = sharedPreferences;
    }

    public SoundType get() {
        return SoundType.fromInt(this.c);
    }

    public void set(SoundType soundType) {
        this.c = soundType.getValue();
        SharedPreferences sharedPreferences = this.f5212a;
        if (sharedPreferences == null) {
            PWLog.error("Incorrect state of the app preferences is null");
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        editorEdit.putInt(this.b, soundType.getValue());
        editorEdit.apply();
    }
}
