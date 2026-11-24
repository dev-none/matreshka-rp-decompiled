package com.matreshkarp.core;

import android.content.Context;
import android.view.accessibility.AccessibilityNodeProvider;
import io.flutter.embedding.android.FlutterSurfaceView;
import io.flutter.embedding.android.FlutterView;
import io.flutter.embedding.engine.FlutterEngine;
import io.flutter.embedding.engine.renderer.FlutterRenderer;
import io.flutter.embedding.engine.systemchannels.AccessibilityChannel;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MainActivity.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00009\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000*\u0001\u000b\u0018\u00002\u00020\u0001B\u0019\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0010\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J\b\u0010\u0011\u001a\u00020\u000eH\u0016J\n\u0010\u0012\u001a\u0004\u0018\u00010\u0013H\u0016R\u000e\u0010\b\u001a\u00020\tX\u0082D¢\u0006\u0002\n\u0000R\u0010\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0004\n\u0002\u0010\f¨\u0006\u0014"}, d2 = {"Lcom/matreshkarp/core/NoSemanticsFlutterView;", "Lio/flutter/embedding/android/FlutterView;", "context", "Landroid/content/Context;", "flutterSurfaceView", "Lio/flutter/embedding/android/FlutterSurfaceView;", "<init>", "(Landroid/content/Context;Lio/flutter/embedding/android/FlutterSurfaceView;)V", "intervalMs", "", "disableSemanticsRunnable", "com/matreshkarp/core/NoSemanticsFlutterView$disableSemanticsRunnable$1", "Lcom/matreshkarp/core/NoSemanticsFlutterView$disableSemanticsRunnable$1;", "attachToFlutterEngine", "", "flutterEngine", "Lio/flutter/embedding/engine/FlutterEngine;", "detachFromFlutterEngine", "getAccessibilityNodeProvider", "Landroid/view/accessibility/AccessibilityNodeProvider;", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class NoSemanticsFlutterView extends FlutterView {
    private final NoSemanticsFlutterView$disableSemanticsRunnable$1 disableSemanticsRunnable;
    private final long intervalMs;

    @Override // io.flutter.embedding.android.FlutterView, android.view.View
    public AccessibilityNodeProvider getAccessibilityNodeProvider() {
        return null;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Type inference failed for: r2v2, types: [com.matreshkarp.core.NoSemanticsFlutterView$disableSemanticsRunnable$1] */
    public NoSemanticsFlutterView(Context context, FlutterSurfaceView flutterSurfaceView) {
        super(context, flutterSurfaceView);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(flutterSurfaceView, "flutterSurfaceView");
        this.intervalMs = 1000L;
        this.disableSemanticsRunnable = new Runnable() { // from class: com.matreshkarp.core.NoSemanticsFlutterView$disableSemanticsRunnable$1
            @Override // java.lang.Runnable
            public void run() {
                AccessibilityChannel accessibilityChannel;
                FlutterRenderer renderer;
                FlutterEngine attachedFlutterEngine = this.this$0.getAttachedFlutterEngine();
                if (attachedFlutterEngine != null && (renderer = attachedFlutterEngine.getRenderer()) != null) {
                    renderer.setSemanticsEnabled(false);
                }
                FlutterEngine attachedFlutterEngine2 = this.this$0.getAttachedFlutterEngine();
                if (attachedFlutterEngine2 != null && (accessibilityChannel = attachedFlutterEngine2.getAccessibilityChannel()) != null) {
                    accessibilityChannel.setAccessibilityMessageHandler(null);
                }
                NoSemanticsFlutterView noSemanticsFlutterView = this.this$0;
                noSemanticsFlutterView.postDelayed(this, noSemanticsFlutterView.intervalMs);
            }
        };
    }

    @Override // io.flutter.embedding.android.FlutterView
    public void attachToFlutterEngine(FlutterEngine flutterEngine) {
        Intrinsics.checkNotNullParameter(flutterEngine, "flutterEngine");
        super.attachToFlutterEngine(flutterEngine);
        removeCallbacks(this.disableSemanticsRunnable);
        post(this.disableSemanticsRunnable);
    }

    @Override // io.flutter.embedding.android.FlutterView
    public void detachFromFlutterEngine() {
        removeCallbacks(this.disableSemanticsRunnable);
        super.detachFromFlutterEngine();
    }
}
