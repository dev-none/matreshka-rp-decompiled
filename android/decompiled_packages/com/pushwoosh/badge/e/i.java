package com.pushwoosh.badge.e;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.os.Bundle;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class i implements com.pushwoosh.badge.d.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f5048a = -1;

    /* JADX WARN: Code duplicated, block: B:47:0x00a4  */
    /* JADX WARN: Code duplicated, block: B:48:0x00a6 A[Catch: Exception -> 0x00ba, TryCatch #8 {Exception -> 0x00ba, blocks: (B:32:0x0087, B:45:0x009c, B:48:0x00a6, B:51:0x00b0, B:39:0x0091, B:40:0x0094, B:43:0x0098), top: B:72:0x0064 }] */
    /* JADX WARN: Code duplicated, block: B:50:0x00ae  */
    /* JADX WARN: Code duplicated, block: B:51:0x00b0 A[Catch: Exception -> 0x00ba, TRY_LEAVE, TryCatch #8 {Exception -> 0x00ba, blocks: (B:32:0x0087, B:45:0x009c, B:48:0x00a6, B:51:0x00b0, B:39:0x0091, B:40:0x0094, B:43:0x0098), top: B:72:0x0064 }] */
    /* JADX WARN: Code duplicated, block: B:53:0x00b8  */
    /* JADX WARN: Code duplicated, block: B:54:0x00ba  */
    /* JADX WARN: Code duplicated, block: B:80:0x0066 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // com.pushwoosh.badge.d.a
    public final void a(Context context, ComponentName componentName, int i) throws Throwable {
        Class<?> cls;
        BufferedReader bufferedReader;
        String line;
        Object objInvoke;
        Method methodA;
        if (i == 0) {
            i = -1;
        }
        Intent intent = new Intent("com.oppo.unsettledevent");
        intent.putExtra("pakeageName", componentName.getPackageName());
        intent.putExtra("number", i);
        intent.putExtra("upgradeNumber", i);
        int iIntValue = 0;
        List<ResolveInfo> listQueryBroadcastReceivers = context.getPackageManager().queryBroadcastReceivers(intent, 0);
        if (listQueryBroadcastReceivers != null && listQueryBroadcastReceivers.size() > 0) {
            context.sendBroadcast(intent);
            return;
        }
        int i2 = f5048a;
        if (i2 < 0) {
            try {
                try {
                    cls = Class.forName("com.color.os.ColorBuild");
                } catch (ClassNotFoundException unused) {
                    cls = null;
                }
                if (cls == null || (methodA = a(cls)) == null) {
                    objInvoke = null;
                    iIntValue = ((Integer) objInvoke).intValue();
                    try {
                        if (iIntValue == 0) {
                            try {
                                bufferedReader = new BufferedReader(new InputStreamReader(Runtime.getRuntime().exec("getprop ro.build.version.opporom").getInputStream()), 1024);
                                try {
                                    line = bufferedReader.readLine();
                                    bufferedReader.close();
                                    try {
                                        bufferedReader.close();
                                    } catch (IOException unused2) {
                                    }
                                } catch (IOException unused3) {
                                    if (bufferedReader != null) {
                                        try {
                                            bufferedReader.close();
                                        } catch (IOException unused4) {
                                        }
                                    }
                                    line = null;
                                } catch (Throwable th) {
                                    th = th;
                                    if (bufferedReader != null) {
                                        try {
                                            bufferedReader.close();
                                        } catch (IOException unused5) {
                                        }
                                    }
                                    throw th;
                                }
                            } catch (IOException unused6) {
                                bufferedReader = null;
                            } catch (Throwable th2) {
                                th = th2;
                                bufferedReader = null;
                            }
                            if (line.startsWith("V1.4")) {
                                i2 = 3;
                            } else if (line.startsWith("V2.0")) {
                                i2 = 4;
                            } else if (line.startsWith("V2.1")) {
                                i2 = 5;
                            } else {
                                f5048a = iIntValue;
                                i2 = iIntValue;
                            }
                        } else {
                            f5048a = iIntValue;
                            i2 = iIntValue;
                        }
                    } catch (Exception unused7) {
                    }
                } else {
                    methodA.setAccessible(true);
                    try {
                        objInvoke = methodA.invoke(null, null);
                    } catch (IllegalAccessException e) {
                        e.printStackTrace();
                        objInvoke = null;
                    } catch (InvocationTargetException e2) {
                        e2.printStackTrace();
                        objInvoke = null;
                    }
                    iIntValue = ((Integer) objInvoke).intValue();
                    if (iIntValue == 0) {
                        bufferedReader = new BufferedReader(new InputStreamReader(Runtime.getRuntime().exec("getprop ro.build.version.opporom").getInputStream()), 1024);
                        line = bufferedReader.readLine();
                        bufferedReader.close();
                        bufferedReader.close();
                        if (line.startsWith("V1.4")) {
                            i2 = 3;
                        } else if (line.startsWith("V2.0")) {
                            i2 = 4;
                        } else if (line.startsWith("V2.1")) {
                            i2 = 5;
                        } else {
                            f5048a = iIntValue;
                            i2 = iIntValue;
                        }
                    } else {
                        f5048a = iIntValue;
                        i2 = iIntValue;
                    }
                }
            } catch (Exception unused8) {
            }
        }
        if (i2 == 6) {
            try {
                Bundle bundle = new Bundle();
                bundle.putInt("app_badge_count", i);
                context.getContentResolver().call(Uri.parse("content://com.android.badge/badge"), "setAppBadgeCount", (String) null, bundle);
            } catch (Throwable unused9) {
                throw new com.pushwoosh.badge.d.b("unable to resolve intent: " + intent.toString());
            }
        }
    }

    @Override // com.pushwoosh.badge.d.a
    public final List a() {
        return Collections.singletonList("com.oppo.launcher");
    }

    public static Method a(Class cls) {
        if (cls == null) {
            return null;
        }
        try {
            try {
                cls.getMethods();
                cls.getDeclaredMethods();
                return cls.getDeclaredMethod("getColorOSVERSION", null);
            } catch (Exception unused) {
                return cls.getMethod("getColorOSVERSION", null);
            }
        } catch (Exception unused2) {
            if (cls.getSuperclass() != null) {
                return a(cls.getSuperclass());
            }
            return null;
        }
    }
}
