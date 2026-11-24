package com.pushwoosh.d;

import android.content.SharedPreferences;
import com.pushwoosh.internal.preference.PreferenceLongValue;
import com.pushwoosh.internal.preference.PreferenceStringValue;
import io.sentry.TraceContext;
import io.sentry.protocol.FeatureFlags;

/* JADX INFO: loaded from: classes6.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final PreferenceStringValue f5055a;
    public final PreferenceStringValue b;
    public final PreferenceLongValue c;
    public final PreferenceStringValue d;
    public final PreferenceLongValue e;

    public f(SharedPreferences sharedPreferences) {
        this.f5055a = new PreferenceStringValue(sharedPreferences, FeatureFlags.TYPE, "");
        this.b = new PreferenceStringValue(sharedPreferences, "etag", "");
        this.c = new PreferenceLongValue(sharedPreferences, "fetched_at", 0L);
        this.d = new PreferenceStringValue(sharedPreferences, TraceContext.JsonKeys.USER_ID, "");
        this.e = new PreferenceLongValue(sharedPreferences, "last_request_at", 0L);
    }
}
