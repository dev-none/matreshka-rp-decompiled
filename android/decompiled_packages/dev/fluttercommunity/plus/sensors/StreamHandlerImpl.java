package dev.fluttercommunity.plus.sensors;

import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.SystemClock;
import com.tekartik.sqflite.Constant;
import com.v_chat_sdk.v_video_compressor.VVideoEncodingSettings;
import io.flutter.plugin.common.EventChannel;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: StreamHandlerImpl.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0007\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u001a\u0010\u0014\u001a\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u00172\u0006\u0010\u0018\u001a\u00020\u0019H\u0016J\u0012\u0010\u001a\u001a\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017H\u0016J\b\u0010\u001b\u001a\u00020\u0015H\u0002J\u0010\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u0004\u001a\u00020\u0005H\u0002J\u0010\u0010\u001e\u001a\u00020\t2\u0006\u0010\u0018\u001a\u00020\u0019H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R$\u0010\u000f\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u0005@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0010\u0010\u0011\"\u0004\b\u0012\u0010\u0013¨\u0006\u001f"}, d2 = {"Ldev/fluttercommunity/plus/sensors/StreamHandlerImpl;", "Lio/flutter/plugin/common/EventChannel$StreamHandler;", "sensorManager", "Landroid/hardware/SensorManager;", "sensorType", "", "<init>", "(Landroid/hardware/SensorManager;I)V", "sensorEventListener", "Landroid/hardware/SensorEventListener;", "sensor", "Landroid/hardware/Sensor;", "timestampMicroAtBoot", "", "value", "samplingPeriod", "getSamplingPeriod", "()I", "setSamplingPeriod", "(I)V", "onListen", "", Constant.PARAM_SQL_ARGUMENTS, "", "events", "Lio/flutter/plugin/common/EventChannel$EventSink;", "onCancel", "updateRegistration", "getSensorName", "", "createSensorEventListener", "sensors_plus_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class StreamHandlerImpl implements EventChannel.StreamHandler {
    private int samplingPeriod;
    private Sensor sensor;
    private SensorEventListener sensorEventListener;
    private final SensorManager sensorManager;
    private final int sensorType;
    private long timestampMicroAtBoot;

    public StreamHandlerImpl(SensorManager sensorManager, int i) {
        Intrinsics.checkNotNullParameter(sensorManager, "sensorManager");
        this.sensorManager = sensorManager;
        this.sensorType = i;
        long j = 1000;
        this.timestampMicroAtBoot = (System.currentTimeMillis() * j) - (SystemClock.elapsedRealtimeNanos() / j);
        this.samplingPeriod = VVideoEncodingSettings.BITRATE_240P_ULTRA_LOW;
    }

    public final int getSamplingPeriod() {
        return this.samplingPeriod;
    }

    public final void setSamplingPeriod(int i) {
        this.samplingPeriod = i;
        updateRegistration();
    }

    @Override // io.flutter.plugin.common.EventChannel.StreamHandler
    public void onListen(Object arguments, EventChannel.EventSink events) {
        Intrinsics.checkNotNullParameter(events, "events");
        Sensor defaultSensor = this.sensorManager.getDefaultSensor(this.sensorType);
        this.sensor = defaultSensor;
        if (defaultSensor != null) {
            SensorEventListener sensorEventListenerCreateSensorEventListener = createSensorEventListener(events);
            this.sensorEventListener = sensorEventListenerCreateSensorEventListener;
            this.sensorManager.registerListener(sensorEventListenerCreateSensorEventListener, this.sensor, this.samplingPeriod);
        } else {
            events.error("NO_SENSOR", "Sensor not found", "It seems that your device has no " + getSensorName(this.sensorType) + " sensor");
        }
    }

    @Override // io.flutter.plugin.common.EventChannel.StreamHandler
    public void onCancel(Object arguments) {
        if (this.sensor != null) {
            this.sensorManager.unregisterListener(this.sensorEventListener);
            this.sensorEventListener = null;
        }
    }

    private final void updateRegistration() {
        SensorEventListener sensorEventListener = this.sensorEventListener;
        if (sensorEventListener != null) {
            this.sensorManager.unregisterListener(sensorEventListener);
            this.sensorManager.registerListener(this.sensorEventListener, this.sensor, this.samplingPeriod);
        }
    }

    private final String getSensorName(int sensorType) {
        if (sensorType == 1) {
            return "Accelerometer";
        }
        if (sensorType == 2) {
            return "Magnetometer";
        }
        if (sensorType == 4) {
            return "Gyroscope";
        }
        if (sensorType == 6) {
            return "Barometer";
        }
        if (sensorType == 10) {
            return "User Accelerometer";
        }
        return "Undefined";
    }

    private final SensorEventListener createSensorEventListener(final EventChannel.EventSink events) {
        return new SensorEventListener() { // from class: dev.fluttercommunity.plus.sensors.StreamHandlerImpl.createSensorEventListener.1
            @Override // android.hardware.SensorEventListener
            public void onAccuracyChanged(Sensor sensor, int accuracy) {
                Intrinsics.checkNotNullParameter(sensor, "sensor");
            }

            @Override // android.hardware.SensorEventListener
            public void onSensorChanged(SensorEvent event) {
                Intrinsics.checkNotNullParameter(event, "event");
                double[] dArr = new double[event.values.length + 1];
                float[] values = event.values;
                Intrinsics.checkNotNullExpressionValue(values, "values");
                int length = values.length;
                int i = 0;
                int i2 = 0;
                while (i < length) {
                    dArr[i2] = values[i];
                    i++;
                    i2++;
                }
                dArr[event.values.length] = StreamHandlerImpl.this.timestampMicroAtBoot + (event.timestamp / ((long) 1000));
                events.success(dArr);
            }
        };
    }
}
