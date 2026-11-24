package com.rebeloid.unity_ads.banner;

import android.app.Activity;
import android.content.Context;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.StandardMessageCodec;
import io.flutter.plugin.platform.PlatformView;
import io.flutter.plugin.platform.PlatformViewFactory;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class BannerAdFactory extends PlatformViewFactory {
    private Activity activity;
    private final BinaryMessenger messenger;

    public BannerAdFactory(BinaryMessenger binaryMessenger) {
        super(StandardMessageCodec.INSTANCE);
        this.messenger = binaryMessenger;
    }

    public void setActivity(Activity activity) {
        this.activity = activity;
    }

    @Override // io.flutter.plugin.platform.PlatformViewFactory
    public PlatformView create(Context context, int i, Object obj) {
        return new BannerAdView(this.activity, i, (Map) obj, this.messenger);
    }
}
