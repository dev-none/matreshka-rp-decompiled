package io.flutter.plugins.firebase.analytics;

import android.util.Log;
import androidx.media3.exoplayer.upstream.CmcdData;
import io.sentry.SentryEvent;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GeneratedAndroidFirebaseAnalytics.g.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\b\u0003\n\u0002\u0010\u0003\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\bÂ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u0004\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0001J\u0016\u0010\u0007\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u00052\u0006\u0010\b\u001a\u00020\tJ\u0016\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\rJ\u0016\u0010\u000f\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u00102\u0006\u0010\u000e\u001a\u00020\u0010J\u000e\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\rJ\u000e\u0010\u0014\u001a\u00020\u00122\u0006\u0010\u0015\u001a\u00020\u0010J\u001a\u0010\u0016\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\u00012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0001J\u0010\u0010\u0017\u001a\u00020\u00122\b\u0010\u0018\u001a\u0004\u0018\u00010\u0001¨\u0006\u0019"}, d2 = {"Lio/flutter/plugins/firebase/analytics/GeneratedAndroidFirebaseAnalyticsPigeonUtils;", "", "<init>", "()V", "wrapResult", "", "result", "wrapError", SentryEvent.JsonKeys.EXCEPTION, "", "doubleEquals", "", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "", "b", "floatEquals", "", "doubleHash", "", "d", "floatHash", "f", "deepEquals", "deepHash", "value", "firebase_analytics_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
final class GeneratedAndroidFirebaseAnalyticsPigeonUtils {
    public static final GeneratedAndroidFirebaseAnalyticsPigeonUtils INSTANCE = new GeneratedAndroidFirebaseAnalyticsPigeonUtils();

    private GeneratedAndroidFirebaseAnalyticsPigeonUtils() {
    }

    public final List<Object> wrapResult(Object result) {
        return CollectionsKt.listOf(result);
    }

    public final List<Object> wrapError(Throwable exception) {
        Intrinsics.checkNotNullParameter(exception, "exception");
        if (exception instanceof FlutterError) {
            FlutterError flutterError = (FlutterError) exception;
            return CollectionsKt.listOf(flutterError.getCode(), flutterError.getMessage(), flutterError.getDetails());
        }
        return CollectionsKt.listOf((Object[]) new String[]{exception.getClass().getSimpleName(), exception.toString(), "Cause: " + exception.getCause() + ", Stacktrace: " + Log.getStackTraceString(exception)});
    }

    public final boolean doubleEquals(double a2, double b) {
        if ((a2 == 0.0d ? 0.0d : a2) == (b != 0.0d ? b : 0.0d)) {
            return true;
        }
        return Double.isNaN(a2) && Double.isNaN(b);
    }

    public final boolean floatEquals(float a2, float b) {
        if ((a2 == 0.0f ? 0.0f : a2) == (b != 0.0f ? b : 0.0f)) {
            return true;
        }
        return Float.isNaN(a2) && Float.isNaN(b);
    }

    public final int doubleHash(double d) {
        if (d == 0.0d) {
            d = 0.0d;
        }
        long jDoubleToLongBits = Double.doubleToLongBits(d);
        return (int) (jDoubleToLongBits ^ (jDoubleToLongBits >>> 32));
    }

    public final int floatHash(float f) {
        if (f == 0.0f) {
            f = 0.0f;
        }
        return Float.floatToIntBits(f);
    }

    public final boolean deepEquals(Object a2, Object b) {
        if (a2 == b) {
            return true;
        }
        if (a2 == null || b == null) {
            return false;
        }
        if ((a2 instanceof byte[]) && (b instanceof byte[])) {
            return Arrays.equals((byte[]) a2, (byte[]) b);
        }
        if ((a2 instanceof int[]) && (b instanceof int[])) {
            return Arrays.equals((int[]) a2, (int[]) b);
        }
        if ((a2 instanceof long[]) && (b instanceof long[])) {
            return Arrays.equals((long[]) a2, (long[]) b);
        }
        if ((a2 instanceof double[]) && (b instanceof double[])) {
            double[] dArr = (double[]) a2;
            double[] dArr2 = (double[]) b;
            if (dArr.length != dArr2.length) {
                return false;
            }
            int length = dArr.length;
            for (int i = 0; i < length; i++) {
                if (!doubleEquals(dArr[i], dArr2[i])) {
                    return false;
                }
            }
            return true;
        }
        if ((a2 instanceof float[]) && (b instanceof float[])) {
            float[] fArr = (float[]) a2;
            float[] fArr2 = (float[]) b;
            if (fArr.length != fArr2.length) {
                return false;
            }
            int length2 = fArr.length;
            for (int i2 = 0; i2 < length2; i2++) {
                if (!floatEquals(fArr[i2], fArr2[i2])) {
                    return false;
                }
            }
            return true;
        }
        if ((a2 instanceof Object[]) && (b instanceof Object[])) {
            Object[] objArr = (Object[]) a2;
            Object[] objArr2 = (Object[]) b;
            if (objArr.length != objArr2.length) {
                return false;
            }
            int length3 = objArr.length;
            for (int i3 = 0; i3 < length3; i3++) {
                if (!deepEquals(objArr[i3], objArr2[i3])) {
                    return false;
                }
            }
            return true;
        }
        if ((a2 instanceof List) && (b instanceof List)) {
            List list = (List) a2;
            List list2 = (List) b;
            if (list.size() != list2.size()) {
                return false;
            }
            Iterator it = list.iterator();
            Iterator it2 = list2.iterator();
            while (it.hasNext() && it2.hasNext()) {
                if (!deepEquals(it.next(), it2.next())) {
                    return false;
                }
            }
            return true;
        }
        if ((a2 instanceof Map) && (b instanceof Map)) {
            Map map = (Map) a2;
            Map map2 = (Map) b;
            if (map.size() != map2.size()) {
                return false;
            }
            loop4: for (Map.Entry entry : map.entrySet()) {
                Object key = entry.getKey();
                for (Map.Entry entry2 : map2.entrySet()) {
                    if (deepEquals(key, entry2.getKey())) {
                        if (!deepEquals(entry.getValue(), entry2.getValue())) {
                            break loop4;
                        }
                    }
                }
                return false;
            }
            return true;
        }
        if ((a2 instanceof Double) && (b instanceof Double)) {
            return doubleEquals(((Number) a2).doubleValue(), ((Number) b).doubleValue());
        }
        if ((a2 instanceof Float) && (b instanceof Float)) {
            return floatEquals(((Number) a2).floatValue(), ((Number) b).floatValue());
        }
        return Intrinsics.areEqual(a2, b);
    }

    public final int deepHash(Object value) {
        int iDeepHash = 0;
        if (value == null) {
            return 0;
        }
        if (value instanceof byte[]) {
            return Arrays.hashCode((byte[]) value);
        }
        if (value instanceof int[]) {
            return Arrays.hashCode((int[]) value);
        }
        if (value instanceof long[]) {
            return Arrays.hashCode((long[]) value);
        }
        int iDeepHash2 = 1;
        if (value instanceof double[]) {
            double[] dArr = (double[]) value;
            int length = dArr.length;
            while (iDeepHash < length) {
                iDeepHash2 = (iDeepHash2 * 31) + doubleHash(dArr[iDeepHash]);
                iDeepHash++;
            }
            return iDeepHash2;
        }
        if (value instanceof float[]) {
            float[] fArr = (float[]) value;
            int length2 = fArr.length;
            while (iDeepHash < length2) {
                iDeepHash2 = (iDeepHash2 * 31) + floatHash(fArr[iDeepHash]);
                iDeepHash++;
            }
            return iDeepHash2;
        }
        if (value instanceof Object[]) {
            Object[] objArr = (Object[]) value;
            int length3 = objArr.length;
            while (iDeepHash < length3) {
                iDeepHash2 = (iDeepHash2 * 31) + deepHash(objArr[iDeepHash]);
                iDeepHash++;
            }
            return iDeepHash2;
        }
        if (value instanceof List) {
            Iterator it = ((List) value).iterator();
            while (it.hasNext()) {
                iDeepHash2 = (iDeepHash2 * 31) + deepHash(it.next());
            }
            return iDeepHash2;
        }
        if (value instanceof Map) {
            for (Map.Entry entry : ((Map) value).entrySet()) {
                iDeepHash += deepHash(entry.getValue()) ^ (deepHash(entry.getKey()) * 31);
            }
            return iDeepHash;
        }
        if (value instanceof Double) {
            return doubleHash(((Number) value).doubleValue());
        }
        return value instanceof Float ? floatHash(((Number) value).floatValue()) : value.hashCode();
    }
}
