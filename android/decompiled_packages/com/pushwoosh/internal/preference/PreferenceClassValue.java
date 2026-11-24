package com.pushwoosh.internal.preference;

import android.content.SharedPreferences;
import android.text.TextUtils;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public class PreferenceClassValue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SharedPreferences f5208a;
    private final String b;
    private Class c;

    public PreferenceClassValue(SharedPreferences sharedPreferences, String str, Class<?> cls) {
        this.b = str;
        this.f5208a = sharedPreferences;
        String string = null;
        if (sharedPreferences != null) {
            try {
                string = sharedPreferences.getString(str, null);
            } catch (Exception e) {
                PWLog.exception(e);
                this.c = cls;
                return;
            }
        }
        if (TextUtils.isEmpty(string)) {
            this.c = cls;
        } else {
            this.c = Class.forName(string);
        }
    }

    public Class<?> get() {
        return this.c;
    }

    public void set(Class<?> cls) {
        this.c = cls;
        if (this.f5208a == null) {
            PWLog.error("Incorrect state of the app preferences is null");
            return;
        }
        String name = cls != null ? cls.getName() : null;
        SharedPreferences.Editor editorEdit = this.f5208a.edit();
        editorEdit.putString(this.b, name);
        editorEdit.apply();
    }
}
