package com.vk.id.common.util;

import android.content.Context;
import android.content.res.Configuration;
import android.content.res.Resources;
import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: IsDarkTheme.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\n\u0002\b\u0005\"\u001e\u0010\u0000\u001a\u00020\u0001*\u00020\u00028FX\u0087\u0004¢\u0006\f\u0012\u0004\b\u0003\u0010\u0004\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"internalVkIdIsDarkTheme", "", "Landroid/content/Context;", "getInternalVkIdIsDarkTheme$annotations", "(Landroid/content/Context;)V", "getInternalVkIdIsDarkTheme", "(Landroid/content/Context;)Z", "common_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class IsDarkThemeKt {
    @InternalVKIDApi
    public static /* synthetic */ void getInternalVkIdIsDarkTheme$annotations(Context context) {
    }

    public static final boolean getInternalVkIdIsDarkTheme(Context context) {
        Configuration configuration;
        Intrinsics.checkNotNullParameter(context, "<this>");
        Resources resources = context.getResources();
        return (resources == null || (configuration = resources.getConfiguration()) == null || (configuration.uiMode & 48) != 32) ? false : true;
    }
}
