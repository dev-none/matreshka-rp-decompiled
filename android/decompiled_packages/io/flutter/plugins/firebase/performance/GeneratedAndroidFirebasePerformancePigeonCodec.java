package io.flutter.plugins.firebase.performance;

import androidx.media3.extractor.ts.TsExtractor;
import io.flutter.plugin.common.StandardMessageCodec;
import java.io.ByteArrayOutputStream;
import java.nio.ByteBuffer;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GeneratedAndroidFirebasePerformance.g.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0005\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0012\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u001a\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0014J\u001a\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u0005H\u0014¨\u0006\u000f"}, d2 = {"Lio/flutter/plugins/firebase/performance/GeneratedAndroidFirebasePerformancePigeonCodec;", "Lio/flutter/plugin/common/StandardMessageCodec;", "<init>", "()V", "readValueOfType", "", "type", "", "buffer", "Ljava/nio/ByteBuffer;", "writeValue", "", "stream", "Ljava/io/ByteArrayOutputStream;", "value", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
class GeneratedAndroidFirebasePerformancePigeonCodec extends StandardMessageCodec {
    @Override // io.flutter.plugin.common.StandardMessageCodec
    protected Object readValueOfType(byte type, ByteBuffer buffer) {
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        if (type == -127) {
            Long l = (Long) readValue(buffer);
            if (l != null) {
                return HttpMethod.INSTANCE.ofRaw((int) l.longValue());
            }
            return null;
        }
        if (type == -126) {
            Object value = readValue(buffer);
            List<? extends Object> list = value instanceof List ? (List) value : null;
            if (list != null) {
                return HttpMetricOptions.INSTANCE.fromList(list);
            }
            return null;
        }
        if (type == -125) {
            Object value2 = readValue(buffer);
            List<? extends Object> list2 = value2 instanceof List ? (List) value2 : null;
            if (list2 != null) {
                return HttpMetricAttributes.INSTANCE.fromList(list2);
            }
            return null;
        }
        if (type == -124) {
            Object value3 = readValue(buffer);
            List<? extends Object> list3 = value3 instanceof List ? (List) value3 : null;
            if (list3 != null) {
                return TraceAttributes.INSTANCE.fromList(list3);
            }
            return null;
        }
        return super.readValueOfType(type, buffer);
    }

    @Override // io.flutter.plugin.common.StandardMessageCodec
    protected void writeValue(ByteArrayOutputStream stream, Object value) {
        Intrinsics.checkNotNullParameter(stream, "stream");
        if (value instanceof HttpMethod) {
            stream.write(TsExtractor.TS_STREAM_TYPE_AC3);
            writeValue(stream, Long.valueOf(((HttpMethod) value).getRaw()));
            return;
        }
        if (value instanceof HttpMetricOptions) {
            stream.write(TsExtractor.TS_STREAM_TYPE_HDMV_DTS);
            writeValue(stream, ((HttpMetricOptions) value).toList());
        } else if (value instanceof HttpMetricAttributes) {
            stream.write(131);
            writeValue(stream, ((HttpMetricAttributes) value).toList());
        } else if (value instanceof TraceAttributes) {
            stream.write(132);
            writeValue(stream, ((TraceAttributes) value).toList());
        } else {
            super.writeValue(stream, value);
        }
    }
}
