package com.vk.vkid.flutter.vkid_flutter_sdk.onetap;

import android.content.Context;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.plugin.common.StandardMessageCodec;
import io.flutter.plugin.platform.PlatformView;
import io.flutter.plugin.platform.PlatformViewFactory;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapViewFactory.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0000\n\u0000\b\u0001\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\"\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\rH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lcom/vk/vkid/flutter/vkid_flutter_sdk/onetap/OneTapViewFactory;", "Lio/flutter/plugin/platform/PlatformViewFactory;", "binaryMessenger", "Lio/flutter/plugin/common/BinaryMessenger;", "<init>", "(Lio/flutter/plugin/common/BinaryMessenger;)V", "create", "Lio/flutter/plugin/platform/PlatformView;", "context", "Landroid/content/Context;", "viewId", "", "args", "", "vkid_flutter_sdk_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class OneTapViewFactory extends PlatformViewFactory {
    public static final int $stable = 8;
    private final BinaryMessenger binaryMessenger;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public OneTapViewFactory(BinaryMessenger binaryMessenger) {
        super(StandardMessageCodec.INSTANCE);
        Intrinsics.checkNotNullParameter(binaryMessenger, "binaryMessenger");
        this.binaryMessenger = binaryMessenger;
    }

    @Override // io.flutter.plugin.platform.PlatformViewFactory
    public PlatformView create(Context context, int viewId, Object args) {
        Intrinsics.checkNotNullParameter(context, "context");
        MethodChannel methodChannel = new MethodChannel(this.binaryMessenger, "com.vk.id/onetap-" + viewId);
        Intrinsics.checkNotNull(args, "null cannot be cast to non-null type kotlin.collections.List<kotlin.Any?>");
        return new OneTapPlatformView(context, methodChannel, (List) args);
    }
}
