package com.my.target.nativeads;

import android.view.View;
import android.view.ViewGroup;
import com.my.target.nativeads.views.IconAdView;
import com.my.target.nativeads.views.MediaAdView;
import com.my.target.nativeads.views.PromoCardRecyclerView;

/* JADX INFO: loaded from: classes6.dex */
public interface NativeAdViewBinder {
    View getAdChoicesView();

    View getAdvertisingView();

    View getAgeRestrictionView();

    View getCtaView();

    View getDescriptionView();

    View getDisclaimerView();

    View getDomainOrCategoryView();

    IconAdView getIconView();

    MediaAdView getMediaAdView();

    PromoCardRecyclerView getPromoCardRecyclerView();

    ViewGroup getRootAdView();

    View getStarsRatingView();

    View getTitleView();

    View getVotesView();
}
