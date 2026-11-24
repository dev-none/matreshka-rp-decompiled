package com.pushwoosh.richmedia;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.content.res.Resources;
import android.util.TypedValue;
import android.view.ContextThemeWrapper;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public class RichMediaColorSchemeResolver {
    /* JADX WARN: Code duplicated, block: B:10:0x0017  */
    /* JADX WARN: Code duplicated, block: B:38:0x007e  */
    /* JADX WARN: Code duplicated, block: B:7:0x000f  */
    /* JADX WARN: Code duplicated, block: B:9:0x0015  */
    public static boolean isCurrentSchemeDark(Context context) {
        PushwooshPlatform pushwooshPlatform;
        Activity hostActivity;
        Resources.Theme themeNewTheme = null;
        if (context instanceof Activity) {
            hostActivity = (Activity) context;
            if (!PushwooshPlatform.isHostCandidate(hostActivity)) {
                pushwooshPlatform = PushwooshPlatform.getInstance();
                if (pushwooshPlatform == null) {
                    hostActivity = null;
                } else {
                    hostActivity = pushwooshPlatform.getHostActivity();
                }
            }
        } else {
            pushwooshPlatform = PushwooshPlatform.getInstance();
            if (pushwooshPlatform == null) {
                hostActivity = null;
            } else {
                hostActivity = pushwooshPlatform.getHostActivity();
            }
        }
        if (context.getApplicationContext() != null) {
            context = context.getApplicationContext();
        }
        RichMediaColorScheme richMediaColorScheme = RichMediaManager.getRichMediaColorScheme();
        int i = com.pushwoosh.o0.a.f5299a[richMediaColorScheme.ordinal()];
        boolean z = true;
        if (i == 1) {
            z = false;
        } else if (i != 2) {
            if (i != 3) {
                if (hostActivity != null) {
                    themeNewTheme = hostActivity.getTheme();
                } else {
                    int i2 = context.getApplicationInfo().theme;
                    if (i2 != 0) {
                        themeNewTheme = context.getResources().newTheme();
                        themeNewTheme.applyStyle(i2, true);
                    }
                }
                if (themeNewTheme == null) {
                    z = false;
                } else {
                    TypedValue typedValue = new TypedValue();
                    if (!themeNewTheme.resolveAttribute(R.attr.isLightTheme, typedValue, true) || typedValue.data != 0) {
                        z = false;
                    }
                }
            } else if ((context.getResources().getConfiguration().uiMode & 48) != 32) {
                z = false;
            }
        }
        StringBuilder sb = new StringBuilder("colorScheme=");
        sb.append(richMediaColorScheme);
        sb.append(" host=");
        sb.append(hostActivity == null ? "null" : hostActivity.getClass().getSimpleName());
        sb.append(" dark=");
        sb.append(z);
        PWLog.debug("RichMediaColorSchemeResolver", sb.toString());
        return z;
    }

    public static Context wrapForCurrentScheme(Context context) {
        return new ContextThemeWrapper(context, isCurrentSchemeDark(context) ? com.pushwoosh.R.style.PwRichMediaColorScheme_Dark : com.pushwoosh.R.style.PwRichMediaColorScheme_Light);
    }
}
