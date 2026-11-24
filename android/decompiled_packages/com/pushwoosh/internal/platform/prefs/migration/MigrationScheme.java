package com.pushwoosh.internal.platform.prefs.migration;

import android.content.SharedPreferences;
import com.pushwoosh.internal.platform.prefs.PrefsProvider;
import com.pushwoosh.internal.utils.PWLog;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class MigrationScheme {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5201a;
    private final HashMap b = new HashMap();

    public enum AvailableType {
        STRING,
        BOOLEAN,
        LONG,
        INT
    }

    public MigrationScheme(String str) {
        this.f5201a = str;
    }

    final void a(com.pushwoosh.z.a aVar) {
        PWLog.noise("MigrationScheme", "Implement scheme with scheme: " + this.b);
        SharedPreferences sharedPreferencesProvidePrefs = aVar.providePrefs(this.f5201a);
        if (sharedPreferencesProvidePrefs == null) {
            PWLog.error("Incorrect state of the app preferences is null");
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferencesProvidePrefs.edit();
        for (Map.Entry entry : this.b.entrySet()) {
            String str = (String) entry.getKey();
            try {
                Object value = entry.getValue();
                if (value instanceof Boolean) {
                    editorEdit.putBoolean(str, ((Boolean) value).booleanValue());
                } else if (value instanceof String) {
                    editorEdit.putString(str, (String) value);
                } else if (value instanceof Long) {
                    editorEdit.putLong(str, ((Long) value).longValue());
                } else if (value instanceof Integer) {
                    editorEdit.putInt(str, ((Integer) value).intValue());
                } else {
                    PWLog.noise("MigrationScheme", "Unknown format for key: " + str);
                }
            } catch (Exception e) {
                PWLog.noise("MigrationScheme", "Failed put value to editor for key: " + str, e);
            }
        }
        editorEdit.apply();
    }

    public void put(PrefsProvider prefsProvider, AvailableType availableType, String str) {
        Object string;
        SharedPreferences sharedPreferencesProvidePrefs = prefsProvider.providePrefs(this.f5201a);
        if (sharedPreferencesProvidePrefs == null) {
            return;
        }
        if (!sharedPreferencesProvidePrefs.contains(str)) {
            sharedPreferencesProvidePrefs.getAll();
            if (!sharedPreferencesProvidePrefs.contains(str)) {
                return;
            }
        }
        try {
            int i = b.f5204a[availableType.ordinal()];
            if (i == 1) {
                string = sharedPreferencesProvidePrefs.getString(str, "");
            } else if (i == 2) {
                string = Boolean.valueOf(sharedPreferencesProvidePrefs.getBoolean(str, false));
            } else if (i == 3) {
                string = Long.valueOf(sharedPreferencesProvidePrefs.getLong(str, 0L));
            } else if (i != 4) {
                return;
            } else {
                string = Integer.valueOf(sharedPreferencesProvidePrefs.getInt(str, 0));
            }
            this.b.put(str, string);
        } catch (Exception e) {
            PWLog.noise("MigrationScheme", "Failed providing data with key: " + str, e);
        }
    }

    public void putBoolean(String str, boolean z) {
        this.b.put(str, Boolean.valueOf(z));
    }

    public void putInt(String str, int i) {
        this.b.put(str, Integer.valueOf(i));
    }

    public void putLong(String str, long j) {
        this.b.put(str, Long.valueOf(j));
    }

    public void putString(String str, String str2) {
        this.b.put(str, str2);
    }
}
