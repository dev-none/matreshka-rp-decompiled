package com.my.tracker.obfuscated;

import android.content.Context;
import android.content.res.Resources;
import android.text.TextUtils;
import java.io.BufferedReader;
import java.io.FileReader;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class o1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final e0 f4981a;
    final y2 b;
    final Context c;

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f4982a;
        public final String b;
        public final String c;

        public a(int i, String str, String str2) {
            this.f4982a = i;
            this.b = str;
            this.c = str2;
        }
    }

    o1(e0 e0Var, y2 y2Var, Context context) {
        this.f4981a = e0Var;
        this.b = y2Var;
        this.c = context.getApplicationContext();
    }

    public static o1 a(e0 e0Var, y2 y2Var, Context context) {
        return new o1(e0Var, y2Var, context);
    }

    a b() {
        String str = "ro.mtpi." + this.b.g();
        String strA = c2.a(str);
        if (TextUtils.isEmpty(strA)) {
            x2.a("PreInstallHandler: empty data for source: 3");
            return null;
        }
        x2.a("PreInstallHandler: raw data in SystemProperties has been found: " + strA);
        return a(3, strA, str);
    }

    public void c() {
        String strR = this.b.r();
        if (TextUtils.isEmpty(strR)) {
            return;
        }
        p1 p1VarA = p1.a(this.c);
        if (p1VarA.q()) {
            return;
        }
        x2.a("PreInstallHandler: checking preinstall");
        try {
            String strA = a(this.c.getPackageManager().getResourcesForApplication(strR), this.c.getPackageName(), strR);
            p1VarA.u();
            if (TextUtils.isEmpty(strA)) {
                x2.a("PreInstallHandler: referrer is empty");
                return;
            }
            x2.a("PreInstallHandler: referrer " + strA);
            this.f4981a.a(strA, t.b(this.c), (Runnable) null);
            p1.a(this.c).v();
        } catch (Throwable unused) {
            x2.a("PreInstallHandler: unable to locate vendor app " + strR);
        }
    }

    static String a(Resources resources, String str, String str2) {
        int identifier = resources.getIdentifier(str + "_mytracker", "string", str2);
        if (identifier == 0) {
            return null;
        }
        return resources.getString(identifier);
    }

    static a a(int i, String str, String str2) {
        try {
            x2.a("PreInstallHandler: converting raw data to json");
            return new a(i, new JSONObject(str).toString(), str2);
        } catch (Throwable th) {
            x2.a("PreInstallHandler error: exception when converting raw data to json", th);
            try {
                x2.a("PreInstallHandler: converting raw data to json with pid");
                return new a(i, new JSONObject().put("pid", str).toString(), str2);
            } catch (Throwable th2) {
                x2.b("PreInstallHandler error: exception when converting raw data to json with pid", th2);
                x2.a("PreInstallHandler: nothing has been found for source: " + i);
                return null;
            }
        }
    }

    public a a() {
        if (!this.b.w()) {
            x2.a("PreInstallHandler: tracking preinstall is disabled");
            return null;
        }
        a aVarB = b();
        if (aVarB != null) {
            return aVarB;
        }
        a aVarA = a(1);
        if (aVarA != null) {
            return aVarA;
        }
        if (this.b.x()) {
            return a(2);
        }
        return null;
    }

    a a(int i) {
        String str;
        if (i == 1) {
            str = "ro.mytracker.preinstall.path";
        } else if (i == 2) {
            str = "ro.appsflyer.preinstall.path";
        } else {
            x2.a("PreInstallHandler: wrong property property key");
            return null;
        }
        String strA = c2.a(str);
        if (TextUtils.isEmpty(strA)) {
            x2.a("PreInstallHandler: empty path for source: " + i);
            return null;
        }
        String strA2 = a(strA);
        if (TextUtils.isEmpty(strA2)) {
            x2.a("PreInstallHandler: empty data for source: " + i);
            return null;
        }
        x2.a("PreInstallHandler: raw data for source has been found: " + strA2);
        return a(i, strA2, strA);
    }

    String a(String str) {
        BufferedReader bufferedReader;
        try {
            try {
                x2.a("PreInstallHandler: searching string in file " + str);
                String str2 = this.c.getPackageName() + "=";
                int length = str2.length();
                bufferedReader = new BufferedReader(new FileReader(str));
                while (true) {
                    try {
                        String line = bufferedReader.readLine();
                        if (line == null) {
                            bufferedReader.close();
                            break;
                        }
                        x2.a("PreInstallHandler: processing string " + line);
                        if (line.startsWith(str2) && line.length() > length) {
                            String strSubstring = line.substring(length);
                            if (!TextUtils.isEmpty(strSubstring)) {
                                try {
                                    bufferedReader.close();
                                } catch (Throwable unused) {
                                }
                                return strSubstring;
                            }
                        }
                    } catch (Throwable th) {
                        th = th;
                        try {
                            x2.b("PreInstallHandler error: exception while retrieving data in file" + str, th);
                            if (bufferedReader != null) {
                                bufferedReader.close();
                            }
                            return null;
                        } catch (Throwable th2) {
                            if (bufferedReader != null) {
                                try {
                                    bufferedReader.close();
                                } catch (Throwable unused2) {
                                }
                            }
                            throw th2;
                        }
                    }
                }
            } catch (Throwable th3) {
                th = th3;
                bufferedReader = null;
            }
        } catch (Throwable unused3) {
        }
        return null;
    }
}
