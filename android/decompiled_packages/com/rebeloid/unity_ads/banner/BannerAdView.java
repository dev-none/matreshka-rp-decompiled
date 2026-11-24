package com.rebeloid.unity_ads.banner;

import android.app.Activity;
import android.view.View;
import com.unity3d.services.banners.BannerView;
import com.unity3d.services.banners.UnityBannerSize;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.plugin.platform.PlatformView;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class BannerAdView implements PlatformView {
    private static final UnityBannerSize STANDARD_SIZE = new UnityBannerSize(320, 50);
    private final BannerView bannerView;

    @Override // io.flutter.plugin.platform.PlatformView
    public void dispose() {
    }

    public BannerAdView(Activity activity, int i, Map<?, ?> map, BinaryMessenger binaryMessenger) {
        MethodChannel methodChannel = new MethodChannel(binaryMessenger, "com.rebeloid.unity_ads/bannerAd_" + i);
        Integer num = (Integer) map.get("width");
        Integer num2 = (Integer) map.get("height");
        BannerView bannerView = new BannerView(activity, (String) map.get("placementId"), (num == null || num2 == null) ? STANDARD_SIZE : new UnityBannerSize(num.intValue(), num2.intValue()));
        this.bannerView = bannerView;
        bannerView.setListener(new BannerAdListener(methodChannel));
        bannerView.load();
    }

    @Override // io.flutter.plugin.platform.PlatformView
    public View getView() {
        return this.bannerView;
    }
}
