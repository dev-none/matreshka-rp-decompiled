package com.matreshkarp.core;

import android.content.ClipData;
import android.content.ClipDescription;
import android.content.ClipboardManager;
import android.content.Context;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: EmailCodeClipboardChannel.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000e\n\u0000\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\n\u0010\f\u001a\u0004\u0018\u00010\rH\u0002R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lcom/matreshkarp/core/EmailCodeClipboardChannel;", "", "context", "Landroid/content/Context;", "messenger", "Lio/flutter/plugin/common/BinaryMessenger;", "<init>", "(Landroid/content/Context;Lio/flutter/plugin/common/BinaryMessenger;)V", "clipboard", "Landroid/content/ClipboardManager;", "seenAt", "", "readNew", "", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class EmailCodeClipboardChannel {
    private final ClipboardManager clipboard;
    private long seenAt;

    public EmailCodeClipboardChannel(Context context, BinaryMessenger messenger) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(messenger, "messenger");
        Object systemService = context.getSystemService("clipboard");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.content.ClipboardManager");
        this.clipboard = (ClipboardManager) systemService;
        this.seenAt = System.currentTimeMillis();
        new MethodChannel(messenger, "email_code_clipboard").setMethodCallHandler(new MethodChannel.MethodCallHandler() { // from class: com.matreshkarp.core.EmailCodeClipboardChannel$$ExternalSyntheticLambda0
            @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
            public final void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
                EmailCodeClipboardChannel._init_$lambda$0(this.f$0, methodCall, result);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void _init_$lambda$0(EmailCodeClipboardChannel emailCodeClipboardChannel, MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        String str = call.method;
        if (Intrinsics.areEqual(str, "mark")) {
            emailCodeClipboardChannel.seenAt = System.currentTimeMillis();
            result.success(null);
        } else if (Intrinsics.areEqual(str, "readNew")) {
            result.success(emailCodeClipboardChannel.readNew());
        } else {
            result.notImplemented();
        }
    }

    private final String readNew() {
        CharSequence text;
        ClipDescription primaryClipDescription = this.clipboard.getPrimaryClipDescription();
        if (primaryClipDescription != null) {
            long timestamp = primaryClipDescription.getTimestamp();
            if (timestamp <= this.seenAt) {
                return null;
            }
            this.seenAt = timestamp;
            ClipData primaryClip = this.clipboard.getPrimaryClip();
            if (primaryClip != null && primaryClip.getItemCount() != 0 && (text = primaryClip.getItemAt(0).getText()) != null) {
                return text.toString();
            }
        }
        return null;
    }
}
