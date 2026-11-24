package ru.innim.my_target_flutter;

import androidx.core.app.NotificationCompat;
import com.tekartik.sqflite.Constant;
import io.flutter.plugin.common.EventChannel;
import java.util.Map;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AdEventHandler.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010$\n\u0002\u0010\u0000\n\u0002\b\u0005\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J0\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\t2\u0018\b\u0002\u0010\u000b\u001a\u0012\u0012\u0004\u0012\u00020\t\u0012\u0006\u0012\u0004\u0018\u00010\r\u0018\u00010\fJ\u001c\u0010\u000e\u001a\u00020\u00072\b\u0010\u000f\u001a\u0004\u0018\u00010\r2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0005H\u0016J\u0012\u0010\u0011\u001a\u00020\u00072\b\u0010\u000f\u001a\u0004\u0018\u00010\rH\u0016R\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lru/innim/my_target_flutter/AdEventHandler;", "Lio/flutter/plugin/common/EventChannel$StreamHandler;", "<init>", "()V", "sink", "Lio/flutter/plugin/common/EventChannel$EventSink;", "sendAdEvent", "", "id", "", NotificationCompat.CATEGORY_EVENT, "data", "", "", "onListen", Constant.PARAM_SQL_ARGUMENTS, "events", "onCancel", "my_target_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class AdEventHandler implements EventChannel.StreamHandler {
    private EventChannel.EventSink sink;

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ void sendAdEvent$default(AdEventHandler adEventHandler, String str, String str2, Map map, int i, Object obj) {
        if ((i & 4) != 0) {
            map = null;
        }
        adEventHandler.sendAdEvent(str, str2, map);
    }

    public final void sendAdEvent(String id, String event, Map<String, ? extends Object> data) {
        Intrinsics.checkNotNullParameter(id, "id");
        Intrinsics.checkNotNullParameter(event, "event");
        EventChannel.EventSink eventSink = this.sink;
        if (eventSink != null) {
            eventSink.success(MapsKt.mapOf(TuplesKt.to("uid", id), TuplesKt.to(NotificationCompat.CATEGORY_EVENT, event), TuplesKt.to("data", data)));
        }
    }

    @Override // io.flutter.plugin.common.EventChannel.StreamHandler
    public void onListen(Object arguments, EventChannel.EventSink events) {
        this.sink = events;
    }

    @Override // io.flutter.plugin.common.EventChannel.StreamHandler
    public void onCancel(Object arguments) {
        this.sink = null;
    }
}
