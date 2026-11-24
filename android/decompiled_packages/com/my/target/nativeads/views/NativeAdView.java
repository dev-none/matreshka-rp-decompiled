package com.my.target.nativeads.views;

import android.content.Context;
import android.graphics.drawable.GradientDrawable;
import android.graphics.drawable.StateListDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.StateSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.core.view.ViewCompat;
import com.my.target.R;
import com.my.target.ba;
import com.my.target.common.NavigationType;
import com.my.target.common.views.StarsRatingView;
import com.my.target.gb;
import com.my.target.kb;
import com.my.target.nativeads.NativeAdViewBinder;
import com.my.target.nativeads.banners.NativePromoBanner;
import com.my.target.nativeads.constants.NativeAdColor;
import com.my.target.nativeads.factories.NativeViewsFactory;
import com.my.target.r0;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class NativeAdView extends ViewGroup {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final TextView f4740a;
    public final TextView b;
    public final IconAdView c;
    public final TextView d;
    public final TextView e;
    public final TextView f;
    public final StarsRatingView g;
    public final TextView h;
    public final Button i;
    public final TextView j;
    public final LinearLayout k;
    public final LinearLayout l;
    public final LinearLayout m;
    public final NativeAdViewBinder n;
    public final int o;
    public final int p;
    public final int q;
    public final int r;
    public final int s;
    public final int t;
    public final boolean u;
    public MediaAdView v;
    public PromoCardRecyclerView w;
    public PromoCardRecyclerView.PromoCardAdapter x;

    public class a extends PromoCardRecyclerView.PromoCardAdapter {
        public a() {
        }

        @Override // com.my.target.nativeads.views.PromoCardRecyclerView.PromoCardAdapter
        public PromoCardView getPromoCardView() {
            return NativeViewsFactory.getNativeAdCardView(NativeAdView.this.getContext());
        }
    }

    public static final class b implements NativeAdViewBinder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final NativeAdView f4741a;

        public b(NativeAdView nativeAdView) {
            this.f4741a = nativeAdView;
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public View getAdChoicesView() {
            return null;
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public View getAdvertisingView() {
            return this.f4741a.getAdvertisingTextView();
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public View getAgeRestrictionView() {
            return this.f4741a.getAgeRestrictionTextView();
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public View getDescriptionView() {
            return this.f4741a.getDescriptionTextView();
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public View getDisclaimerView() {
            return this.f4741a.getDisclaimerTextView();
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public View getDomainOrCategoryView() {
            return this.f4741a.getDomainOrCategoryTextView();
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public IconAdView getIconView() {
            return this.f4741a.getIconView();
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public MediaAdView getMediaAdView() {
            return this.f4741a.getMediaAdView();
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public PromoCardRecyclerView getPromoCardRecyclerView() {
            return this.f4741a.getPromoCardRecyclerView();
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public ViewGroup getRootAdView() {
            return this.f4741a;
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public View getTitleView() {
            return this.f4741a.getTitleTextView();
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public View getVotesView() {
            return this.f4741a.getVotesTextView();
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public Button getCtaView() {
            return this.f4741a.getCtaButtonView();
        }

        @Override // com.my.target.nativeads.NativeAdViewBinder
        public StarsRatingView getStarsRatingView() {
            return this.f4741a.getStarsRatingView();
        }
    }

    public NativeAdView(Context context) {
        this(context, null);
    }

    public final PromoCardRecyclerView.PromoCardAdapter a(List list) {
        if (this.x == null) {
            this.x = new a();
        }
        this.x.setCards(list);
        return this.x;
    }

    public TextView getAdvertisingTextView() {
        return this.b;
    }

    public TextView getAgeRestrictionTextView() {
        return this.f4740a;
    }

    public Button getCtaButtonView() {
        return this.i;
    }

    public TextView getDescriptionTextView() {
        return this.f;
    }

    public TextView getDisclaimerTextView() {
        return this.j;
    }

    public TextView getDomainOrCategoryTextView() {
        return this.e;
    }

    @Deprecated
    public IconAdView getIconImageView() {
        return this.c;
    }

    public IconAdView getIconView() {
        return this.c;
    }

    public MediaAdView getMediaAdView() {
        return this.v;
    }

    public NativeAdViewBinder getNativeAdViewBinder() {
        return this.n;
    }

    public PromoCardRecyclerView getPromoCardRecyclerView() {
        return this.w;
    }

    public StarsRatingView getStarsRatingView() {
        return this.g;
    }

    public TextView getTitleTextView() {
        return this.d;
    }

    public TextView getVotesTextView() {
        return this.h;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        PromoCardRecyclerView promoCardRecyclerView;
        int paddingLeft = getPaddingLeft();
        kb.c(this.l, getPaddingTop(), paddingLeft);
        int iA = kb.a(this.c.getMeasuredHeight(), this.k.getMeasuredHeight());
        int bottom = this.l.getBottom() + this.t;
        kb.c(this.c, ((iA - this.c.getMeasuredHeight()) / 2) + bottom, paddingLeft);
        kb.c(this.k, ((iA - this.k.getMeasuredHeight()) / 2) + bottom, kb.a(this.c.getRight() + this.t, paddingLeft));
        int i5 = bottom + iA;
        int bottom2 = this.p + i5;
        if (this.u && (promoCardRecyclerView = this.w) != null) {
            kb.c(promoCardRecyclerView, i5 + this.t, paddingLeft);
            return;
        }
        kb.c(this.v, bottom2, paddingLeft);
        int iA2 = kb.a(this.f.getMeasuredHeight(), this.i.getMeasuredHeight());
        MediaAdView mediaAdView = this.v;
        if (mediaAdView != null) {
            bottom2 = mediaAdView.getBottom();
        }
        int paddingBottom = bottom2 + getPaddingBottom();
        int measuredHeight = ((iA2 - this.f.getMeasuredHeight()) / 2) + paddingBottom;
        int measuredHeight2 = ((iA2 - this.i.getMeasuredHeight()) / 2) + paddingBottom;
        kb.c(this.f, measuredHeight, paddingLeft);
        kb.b(this.i, measuredHeight2, getMeasuredWidth() - getPaddingRight());
        kb.c(this.j, paddingBottom + iA2 + this.p, paddingLeft);
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int measuredHeight;
        int paddingBottom;
        PromoCardRecyclerView promoCardRecyclerView;
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        int paddingLeft = (size - getPaddingLeft()) - getPaddingRight();
        int paddingTop = (size2 - getPaddingTop()) - getPaddingBottom();
        kb.a(this.l, paddingLeft - this.r, paddingTop, Integer.MIN_VALUE);
        this.c.measure(View.MeasureSpec.makeMeasureSpec(this.q, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.q, Integer.MIN_VALUE));
        kb.a(this.k, (paddingLeft - this.c.getMeasuredWidth()) - this.t, (paddingTop - this.l.getMeasuredHeight()) - this.p, Integer.MIN_VALUE);
        if (!this.u || (promoCardRecyclerView = this.w) == null) {
            MediaAdView mediaAdView = this.v;
            if (mediaAdView != null) {
                mediaAdView.measure(View.MeasureSpec.makeMeasureSpec(paddingLeft, 1073741824), View.MeasureSpec.makeMeasureSpec(paddingTop, Integer.MIN_VALUE));
                this.i.measure(View.MeasureSpec.makeMeasureSpec(paddingLeft, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.o, 1073741824));
                kb.a(this.f, (paddingLeft - this.i.getMeasuredWidth()) - this.t, paddingTop, Integer.MIN_VALUE);
                kb.a(this.j, paddingLeft, paddingTop, Integer.MIN_VALUE);
                size2 = this.l.getMeasuredHeight() + this.t + kb.a(this.k.getMeasuredHeight(), this.c.getMeasuredHeight()) + this.v.getMeasuredHeight() + this.p + getPaddingBottom() + kb.a(this.f.getMeasuredHeight(), this.i.getMeasuredHeight()) + getPaddingTop() + getPaddingBottom();
                int measuredHeight2 = this.j.getVisibility() == 0 ? this.j.getMeasuredHeight() : 0;
                if (measuredHeight2 > 0) {
                    measuredHeight = size2 + measuredHeight2;
                    paddingBottom = this.p;
                }
            }
            setMeasuredDimension(size, size2);
        }
        promoCardRecyclerView.measure(View.MeasureSpec.makeMeasureSpec(paddingLeft, 1073741824), View.MeasureSpec.makeMeasureSpec(paddingTop, Integer.MIN_VALUE));
        measuredHeight = this.l.getMeasuredHeight() + this.t + kb.a(this.k.getMeasuredHeight(), this.c.getMeasuredHeight()) + this.w.getMeasuredHeight() + getPaddingTop();
        paddingBottom = getPaddingBottom();
        size2 = measuredHeight + paddingBottom;
        setMeasuredDimension(size, size2);
    }

    public void setupView(NativePromoBanner nativePromoBanner) {
        if (nativePromoBanner == null) {
            return;
        }
        gb.a("NativeAdView: Setup banner");
        if (nativePromoBanner.getIcon() != null) {
            this.c.setVisibility(0);
        } else {
            this.c.setVisibility(8);
        }
        if (!this.u || this.w == null) {
            a(nativePromoBanner.getCtaText(), this.i);
        } else {
            this.i.setVisibility(8);
            this.j.setVisibility(8);
            this.w.setPromoCardAdapter(a(nativePromoBanner.getCards()));
        }
        if (NavigationType.WEB.equals(nativePromoBanner.getNavigationType())) {
            if (!this.u) {
                this.g.setVisibility(8);
                this.h.setVisibility(8);
                a(nativePromoBanner.getDomain(), this.e);
            }
        } else if (NavigationType.STORE.equals(nativePromoBanner.getNavigationType())) {
            String category = nativePromoBanner.getCategory();
            String subCategory = nativePromoBanner.getSubCategory();
            String str = "";
            if (!TextUtils.isEmpty(category)) {
                str = "" + category;
                if (!TextUtils.isEmpty(subCategory)) {
                    str = str + ", ";
                }
            }
            if (!TextUtils.isEmpty(subCategory)) {
                str = str + subCategory;
            }
            kb.b(this.e, "category_text");
            a(str, this.e);
            if (nativePromoBanner.getRating() > 0.0f && nativePromoBanner.getRating() <= 5.0f) {
                this.g.setVisibility(0);
                if (nativePromoBanner.getVotes() > 0) {
                    a(String.valueOf(nativePromoBanner.getVotes()), this.h);
                } else {
                    this.h.setVisibility(8);
                }
                this.g.setRating(nativePromoBanner.getRating());
            }
        }
        a(nativePromoBanner.getDisclaimer(), this.j);
        a(nativePromoBanner.getTitle(), this.d);
        a(nativePromoBanner.getDescription(), this.f);
        a(nativePromoBanner.getAdvertisingLabel(), this.b);
        a(nativePromoBanner.getAgeRestrictions(), this.f4740a);
    }

    public NativeAdView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public NativeAdView(Context context, AttributeSet attributeSet, int i) {
        this(context, attributeSet, i, false, -1.0f, -1);
    }

    public NativeAdView(Context context, AttributeSet attributeSet, int i, boolean z, float f, int i2) {
        super(context, attributeSet, i);
        this.u = z;
        r0 r0Var = new r0(context);
        this.f4740a = r0Var;
        TextView textView = new TextView(context);
        this.b = textView;
        IconAdView iconView = NativeViewsFactory.getIconView(context);
        this.c = iconView;
        TextView textView2 = new TextView(context);
        this.d = textView2;
        TextView textView3 = new TextView(context);
        this.e = textView3;
        TextView textView4 = new TextView(context);
        this.f = textView4;
        StarsRatingView starsRatingView = new StarsRatingView(context);
        this.g = starsRatingView;
        TextView textView5 = new TextView(context);
        this.h = textView5;
        TextView textView6 = new TextView(context);
        this.j = textView6;
        Button button = new Button(context);
        this.i = button;
        kb kbVarE = kb.e(context);
        LinearLayout linearLayout = new LinearLayout(context);
        this.k = linearLayout;
        LinearLayout linearLayout2 = new LinearLayout(context);
        this.l = linearLayout2;
        LinearLayout linearLayout3 = new LinearLayout(context);
        this.m = linearLayout3;
        setId(R.id.nativeads_ad_view);
        textView.setId(R.id.nativeads_advertising);
        textView2.setId(R.id.nativeads_title);
        textView4.setId(R.id.nativeads_description);
        starsRatingView.setId(R.id.nativeads_rating);
        textView3.setId(R.id.nativeads_domain);
        textView6.setId(R.id.nativeads_disclaimer);
        button.setId(R.id.nativeads_call_to_action);
        iconView.setId(R.id.nativeads_icon);
        r0Var.setId(R.id.nativeads_age_restrictions);
        textView5.setId(R.id.nativeads_votes);
        starsRatingView.setId(R.id.nativeads_rating);
        kb.b(textView5, "votes_text");
        int iB = kbVarE.b(4);
        setPadding(iB, iB, iB, kbVarE.b(8));
        this.p = kbVarE.b(8);
        this.r = kbVarE.b(9);
        this.q = kbVarE.b(54);
        this.s = kbVarE.b(12);
        int iB2 = kbVarE.b(10);
        this.o = kbVarE.b(40);
        this.t = kbVarE.b(4);
        r0Var.setId(R.id.nativeads_age_restrictions);
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(0);
        gradientDrawable.setStroke(1, -13421773);
        int iB3 = kbVarE.b(2);
        r0Var.setBackgroundDrawable(gradientDrawable);
        r0Var.setGravity(17);
        r0Var.setPadding(iB3, 0, 0, 0);
        button.setPadding(iB2, 0, iB2, 0);
        button.setMaxEms(8);
        button.setLines(1);
        button.setEllipsize(TextUtils.TruncateAt.END);
        button.setTransformationMethod(null);
        kb.a(this, -1, NativeAdColor.BACKGROUND_TOUCH);
        GradientDrawable.Orientation orientation = GradientDrawable.Orientation.TOP_BOTTOM;
        GradientDrawable gradientDrawable2 = new GradientDrawable(orientation, new int[]{0, 0});
        gradientDrawable2.setStroke(kbVarE.a(1.5f), NativeAdColor.STANDARD_BLUE);
        gradientDrawable2.setCornerRadius(kbVarE.b(1));
        GradientDrawable gradientDrawable3 = new GradientDrawable(orientation, new int[]{NativeAdColor.BACKGROUND_TOUCH, NativeAdColor.BACKGROUND_TOUCH});
        gradientDrawable3.setStroke(kbVarE.a(1.5f), NativeAdColor.STANDARD_BLUE);
        gradientDrawable3.setCornerRadius(kbVarE.b(1));
        StateListDrawable stateListDrawable = new StateListDrawable();
        stateListDrawable.addState(new int[]{android.R.attr.state_pressed}, gradientDrawable3);
        stateListDrawable.addState(StateSet.WILD_CARD, gradientDrawable2);
        button.setBackgroundDrawable(stateListDrawable);
        setClickable(true);
        if (z) {
            PromoCardRecyclerView promoCardRecyclerView = NativeViewsFactory.getPromoCardRecyclerView(f, i2, getContext());
            this.w = promoCardRecyclerView;
            promoCardRecyclerView.setId(R.id.nativeads_media_view);
            addView(this.w);
        } else {
            MediaAdView mediaAdView = NativeViewsFactory.getMediaAdView(getContext());
            this.v = mediaAdView;
            mediaAdView.setId(R.id.nativeads_media_view);
            addView(this.v);
        }
        addView(iconView);
        addView(button);
        addView(linearLayout);
        addView(linearLayout2);
        linearLayout2.addView(r0Var);
        linearLayout2.addView(textView);
        linearLayout.addView(textView2);
        linearLayout.addView(textView3);
        linearLayout.addView(linearLayout3);
        linearLayout3.addView(starsRatingView);
        linearLayout3.addView(textView5);
        addView(textView4);
        addView(textView6);
        a();
        this.n = new b(this);
        ba.e();
    }

    public final void a() {
        this.f4740a.setTextColor(NativeAdColor.STANDARD_GREY);
        this.f4740a.setBackgroundColor(0);
        this.f4740a.setLines(1);
        TextView textView = this.f4740a;
        TextUtils.TruncateAt truncateAt = TextUtils.TruncateAt.END;
        textView.setEllipsize(truncateAt);
        this.f4740a.setTextSize(2, 10.0f);
        this.b.setTextSize(2, 12.0f);
        this.b.setTextColor(NativeAdColor.STANDARD_GREY);
        this.b.setLines(1);
        this.b.setEllipsize(truncateAt);
        this.b.setPadding(this.r, 0, 0, 0);
        this.d.setTextColor(ViewCompat.MEASURED_STATE_MASK);
        this.d.setTextSize(2, 16.0f);
        this.d.setTypeface(null, 1);
        this.d.setLines(1);
        this.d.setEllipsize(truncateAt);
        this.e.setTextColor(NativeAdColor.STANDARD_GREY);
        this.e.setTextSize(2, 14.0f);
        this.e.setLines(1);
        this.e.setIncludeFontPadding(false);
        this.e.setEllipsize(truncateAt);
        this.f.setTextColor(ViewCompat.MEASURED_STATE_MASK);
        this.f.setTextSize(2, 15.0f);
        this.f.setMaxLines(3);
        this.f.setEllipsize(truncateAt);
        this.h.setTextColor(NativeAdColor.STANDARD_GREY);
        this.h.setTextSize(2, 12.0f);
        this.h.setLines(1);
        this.h.setEllipsize(truncateAt);
        this.h.setPadding(this.t, 0, 0, 0);
        this.j.setTextColor(NativeAdColor.STANDARD_GREY);
        this.j.setTextSize(2, 12.0f);
        this.j.setMaxLines(2);
        this.j.setEllipsize(truncateAt);
        this.i.setTextColor(NativeAdColor.STANDARD_BLUE);
        this.i.setLines(1);
        this.i.setTextSize(2, 16.0f);
        this.i.setEllipsize(truncateAt);
        this.g.setStarSize(this.s);
        this.k.setOrientation(1);
        this.l.setOrientation(0);
        this.l.setGravity(16);
        this.m.setOrientation(0);
        this.m.setGravity(16);
    }

    public final void a(String str, TextView textView) {
        if (!TextUtils.isEmpty(str)) {
            textView.setText(str);
            textView.setVisibility(0);
        } else {
            textView.setVisibility(8);
        }
    }
}
