package com.matreshkarp.core;

import android.os.Build;
import android.util.Log;
import androidx.core.app.NotificationCompat;
import com.p003native.Main;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.view.TextureRegistry;
import java.util.HashMap;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: LivePreviewSurfaces.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\\\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\t\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\u0018\u0000  2\u00020\u0001:\u0001 B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0018\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J\u001f\u0010\u0015\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0017H\u0002¢\u0006\u0002\u0010\u0019J\u001a\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\n2\b\u0010\u001d\u001a\u0004\u0018\u00010\u001eH\u0002J\u0010\u0010\u001f\u001a\u00020\u00102\u0006\u0010\u001c\u001a\u00020\nH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R*\u0010\b\u001a\u001e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u000b0\tj\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u000b`\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006!"}, d2 = {"Lcom/matreshkarp/core/LivePreviewSurfaces;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "messenger", "Lio/flutter/plugin/common/BinaryMessenger;", "textures", "Lio/flutter/view/TextureRegistry;", "<init>", "(Lio/flutter/plugin/common/BinaryMessenger;Lio/flutter/view/TextureRegistry;)V", "producers", "Ljava/util/HashMap;", "", "Lio/flutter/view/TextureRegistry$SurfaceProducer;", "Lkotlin/collections/HashMap;", "channel", "Lio/flutter/plugin/common/MethodChannel;", "onMethodCall", "", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "create", "width", "", "height", "(II)Ljava/lang/Long;", "attach", "", "id", "surface", "", "release", "Companion", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class LivePreviewSurfaces implements MethodChannel.MethodCallHandler {
    private static final Companion Companion = new Companion(null);

    @Deprecated
    public static final String TAG = "LIVE_PREVIEW";
    private final MethodChannel channel;
    private final HashMap<Long, TextureRegistry.SurfaceProducer> producers;
    private final TextureRegistry textures;

    public LivePreviewSurfaces(BinaryMessenger messenger, TextureRegistry textures) {
        Intrinsics.checkNotNullParameter(messenger, "messenger");
        Intrinsics.checkNotNullParameter(textures, "textures");
        this.textures = textures;
        this.producers = new HashMap<>();
        MethodChannel methodChannel = new MethodChannel(messenger, "live_preview");
        this.channel = methodChannel;
        methodChannel.setMethodCallHandler(this);
    }

    /* JADX INFO: compiled from: LivePreviewSurfaces.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u0006"}, d2 = {"Lcom/matreshkarp/core/LivePreviewSurfaces$Companion;", "", "<init>", "()V", "TAG", "", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }

    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        String str = call.method;
        if (Intrinsics.areEqual(str, "create")) {
            Integer num = (Integer) call.argument("width");
            int iIntValue = num != null ? num.intValue() : 0;
            Integer num2 = (Integer) call.argument("height");
            result.success(create(iIntValue, num2 != null ? num2.intValue() : 0));
            return;
        }
        if (Intrinsics.areEqual(str, "release")) {
            Number number = (Number) call.argument("id");
            if (number == null) {
                number = (Number) 0;
            }
            release(number.longValue());
            result.success(null);
            return;
        }
        result.notImplemented();
    }

    private final Long create(int width, int height) {
        if (width <= 0 || height <= 0) {
            return null;
        }
        if (Build.VERSION.SDK_INT < 29) {
            Log.d(TAG, "surface skipped on api " + Build.VERSION.SDK_INT + ", frames go as pixels");
            return null;
        }
        if (StringsKt.contains((CharSequence) FlutterRendererGate.INSTANCE.getRenderer(), (CharSequence) "Mali-G57", true)) {
            Log.d(TAG, "surface skipped on " + FlutterRendererGate.INSTANCE.getRenderer() + ", frames go as pixels");
            return null;
        }
        final TextureRegistry.SurfaceProducer surfaceProducerCreateSurfaceProducer = this.textures.createSurfaceProducer();
        Intrinsics.checkNotNullExpressionValue(surfaceProducerCreateSurfaceProducer, "createSurfaceProducer(...)");
        surfaceProducerCreateSurfaceProducer.setSize(width, height);
        final long jId = surfaceProducerCreateSurfaceProducer.id();
        surfaceProducerCreateSurfaceProducer.setCallback(new TextureRegistry.SurfaceProducer.Callback() { // from class: com.matreshkarp.core.LivePreviewSurfaces.create.1
            @Override // io.flutter.view.TextureRegistry.SurfaceProducer.Callback
            public void onSurfaceAvailable() {
                Log.d(LivePreviewSurfaces.TAG, "surface " + jId + " available");
                this.attach(jId, surfaceProducerCreateSurfaceProducer.getSurface());
                this.channel.invokeMethod("reset", Long.valueOf(jId));
            }

            @Override // io.flutter.view.TextureRegistry.SurfaceProducer.Callback
            public void onSurfaceCleanup() {
                Log.d(LivePreviewSurfaces.TAG, "surface " + jId + " cleanup");
                this.attach(jId, null);
            }
        });
        if (!attach(jId, surfaceProducerCreateSurfaceProducer.getSurface())) {
            surfaceProducerCreateSurfaceProducer.release();
            return null;
        }
        this.producers.put(Long.valueOf(jId), surfaceProducerCreateSurfaceProducer);
        Log.d(TAG, "surface " + jId + " created " + width + 'x' + height);
        return Long.valueOf(jId);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean attach(long id, Object surface) {
        try {
            Main.INSTANCE.livePreviewSurface(id, surface);
            return true;
        } catch (UnsatisfiedLinkError unused) {
            return false;
        }
    }

    private final void release(long id) {
        TextureRegistry.SurfaceProducer surfaceProducerRemove = this.producers.remove(Long.valueOf(id));
        if (surfaceProducerRemove == null) {
            return;
        }
        Log.d(TAG, "surface " + id + " released");
        attach(id, null);
        surfaceProducerRemove.release();
    }
}
