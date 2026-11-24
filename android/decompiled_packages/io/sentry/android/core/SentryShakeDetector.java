package io.sentry.android.core;

import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.SystemClock;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import java.util.concurrent.atomic.AtomicLong;

/* JADX INFO: loaded from: classes7.dex */
public final class SentryShakeDetector implements SensorEventListener {
    private static final int SHAKE_COOLDOWN_MS = 1000;
    private static final int SHAKE_COUNT_THRESHOLD = 2;
    private static final float SHAKE_THRESHOLD_GRAVITY = 2.7f;
    private static final int SHAKE_WINDOW_MS = 1500;
    private Sensor accelerometer;
    private Handler handler;
    private HandlerThread handlerThread;
    private volatile Listener listener;
    private ILogger logger;
    private SensorManager sensorManager;
    private final AtomicLong lastShakeTimestamp = new AtomicLong(0);
    private int shakeCount = 0;
    private long firstShakeTimestamp = 0;

    public interface Listener {
        void onShake();
    }

    @Override // android.hardware.SensorEventListener
    public void onAccuracyChanged(Sensor sensor, int i) {
    }

    public SentryShakeDetector(ILogger iLogger) {
        this.logger = iLogger;
    }

    void init(Context context, ILogger iLogger) {
        this.logger = iLogger;
        init(context);
    }

    private void init(Context context) {
        if (this.sensorManager == null) {
            this.sensorManager = (SensorManager) context.getSystemService("sensor");
        }
        SensorManager sensorManager = this.sensorManager;
        if (sensorManager != null && this.accelerometer == null) {
            this.accelerometer = sensorManager.getDefaultSensor(1, false);
        }
        if (this.accelerometer == null || this.handlerThread != null) {
            return;
        }
        HandlerThread handlerThread = new HandlerThread("sentry-shake");
        this.handlerThread = handlerThread;
        handlerThread.start();
        this.handler = new Handler(this.handlerThread.getLooper());
    }

    public void start(Context context, Listener listener) {
        this.listener = listener;
        init(context);
        SensorManager sensorManager = this.sensorManager;
        if (sensorManager == null) {
            this.logger.log(SentryLevel.WARNING, "SensorManager is not available. Shake detection disabled.", new Object[0]);
            return;
        }
        Sensor sensor = this.accelerometer;
        if (sensor == null) {
            this.logger.log(SentryLevel.WARNING, "Accelerometer sensor not available. Shake detection disabled.", new Object[0]);
        } else {
            sensorManager.registerListener(this, sensor, 3, this.handler);
        }
    }

    public void stop() {
        this.listener = null;
        this.shakeCount = 0;
        this.firstShakeTimestamp = 0L;
        SensorManager sensorManager = this.sensorManager;
        if (sensorManager != null) {
            sensorManager.unregisterListener(this);
        }
    }

    public void close() {
        stop();
        HandlerThread handlerThread = this.handlerThread;
        if (handlerThread != null) {
            handlerThread.quitSafely();
            this.handlerThread = null;
            this.handler = null;
        }
    }

    @Override // android.hardware.SensorEventListener
    public void onSensorChanged(SensorEvent sensorEvent) {
        if (sensorEvent.sensor.getType() != 1) {
            return;
        }
        float f = sensorEvent.values[0] / 9.80665f;
        float f2 = sensorEvent.values[1] / 9.80665f;
        float f3 = sensorEvent.values[2] / 9.80665f;
        if ((f * f) + (f2 * f2) + (f3 * f3) > 7.2900004386901855d) {
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            if (jElapsedRealtime - this.firstShakeTimestamp > 1500) {
                this.shakeCount = 0;
                this.firstShakeTimestamp = jElapsedRealtime;
            }
            int i = this.shakeCount + 1;
            this.shakeCount = i;
            if (i < 2 || jElapsedRealtime - this.lastShakeTimestamp.get() <= 1000) {
                return;
            }
            this.lastShakeTimestamp.set(jElapsedRealtime);
            this.shakeCount = 0;
            Listener listener = this.listener;
            if (listener != null) {
                listener.onShake();
            }
        }
    }
}
