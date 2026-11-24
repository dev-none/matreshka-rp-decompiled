package com.pushwoosh.badge.c;

import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.preference.PreferenceIntValue;

/* JADX INFO: loaded from: classes6.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final PreferenceIntValue f5046a = new PreferenceIntValue(AndroidPlatformModule.getPrefsProvider().providePrefs("com.pushwoosh.badge"), "pw_badges_count", 0);
}
