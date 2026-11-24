package androidx.work.impl.utils;

import android.content.ComponentName;
import android.content.Context;
import androidx.work.Logger;
import io.flutter.plugins.firebase.analytics.Constants;

/* JADX INFO: loaded from: classes4.dex */
public class PackageManagerHelper {
    private static final String TAG = Logger.tagWithPrefix("PackageManagerHelper");

    private static boolean isComponentEnabled(int setting, boolean defaults) {
        if (setting == 0) {
            return defaults;
        }
        return setting == 1;
    }

    private PackageManagerHelper() {
    }

    public static void setComponentEnabled(Context context, Class<?> klazz, boolean enabled) {
        String str = Constants.ENABLED;
        try {
            if (enabled == isComponentEnabled(getComponentEnabledSetting(context, klazz.getName()), false)) {
                Logger.get().debug(TAG, "Skipping component enablement for " + klazz.getName());
                return;
            }
            context.getPackageManager().setComponentEnabledSetting(new ComponentName(context, klazz.getName()), enabled ? 1 : 2, 1);
            Logger logger = Logger.get();
            String str2 = TAG;
            StringBuilder sb = new StringBuilder();
            sb.append(klazz.getName());
            sb.append(" ");
            sb.append(enabled ? Constants.ENABLED : "disabled");
            logger.debug(str2, sb.toString());
        } catch (Exception e) {
            Logger logger2 = Logger.get();
            String str3 = TAG;
            StringBuilder sb2 = new StringBuilder();
            sb2.append(klazz.getName());
            sb2.append("could not be ");
            if (!enabled) {
                str = "disabled";
            }
            sb2.append(str);
            logger2.debug(str3, sb2.toString(), e);
        }
    }

    public static boolean isComponentExplicitlyEnabled(Context context, Class<?> klazz) {
        return isComponentEnabled(getComponentEnabledSetting(context, klazz.getName()), false);
    }

    public static boolean isComponentExplicitlyEnabled(Context context, String className) {
        return getComponentEnabledSetting(context, className) == 1;
    }

    private static int getComponentEnabledSetting(Context context, String className) {
        return context.getPackageManager().getComponentEnabledSetting(new ComponentName(context, className));
    }
}
