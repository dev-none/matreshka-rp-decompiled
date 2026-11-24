package com.my.target.nativeads;

import android.view.View;
import com.my.target.nativeads.views.NativeBannerAdView;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public interface INativeBannerAd extends IAd {
    void registerView(NativeBannerAdViewBinder nativeBannerAdViewBinder);

    void registerView(NativeBannerAdViewBinder nativeBannerAdViewBinder, List<View> list);

    void registerView(NativeBannerAdView nativeBannerAdView);

    void registerView(NativeBannerAdView nativeBannerAdView, List<View> list);
}
