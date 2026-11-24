package ru.rustore.sdk.metrics.internal;

import android.content.SharedPreferences;
import java.util.UUID;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class h1 {
    public static final Object b = new Object();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final e1 f6637a;

    public h1(e1 sharedPreferenceProvider, i1 uuidFactory) {
        Intrinsics.checkNotNullParameter(sharedPreferenceProvider, "sharedPreferenceProvider");
        Intrinsics.checkNotNullParameter(uuidFactory, "uuidFactory");
        this.f6637a = sharedPreferenceProvider;
    }

    public final String a() {
        Object value = this.f6637a.b.getValue();
        Intrinsics.checkNotNullExpressionValue(value, "<get-sharedPreferences>(...)");
        String value2 = null;
        String value3 = ((SharedPreferences) value).getString("USER_ID_KEY", null);
        if (value3 != null) {
            Intrinsics.checkNotNullParameter(value3, "value");
        } else {
            value3 = null;
        }
        if (value3 != null) {
            return value3;
        }
        synchronized (b) {
            Object value4 = this.f6637a.b.getValue();
            Intrinsics.checkNotNullExpressionValue(value4, "<get-sharedPreferences>(...)");
            String value5 = ((SharedPreferences) value4).getString("USER_ID_KEY", null);
            if (value5 != null) {
                Intrinsics.checkNotNullParameter(value5, "value");
                value2 = value5;
            }
            if (value2 == null) {
                value2 = UUID.randomUUID().toString();
                Intrinsics.checkNotNullExpressionValue(value2, "randomUUID().toString()");
                Object value6 = this.f6637a.b.getValue();
                Intrinsics.checkNotNullExpressionValue(value6, "<get-sharedPreferences>(...)");
                SharedPreferences.Editor editorEdit = ((SharedPreferences) value6).edit();
                editorEdit.putString("USER_ID_KEY", value2);
                editorEdit.apply();
                Intrinsics.checkNotNullParameter(value2, "value");
            }
        }
        return value2;
    }
}
