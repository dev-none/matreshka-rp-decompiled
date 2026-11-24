package io.flutter.embedding.engine.plugins.broadcastreceiver;

/* JADX INFO: loaded from: classes7.dex */
public interface BroadcastReceiverAware {
    void onAttachedToBroadcastReceiver(BroadcastReceiverPluginBinding broadcastReceiverPluginBinding);

    void onDetachedFromBroadcastReceiver();
}
