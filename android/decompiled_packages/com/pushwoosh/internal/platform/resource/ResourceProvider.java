package com.pushwoosh.internal.platform.resource;

import android.content.res.Configuration;
import android.util.DisplayMetrics;
import android.util.TypedValue;

/* JADX INFO: loaded from: classes6.dex */
public interface ResourceProvider {
    Configuration getConfiguration();

    float getDimension(int i);

    DisplayMetrics getDisplayMetrics();

    int getIdentifier(String str, String str2);

    String getString(int i, Object... objArr);

    void getValue(int i, TypedValue typedValue, boolean z);
}
