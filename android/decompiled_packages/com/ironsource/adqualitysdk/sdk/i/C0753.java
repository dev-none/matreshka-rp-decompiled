package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Build;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.io.BufferedReader;
import java.io.File;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᘁ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0753 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final String[] f2582 = {StringFog.decrypt("hvSEX+gr1uDR5ZRCsz3O\n", "qYf9LJxOu88=\n"), StringFog.decrypt("uaqK7vVkTQ30sJ2y8nQ=\n", "ltnznYEBICI=\n"), StringFog.decrypt("Vkhh6oxSf28=\n", "eTsDg+J9DBo=\n"), StringFog.decrypt("EBaNafiy7ElMEA==\n", "P2X0GozXgWY=\n"), StringFog.decrypt("OOa/TDVDKAt1/KgQb0M9UDi7tUo=\n", "F5XGP0EmRSQ=\n"), StringFog.decrypt("yDT7TV2WLiqSNPARXpZua4Ii5hNbnCxxyDT3\n", "50eCPinzQwU=\n"), StringFog.decrypt("2H/dSumNjq6WfNQWzp2T5IV511zvxoLxnA==\n", "9wykOZ3o44E=\n"), StringFog.decrypt("+1oyquzPkD+3Xz/x9YKVPvtNJg==\n", "1D5T3o3g/FA=\n"), StringFog.decrypt("TeWn1QTumZ8B4KqOB6ib3xH0\n", "YoHGoWXB9fA=\n"), StringFog.decrypt("u4lt4zarAPj3jGC4JPE=\n", "lO0Ml1eEbJc=\n")};

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final String[] f2581 = {StringFog.decrypt("7In0TGD/3hX6gPYXIPHDGf2J8AYg49g=\n", "j+aZYg6QrX0=\n"), StringFog.decrypt("h7QYCwK/t2+RvRpQQrGqY5a0HEFCo7EpgbccUQk=\n", "5Nt1JWzQxAc=\n"), StringFog.decrypt("7+pSu14P0M3s9g69GB3M0+/tD60=\n", "ip982DZuuaM=\n"), StringFog.decrypt("VlsVst/tCfJdXRP4wfYI4BtHDezR8AnyUEY=\n", "NTR4nLSCfIE=\n"), StringFog.decrypt("2egFy4/h8ove9wmXj/C1is/3DZeO+v6L\n", "uodo5fuJm/k=\n"), StringFog.decrypt("fswKpSADBjRy1AL4dxUf\n", "HaNni1lmalg=\n"), StringFog.decrypt("F1Gr0nD1lEAbVqiLcbSJSxNXtZc=\n", "dD7G/ASa5Co=\n"), StringFog.decrypt("4mk5IkntHc76fHIgVPZWzw==\n", "jwwXUiGFM70=\n"), StringFog.decrypt("7W05j8BrWfDhdyfE2SxU+OM=\n", "jgJUoasCN5c=\n")};

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String[] f2580 = {StringFog.decrypt("eBqYyPndog==\n", "H3/2rYu0wec=\n"), StringFog.decrypt("eOCCK4jwDw==\n", "DY7pReeHYTw=\n"), StringFog.decrypt("bxdKaQ1Vk1ZsEw==\n", "CHglDmEwzCU=\n"), StringFog.decrypt("91h+D8XzZ7M=\n", "sjULY6SHCME=\n"), StringFog.decrypt("ZiCVRf+dJRp0CroX8oEoVlNul1ji1DkCEQ==\n", "J07xN5D0QTo=\n"), StringFog.decrypt("YLCN/YPJmB99sQ==\n", "E9TmouS58HA=\n"), StringFog.decrypt("pPenQhFaGQ==\n", "0pXIOilsadg=\n"), StringFog.decrypt("4uPf76ETroA=\n", "hYyzi8d63eg=\n"), StringFog.decrypt("h51YdtsC\n", "9fw2FbN3S1s=\n")};

    /* JADX WARN: Code duplicated, block: B:64:0x0142  */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static C0813 m8686(Context context) {
        Iterator it;
        boolean z;
        ArrayList arrayList = new ArrayList();
        boolean z2 = false;
        for (String str : f2582) {
            try {
                if (new File(str).exists()) {
                    arrayList.add(1);
                    break;
                }
            } catch (SecurityException unused) {
            }
        }
        PackageManager packageManager = context.getPackageManager();
        for (String str2 : f2581) {
            try {
                packageManager.getPackageInfo(str2, 0);
                arrayList.add(2);
                break;
            } catch (Exception unused2) {
            }
        }
        String str3 = Build.TAGS;
        if (str3 != null && str3.contains(StringFog.decrypt("YpJI8yBC06xl\n", "Fvc7hw0pttU=\n"))) {
            arrayList.add(3);
        }
        try {
            Process processExec = Runtime.getRuntime().exec(StringFog.decrypt("nypPBtc=\n", "8kU6aKPfO3g=\n"));
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(processExec.getInputStream()));
            while (true) {
                try {
                    String line = bufferedReader.readLine();
                    if (line == null) {
                        bufferedReader.close();
                        processExec.waitFor();
                        break;
                    }
                    if (line.contains(StringFog.decrypt("871KcXeXEQ==\n", "3M4zAgPyfLU=\n")) && line.contains(StringFog.decrypt("/clu\n", "3bsZMqARFMM=\n"))) {
                        bufferedReader.close();
                        arrayList.add(4);
                        break;
                    }
                } catch (Throwable th) {
                    bufferedReader.close();
                    throw th;
                }
            }
            while (true) {
                if (!it.hasNext()) {
                    z = false;
                    break;
                }
                int iIntValue = ((Integer) it.next()).intValue();
                if (iIntValue == 1 || iIntValue == 2 || iIntValue == 3 || iIntValue == 4) {
                    z = true;
                    break;
                }
            }
        } catch (Throwable unused3) {
        }
        String[] strArr = {Build.FINGERPRINT, Build.MODEL, Build.MANUFACTURER, Build.BRAND, Build.DEVICE, Build.PRODUCT};
        loop3: for (int i = 0; i < 6; i++) {
            String str4 = strArr[i];
            for (String str5 : f2580) {
                if (str4 == null ? false : str4.toLowerCase().contains(str5.toLowerCase())) {
                    arrayList.add(5);
                    break loop3;
                }
            }
        }
        String str6 = Build.HARDWARE;
        if (str6 == null ? false : str6.toLowerCase().contains(StringFog.decrypt("ivtZLTeV5q0=\n", "7ZQ1SVH8lcU=\n").toLowerCase())) {
            arrayList.add(6);
        } else if (str6 == null ? false : str6.toLowerCase().contains(StringFog.decrypt("Q68WZxWP\n", "Mc54BH365FI=\n").toLowerCase())) {
            arrayList.add(6);
        } else if (str6 == null ? false : str6.toLowerCase().contains(StringFog.decrypt("2jMHWs0z\n", "rFFoIvUFx/U=\n").toLowerCase())) {
            arrayList.add(6);
        }
        it = arrayList.iterator();
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            int iIntValue2 = ((Integer) it2.next()).intValue();
            if (iIntValue2 == 5 || iIntValue2 == 6) {
                z2 = true;
                break;
            }
        }
        return new C0813(z, z2, arrayList);
    }
}
