package com.my.target.nativeads;

import android.view.View;
import com.my.target.nativeads.views.NativeAdView;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public interface INativeAd extends IAd {
    void registerView(NativeAdViewBinder nativeAdViewBinder);

    void registerView(NativeAdViewBinder nativeAdViewBinder, List<View> list);

    void registerView(NativeAdView nativeAdView);

    void registerView(NativeAdView nativeAdView, List<View> list);
}
