package com.my.tracker.obfuscated;

import android.app.UiModeManager;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.graphics.Point;
import android.hardware.display.DisplayManager;
import android.os.Build;
import android.os.Process;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.Display;
import com.google.firebase.messaging.Constants;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.Locale;
import java.util.TimeZone;

/* JADX INFO: loaded from: classes6.dex */
public final class a0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private z f4904a;

    private static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final int f4905a = a() ? 1 : 0;

        private static boolean a() throws Throwable {
            Process processExec;
            String str = Build.TAGS;
            if (str != null && str.contains("test-keys")) {
                return true;
            }
            String[] strArr = {"/system/app/Superuser.apk", "/sbin/su", "/system/bin/su", "/system/xbin/su", "/data/local/xbin/su", "/data/local/bin/su", "/system/sd/xbin/su", "/system/bin/failsafe/su", "/data/local/su", "/su/bin/su"};
            for (int i = 0; i < 10; i++) {
                if (new File(strArr[i]).exists()) {
                    return true;
                }
            }
            String[] strArr2 = {"/system/xbin/which su", "/system/bin/which su", "which su"};
            Runtime runtime = Runtime.getRuntime();
            int i2 = 0;
            while (true) {
                BufferedReader bufferedReader = null;
                try {
                    if (i2 >= 3) {
                        try {
                            BufferedReader bufferedReader2 = new BufferedReader(new InputStreamReader(new FileInputStream(String.format(Locale.US, "/proc/%d/mounts", Integer.valueOf(Process.myPid())))));
                            try {
                                String[] strArr3 = {"/sbin/.magisk/", "/sbin/.core/mirror", "/sbin/.core/img", "/sbin/.core/db-0/magisk.db"};
                                while (true) {
                                    String line = bufferedReader2.readLine();
                                    if (line == null) {
                                        bufferedReader2.close();
                                        break;
                                    }
                                    for (int i3 = 0; i3 < 4; i3++) {
                                        if (line.contains(strArr3[i3])) {
                                            try {
                                                bufferedReader2.close();
                                            } catch (Throwable unused) {
                                            }
                                            return true;
                                        }
                                    }
                                }
                            } catch (Exception unused2) {
                                bufferedReader = bufferedReader2;
                                if (bufferedReader != null) {
                                    bufferedReader.close();
                                }
                                return false;
                            } catch (Throwable th) {
                                th = th;
                                bufferedReader = bufferedReader2;
                                if (bufferedReader != null) {
                                    try {
                                        bufferedReader.close();
                                    } catch (Throwable unused3) {
                                    }
                                }
                                throw th;
                            }
                        } catch (Exception unused4) {
                        } catch (Throwable th2) {
                            th = th2;
                        }
                        break;
                    }
                    try {
                        processExec = runtime.exec(strArr2[i2]);
                        try {
                            BufferedReader bufferedReader3 = new BufferedReader(new InputStreamReader(processExec.getInputStream()));
                            try {
                                StringBuilder sb = new StringBuilder();
                                while (true) {
                                    String line2 = bufferedReader3.readLine();
                                    if (line2 == null) {
                                        break;
                                    }
                                    sb.append(line2);
                                }
                                processExec.destroy();
                                if (!TextUtils.isEmpty(sb.toString())) {
                                    try {
                                        bufferedReader3.close();
                                    } catch (Throwable unused5) {
                                    }
                                    try {
                                        processExec.destroy();
                                    } catch (Throwable unused6) {
                                    }
                                    return true;
                                }
                                try {
                                    bufferedReader3.close();
                                } catch (Throwable unused7) {
                                }
                                try {
                                    processExec.destroy();
                                } catch (Throwable unused8) {
                                }
                                i2++;
                            } catch (Throwable unused9) {
                                bufferedReader = bufferedReader3;
                                if (bufferedReader != null) {
                                    try {
                                        bufferedReader.close();
                                    } catch (Throwable unused10) {
                                    }
                                }
                                if (processExec != null) {
                                }
                                i2++;
                            }
                        } catch (Throwable unused11) {
                        }
                    } catch (Throwable unused12) {
                        processExec = null;
                    }
                } catch (Throwable unused13) {
                }
            }
            return false;
        }
    }

    private static Point b(Context context) {
        Display display;
        try {
            DisplayManager displayManager = (DisplayManager) context.getSystemService(Constants.ScionAnalytics.MessageType.DISPLAY_NOTIFICATION);
            if (displayManager == null || (display = displayManager.getDisplay(0)) == null) {
                return null;
            }
            Point point = new Point();
            display.getRealSize(point);
            return point;
        } catch (Throwable th) {
            x2.a("DeviceParamsDataProvider: collecting screen size exception: ", th);
            return null;
        }
    }

    /* JADX WARN: Code duplicated, block: B:44:0x009e A[Catch: all -> 0x00b9, TRY_LEAVE, TryCatch #15 {all -> 0x00b9, blocks: (B:42:0x0098, B:44:0x009e), top: B:148:0x0098 }] */
    /* JADX WARN: Code duplicated, block: B:47:0x00a6 A[Catch: all -> 0x00b4, TryCatch #11 {all -> 0x00b4, blocks: (B:45:0x00a0, B:47:0x00a6, B:49:0x00ae, B:48:0x00aa), top: B:140:0x00a0 }] */
    /* JADX WARN: Code duplicated, block: B:48:0x00aa A[Catch: all -> 0x00b4, TryCatch #11 {all -> 0x00b4, blocks: (B:45:0x00a0, B:47:0x00a6, B:49:0x00ae, B:48:0x00aa), top: B:140:0x00a0 }] */
    /* JADX WARN: Code duplicated, block: B:53:0x00b6  */
    /* JADX WARN: Code duplicated, block: B:60:0x00c8  */
    /* JADX WARN: Code duplicated, block: B:61:0x00d1  */
    /* JADX WARN: Code duplicated, block: B:64:0x00df A[Catch: all -> 0x0101, TRY_LEAVE, TryCatch #0 {all -> 0x0101, blocks: (B:62:0x00d5, B:64:0x00df), top: B:118:0x00d5 }] */
    /* JADX WARN: Code duplicated, block: B:76:0x00f8  */
    /* JADX WARN: Code duplicated, block: B:93:0x0155 A[Catch: all -> 0x0163, TRY_LEAVE, TryCatch #2 {all -> 0x0163, blocks: (B:91:0x014f, B:93:0x0155), top: B:122:0x014f }] */
    /* JADX WARN: Code duplicated, block: B:98:0x0160  */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r32v0 */
    /* JADX WARN: Type inference failed for: r32v1, types: [int] */
    /* JADX WARN: Type inference failed for: r32v2 */
    public z a(Context context) {
        String networkOperatorName;
        String strSubstring;
        String strSubstring2;
        String simOperator;
        String str;
        String str2;
        String str3;
        String packageName;
        String language;
        String str4;
        String string;
        String str5;
        Point pointB;
        int i;
        int i2;
        float f;
        float f2;
        int i3;
        float f3;
        int i4;
        float f4;
        float f5;
        String str6;
        int i5;
        long freeSpace;
        long totalSpace;
        long j;
        ?? HasSystemFeature;
        int currentModeType;
        File filesDir;
        DisplayMetrics displayMetrics;
        PackageInfo packageInfoA;
        long longVersionCode;
        String language2 = "";
        z zVar = this.f4904a;
        if (zVar != null) {
            return zVar;
        }
        x2.a("DeviceParamsDataProvider: collect application info...");
        String str7 = Build.DEVICE;
        String str8 = Build.MANUFACTURER;
        String str9 = Build.MODEL;
        String str10 = Build.VERSION.RELEASE;
        try {
            TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
            if (telephonyManager != null) {
                networkOperatorName = telephonyManager.getNetworkOperatorName();
                try {
                    String networkOperator = telephonyManager.getNetworkOperator();
                    if (TextUtils.isEmpty(networkOperator) || networkOperator.length() <= 3) {
                        strSubstring2 = networkOperator;
                        strSubstring = "";
                    } else {
                        strSubstring2 = networkOperator.substring(3);
                        try {
                            strSubstring = networkOperator.substring(0, 3);
                        } catch (Throwable th) {
                            th = th;
                            strSubstring = "";
                            x2.a("DeviceParamsDataProvider: collecting telephony exception: ", th);
                            str = networkOperatorName;
                            str3 = strSubstring;
                            str2 = strSubstring2;
                            packageName = context.getPackageName();
                            language = context.getResources().getConfiguration().locale.getLanguage();
                            packageInfoA = t.a(context);
                            if (packageInfoA != null) {
                                str4 = packageInfoA.versionName;
                                try {
                                    if (Build.VERSION.SDK_INT < 28) {
                                        longVersionCode = packageInfoA.versionCode;
                                    } else {
                                        longVersionCode = packageInfoA.getLongVersionCode();
                                    }
                                    string = Long.toString(longVersionCode);
                                } catch (Throwable th2) {
                                    th = th2;
                                    x2.a("DeviceParamsDataProvider: collecting app package info exception: ", th);
                                    string = "";
                                }
                                str5 = str4;
                            } else {
                                string = "";
                                str5 = string;
                            }
                            pointB = b(context);
                            if (pointB != null) {
                                int i6 = pointB.x;
                                i2 = pointB.y;
                                i = i6;
                            } else {
                                i = -1;
                                i2 = -1;
                            }
                            displayMetrics = context.getResources().getDisplayMetrics();
                            if (displayMetrics != null) {
                                i3 = displayMetrics.densityDpi;
                                try {
                                    f = displayMetrics.density;
                                    try {
                                        f2 = displayMetrics.xdpi;
                                        try {
                                            f4 = displayMetrics.ydpi;
                                            f3 = f2;
                                            i4 = i3;
                                        } catch (Throwable th3) {
                                            th = th3;
                                            x2.a("DeviceParamsDataProvider: collecting display metrics exception: ", th);
                                            f3 = f2;
                                            i4 = i3;
                                            f4 = Float.NaN;
                                        }
                                    } catch (Throwable th4) {
                                        th = th4;
                                        f2 = Float.NaN;
                                        x2.a("DeviceParamsDataProvider: collecting display metrics exception: ", th);
                                        f3 = f2;
                                        i4 = i3;
                                        f4 = Float.NaN;
                                        f5 = f;
                                        TimeZone timeZone = TimeZone.getDefault();
                                        str6 = timeZone.getDisplayName(false, 0) + " " + timeZone.getID();
                                        i5 = a.f4905a;
                                        freeSpace = -1;
                                        filesDir = context.getFilesDir();
                                        if (filesDir != null) {
                                            totalSpace = filesDir.getTotalSpace();
                                            try {
                                                freeSpace = filesDir.getFreeSpace();
                                            } catch (Throwable th5) {
                                                th = th5;
                                                x2.a("DeviceParamsDataProvider: collecting disk info exception: ", th);
                                            }
                                            long j2 = totalSpace;
                                            j = freeSpace;
                                            freeSpace = j2;
                                        } else {
                                            j = -1;
                                        }
                                        language2 = Locale.getDefault().getLanguage();
                                        String str11 = language2;
                                        HasSystemFeature = context.getPackageManager().hasSystemFeature("android.hardware.touchscreen");
                                        currentModeType = ((UiModeManager) context.getSystemService("uimode")).getCurrentModeType();
                                        z zVar2 = new z(3, c3.a(context), str7, str10, packageName, string, str5, str8, str9, str11, language, str3, str2, str, simOperator, str6, i, i2, i4, f5, f3, f4, i5, freeSpace, j, HasSystemFeature, currentModeType);
                                        x2.a("DeviceParamsDataProvider: collected");
                                        this.f4904a = zVar2;
                                        return zVar2;
                                    }
                                } catch (Throwable th6) {
                                    th = th6;
                                    f = Float.NaN;
                                }
                                f5 = f;
                            } else {
                                f5 = Float.NaN;
                                i4 = -1;
                                f3 = Float.NaN;
                                f4 = Float.NaN;
                            }
                            TimeZone timeZone2 = TimeZone.getDefault();
                            str6 = timeZone2.getDisplayName(false, 0) + " " + timeZone2.getID();
                            i5 = a.f4905a;
                            freeSpace = -1;
                            filesDir = context.getFilesDir();
                            if (filesDir != null) {
                                totalSpace = filesDir.getTotalSpace();
                                freeSpace = filesDir.getFreeSpace();
                                long j3 = totalSpace;
                                j = freeSpace;
                                freeSpace = j3;
                            } else {
                                j = -1;
                            }
                            language2 = Locale.getDefault().getLanguage();
                            String str12 = language2;
                            HasSystemFeature = context.getPackageManager().hasSystemFeature("android.hardware.touchscreen");
                            currentModeType = ((UiModeManager) context.getSystemService("uimode")).getCurrentModeType();
                            z zVar3 = new z(3, c3.a(context), str7, str10, packageName, string, str5, str8, str9, str12, language, str3, str2, str, simOperator, str6, i, i2, i4, f5, f3, f4, i5, freeSpace, j, HasSystemFeature, currentModeType);
                            x2.a("DeviceParamsDataProvider: collected");
                            this.f4904a = zVar3;
                            return zVar3;
                        }
                    }
                    try {
                        simOperator = telephonyManager.getSimState() == 5 ? telephonyManager.getSimOperator() : "";
                    } catch (Throwable th7) {
                        th = th7;
                        x2.a("DeviceParamsDataProvider: collecting telephony exception: ", th);
                    }
                } catch (Throwable th8) {
                    th = th8;
                    strSubstring = "";
                    strSubstring2 = strSubstring;
                    x2.a("DeviceParamsDataProvider: collecting telephony exception: ", th);
                    str = networkOperatorName;
                    str3 = strSubstring;
                    str2 = strSubstring2;
                    packageName = context.getPackageName();
                    language = context.getResources().getConfiguration().locale.getLanguage();
                    packageInfoA = t.a(context);
                    if (packageInfoA != null) {
                        str4 = packageInfoA.versionName;
                        if (Build.VERSION.SDK_INT < 28) {
                            longVersionCode = packageInfoA.versionCode;
                        } else {
                            longVersionCode = packageInfoA.getLongVersionCode();
                        }
                        string = Long.toString(longVersionCode);
                        str5 = str4;
                    } else {
                        string = "";
                        str5 = string;
                    }
                    pointB = b(context);
                    if (pointB != null) {
                        int i7 = pointB.x;
                        i2 = pointB.y;
                        i = i7;
                    } else {
                        i = -1;
                        i2 = -1;
                    }
                    displayMetrics = context.getResources().getDisplayMetrics();
                    if (displayMetrics != null) {
                        i3 = displayMetrics.densityDpi;
                        f = displayMetrics.density;
                        f2 = displayMetrics.xdpi;
                        f4 = displayMetrics.ydpi;
                        f3 = f2;
                        i4 = i3;
                        f5 = f;
                    } else {
                        f5 = Float.NaN;
                        i4 = -1;
                        f3 = Float.NaN;
                        f4 = Float.NaN;
                    }
                    TimeZone timeZone3 = TimeZone.getDefault();
                    str6 = timeZone3.getDisplayName(false, 0) + " " + timeZone3.getID();
                    i5 = a.f4905a;
                    freeSpace = -1;
                    filesDir = context.getFilesDir();
                    if (filesDir != null) {
                        totalSpace = filesDir.getTotalSpace();
                        freeSpace = filesDir.getFreeSpace();
                        long j4 = totalSpace;
                        j = freeSpace;
                        freeSpace = j4;
                    } else {
                        j = -1;
                    }
                    language2 = Locale.getDefault().getLanguage();
                    String str13 = language2;
                    HasSystemFeature = context.getPackageManager().hasSystemFeature("android.hardware.touchscreen");
                    currentModeType = ((UiModeManager) context.getSystemService("uimode")).getCurrentModeType();
                    z zVar4 = new z(3, c3.a(context), str7, str10, packageName, string, str5, str8, str9, str13, language, str3, str2, str, simOperator, str6, i, i2, i4, f5, f3, f4, i5, freeSpace, j, HasSystemFeature, currentModeType);
                    x2.a("DeviceParamsDataProvider: collected");
                    this.f4904a = zVar4;
                    return zVar4;
                }
                str = networkOperatorName;
                str3 = strSubstring;
                str2 = strSubstring2;
            } else {
                str3 = "";
                str2 = str3;
                str = str2;
                simOperator = str;
            }
        } catch (Throwable th9) {
            th = th9;
            networkOperatorName = "";
            strSubstring = networkOperatorName;
        }
        try {
            packageName = context.getPackageName();
        } catch (Throwable th10) {
            x2.a("DeviceParamsDataProvider: collecting packageName exception: ", th10);
            packageName = "";
        }
        try {
            language = context.getResources().getConfiguration().locale.getLanguage();
        } catch (Throwable th11) {
            x2.a("DeviceParamsDataProvider: collecting app lang exception: ", th11);
            language = "";
        }
        try {
            packageInfoA = t.a(context);
            if (packageInfoA != null) {
                str4 = packageInfoA.versionName;
                if (Build.VERSION.SDK_INT < 28) {
                    longVersionCode = packageInfoA.versionCode;
                } else {
                    longVersionCode = packageInfoA.getLongVersionCode();
                }
                string = Long.toString(longVersionCode);
                str5 = str4;
            } else {
                string = "";
                str5 = string;
            }
        } catch (Throwable th12) {
            th = th12;
            str4 = "";
        }
        pointB = b(context);
        if (pointB != null) {
            int i8 = pointB.x;
            i2 = pointB.y;
            i = i8;
        } else {
            i = -1;
            i2 = -1;
        }
        try {
            displayMetrics = context.getResources().getDisplayMetrics();
            if (displayMetrics != null) {
                i3 = displayMetrics.densityDpi;
                f = displayMetrics.density;
                f2 = displayMetrics.xdpi;
                f4 = displayMetrics.ydpi;
                f3 = f2;
                i4 = i3;
                f5 = f;
            } else {
                f5 = Float.NaN;
                i4 = -1;
                f3 = Float.NaN;
                f4 = Float.NaN;
            }
        } catch (Throwable th13) {
            th = th13;
            f = Float.NaN;
            f2 = Float.NaN;
            i3 = -1;
        }
        try {
            TimeZone timeZone4 = TimeZone.getDefault();
            str6 = timeZone4.getDisplayName(false, 0) + " " + timeZone4.getID();
        } catch (Throwable th14) {
            x2.a("DeviceParamsDataProvider: collecting timezone exception: ", th14);
            str6 = "";
        }
        try {
            i5 = a.f4905a;
        } catch (Throwable th15) {
            x2.a("DeviceParamsDataProvider: collecting isRooted exception: ", th15);
            i5 = -1;
        }
        freeSpace = -1;
        try {
            filesDir = context.getFilesDir();
            if (filesDir != null) {
                totalSpace = filesDir.getTotalSpace();
                freeSpace = filesDir.getFreeSpace();
                long j5 = totalSpace;
                j = freeSpace;
                freeSpace = j5;
            } else {
                j = -1;
            }
        } catch (Throwable th16) {
            th = th16;
            totalSpace = -1;
        }
        try {
            language2 = Locale.getDefault().getLanguage();
        } catch (Throwable th17) {
            x2.a("DeviceParamsDataProvider: collecting lang exception: ", th17);
        }
        String str14 = language2;
        try {
            HasSystemFeature = context.getPackageManager().hasSystemFeature("android.hardware.touchscreen");
        } catch (Throwable th18) {
            x2.a("DeviceParamsDataProvider: collecting touchscreen info exception: ", th18);
            HasSystemFeature = -1;
        }
        try {
            currentModeType = ((UiModeManager) context.getSystemService("uimode")).getCurrentModeType();
        } catch (Throwable th19) {
            x2.a("DeviceParamsDataProvider: collecting ui mode info exception: ", th19);
            currentModeType = -1;
        }
        z zVar5 = new z(3, c3.a(context), str7, str10, packageName, string, str5, str8, str9, str14, language, str3, str2, str, simOperator, str6, i, i2, i4, f5, f3, f4, i5, freeSpace, j, HasSystemFeature, currentModeType);
        x2.a("DeviceParamsDataProvider: collected");
        this.f4904a = zVar5;
        return zVar5;
    }
}
