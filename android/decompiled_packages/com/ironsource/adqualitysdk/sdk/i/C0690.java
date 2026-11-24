package com.ironsource.adqualitysdk.sdk.i;

import android.app.ActivityManager;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.hardware.SensorManager;
import android.os.Build;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᓽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0690 implements InterfaceC0573 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Context f2411;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final String[] f2410 = {StringFog.decrypt("6lSU\n", "mTD/nw/NC6U=\n"), StringFog.decrypt("u8nbXqGvzhy4zQ==\n", "3Ka0Oc3KkW8=\n"), StringFog.decrypt("hSH9KTQmZPKYIA==\n", "9kWWdlNWDJ0=\n")};

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String[] f2409 = {StringFog.decrypt("oRyYYVykfTY=\n", "5HHtDT3QEkQ=\n"), StringFog.decrypt("U3E4czKrKv5BWxc=\n", "Eh9cAV3CTt4=\n")};

    public C0690(Context context) {
        this.f2411 = context;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static boolean m8618() {
        String lowerCase = Build.PRODUCT.toLowerCase();
        String str = Build.MODEL;
        for (String str2 : f2410) {
            if (lowerCase.contains(str2.toLowerCase())) {
                return true;
            }
        }
        for (String str3 : f2409) {
            if (str.toLowerCase().contains(str3.toLowerCase())) {
                return true;
            }
        }
        return false;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0573
    public final String getName() {
        return StringFog.decrypt("t7MbQkTxL0Gepx1OVv4pTby7HV8=\n", "39JpJjOQXSQ=\n");
    }

    /* JADX WARN: Code duplicated, block: B:48:0x00e4  */
    /* JADX WARN: Code duplicated, block: B:56:0x0105  */
    /* JADX WARN: Code duplicated, block: B:59:0x0127  */
    /* JADX WARN: Code duplicated, block: B:61:0x0131  */
    /* JADX WARN: Code duplicated, block: B:65:0x014d  */
    /* JADX WARN: Code duplicated, block: B:66:0x014e A[Catch: Exception -> 0x0157, TRY_LEAVE, TryCatch #8 {Exception -> 0x0157, blocks: (B:63:0x013b, B:66:0x014e), top: B:123:0x013b }] */
    /* JADX WARN: Code duplicated, block: B:70:0x015b  */
    /* JADX WARN: Code duplicated, block: B:75:0x017a  */
    /* JADX WARN: Code duplicated, block: B:76:0x017c A[Catch: Exception -> 0x017a, TRY_LEAVE, TryCatch #5 {Exception -> 0x017a, blocks: (B:73:0x0169, B:76:0x017c), top: B:118:0x0169 }] */
    /* JADX WARN: Code duplicated, block: B:84:0x0190  */
    /* JADX WARN: Code duplicated, block: B:88:0x01ac A[Catch: Exception -> 0x01cf, TryCatch #0 {Exception -> 0x01cf, blocks: (B:86:0x019e, B:88:0x01ac, B:90:0x01bc, B:95:0x01cc), top: B:108:0x019e }] */
    /* JADX WARN: Code duplicated, block: B:90:0x01bc A[Catch: Exception -> 0x01cf, TryCatch #0 {Exception -> 0x01cf, blocks: (B:86:0x019e, B:88:0x01ac, B:90:0x01bc, B:95:0x01cc), top: B:108:0x019e }] */
    /* JADX WARN: Code duplicated, block: B:94:0x01ca  */
    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0573
    /* JADX INFO: renamed from: ﾒ */
    public final C0885 mo8551() {
        long j;
        char c;
        long j2;
        int i;
        long[] jArr;
        long j3;
        String lowerCase;
        int size;
        int i2;
        int intExtra;
        String strDecrypt;
        boolean z;
        String lowerCase2;
        Intent intentRegisterReceiver;
        SensorManager sensorManager;
        ArrayList arrayList = new ArrayList();
        int iAvailableProcessors = Runtime.getRuntime().availableProcessors();
        if (iAvailableProcessors < 3) {
            arrayList.add(50);
        }
        try {
            ActivityManager activityManager = (ActivityManager) this.f2411.getSystemService(StringFog.decrypt("K3bykJ/tC7E=\n", "ShWG+emEf8g=\n"));
            if (activityManager == null) {
                j = 0;
            } else {
                ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
                activityManager.getMemoryInfo(memoryInfo);
                j = memoryInfo.totalMem / 1048576;
            }
        } catch (Exception unused) {
        }
        if (j < 1024) {
            arrayList.add(51);
        }
        try {
            long[] jArr2 = new long[5];
            for (int i3 = 0; i3 < 5; i3++) {
                try {
                    long jNanoTime = System.nanoTime();
                    long j4 = 0;
                    j2 = 0;
                    for (int i4 = 0; i4 < 10000; i4++) {
                        long j5 = i4;
                        j4 = (j5 * j5) + j4;
                    }
                    try {
                        jArr2[i3] = System.nanoTime() - jNanoTime;
                        if (j4 == Long.MIN_VALUE) {
                            throw new RuntimeException(StringFog.decrypt("iLLNuirLP4GfsNo=\n", "/dy/30uoV+A=\n"));
                        }
                    } catch (Exception unused2) {
                        c = 1;
                        i = 0;
                        jArr = new long[2];
                        jArr[i] = j2;
                        jArr[c] = -1;
                        long j6 = jArr[i];
                        j3 = jArr[c];
                        if (j3 > j2) {
                            arrayList.add(52);
                        }
                        if (m8618()) {
                            arrayList.add(53);
                        }
                        lowerCase = Build.FINGERPRINT.toLowerCase();
                        if (lowerCase.contains(StringFog.decrypt("oUlxIyqq5w==\n", "xiwfRljDhNg=\n"))) {
                            arrayList.add(54);
                        } else {
                            arrayList.add(54);
                        }
                        sensorManager = (SensorManager) this.f2411.getSystemService(StringFog.decrypt("jZotbeSN\n", "/v9DHov/knU=\n"));
                        if (sensorManager == null) {
                            size = i;
                        } else {
                            size = sensorManager.getSensorList(-1).size();
                        }
                        if (size < 5) {
                            arrayList.add(55);
                        }
                        try {
                            intentRegisterReceiver = this.f2411.registerReceiver(null, new IntentFilter(StringFog.decrypt("PNKjmWu1ZY000rOOaqgvwj7IroRq8kPiCeiCuV2DQusc8oCuQA==\n", "XbzH6wTcAaM=\n")));
                            if (intentRegisterReceiver != null) {
                                i2 = -1;
                                try {
                                    intExtra = intentRegisterReceiver.getIntExtra(StringFog.decrypt("jEDsa4AJ+f2NV+Q=\n", "+CWBG+V7mIk=\n"), -1);
                                } catch (Exception unused3) {
                                    intExtra = i2;
                                }
                                if (intExtra == 250) {
                                    arrayList.add(56);
                                }
                                JSONObject jSONObject = new JSONObject();
                                String strDecrypt2 = StringFog.decrypt("52/bn2G3vD7hbg==\n", "jhye8hTb3Uo=\n");
                                if (m8618()) {
                                    z = c;
                                } else {
                                    lowerCase2 = Build.FINGERPRINT.toLowerCase();
                                    if (lowerCase2.contains(StringFog.decrypt("oUlxIyqq5w==\n", "xiwfRljDhNg=\n"))) {
                                        z = c;
                                    } else {
                                        z = c;
                                    }
                                }
                                jSONObject.put(strDecrypt2, z);
                                JSONObject jSONObject2 = new JSONObject();
                                jSONObject2.put(StringFog.decrypt("GScUOvnKXM4bFhQs8s0=\n", "aVV7WZy5L6E=\n"), iAvailableProcessors);
                                jSONObject2.put(StringFog.decrypt("lznz0815xquMJP7/4w==\n", "41aHsqE0o8Y=\n"), j);
                                jSONObject2.put(StringFog.decrypt("MeJUPHGD9k434lg7fIHuXA==\n", "RYs5VR/koC8=\n"), j3);
                                jSONObject2.put(StringFog.decrypt("vKJ3dG8Um1m6qW0=\n", "z8cZBwBm2DY=\n"), size);
                                jSONObject2.put(StringFog.decrypt("Bi/fuvgKbfYBI9s=\n", "ZE6rzp14FKI=\n"), intExtra);
                                jSONObject2.put(StringFog.decrypt("fuAHLQN46mBi7gY4HGL2cg==\n", "FoF0aG4NhgE=\n"), jSONObject.optBoolean(StringFog.decrypt("i86sWx/ofTCNzw==\n", "4r3pNmqEHEQ=\n"), i));
                                strDecrypt = jSONObject2.toString();
                                return new C0885(arrayList.isEmpty(), arrayList, strDecrypt, null);
                            }
                            i2 = -1;
                        } catch (Exception unused4) {
                        }
                        intExtra = i2;
                        if (intExtra == 250) {
                            arrayList.add(56);
                        }
                        JSONObject jSONObject3 = new JSONObject();
                        String strDecrypt3 = StringFog.decrypt("52/bn2G3vD7hbg==\n", "jhye8hTb3Uo=\n");
                        if (m8618()) {
                            lowerCase2 = Build.FINGERPRINT.toLowerCase();
                            if (lowerCase2.contains(StringFog.decrypt("oUlxIyqq5w==\n", "xiwfRljDhNg=\n"))) {
                                z = c;
                            } else {
                                z = c;
                            }
                        } else {
                            z = c;
                        }
                        jSONObject3.put(strDecrypt3, z);
                        JSONObject jSONObject4 = new JSONObject();
                        jSONObject4.put(StringFog.decrypt("GScUOvnKXM4bFhQs8s0=\n", "aVV7WZy5L6E=\n"), iAvailableProcessors);
                        jSONObject4.put(StringFog.decrypt("lznz0815xquMJP7/4w==\n", "41aHsqE0o8Y=\n"), j);
                        jSONObject4.put(StringFog.decrypt("MeJUPHGD9k434lg7fIHuXA==\n", "RYs5VR/koC8=\n"), j3);
                        jSONObject4.put(StringFog.decrypt("vKJ3dG8Um1m6qW0=\n", "z8cZBwBm2DY=\n"), size);
                        jSONObject4.put(StringFog.decrypt("Bi/fuvgKbfYBI9s=\n", "ZE6rzp14FKI=\n"), intExtra);
                        jSONObject4.put(StringFog.decrypt("fuAHLQN46mBi7gY4HGL2cg==\n", "FoF0aG4NhgE=\n"), jSONObject3.optBoolean(StringFog.decrypt("i86sWx/ofTCNzw==\n", "4r3pNmqEHEQ=\n"), i));
                        strDecrypt = jSONObject4.toString();
                        return new C0885(arrayList.isEmpty(), arrayList, strDecrypt, null);
                    }
                } catch (Exception unused5) {
                    j2 = 0;
                }
            }
            j2 = 0;
            double d = 0.0d;
            for (int i5 = 0; i5 < 5; i5++) {
                d += jArr2[i5];
            }
            double d2 = 0.0d;
            double d3 = 5;
            double d4 = d / d3;
            if (d4 == 0.0d) {
                jArr = new long[]{0, 0};
                c = 1;
                i = 0;
            } else {
                for (int i6 = 0; i6 < 5; i6++) {
                    c = 1;
                    i = 0;
                    try {
                        double d5 = jArr2[i6] - d4;
                        d2 += d5 * d5;
                    } catch (Exception unused6) {
                        jArr = new long[2];
                        jArr[i] = j2;
                        jArr[c] = -1;
                        long j7 = jArr[i];
                        j3 = jArr[c];
                        if (j3 > j2) {
                            arrayList.add(52);
                        }
                        if (m8618()) {
                            arrayList.add(53);
                        }
                        lowerCase = Build.FINGERPRINT.toLowerCase();
                        if (lowerCase.contains(StringFog.decrypt("oUlxIyqq5w==\n", "xiwfRljDhNg=\n"))) {
                            arrayList.add(54);
                        } else {
                            arrayList.add(54);
                        }
                        sensorManager = (SensorManager) this.f2411.getSystemService(StringFog.decrypt("jZotbeSN\n", "/v9DHov/knU=\n"));
                        if (sensorManager == null) {
                            size = i;
                        } else {
                            size = sensorManager.getSensorList(-1).size();
                        }
                        if (size < 5) {
                            arrayList.add(55);
                        }
                        intentRegisterReceiver = this.f2411.registerReceiver(null, new IntentFilter(StringFog.decrypt("PNKjmWu1ZY000rOOaqgvwj7IroRq8kPiCeiCuV2DQusc8oCuQA==\n", "XbzH6wTcAaM=\n")));
                        if (intentRegisterReceiver != null) {
                            i2 = -1;
                            intExtra = intentRegisterReceiver.getIntExtra(StringFog.decrypt("jEDsa4AJ+f2NV+Q=\n", "+CWBG+V7mIk=\n"), -1);
                            if (intExtra == 250) {
                                arrayList.add(56);
                            }
                            JSONObject jSONObject5 = new JSONObject();
                            String strDecrypt4 = StringFog.decrypt("52/bn2G3vD7hbg==\n", "jhye8hTb3Uo=\n");
                            if (m8618()) {
                                lowerCase2 = Build.FINGERPRINT.toLowerCase();
                                if (lowerCase2.contains(StringFog.decrypt("oUlxIyqq5w==\n", "xiwfRljDhNg=\n"))) {
                                    z = c;
                                } else {
                                    z = c;
                                }
                            } else {
                                z = c;
                            }
                            jSONObject5.put(strDecrypt4, z);
                            JSONObject jSONObject6 = new JSONObject();
                            jSONObject6.put(StringFog.decrypt("GScUOvnKXM4bFhQs8s0=\n", "aVV7WZy5L6E=\n"), iAvailableProcessors);
                            jSONObject6.put(StringFog.decrypt("lznz0815xquMJP7/4w==\n", "41aHsqE0o8Y=\n"), j);
                            jSONObject6.put(StringFog.decrypt("MeJUPHGD9k434lg7fIHuXA==\n", "RYs5VR/koC8=\n"), j3);
                            jSONObject6.put(StringFog.decrypt("vKJ3dG8Um1m6qW0=\n", "z8cZBwBm2DY=\n"), size);
                            jSONObject6.put(StringFog.decrypt("Bi/fuvgKbfYBI9s=\n", "ZE6rzp14FKI=\n"), intExtra);
                            jSONObject6.put(StringFog.decrypt("fuAHLQN46mBi7gY4HGL2cg==\n", "FoF0aG4NhgE=\n"), jSONObject5.optBoolean(StringFog.decrypt("i86sWx/ofTCNzw==\n", "4r3pNmqEHEQ=\n"), i));
                            strDecrypt = jSONObject6.toString();
                            return new C0885(arrayList.isEmpty(), arrayList, strDecrypt, null);
                        }
                        i2 = -1;
                        intExtra = i2;
                        if (intExtra == 250) {
                            arrayList.add(56);
                        }
                        JSONObject jSONObject7 = new JSONObject();
                        String strDecrypt5 = StringFog.decrypt("52/bn2G3vD7hbg==\n", "jhye8hTb3Uo=\n");
                        if (m8618()) {
                            lowerCase2 = Build.FINGERPRINT.toLowerCase();
                            if (lowerCase2.contains(StringFog.decrypt("oUlxIyqq5w==\n", "xiwfRljDhNg=\n"))) {
                                z = c;
                            } else {
                                z = c;
                            }
                        } else {
                            z = c;
                        }
                        jSONObject7.put(strDecrypt5, z);
                        JSONObject jSONObject8 = new JSONObject();
                        jSONObject8.put(StringFog.decrypt("GScUOvnKXM4bFhQs8s0=\n", "aVV7WZy5L6E=\n"), iAvailableProcessors);
                        jSONObject8.put(StringFog.decrypt("lznz0815xquMJP7/4w==\n", "41aHsqE0o8Y=\n"), j);
                        jSONObject8.put(StringFog.decrypt("MeJUPHGD9k434lg7fIHuXA==\n", "RYs5VR/koC8=\n"), j3);
                        jSONObject8.put(StringFog.decrypt("vKJ3dG8Um1m6qW0=\n", "z8cZBwBm2DY=\n"), size);
                        jSONObject8.put(StringFog.decrypt("Bi/fuvgKbfYBI9s=\n", "ZE6rzp14FKI=\n"), intExtra);
                        jSONObject8.put(StringFog.decrypt("fuAHLQN46mBi7gY4HGL2cg==\n", "FoF0aG4NhgE=\n"), jSONObject7.optBoolean(StringFog.decrypt("i86sWx/ofTCNzw==\n", "4r3pNmqEHEQ=\n"), i));
                        strDecrypt = jSONObject8.toString();
                        return new C0885(arrayList.isEmpty(), arrayList, strDecrypt, null);
                    }
                }
                c = 1;
                i = 0;
                jArr = new long[]{(long) d4, (long) (d2 / d3)};
            }
        } catch (Exception unused7) {
            c = 1;
            j2 = 0;
        }
        long j8 = jArr[i];
        j3 = jArr[c];
        if (j3 > j2 && j8 > j2 && Math.sqrt(j3) / j8 > 0.5d) {
            arrayList.add(52);
        }
        if (m8618()) {
            arrayList.add(53);
        }
        lowerCase = Build.FINGERPRINT.toLowerCase();
        if (lowerCase.contains(StringFog.decrypt("oUlxIyqq5w==\n", "xiwfRljDhNg=\n")) || lowerCase.contains(StringFog.decrypt("Q/Upy4SKb9VE\n", "N5Bav6nhCqw=\n"))) {
            arrayList.add(54);
        }
        try {
            sensorManager = (SensorManager) this.f2411.getSystemService(StringFog.decrypt("jZotbeSN\n", "/v9DHov/knU=\n"));
            if (sensorManager == null) {
                size = i;
            } else {
                size = sensorManager.getSensorList(-1).size();
            }
        } catch (Exception unused8) {
        }
        if (size < 5) {
            arrayList.add(55);
        }
        try {
            try {
                try {
                    intentRegisterReceiver = this.f2411.registerReceiver(null, new IntentFilter(StringFog.decrypt("PNKjmWu1ZY000rOOaqgvwj7IroRq8kPiCeiCuV2DQusc8oCuQA==\n", "XbzH6wTcAaM=\n")));
                    if (intentRegisterReceiver != null) {
                        i2 = -1;
                        intExtra = intentRegisterReceiver.getIntExtra(StringFog.decrypt("jEDsa4AJ+f2NV+Q=\n", "+CWBG+V7mIk=\n"), -1);
                        if (intExtra == 250) {
                            arrayList.add(56);
                        }
                        JSONObject jSONObject9 = new JSONObject();
                        String strDecrypt6 = StringFog.decrypt("52/bn2G3vD7hbg==\n", "jhye8hTb3Uo=\n");
                        if (m8618()) {
                            lowerCase2 = Build.FINGERPRINT.toLowerCase();
                            if (lowerCase2.contains(StringFog.decrypt("oUlxIyqq5w==\n", "xiwfRljDhNg=\n")) || lowerCase2.contains(StringFog.decrypt("Q/Upy4SKb9VE\n", "N5Bav6nhCqw=\n"))) {
                                z = c;
                            } else {
                                z = i;
                            }
                        } else {
                            z = c;
                        }
                        jSONObject9.put(strDecrypt6, z);
                        JSONObject jSONObject10 = new JSONObject();
                        jSONObject10.put(StringFog.decrypt("GScUOvnKXM4bFhQs8s0=\n", "aVV7WZy5L6E=\n"), iAvailableProcessors);
                        jSONObject10.put(StringFog.decrypt("lznz0815xquMJP7/4w==\n", "41aHsqE0o8Y=\n"), j);
                        jSONObject10.put(StringFog.decrypt("MeJUPHGD9k434lg7fIHuXA==\n", "RYs5VR/koC8=\n"), j3);
                        jSONObject10.put(StringFog.decrypt("vKJ3dG8Um1m6qW0=\n", "z8cZBwBm2DY=\n"), size);
                        jSONObject10.put(StringFog.decrypt("Bi/fuvgKbfYBI9s=\n", "ZE6rzp14FKI=\n"), intExtra);
                        jSONObject10.put(StringFog.decrypt("fuAHLQN46mBi7gY4HGL2cg==\n", "FoF0aG4NhgE=\n"), jSONObject9.optBoolean(StringFog.decrypt("i86sWx/ofTCNzw==\n", "4r3pNmqEHEQ=\n"), i));
                        strDecrypt = jSONObject10.toString();
                        return new C0885(arrayList.isEmpty(), arrayList, strDecrypt, null);
                    }
                    i2 = -1;
                } catch (Exception unused9) {
                    i2 = -1;
                }
                JSONObject jSONObject11 = new JSONObject();
                jSONObject11.put(StringFog.decrypt("GScUOvnKXM4bFhQs8s0=\n", "aVV7WZy5L6E=\n"), iAvailableProcessors);
                jSONObject11.put(StringFog.decrypt("lznz0815xquMJP7/4w==\n", "41aHsqE0o8Y=\n"), j);
                jSONObject11.put(StringFog.decrypt("MeJUPHGD9k434lg7fIHuXA==\n", "RYs5VR/koC8=\n"), j3);
                jSONObject11.put(StringFog.decrypt("vKJ3dG8Um1m6qW0=\n", "z8cZBwBm2DY=\n"), size);
                jSONObject11.put(StringFog.decrypt("Bi/fuvgKbfYBI9s=\n", "ZE6rzp14FKI=\n"), intExtra);
                jSONObject11.put(StringFog.decrypt("fuAHLQN46mBi7gY4HGL2cg==\n", "FoF0aG4NhgE=\n"), jSONObject9.optBoolean(StringFog.decrypt("i86sWx/ofTCNzw==\n", "4r3pNmqEHEQ=\n"), i));
                strDecrypt = jSONObject11.toString();
            } catch (Exception unused10) {
                strDecrypt = StringFog.decrypt("EII=\n", "a//NdO1cLSg=\n");
            }
            String strDecrypt7 = StringFog.decrypt("52/bn2G3vD7hbg==\n", "jhye8hTb3Uo=\n");
            if (m8618()) {
                lowerCase2 = Build.FINGERPRINT.toLowerCase();
                if (lowerCase2.contains(StringFog.decrypt("oUlxIyqq5w==\n", "xiwfRljDhNg=\n"))) {
                    z = c;
                } else {
                    z = c;
                }
            } else {
                z = c;
            }
            jSONObject9.put(strDecrypt7, z);
        } catch (Exception unused11) {
        }
        intExtra = i2;
        if (intExtra == 250) {
            arrayList.add(56);
        }
        JSONObject jSONObject12 = new JSONObject();
        return new C0885(arrayList.isEmpty(), arrayList, strDecrypt, null);
    }
}
