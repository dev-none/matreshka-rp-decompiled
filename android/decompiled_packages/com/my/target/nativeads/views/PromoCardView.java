package com.my.target.nativeads.views;

import android.view.View;

/* JADX INFO: loaded from: classes6.dex */
public interface PromoCardView {

    public static abstract class Card {
        public String getCtaButtonText() {
            return null;
        }

        public String getCurrency() {
            return null;
        }

        public String getDescription() {
            return null;
        }

        public String getDiscountText() {
            return null;
        }

        public String getOldPriceText() {
            return null;
        }

        public String getPriceText() {
            return null;
        }

        public String getTitle() {
            return null;
        }
    }

    MediaAdView getMediaAdView();

    View getView();

    void setCard(Card card);

    void setCtaOnClickListener(View.OnClickListener onClickListener);
}
