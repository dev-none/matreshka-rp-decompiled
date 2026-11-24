package com.matreshkarp.core;

import android.app.Activity;
import android.graphics.Rect;
import android.graphics.drawable.ColorDrawable;
import android.view.View;
import android.view.ViewTreeObserver;
import android.widget.PopupWindow;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodChannel;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.RangesKt;
import net.openid.appauth.AuthorizationRequest;

/* JADX INFO: compiled from: KeyboardHeightChannel.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0006\u0010\u0012\u001a\u00020\u0013J\b\u0010\u0014\u001a\u00020\u0013H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/matreshkarp/core/KeyboardHeightChannel;", "", "activity", "Landroid/app/Activity;", "messenger", "Lio/flutter/plugin/common/BinaryMessenger;", "<init>", "(Landroid/app/Activity;Lio/flutter/plugin/common/BinaryMessenger;)V", "channel", "Lio/flutter/plugin/common/MethodChannel;", "probe", "Landroid/view/View;", AuthorizationRequest.Display.POPUP, "Landroid/widget/PopupWindow;", "frame", "Landroid/graphics/Rect;", "lastHeight", "", "dispose", "", "report", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class KeyboardHeightChannel {
    private final Activity activity;
    private final MethodChannel channel;
    private final Rect frame;
    private int lastHeight;
    private final PopupWindow popup;
    private final View probe;

    public KeyboardHeightChannel(Activity activity, BinaryMessenger messenger) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        Intrinsics.checkNotNullParameter(messenger, "messenger");
        this.activity = activity;
        this.channel = new MethodChannel(messenger, "keyboard_height");
        View view = new View(activity);
        this.probe = view;
        PopupWindow popupWindow = new PopupWindow(view, 0, -1);
        popupWindow.setSoftInputMode(16);
        popupWindow.setInputMethodMode(1);
        popupWindow.setTouchable(false);
        popupWindow.setBackgroundDrawable(new ColorDrawable(0));
        this.popup = popupWindow;
        this.frame = new Rect();
        this.lastHeight = -1;
        view.getViewTreeObserver().addOnGlobalLayoutListener(new ViewTreeObserver.OnGlobalLayoutListener() { // from class: com.matreshkarp.core.KeyboardHeightChannel$$ExternalSyntheticLambda0
            @Override // android.view.ViewTreeObserver.OnGlobalLayoutListener
            public final void onGlobalLayout() {
                this.f$0.report();
            }
        });
        final View decorView = activity.getWindow().getDecorView();
        Intrinsics.checkNotNullExpressionValue(decorView, "getDecorView(...)");
        decorView.post(new Runnable() { // from class: com.matreshkarp.core.KeyboardHeightChannel$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                KeyboardHeightChannel._init_$lambda$1(this.f$0, decorView);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void _init_$lambda$1(KeyboardHeightChannel keyboardHeightChannel, View view) {
        if (keyboardHeightChannel.activity.isFinishing() || view.getWindowToken() == null) {
            return;
        }
        keyboardHeightChannel.popup.showAtLocation(view, 0, 0, 0);
    }

    public final void dispose() {
        this.popup.dismiss();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void report() {
        this.probe.getWindowVisibleDisplayFrame(this.frame);
        int iCoerceAtLeast = RangesKt.coerceAtLeast(this.activity.getWindow().getDecorView().getHeight() - this.frame.bottom, 0);
        if (iCoerceAtLeast == this.lastHeight) {
            return;
        }
        this.lastHeight = iCoerceAtLeast;
        this.channel.invokeMethod("height", Integer.valueOf(iCoerceAtLeast));
    }
}
