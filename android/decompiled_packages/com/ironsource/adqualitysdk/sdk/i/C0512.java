package com.ironsource.adqualitysdk.sdk.i;

import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ܫ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0512 implements SensorEventListener {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ float[] f1821;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ float[] f1822;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ CopyOnWriteArrayList f1823;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ CopyOnWriteArrayList f1824;

    public C0512(CopyOnWriteArrayList copyOnWriteArrayList, CopyOnWriteArrayList copyOnWriteArrayList2, float[] fArr, float[] fArr2) {
        this.f1824 = copyOnWriteArrayList;
        this.f1823 = copyOnWriteArrayList2;
        this.f1822 = fArr;
        this.f1821 = fArr2;
    }

    @Override // android.hardware.SensorEventListener
    public final void onAccuracyChanged(Sensor sensor, int i) {
    }

    @Override // android.hardware.SensorEventListener
    public final void onSensorChanged(SensorEvent sensorEvent) {
        int type = sensorEvent.sensor.getType();
        if (type == 1) {
            this.f1824.add((float[]) sensorEvent.values.clone());
            return;
        }
        if (type != 2) {
            if (type == 4) {
                this.f1823.add((float[]) sensorEvent.values.clone());
                return;
            } else {
                if (type != 6) {
                    return;
                }
                this.f1822[0] = sensorEvent.values[0];
                return;
            }
        }
        float[] fArr = sensorEvent.values;
        float[] fArr2 = this.f1821;
        float f = fArr[0];
        float f2 = fArr[1];
        float f3 = fArr[2];
        fArr2[0] = (float) Math.sqrt((f3 * f3) + (f2 * f2) + (f * f));
    }
}
