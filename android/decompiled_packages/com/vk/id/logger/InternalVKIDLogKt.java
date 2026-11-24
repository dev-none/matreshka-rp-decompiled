package com.vk.id.logger;

import androidx.exifinterface.media.ExifInterface;
import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDLog.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u001a\u001a\u0010\u0000\u001a\u00020\u0001\"\u0006\b\u0000\u0010\u0002\u0018\u0001*\u0002H\u0002H\u0087\b¢\u0006\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"internalVKIDCreateLoggerForClass", "Lcom/vk/id/logger/InternalVKIDLogger;", ExifInterface.GPS_DIRECTION_TRUE, "(Ljava/lang/Object;)Lcom/vk/id/logger/InternalVKIDLogger;", "logger_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDLogKt {
    @InternalVKIDApi
    public static final /* synthetic */ <T> InternalVKIDLogger internalVKIDCreateLoggerForClass(T t) {
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        Intrinsics.reifiedOperationMarker(4, ExifInterface.GPS_DIRECTION_TRUE);
        String simpleName = Object.class.getSimpleName();
        Intrinsics.checkNotNullExpressionValue(simpleName, "getSimpleName(...)");
        return internalVKIDLog.createLoggerForTag(simpleName);
    }
}
