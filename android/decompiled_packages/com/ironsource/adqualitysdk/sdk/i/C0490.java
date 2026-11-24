package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorManager;
import android.os.Handler;
import android.os.HandlerThread;
import android.provider.Settings;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ڽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0490 implements InterfaceC0573 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Context f1782;

    public C0490(Context context) {
        this.f1782 = context;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0573
    public final String getName() {
        return StringFog.decrypt("blHxYsgX5VdtWMpm0A3lVw==\n", "DDSZA75+iiU=\n");
    }

    /* JADX WARN: Code duplicated, block: B:33:0x00e6  */
    /* JADX WARN: Code duplicated, block: B:34:0x00e8  */
    /* JADX WARN: Code duplicated, block: B:37:0x00f3  */
    /* JADX WARN: Code duplicated, block: B:47:0x0132  */
    /* JADX WARN: Code duplicated, block: B:51:0x0154  */
    /* JADX WARN: Code duplicated, block: B:52:0x0155 A[Catch: Exception -> 0x015e, TRY_LEAVE, TryCatch #1 {Exception -> 0x015e, blocks: (B:49:0x013f, B:52:0x0155), top: B:82:0x013f }] */
    /* JADX WARN: Code duplicated, block: B:60:0x0174  */
    /* JADX WARN: Code duplicated, block: B:61:0x0177  */
    /* JADX WARN: Code duplicated, block: B:64:0x0182  */
    /* JADX WARN: Code duplicated, block: B:65:0x0184  */
    /* JADX WARN: Code duplicated, block: B:68:0x01b7 A[Catch: Exception -> 0x01e9, TryCatch #3 {Exception -> 0x01e9, blocks: (B:66:0x018a, B:68:0x01b7, B:69:0x01c7, B:71:0x01d4, B:72:0x01e4), top: B:84:0x018a }] */
    /* JADX WARN: Code duplicated, block: B:71:0x01d4 A[Catch: Exception -> 0x01e9, TryCatch #3 {Exception -> 0x01e9, blocks: (B:66:0x018a, B:68:0x01b7, B:69:0x01c7, B:71:0x01d4, B:72:0x01e4), top: B:84:0x018a }] */
    /* JADX WARN: Code duplicated, block: B:92:0x0116 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:94:0x00ed A[SYNTHETIC] */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0573
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0885 mo8551() throws Throwable {
        int i;
        HandlerThread handlerThread;
        Sensor sensor;
        int i2;
        float size;
        Float fValueOf;
        boolean z;
        Float fValueOf2;
        String strDecrypt;
        JSONObject jSONObject;
        int i3;
        ArrayList arrayList = new ArrayList();
        SensorManager sensorManager = (SensorManager) this.f1782.getSystemService(StringFog.decrypt("ivBq3A3n\n", "+ZUEr2KVMYk=\n"));
        if (sensorManager == null) {
            arrayList.add(60);
            return new C0885(false, arrayList, null, StringFog.decrypt("6t0VskTgIIjX2RykWbIYh9jOGqhH8w+F3A==\n", "ubh7wSuSbek=\n"));
        }
        Sensor defaultSensor = sensorManager.getDefaultSensor(1);
        Sensor defaultSensor2 = sensorManager.getDefaultSensor(4);
        Sensor defaultSensor3 = sensorManager.getDefaultSensor(6);
        Sensor defaultSensor4 = sensorManager.getDefaultSensor(2);
        if (defaultSensor2 == null) {
            arrayList.add(61);
        }
        if (defaultSensor3 == null) {
            arrayList.add(62);
        }
        CopyOnWriteArrayList<float[]> copyOnWriteArrayList = new CopyOnWriteArrayList();
        CopyOnWriteArrayList copyOnWriteArrayList2 = new CopyOnWriteArrayList();
        float[] fArr = {Float.NaN};
        CountDownLatch countDownLatch = new CountDownLatch(1);
        HandlerThread handlerThread2 = new HandlerThread(StringFog.decrypt("ibdenHls0iyqvmWYYXbSLJizW41jYM8=\n", "y9I2/Q8FvV4=\n"));
        handlerThread2.start();
        Handler handler = new Handler(handlerThread2.getLooper());
        C0512 c0512 = new C0512(copyOnWriteArrayList, copyOnWriteArrayList2, new float[]{Float.NaN}, fArr);
        if (defaultSensor != null) {
            i = 0;
            try {
                sensorManager.registerListener(c0512, defaultSensor, 0, handler);
            } catch (InterruptedException unused) {
                handlerThread = handlerThread2;
                sensor = defaultSensor;
                Thread.currentThread().interrupt();
                sensorManager.unregisterListener(c0512);
                handlerThread.quitSafely();
                double dM8550 = m8550(copyOnWriteArrayList);
                if (copyOnWriteArrayList.isEmpty()) {
                    size = 0.0f;
                } else {
                    i2 = 0;
                    for (float[] fArr2 : copyOnWriteArrayList) {
                        if (Math.abs(fArr2[2]) + Math.abs(fArr2[1]) + Math.abs(fArr2[0]) < 0.05f) {
                            i2++;
                        }
                    }
                    size = i2 / copyOnWriteArrayList.size();
                }
                if (copyOnWriteArrayList.isEmpty()) {
                    arrayList.add(60);
                }
                if (size > 0.9f) {
                    arrayList.add(63);
                }
                double dM8551 = m8550(copyOnWriteArrayList2);
                try {
                    i3 = Settings.System.getInt(this.f1782.getContentResolver(), StringFog.decrypt("V0DJWcvIb29WStxU2shVflc=\n", "JCO7PK6mMA0=\n"), -1);
                    if (i3 < 0) {
                        fValueOf = null;
                    } else {
                        fValueOf = Float.valueOf(i3 / 255.0f);
                    }
                } catch (Exception unused2) {
                }
                if (fValueOf != null) {
                    arrayList.add(64);
                }
                if (defaultSensor3 != null) {
                    z = true;
                } else {
                    z = false;
                }
                if (Float.isNaN(fArr[0])) {
                    fValueOf2 = null;
                } else {
                    fValueOf2 = Float.valueOf(fArr[0]);
                }
                try {
                    jSONObject = new JSONObject();
                    jSONObject.put(StringFog.decrypt("w+6qsn4CN4LP6L2yYDEkn8vsp7R3\n", "oo3J1xJnRe0=\n"), dM8550);
                    jSONObject.put(StringFog.decrypt("z866W+tdFG7N4alG8V8Vfc0=\n", "qLfINJg+ex4=\n"), dM8551);
                    jSONObject.put(StringFog.decrypt("NjIPs8KcDOMjOS+9+5oX\n", "TFd93I/zeIo=\n"), size);
                    if (fValueOf != null) {
                        jSONObject.put(StringFog.decrypt("NMNGadojI8Elwg==\n", "VrEvDrJXTaQ=\n"), fValueOf.floatValue());
                    }
                    jSONObject.put(StringFog.decrypt("lOiyQ3HaA4eJ+6Q=\n", "/InBEwO/cPQ=\n"), z);
                    if (fValueOf2 != null) {
                        jSONObject.put(StringFog.decrypt("BzMLnHmywwQsOwmeeJXeFQ88C4Z0\n", "alJs8hzGqmc=\n"), fValueOf2.floatValue());
                    }
                    strDecrypt = jSONObject.toString();
                } catch (Exception unused3) {
                    strDecrypt = StringFog.decrypt("zTE=\n", "tkxtXGCK4hY=\n");
                }
                return new C0885(arrayList.isEmpty(), arrayList, strDecrypt, null);
            } catch (Throwable th) {
                th = th;
                handlerThread = handlerThread2;
                sensorManager.unregisterListener(c0512);
                handlerThread.quitSafely();
                throw th;
            }
        } else {
            i = 0;
        }
        if (defaultSensor2 != null) {
            sensorManager.registerListener(c0512, defaultSensor2, i, handler);
        }
        if (defaultSensor3 != null) {
            sensorManager.registerListener(c0512, defaultSensor3, i, handler);
        }
        if (defaultSensor4 != null) {
            sensorManager.registerListener(c0512, defaultSensor4, i, handler);
        }
        handlerThread = handlerThread2;
        sensor = defaultSensor;
        try {
            try {
                handler.postDelayed(new RunnableC0501(countDownLatch), 500L);
                countDownLatch.await(600L, TimeUnit.MILLISECONDS);
                sensorManager.unregisterListener(c0512);
            } catch (InterruptedException unused4) {
                Thread.currentThread().interrupt();
                sensorManager.unregisterListener(c0512);
            }
            handlerThread.quitSafely();
            double dM8552 = m8550(copyOnWriteArrayList);
            if (copyOnWriteArrayList.isEmpty()) {
                size = 0.0f;
            } else {
                i2 = 0;
                while (r2.hasNext()) {
                    if (Math.abs(fArr2[2]) + Math.abs(fArr2[1]) + Math.abs(fArr2[0]) < 0.05f) {
                        i2++;
                    }
                }
                size = i2 / copyOnWriteArrayList.size();
            }
            if (copyOnWriteArrayList.isEmpty() && sensor != null) {
                arrayList.add(60);
            }
            if (size > 0.9f) {
                arrayList.add(63);
            }
            double dM8553 = m8550(copyOnWriteArrayList2);
            i3 = Settings.System.getInt(this.f1782.getContentResolver(), StringFog.decrypt("V0DJWcvIb29WStxU2shVflc=\n", "JCO7PK6mMA0=\n"), -1);
            if (i3 < 0) {
                fValueOf = null;
            } else {
                fValueOf = Float.valueOf(i3 / 255.0f);
            }
            if (fValueOf != null && fValueOf.floatValue() == 0.0f) {
                arrayList.add(64);
            }
            if (defaultSensor3 != null) {
                z = true;
            } else {
                z = false;
            }
            if (Float.isNaN(fArr[0])) {
                fValueOf2 = null;
            } else {
                fValueOf2 = Float.valueOf(fArr[0]);
            }
            jSONObject = new JSONObject();
            jSONObject.put(StringFog.decrypt("w+6qsn4CN4LP6L2yYDEkn8vsp7R3\n", "oo3J1xJnRe0=\n"), dM8552);
            jSONObject.put(StringFog.decrypt("z866W+tdFG7N4alG8V8Vfc0=\n", "qLfINJg+ex4=\n"), dM8553);
            jSONObject.put(StringFog.decrypt("NjIPs8KcDOMjOS+9+5oX\n", "TFd93I/zeIo=\n"), size);
            if (fValueOf != null) {
                jSONObject.put(StringFog.decrypt("NMNGadojI8Elwg==\n", "VrEvDrJXTaQ=\n"), fValueOf.floatValue());
            }
            jSONObject.put(StringFog.decrypt("lOiyQ3HaA4eJ+6Q=\n", "/InBEwO/cPQ=\n"), z);
            if (fValueOf2 != null) {
                jSONObject.put(StringFog.decrypt("BzMLnHmywwQsOwmeeJXeFQ88C4Z0\n", "alJs8hzGqmc=\n"), fValueOf2.floatValue());
            }
            strDecrypt = jSONObject.toString();
            return new C0885(arrayList.isEmpty(), arrayList, strDecrypt, null);
        } catch (Throwable th2) {
            th = th2;
            sensorManager.unregisterListener(c0512);
            handlerThread.quitSafely();
            throw th;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static double m8550(CopyOnWriteArrayList copyOnWriteArrayList) {
        if (copyOnWriteArrayList.size() < 2) {
            return 0.0d;
        }
        double size = 0.0d;
        for (int i = 0; i <= 2; i++) {
            Iterator it = copyOnWriteArrayList.iterator();
            double d = 0.0d;
            while (it.hasNext()) {
                d += (double) ((float[]) it.next())[i];
            }
            double size2 = d / ((double) copyOnWriteArrayList.size());
            Iterator it2 = copyOnWriteArrayList.iterator();
            double d2 = 0.0d;
            while (it2.hasNext()) {
                double d3 = ((double) ((float[]) it2.next())[i]) - size2;
                d2 += d3 * d3;
            }
            size += d2 / ((double) copyOnWriteArrayList.size());
        }
        return size / 3.0d;
    }
}
