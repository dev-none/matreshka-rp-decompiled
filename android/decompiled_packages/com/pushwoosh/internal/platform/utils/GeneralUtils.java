package com.pushwoosh.internal.platform.utils;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.res.AssetManager;
import android.graphics.Color;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.text.TextUtils;
import android.util.TypedValue;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.io.IOException;
import java.lang.reflect.Field;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Locale;

/* JADX INFO: loaded from: classes6.dex */
public class GeneralUtils {
    public static final String SDK_VERSION = "6.17.1";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String[] f5205a = {".mp3", ".3gp", ".mp4", ".m4a", ".aac", ".flac", ".ogg", ".wav"};

    /* JADX WARN: Code duplicated, block: B:100:0x015a A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:103:0x0141 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:19:0x003f  */
    /* JADX WARN: Code duplicated, block: B:20:0x0040 A[Catch: Exception -> 0x0089, TryCatch #1 {Exception -> 0x0089, blocks: (B:17:0x0035, B:20:0x0040, B:26:0x0057, B:31:0x0072, B:32:0x0076, B:35:0x007d, B:38:0x0084, B:30:0x0061, B:23:0x0050), top: B:87:0x0035, inners: #3 }] */
    /* JADX WARN: Code duplicated, block: B:22:0x004e  */
    /* JADX WARN: Code duplicated, block: B:23:0x0050 A[Catch: Exception -> 0x0089, TRY_LEAVE, TryCatch #1 {Exception -> 0x0089, blocks: (B:17:0x0035, B:20:0x0040, B:26:0x0057, B:31:0x0072, B:32:0x0076, B:35:0x007d, B:38:0x0084, B:30:0x0061, B:23:0x0050), top: B:87:0x0035, inners: #3 }] */
    /* JADX WARN: Code duplicated, block: B:31:0x0072 A[Catch: Exception -> 0x0089, TryCatch #1 {Exception -> 0x0089, blocks: (B:17:0x0035, B:20:0x0040, B:26:0x0057, B:31:0x0072, B:32:0x0076, B:35:0x007d, B:38:0x0084, B:30:0x0061, B:23:0x0050), top: B:87:0x0035, inners: #3 }] */
    /* JADX WARN: Code duplicated, block: B:45:0x0097  */
    /* JADX WARN: Code duplicated, block: B:49:0x00a2  */
    /* JADX WARN: Code duplicated, block: B:53:0x00ad  */
    /* JADX WARN: Code duplicated, block: B:59:0x00c7  */
    /* JADX WARN: Code duplicated, block: B:62:0x00e4  */
    /* JADX WARN: Code duplicated, block: B:64:0x00fb  */
    /* JADX WARN: Code duplicated, block: B:66:0x0103  */
    /* JADX WARN: Code duplicated, block: B:69:0x0116  */
    /* JADX WARN: Code duplicated, block: B:70:0x0117 A[Catch: Exception -> 0x0148, TryCatch #2 {Exception -> 0x0148, blocks: (B:67:0x0109, B:70:0x0117, B:72:0x0128, B:75:0x0133, B:77:0x0141), top: B:89:0x0109 }] */
    /* JADX WARN: Code duplicated, block: B:72:0x0128 A[Catch: Exception -> 0x0148, TryCatch #2 {Exception -> 0x0148, blocks: (B:67:0x0109, B:70:0x0117, B:72:0x0128, B:75:0x0133, B:77:0x0141), top: B:89:0x0109 }] */
    /* JADX WARN: Code duplicated, block: B:75:0x0133 A[Catch: Exception -> 0x0148, TryCatch #2 {Exception -> 0x0148, blocks: (B:67:0x0109, B:70:0x0117, B:72:0x0128, B:75:0x0133, B:77:0x0141), top: B:89:0x0109 }] */
    /* JADX WARN: Code duplicated, block: B:79:0x0145 A[LOOP:2: B:73:0x012f->B:79:0x0145, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:91:0x0057 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Instruction removed from duplicated block: B:62:0x00e4, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:64:0x00fb, please report this as an issue */
    private static void a(ArrayList arrayList) {
        String strSubstring;
        String strSubstring2;
        LinkedHashSet linkedHashSet;
        Iterator it;
        int i;
        String name;
        int identifier;
        CharSequence charSequence;
        String string;
        String[] strArr;
        int i2;
        PackageManager packageManager;
        Intent launchIntentForPackage;
        ComponentName component;
        String className;
        int iLastIndexOf;
        int iLastIndexOf2;
        String packageName = AndroidPlatformModule.getAppInfoProvider().getPackageName();
        Class<?> cls = null;
        try {
            ApplicationInfo applicationInfo = AndroidPlatformModule.getAppInfoProvider().getApplicationInfo();
            try {
                if (applicationInfo != null) {
                    String str = applicationInfo.className;
                    strSubstring = (!TextUtils.isEmpty(str) && (iLastIndexOf2 = str.lastIndexOf(46)) > 0) ? str.substring(0, iLastIndexOf2) : null;
                    packageManager = AndroidPlatformModule.getManagerProvider().getPackageManager();
                    if (packageManager != null) {
                        launchIntentForPackage = packageManager.getLaunchIntentForPackage(AndroidPlatformModule.getAppInfoProvider().getPackageName());
                        if (launchIntentForPackage == null) {
                            component = null;
                        } else {
                            component = launchIntentForPackage.getComponent();
                        }
                        if (component != null) {
                            try {
                                className = packageManager.getActivityInfo(component, 0).targetActivity;
                                if (className == null) {
                                    className = component.getClassName();
                                }
                            } catch (PackageManager.NameNotFoundException e) {
                                PWLog.noise("GeneralUtils", "Failed to read launcher activity info for " + component, e);
                            }
                            strSubstring2 = (!TextUtils.isEmpty(className) && (iLastIndexOf = className.lastIndexOf(46)) > 0) ? className.substring(0, iLastIndexOf) : null;
                            linkedHashSet = new LinkedHashSet();
                            if (packageName != null && packageName.indexOf(46) > 0) {
                                linkedHashSet.add(packageName);
                            }
                            if (strSubstring != null && strSubstring.indexOf(46) > 0) {
                                linkedHashSet.add(strSubstring);
                            }
                            if (strSubstring2 != null && strSubstring2.indexOf(46) > 0) {
                                linkedHashSet.add(strSubstring2);
                            }
                            a(linkedHashSet, packageName, strSubstring, strSubstring2);
                            it = linkedHashSet.iterator();
                            while (it.hasNext()) {
                                try {
                                    cls = Class.forName(((String) it.next()) + ".R$raw");
                                    break;
                                } catch (ClassNotFoundException unused) {
                                }
                            }
                            if (cls == null) {
                                PWLog.debug("GeneralUtils", "No R$raw class found in candidate packages " + linkedHashSet + ", reporting no sounds");
                                return;
                            }
                            Field[] fields = cls.getFields();
                            for (Field field : fields) {
                                name = field.getName();
                                try {
                                    identifier = AndroidPlatformModule.getResourceProvider().getIdentifier(name, "raw");
                                    if (identifier <= 0) {
                                        TypedValue typedValue = new TypedValue();
                                        AndroidPlatformModule.getResourceProvider().getValue(identifier, typedValue, true);
                                        charSequence = typedValue.string;
                                        if (charSequence != null) {
                                            string = charSequence.toString();
                                            strArr = f5205a;
                                            for (i2 = 0; i2 < 8; i2++) {
                                                if (string.toLowerCase(Locale.US).endsWith(strArr[i2])) {
                                                    arrayList.add(name);
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                } catch (Exception e2) {
                                    PWLog.noise("GeneralUtils", "Failed to resolve raw resource " + name, e2);
                                }
                            }
                        }
                    }
                    linkedHashSet = new LinkedHashSet();
                    if (packageName != null) {
                        linkedHashSet.add(packageName);
                    }
                    if (strSubstring != null) {
                        linkedHashSet.add(strSubstring);
                    }
                    if (strSubstring2 != null) {
                        linkedHashSet.add(strSubstring2);
                    }
                    a(linkedHashSet, packageName, strSubstring, strSubstring2);
                    it = linkedHashSet.iterator();
                    while (it.hasNext()) {
                        cls = Class.forName(((String) it.next()) + ".R$raw");
                        break;
                    }
                    if (cls == null) {
                        PWLog.debug("GeneralUtils", "No R$raw class found in candidate packages " + linkedHashSet + ", reporting no sounds");
                        return;
                    }
                    Field[] fields2 = cls.getFields();
                    while (i < r3) {
                        name = field.getName();
                        identifier = AndroidPlatformModule.getResourceProvider().getIdentifier(name, "raw");
                        if (identifier <= 0) {
                            TypedValue typedValue2 = new TypedValue();
                            AndroidPlatformModule.getResourceProvider().getValue(identifier, typedValue2, true);
                            charSequence = typedValue2.string;
                            if (charSequence != null) {
                                string = charSequence.toString();
                                strArr = f5205a;
                                while (i2 < 8) {
                                    if (string.toLowerCase(Locale.US).endsWith(strArr[i2])) {
                                        arrayList.add(name);
                                        break;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
                packageManager = AndroidPlatformModule.getManagerProvider().getPackageManager();
                if (packageManager != null) {
                    launchIntentForPackage = packageManager.getLaunchIntentForPackage(AndroidPlatformModule.getAppInfoProvider().getPackageName());
                    if (launchIntentForPackage == null) {
                        component = null;
                    } else {
                        component = launchIntentForPackage.getComponent();
                    }
                    if (component != null) {
                        className = packageManager.getActivityInfo(component, 0).targetActivity;
                        if (className == null) {
                            className = component.getClassName();
                        }
                        if (TextUtils.isEmpty(className)) {
                            linkedHashSet = new LinkedHashSet();
                            if (packageName != null) {
                                linkedHashSet.add(packageName);
                            }
                            if (strSubstring != null) {
                                linkedHashSet.add(strSubstring);
                            }
                            if (strSubstring2 != null) {
                                linkedHashSet.add(strSubstring2);
                            }
                            a(linkedHashSet, packageName, strSubstring, strSubstring2);
                            it = linkedHashSet.iterator();
                            while (it.hasNext()) {
                                cls = Class.forName(((String) it.next()) + ".R$raw");
                                break;
                            }
                            if (cls == null) {
                                PWLog.debug("GeneralUtils", "No R$raw class found in candidate packages " + linkedHashSet + ", reporting no sounds");
                                return;
                            }
                            Field[] fields3 = cls.getFields();
                            while (i < r3) {
                                name = field.getName();
                                identifier = AndroidPlatformModule.getResourceProvider().getIdentifier(name, "raw");
                                if (identifier <= 0) {
                                    TypedValue typedValue3 = new TypedValue();
                                    AndroidPlatformModule.getResourceProvider().getValue(identifier, typedValue3, true);
                                    charSequence = typedValue3.string;
                                    if (charSequence != null) {
                                        string = charSequence.toString();
                                        strArr = f5205a;
                                        while (i2 < 8) {
                                            if (string.toLowerCase(Locale.US).endsWith(strArr[i2])) {
                                                arrayList.add(name);
                                                break;
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } catch (Exception e3) {
                PWLog.noise("GeneralUtils", "Failed to resolve the launcher activity package", e3);
            }
        } catch (Exception e4) {
            PWLog.noise("GeneralUtils", "Failed to resolve the Application class package", e4);
        }
        linkedHashSet = new LinkedHashSet();
        if (packageName != null) {
            linkedHashSet.add(packageName);
        }
        if (strSubstring != null) {
            linkedHashSet.add(strSubstring);
        }
        if (strSubstring2 != null) {
            linkedHashSet.add(strSubstring2);
        }
        a(linkedHashSet, packageName, strSubstring, strSubstring2);
        it = linkedHashSet.iterator();
        while (it.hasNext()) {
            cls = Class.forName(((String) it.next()) + ".R$raw");
            break;
        }
        if (cls == null) {
            PWLog.debug("GeneralUtils", "No R$raw class found in candidate packages " + linkedHashSet + ", reporting no sounds");
            return;
        }
        Field[] fields4 = cls.getFields();
        while (i < r3) {
            name = field.getName();
            identifier = AndroidPlatformModule.getResourceProvider().getIdentifier(name, "raw");
            if (identifier <= 0) {
                TypedValue typedValue4 = new TypedValue();
                AndroidPlatformModule.getResourceProvider().getValue(identifier, typedValue4, true);
                charSequence = typedValue4.string;
                if (charSequence != null) {
                    string = charSequence.toString();
                    strArr = f5205a;
                    while (i2 < 8) {
                        if (string.toLowerCase(Locale.US).endsWith(strArr[i2])) {
                            arrayList.add(name);
                            break;
                            break;
                        }
                    }
                }
            }
        }
    }

    public static void checkNotNull(Object obj, String str) {
        if (obj == null) {
            throw new IllegalArgumentException(String.format("Please set the %1$s constant and recompile the app.", str));
        }
    }

    public static void checkNotNullOrEmpty(String str, String str2) {
        checkNotNull(str, str2);
        if (str.length() == 0) {
            throw new IllegalArgumentException(String.format("Please set the %1$s constant and recompile the app.", str2));
        }
    }

    public static boolean checkStickyBroadcastPermissions(Context context) {
        try {
            return context.getPackageManager().checkPermission("android.permission.BROADCAST_STICKY", context.getPackageName()) == 0;
        } catch (Exception e) {
            PWLog.error("error in checking broadcast_sticky permission", e);
            return false;
        }
    }

    public static int getAppVersion() {
        return AndroidPlatformModule.getAppInfoProvider().getVersionCode();
    }

    public static ArrayList<String> getRawResourses() {
        ArrayList<String> arrayList = new ArrayList<>();
        try {
            a(arrayList);
        } catch (Exception e) {
            PWLog.noise("GeneralUtils", "Failed to enumerate raw resources for sound files", e);
        }
        try {
            AssetManager assets = AndroidPlatformModule.getManagerProvider().getAssets();
            if (assets != null) {
                for (String str : assets.list("www/res")) {
                    if (assets.list("www/res/" + str).length == 0) {
                        String[] strArr = f5205a;
                        for (int i = 0; i < 8; i++) {
                            if (str.toLowerCase(Locale.US).endsWith(strArr[i])) {
                                arrayList.add(str);
                                break;
                            }
                        }
                    }
                }
            }
        } catch (IOException e2) {
            PWLog.exception(e2);
        } catch (Exception e3) {
            PWLog.noise("GeneralUtils", "Failed to enumerate www/res sound files", e3);
        }
        return arrayList;
    }

    public static boolean isMainActivity(Activity activity) {
        ComponentName component;
        String className;
        PackageManager packageManager = activity.getPackageManager();
        Intent launchIntentForPackage = packageManager.getLaunchIntentForPackage(activity.getPackageName());
        if (launchIntentForPackage == null || (component = launchIntentForPackage.getComponent()) == null) {
            return false;
        }
        try {
            className = packageManager.getActivityInfo(component, 0).targetActivity;
            if (className == null) {
                className = component.getClassName();
            }
        } catch (PackageManager.NameNotFoundException e) {
            PWLog.noise("GeneralUtils", "Failed to read launcher activity info for " + component, e);
        }
        return TextUtils.equals(className, activity.getClass().getName());
    }

    public static boolean isNetworkAvailable() {
        ConnectivityManager connectivityManager = AndroidPlatformModule.getManagerProvider().getConnectivityManager();
        NetworkInfo activeNetworkInfo = connectivityManager == null ? null : connectivityManager.getActiveNetworkInfo();
        return activeNetworkInfo != null && activeNetworkInfo.isAvailable() && activeNetworkInfo.isConnected();
    }

    public static boolean isStoreApp() {
        return !TextUtils.isEmpty(AndroidPlatformModule.getAppInfoProvider().getInstallerPackageName());
    }

    public static int parseColor(String str) {
        try {
            if (str.startsWith("#") && (str.length() == 7 || str.length() == 9)) {
                return Color.parseColor(str);
            }
            if (str.startsWith("#") && str.length() == 4) {
                char[] charArray = str.toCharArray();
                return Color.parseColor("#" + charArray[1] + charArray[1] + charArray[2] + charArray[2] + charArray[3] + charArray[3]);
            }
            if (!str.startsWith("#") || str.length() != 5) {
                String[] strArrSplit = str.split(StringUtils.COMMA);
                return Color.argb(Integer.parseInt(strArrSplit[3]), Integer.parseInt(strArrSplit[0]), Integer.parseInt(strArrSplit[1]), Integer.parseInt(strArrSplit[2]));
            }
            char[] charArray2 = str.toCharArray();
            return Color.parseColor("#" + charArray2[1] + charArray2[1] + charArray2[2] + charArray2[2] + charArray2[3] + charArray2[3] + charArray2[4] + charArray2[4]);
        } catch (Exception e) {
            PWLog.exception(e);
            return -1;
        }
    }

    public static String md5(String str) {
        if (str == null) {
            return "";
        }
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            messageDigest.update(str.getBytes());
            byte[] bArrDigest = messageDigest.digest();
            StringBuilder sb = new StringBuilder();
            for (byte b : bArrDigest) {
                sb.append(String.format("%02x", Byte.valueOf(b)));
            }
            return sb.toString();
        } catch (Exception unused) {
            return "";
        }
    }

    /* JADX WARN: Code duplicated, block: B:11:0x001c A[PHI: r5 r6
  0x001c: PHI (r5v3 java.lang.String) = (r5v2 java.lang.String), (r5v0 java.lang.String) binds: [B:17:0x0030, B:9:0x0019] A[DONT_GENERATE, DONT_INLINE]
  0x001c: PHI (r6v3 int) = (r6v2 int), (r6v4 int) binds: [B:17:0x0030, B:9:0x0019] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:13:0x0022  */
    /* JADX WARN: Code duplicated, block: B:16:0x002c  */
    /* JADX WARN: Code duplicated, block: B:18:0x0032  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:17:0x0030 -> B:11:0x001c). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:18:0x0032 -> B:12:0x0020). Please report as a decompilation issue!!! */
    /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        */
    private static void a(java.util.LinkedHashSet r7, java.lang.String... r8) {
        /*
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r8.length
            r2 = 0
            r3 = r2
        L8:
            r4 = 46
            if (r3 >= r1) goto L37
            r5 = r8[r3]
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 == 0) goto L15
            goto L32
        L15:
            int r6 = r5.lastIndexOf(r4)
            if (r6 > 0) goto L1c
            goto L32
        L1c:
            java.lang.String r5 = r5.substring(r2, r6)
        L20:
            if (r5 == 0) goto L34
            r0.add(r5)
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 == 0) goto L2c
            goto L32
        L2c:
            int r6 = r5.lastIndexOf(r4)
            if (r6 > 0) goto L1c
        L32:
            r5 = 0
            goto L20
        L34:
            int r3 = r3 + 1
            goto L8
        L37:
            com.pushwoosh.internal.platform.utils.GeneralUtils$$ExternalSyntheticLambda0 r8 = new com.pushwoosh.internal.platform.utils.GeneralUtils$$ExternalSyntheticLambda0
            r8.<init>()
            java.util.Collections.sort(r0, r8)
            java.util.Iterator r8 = r0.iterator()
        L43:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto L5b
            java.lang.Object r0 = r8.next()
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto L43
            int r1 = r0.indexOf(r4)
            if (r1 <= 0) goto L43
            r7.add(r0)
            goto L43
        L5b:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.pushwoosh.internal.platform.utils.GeneralUtils.a(java.util.LinkedHashSet, java.lang.String[]):void");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int a(String str, String str2) {
        int i = 1;
        int i2 = 1;
        for (int i3 = 0; i3 < str2.length(); i3++) {
            if (str2.charAt(i3) == '.') {
                i2++;
            }
        }
        for (int i4 = 0; i4 < str.length(); i4++) {
            if (str.charAt(i4) == '.') {
                i++;
            }
        }
        return i2 - i;
    }
}
