package com.pichillilorenzo.flutter_inappwebview_android.types;

import io.flutter.plugin.common.MethodChannel;

/* JADX INFO: loaded from: classes6.dex */
public interface IChannelDelegate extends MethodChannel.MethodCallHandler, Disposable {
    MethodChannel getChannel();
}
