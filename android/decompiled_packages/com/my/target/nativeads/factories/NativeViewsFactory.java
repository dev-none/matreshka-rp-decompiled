package com.my.target.nativeads.factories;

import android.content.Context;
import com.my.target.nativeads.views.IconAdView;
import com.my.target.nativeads.views.MediaAdView;
import com.my.target.nativeads.views.NativeAdCardView;
import com.my.target.nativeads.views.NativeAdChoicesView;
import com.my.target.nativeads.views.NativeAdView;
import com.my.target.nativeads.views.NativeBannerAdView;
import com.my.target.nativeads.views.PromoCardRecyclerView;

/* JADX INFO: loaded from: classes6.dex */
public class NativeViewsFactory {
    @Deprecated
    public static IconAdView getIconAdView(Context context) {
        return new IconAdView(context);
    }

    public static IconAdView getIconView(Context context) {
        return new IconAdView(context);
    }

    public static MediaAdView getMediaAdView(Context context) {
        return new MediaAdView(context);
    }

    public static NativeAdCardView getNativeAdCardView(Context context) {
        return new NativeAdCardView(context);
    }

    public static NativeAdChoicesView getNativeAdChoicesView(Context context) {
        return new NativeAdChoicesView(context);
    }

    public static NativeAdView getNativeAdView(Context context) {
        return new NativeAdView(context, null, 0, false, -1.0f, -1);
    }

    public static NativeAdView getNativeAdViewWithExtendedCards(float f, int i, Context context) {
        return new NativeAdView(context, null, 0, true, f, i);
    }

    public static NativeBannerAdView getNativeBannerAdView(Context context) {
        return new NativeBannerAdView(context);
    }

    public static PromoCardRecyclerView getPromoCardRecyclerView(Context context) {
        return new PromoCardRecyclerView(context);
    }

    public static NativeAdView getNativeAdViewWithExtendedCards(Context context) {
        return new NativeAdView(context, null, 0, true, -1.0f, -1);
    }

    public static PromoCardRecyclerView getPromoCardRecyclerView(float f, int i, Context context) {
        return new PromoCardRecyclerView(context, null, 0, f, i);
    }
}
