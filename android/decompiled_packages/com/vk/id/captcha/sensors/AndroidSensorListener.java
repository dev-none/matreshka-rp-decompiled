package com.vk.id.captcha.sensors;

import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.Handler;
import androidx.core.app.NotificationCompat;
import androidx.exifinterface.media.ExifInterface;
import com.google.android.gms.common.internal.ServiceSpecificExtraArgs;
import com.vk.id.captcha.sensors.a.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: com.vk.id.captcha.c.a, reason: from Kotlin metadata */
/* JADX INFO: compiled from: AndroidSensorListener.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0014\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0000\u0018\u0000*\b\b\u0000\u0010\u0002*\u00020\u00012\b\u0012\u0004\u0012\u00028\u00000\u00032\u00020\u0004:\u0001,B5\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\b\b\u0002\u0010\b\u001a\u00020\u0007\u0012\u0006\u0010\n\u001a\u00020\t\u0012\u0012\u0010\r\u001a\u000e\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00028\u00000\u000b¢\u0006\u0004\b\u000e\u0010\u000fJ\u0019\u0010\u0013\u001a\u00020\u00122\b\u0010\u0011\u001a\u0004\u0018\u00010\u0010H\u0016¢\u0006\u0004\b\u0013\u0010\u0014J!\u0010\u0018\u001a\u00020\u00122\b\u0010\u0016\u001a\u0004\u0018\u00010\u00152\u0006\u0010\u0017\u001a\u00020\tH\u0016¢\u0006\u0004\b\u0018\u0010\u0019J#\u0010\u001b\u001a\u00020\u00122\u0012\u0010\u001a\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00020\u00120\u000bH\u0016¢\u0006\u0004\b\u001b\u0010\u001cJ\u001d\u0010!\u001a\u00020\u00122\u0006\u0010\u001e\u001a\u00020\u001dH\u0016ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u001f\u0010 J\u000f\u0010\"\u001a\u00020\u0012H\u0016¢\u0006\u0004\b\"\u0010#R\u0014\u0010\b\u001a\u00020\u00078\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\b\u0010$R\"\u0010%\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00020\u00120\u000b8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b%\u0010&R\u0016\u0010\u0016\u001a\u0004\u0018\u00010\u00158\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0016\u0010'R\u0016\u0010)\u001a\u0004\u0018\u00010(8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b)\u0010*R\u0014\u0010\n\u001a\u00020\t8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\n\u0010+R \u0010\r\u001a\u000e\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00028\u00000\u000b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\r\u0010&\u0082\u0002\u000b\n\u0005\b¡\u001e0\u0001\n\u0002\b\u0019¨\u0006-"}, d2 = {"Lcom/vk/id/captcha/sensors/AndroidSensorListener;", "Lcom/vk/id/captcha/sensors/model/SensorData;", ExifInterface.GPS_DIRECTION_TRUE, "Lcom/vk/id/captcha/sensors/BaseSensorListener;", "Landroid/hardware/SensorEventListener;", "Landroid/content/Context;", "context", "Lcom/vk/id/captcha/sensors/HandlerThreadProvider;", "handlerThreadProvider", "", "sensorType", "Lkotlin/Function1;", "", "toSensorData", "<init>", "(Landroid/content/Context;Lcom/vk/id/captcha/sensors/HandlerThreadProvider;ILkotlin/jvm/functions/Function1;)V", "Landroid/hardware/SensorEvent;", NotificationCompat.CATEGORY_EVENT, "", "onSensorChanged", "(Landroid/hardware/SensorEvent;)V", "Landroid/hardware/Sensor;", "sensor", "accuracy", "onAccuracyChanged", "(Landroid/hardware/Sensor;I)V", ServiceSpecificExtraArgs.CastExtraArgs.LISTENER, "setOnSensorChangedListener", "(Lkotlin/jvm/functions/Function1;)V", "Lcom/vk/id/captcha/sensors/model/PeriodMs;", "periodMs", "startListening-6M9zLzk", "(I)V", "startListening", "stopListening", "()V", "Lcom/vk/id/captcha/sensors/HandlerThreadProvider;", "onSensorChangedListener", "Lkotlin/jvm/functions/Function1;", "Landroid/hardware/Sensor;", "Landroid/hardware/SensorManager;", "sensorManager", "Landroid/hardware/SensorManager;", "I", "Companion", "captcha_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
public final class AndroidSensorListener<T extends com.vk.id.captcha.sensors.a.a> implements SensorEventListener, BaseSensorListener<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final a f5336a = new a(null);
    private final d c;
    private final int d;
    private final Function1<float[], T> e;
    private Function1<? super T, Unit> f;
    private final SensorManager g;
    private final Sensor h;

    @Override // android.hardware.SensorEventListener
    public final void onAccuracyChanged(Sensor sensor, int accuracy) {
    }

    /* JADX WARN: Multi-variable type inference failed */
    private AndroidSensorListener(Context context, d dVar, int i, Function1<? super float[], ? extends T> function1) {
        Intrinsics.checkNotNullParameter(context, "");
        Intrinsics.checkNotNullParameter(dVar, "");
        Intrinsics.checkNotNullParameter(function1, "");
        this.c = dVar;
        this.d = i;
        this.e = function1;
        this.f = new Function1<T, Unit>() { // from class: com.vk.id.captcha.c.a.1
            public final void a(T t) {
                Intrinsics.checkNotNullParameter(t, "");
            }

            /* JADX WARN: Multi-variable type inference failed */
            @Override // kotlin.jvm.functions.Function1
            public final /* synthetic */ Unit invoke(Object obj) {
                a((com.vk.id.captcha.sensors.a.a) obj);
                return Unit.INSTANCE;
            }
        };
        Intrinsics.checkNotNullParameter(context, "");
        Object systemService = context.getSystemService("sensor");
        SensorManager sensorManager = systemService instanceof SensorManager ? (SensorManager) systemService : null;
        this.g = sensorManager;
        this.h = sensorManager != null ? sensorManager.getDefaultSensor(i) : null;
    }

    public /* synthetic */ AndroidSensorListener(Context context, d dVar, int i, Function1 function1, int i2, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i2 & 2) != 0 ? b.a() : dVar, i, function1);
    }

    @Override // com.vk.id.captcha.sensors.BaseSensorListener
    public final void a(int i) {
        SensorManager sensorManager;
        Sensor sensor = this.h;
        if (sensor == null || (sensorManager = this.g) == null) {
            return;
        }
        sensorManager.registerListener(this, sensor, i * 1000, new Handler(this.c.a().getLooper()));
    }

    @Override // com.vk.id.captcha.sensors.BaseSensorListener
    public final void a() {
        SensorManager sensorManager = this.g;
        if (sensorManager != null) {
            sensorManager.unregisterListener(this);
        }
        b.a().b();
    }

    @Override // com.vk.id.captcha.sensors.BaseSensorListener
    public final void a(Function1<? super T, Unit> function1) {
        Intrinsics.checkNotNullParameter(function1, "");
        this.f = function1;
    }

    @Override // android.hardware.SensorEventListener
    public final void onSensorChanged(SensorEvent event) {
        Sensor sensor;
        if (event == null || (sensor = event.sensor) == null || sensor.getType() != this.d) {
            return;
        }
        Function1<float[], T> function1 = this.e;
        float[] fArr = event.values;
        Intrinsics.checkNotNullExpressionValue(fArr, "");
        this.f.invoke(function1.invoke(fArr));
    }

    /* JADX INFO: renamed from: com.vk.id.captcha.c.a$a */
    /* JADX INFO: compiled from: AndroidSensorListener.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003"}, d2 = {"Lcom/vk/id/captcha/c/a$a;", "", "<init>", "()V"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class a {
        public /* synthetic */ a(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private a() {
        }
    }
}
