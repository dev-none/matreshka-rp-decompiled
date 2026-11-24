package com.pushwoosh.internal.preference;

import android.content.SharedPreferences;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.VibrateType;

/* JADX INFO: loaded from: classes6.dex */
public class PreferenceVibrateTypeValue implements PreferenceValue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SharedPreferences f5214a;
    private final String b;
    private int c;

    public PreferenceVibrateTypeValue(SharedPreferences sharedPreferences, String str, VibrateType vibrateType) {
        this.b = str;
        try {
            this.c = sharedPreferences == null ? vibrateType.getValue() : sharedPreferences.getInt(str, vibrateType.getValue());
        } catch (Exception e) {
            PWLog.exception(e);
            this.c = vibrateType.getValue();
        }
        this.f5214a = sharedPreferences;
    }

    public VibrateType get() {
        return VibrateType.fromInt(this.c);
    }

    public void set(VibrateType vibrateType) {
        this.c = vibrateType.getValue();
        SharedPreferences sharedPreferences = this.f5214a;
        if (sharedPreferences == null) {
            PWLog.error("Incorrect state of the app preferences is null");
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        editorEdit.putInt(this.b, vibrateType.getValue());
        editorEdit.apply();
    }
}
