package com.my.target;

import android.app.UiModeManager;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.media.AudioManager;
import android.os.Build;
import android.os.Process;
import android.os.SystemClock;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.inputmethod.InputMethodInfo;
import android.view.inputmethod.InputMethodManager;
import android.view.inputmethod.InputMethodSubtype;
import com.my.target.common.MyTargetConfig;
import com.my.target.common.MyTargetVersion;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.sentry.protocol.App;
import io.sentry.protocol.Device;
import io.sentry.protocol.OperatingSystem;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TimeZone;
import java.util.UUID;

/* JADX INFO: loaded from: classes6.dex */
public final class u1 extends c2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public volatile String f4828a;
    public t1 b;
    public Map c;

    public t1 a() {
        return this.b;
    }

    /* JADX WARN: Code duplicated, block: B:76:0x00a1 A[EXC_TOP_SPLITTER, PHI: r0 r7
  0x00a1: PHI (r0v15 boolean) = (r0v16 boolean), (r0v13 boolean) binds: [B:42:0x009f, B:39:0x009b] A[DONT_GENERATE, DONT_INLINE]
  0x00a1: PHI (r7v9 java.lang.Process) = (r7v10 java.lang.Process), (r7v11 java.lang.Process) binds: [B:42:0x009f, B:39:0x009b] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:95:0x00a4 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:96:0x00a4 A[SYNTHETIC] */
    public boolean b() {
        Process processExec;
        BufferedReader bufferedReader;
        String str = Build.TAGS;
        boolean z = str != null && str.contains("test-keys");
        if (!z) {
            String[] strArr = {"/system/app/Superuser.apk", "/sbin/su", "/system/bin/su", "/system/xbin/su", "/data/local/xbin/su", "/data/local/bin/su", "/system/sd/xbin/su", "/system/bin/failsafe/su", "/data/local/su", "/su/bin/su"};
            for (int i = 0; i < 10; i++) {
                if (new File(strArr[i]).exists()) {
                    z = true;
                    break;
                }
            }
        }
        BufferedReader bufferedReader2 = null;
        if (!z) {
            Runtime runtime = Runtime.getRuntime();
            String[] strArr2 = {"/system/xbin/which su", "/system/bin/which su", "which su"};
            for (int i2 = 0; i2 < 3; i2++) {
                try {
                    processExec = runtime.exec(strArr2[i2]);
                    try {
                        bufferedReader = new BufferedReader(new InputStreamReader(processExec.getInputStream()));
                        try {
                            StringBuilder sb = new StringBuilder();
                            while (true) {
                                String line = bufferedReader.readLine();
                                if (line == null) {
                                    break;
                                }
                                sb.append(line);
                            }
                            processExec.destroy();
                            if (TextUtils.isEmpty(sb.toString())) {
                                try {
                                    bufferedReader.close();
                                    if (processExec != null) {
                                        processExec.destroy();
                                    }
                                } catch (Throwable unused) {
                                    if (processExec != null) {
                                    }
                                }
                            } else {
                                try {
                                    bufferedReader.close();
                                    try {
                                        processExec.destroy();
                                    } catch (Throwable unused2) {
                                    }
                                    z = true;
                                    break;
                                } catch (Throwable unused3) {
                                    z = true;
                                    if (processExec != null) {
                                        try {
                                            processExec.destroy();
                                        } catch (Throwable unused4) {
                                        }
                                    }
                                }
                            }
                        } catch (Throwable unused5) {
                            if (bufferedReader != null) {
                            }
                            if (processExec != null) {
                                processExec.destroy();
                            }
                        }
                    } catch (Throwable unused6) {
                        bufferedReader = null;
                    }
                } catch (Throwable unused7) {
                    processExec = null;
                }
                if (processExec != null) {
                    processExec.destroy();
                }
            }
        }
        if (!z) {
            try {
                try {
                    BufferedReader bufferedReader3 = new BufferedReader(new InputStreamReader(new FileInputStream(String.format(Locale.US, "/proc/%d/mounts", Integer.valueOf(Process.myPid())))));
                    try {
                        String[] strArr3 = {"/sbin/.magisk/", "/sbin/.core/mirror", "/sbin/.core/img", "/sbin/.core/db-0/magisk.db"};
                        while (true) {
                            String line2 = bufferedReader3.readLine();
                            if (line2 == null) {
                                break;
                            }
                            for (int i3 = 0; i3 < 4; i3++) {
                                if (line2.contains(strArr3[i3])) {
                                    z = true;
                                    break;
                                }
                            }
                        }
                        bufferedReader3.close();
                    } catch (Throwable unused8) {
                        bufferedReader2 = bufferedReader3;
                        if (bufferedReader2 != null) {
                            bufferedReader2.close();
                        }
                        return z;
                    }
                } catch (Throwable unused9) {
                }
            } catch (Throwable unused10) {
            }
        }
        return z;
    }

    public final void c(Map map, Context context) {
        AudioManager audioManager = (AudioManager) context.getSystemService("audio");
        if (audioManager == null) {
            return;
        }
        map.put("rs", audioManager.getRingerMode() == 2 ? "1" : "0");
    }

    public String a(Context context) {
        if (f0.a()) {
            gb.a("DeviceParamsDataProvider: You must not call getInstanceId method from main thread");
            return "";
        }
        if (this.f4828a == null) {
            synchronized (this) {
                if (this.f4828a == null) {
                    String strG = v8.a(context).g();
                    if (TextUtils.isEmpty(strG)) {
                        strG = UUID.randomUUID().toString();
                        v8.a(context).g(strG);
                    }
                    this.f4828a = strG;
                }
            }
        }
        String str = this.f4828a;
        return str == null ? "" : str;
    }

    public synchronized Map a(MyTargetConfig myTargetConfig, Context context) {
        String str;
        String str2;
        PackageManager packageManager;
        String str3;
        String str4;
        String str5;
        String str6;
        String installerPackageName;
        String str7;
        String str8;
        String strSubstring;
        String str9;
        int i;
        PackageManager packageManager2;
        String string;
        if (this.c != null) {
            return new HashMap(this.c);
        }
        final HashMap map = new HashMap();
        gb.a("DeviceParamsDataProvider: Collect application info...");
        String str10 = Build.DEVICE;
        String str11 = Build.MANUFACTURER;
        String str12 = Build.MODEL;
        String str13 = Build.VERSION.RELEASE;
        String packageName = context.getPackageName();
        String language = Locale.getDefault().getLanguage();
        String language2 = context.getResources().getConfiguration().locale.getLanguage();
        String str14 = "";
        int iB = kb.b();
        float fA = kb.a();
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        TimeZone timeZone = TimeZone.getDefault();
        String string2 = "";
        try {
            StringBuilder sb = new StringBuilder();
            str = "";
            str2 = "";
            try {
                sb.append(timeZone.getDisplayName(false, 0));
                sb.append(" ");
                sb.append(timeZone.getID());
                string2 = sb.toString();
            } catch (Throwable th) {
                th = th;
                gb.b("DeviceParamsDataProvider: Timezone name error - " + th.getMessage());
            }
        } catch (Throwable th2) {
            th = th2;
            str = "";
            str2 = "";
        }
        String str15 = string2;
        f0.e(new Runnable() { // from class: com.my.target.u1$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(map);
            }
        });
        try {
            PackageManager packageManager3 = context.getPackageManager();
            try {
                PackageInfo packageInfo = packageManager3.getPackageInfo(packageName, 0);
                str4 = packageInfo.versionName;
                try {
                    packageManager2 = packageManager3;
                    try {
                        if (Build.VERSION.SDK_INT >= 28) {
                            string = Long.toString(packageInfo.getLongVersionCode());
                        } else {
                            string = Integer.toString(packageInfo.versionCode);
                        }
                        str5 = string;
                        packageManager = packageManager2;
                    } catch (Throwable unused) {
                        str3 = str4;
                        packageManager = packageManager2;
                        str4 = str3;
                        str5 = str;
                    }
                } catch (Throwable unused2) {
                    packageManager2 = packageManager3;
                }
            } catch (Throwable unused3) {
                packageManager2 = packageManager3;
                str3 = "";
            }
        } catch (Throwable unused4) {
            packageManager = null;
            str3 = "";
        }
        if (packageManager != null) {
            try {
                str6 = "";
                try {
                    if (Build.VERSION.SDK_INT >= 30) {
                        installerPackageName = packageManager.getInstallSourceInfo(packageName).getInstallingPackageName();
                    } else {
                        installerPackageName = packageManager.getInstallerPackageName(packageName);
                    }
                    str14 = installerPackageName;
                } catch (Throwable unused5) {
                }
            } catch (Throwable unused6) {
                str6 = "";
            }
        } else {
            str6 = "";
        }
        String str16 = str14;
        TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
        if (telephonyManager == null) {
            str7 = str15;
            str8 = "";
            strSubstring = "";
            str9 = str2;
        } else {
            String networkOperatorName = telephonyManager.getNetworkOperatorName();
            String simOperator = telephonyManager.getSimState() == 5 ? telephonyManager.getSimOperator() : str6;
            String networkOperator = telephonyManager.getNetworkOperator();
            if (TextUtils.isEmpty(networkOperator)) {
                str7 = str15;
                str6 = simOperator;
            } else {
                str6 = simOperator;
                str7 = str15;
                if (networkOperator.length() > 3) {
                    String strSubstring2 = networkOperator.substring(3);
                    strSubstring = networkOperator.substring(0, 3);
                    str8 = strSubstring2;
                }
                str9 = networkOperatorName;
            }
            str8 = networkOperator;
            strSubstring = "";
            str9 = networkOperatorName;
        }
        String str17 = str6;
        DisplayMetrics displayMetricsA = kb.a(context);
        String str18 = str8;
        int i2 = displayMetricsA.widthPixels;
        if (i2 <= 0 || (i = displayMetricsA.heightPixels) <= 0) {
            i2 = 0;
            i = 0;
        }
        int i3 = i2;
        int i4 = i;
        map.put("dkm", (context.getResources().getConfiguration().uiMode & 48) == 32 ? "1" : "0");
        if (packageManager != null) {
            try {
                map.put("tscr", packageManager.hasSystemFeature("android.hardware.touchscreen") ? "1" : "0");
            } catch (Throwable unused7) {
            }
            try {
                PackageInfo packageInfo2 = packageManager.getPackageInfo("com.google.android.webview", 0);
                if (packageInfo2 != null) {
                    map.put("swvv", packageInfo2.versionName);
                }
            } catch (Throwable unused8) {
            }
        }
        try {
            map.put("uimd", String.valueOf(((UiModeManager) context.getSystemService("uimode")).getCurrentModeType()));
        } catch (Throwable unused9) {
        }
        try {
            a(map, context);
        } catch (Throwable unused10) {
        }
        try {
            c(map, context);
        } catch (Throwable unused11) {
        }
        try {
            b(map, context);
        } catch (Throwable unused12) {
        }
        map.put(Device.TYPE, str10);
        map.put(OperatingSystem.TYPE, "Android");
        map.put("manufacture", str11);
        map.put("osver", str13);
        map.put(App.TYPE, packageName);
        map.put("appver", str4);
        map.put("appbuild", str5);
        map.put("lang", language);
        map.put("app_lang", language2);
        map.put("sim_loc", strSubstring);
        map.put("euname", str12);
        map.put("w", String.valueOf(i3));
        map.put("h", String.valueOf(i4));
        map.put("dpi", String.valueOf(iB));
        map.put("density", String.valueOf(fA));
        map.put("operator_id", str18);
        map.put("operator_name", str9);
        map.put("sim_operator_id", str17);
        map.put("timezone", str7);
        map.put("instance_id", a(context));
        map.put("btms", String.valueOf(jElapsedRealtime));
        map.put("ains", str16);
        for (Map.Entry entry : map.entrySet()) {
            gb.a("DeviceParamsDataProvider: " + ((String) entry.getKey()) + " = " + ((String) entry.getValue()));
        }
        this.b = t1.a(this.f4828a, "Android", str13, packageName, str4, MyTargetVersion.VERSION);
        this.c = map;
        gb.a("DeviceParamsDataProvider: Collected");
        return new HashMap(this.c);
    }

    public final void b(Map map, Context context) {
        List<InputMethodInfo> enabledInputMethodList;
        InputMethodManager inputMethodManager = (InputMethodManager) context.getSystemService("input_method");
        if (inputMethodManager == null || (enabledInputMethodList = inputMethodManager.getEnabledInputMethodList()) == null) {
            return;
        }
        Iterator<InputMethodInfo> it = enabledInputMethodList.iterator();
        HashSet hashSet = null;
        while (it.hasNext()) {
            List<InputMethodSubtype> enabledInputMethodSubtypeList = inputMethodManager.getEnabledInputMethodSubtypeList(it.next(), true);
            if (enabledInputMethodSubtypeList != null) {
                for (InputMethodSubtype inputMethodSubtype : enabledInputMethodSubtypeList) {
                    if ("keyboard".equals(inputMethodSubtype.getMode())) {
                        String locale = inputMethodSubtype.getLocale();
                        if (!TextUtils.isEmpty(locale)) {
                            if (hashSet == null) {
                                hashSet = new HashSet();
                            }
                            hashSet.add(locale.split("_", 2)[0]);
                        }
                    }
                }
            }
        }
        if (hashSet == null || hashSet.isEmpty()) {
            return;
        }
        String strJoin = TextUtils.join(StringUtils.COMMA, hashSet);
        if (TextUtils.isEmpty(strJoin)) {
            return;
        }
        map.put("kb_lang", strJoin);
    }

    public final /* synthetic */ void a(Map map) {
        boolean zB = b();
        synchronized (this) {
            map.put(OperatingSystem.JsonKeys.ROOTED, zB ? "1" : "0");
        }
    }

    public final void a(Map map, Context context) {
        File filesDir = context.getFilesDir();
        if (filesDir == null) {
            return;
        }
        long totalSpace = filesDir.getTotalSpace();
        long freeSpace = filesDir.getFreeSpace();
        map.put("mm_tt", String.valueOf(totalSpace));
        map.put("mm_av", String.valueOf(freeSpace));
    }
}
