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
import com.my.target.nativeads.NativeBannerAdViewBinder;
import com.my.target.nativeads.banners.NativeBanner;
import com.my.target.nativeads.constants.NativeAdColor;
import com.my.target.r0;

/* JADX INFO: loaded from: classes6.dex */
public class NativeBannerAdView extends ViewGroup {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final TextView f4742a;
    public final TextView b;
    public final IconAdView c;
    public final TextView d;
    public final TextView e;
    public final StarsRatingView f;
    public final TextView g;
    public final Button h;
    public final TextView i;
    public final LinearLayout j;
    public final LinearLayout k;
    public final NativeBannerAdViewBinder l;
    public final int m;
    public final int n;
    public final int o;
    public final int p;
    public final int q;
    public final int r;

    public static final class a implements NativeBannerAdViewBinder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final NativeBannerAdView f4743a;

        public a(NativeBannerAdView nativeBannerAdView) {
            this.f4743a = nativeBannerAdView;
        }

        @Override // com.my.target.nativeads.NativeBannerAdViewBinder
        public View getAdChoicesView() {
            return null;
        }

        @Override // com.my.target.nativeads.NativeBannerAdViewBinder
        public View getAdvertisingView() {
            return this.f4743a.getAdvertisingTextView();
        }

        @Override // com.my.target.nativeads.NativeBannerAdViewBinder
        public View getAgeRestrictionView() {
            return this.f4743a.getAgeRestrictionTextView();
        }

        @Override // com.my.target.nativeads.NativeBannerAdViewBinder
        public View getDisclaimerView() {
            return this.f4743a.getDisclaimerTextView();
        }

        @Override // com.my.target.nativeads.NativeBannerAdViewBinder
        public View getDomainView() {
            return this.f4743a.getDomainTextView();
        }

        @Override // com.my.target.nativeads.NativeBannerAdViewBinder
        public IconAdView getIconView() {
            return this.f4743a.getIconView();
        }

        @Override // com.my.target.nativeads.NativeBannerAdViewBinder
        public ViewGroup getRootAdBannerView() {
            return this.f4743a;
        }

        @Override // com.my.target.nativeads.NativeBannerAdViewBinder
        public View getTitleView() {
            return this.f4743a.getTitleTextView();
        }

        @Override // com.my.target.nativeads.NativeBannerAdViewBinder
        public View getVotesView() {
            return this.f4743a.getVotesTextView();
        }

        @Override // com.my.target.nativeads.NativeBannerAdViewBinder
        public Button getCtaView() {
            return this.f4743a.getCtaButtonView();
        }

        @Override // com.my.target.nativeads.NativeBannerAdViewBinder
        public StarsRatingView getStarsRatingView() {
            return this.f4743a.getStarsRatingView();
        }
    }

    public NativeBannerAdView(Context context) {
        this(context, null);
    }

    public final void a(String str, TextView textView) {
        if (TextUtils.isEmpty(str)) {
            textView.setVisibility(8);
        } else {
            textView.setText(str);
            textView.setVisibility(0);
        }
    }

    public TextView getAdvertisingTextView() {
        return this.b;
    }

    public TextView getAgeRestrictionTextView() {
        return this.f4742a;
    }

    public Button getCtaButtonView() {
        return this.h;
    }

    public TextView getDisclaimerTextView() {
        return this.i;
    }

    public TextView getDomainTextView() {
        return this.e;
    }

    @Deprecated
    public IconAdView getIconImageView() {
        return this.c;
    }

    public IconAdView getIconView() {
        return this.c;
    }

    public NativeBannerAdViewBinder getNativeBannerAdViewBinder() {
        return this.l;
    }

    public StarsRatingView getStarsRatingView() {
        return this.f;
    }

    public TextView getTitleTextView() {
        return this.d;
    }

    public TextView getVotesTextView() {
        return this.g;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int paddingLeft = getPaddingLeft();
        int paddingTop = getPaddingTop();
        kb.c(this.k, paddingTop, paddingLeft);
        int iA = kb.a(this.c.getMeasuredHeight(), this.j.getMeasuredHeight(), this.h.getMeasuredHeight());
        int bottom = this.k.getBottom() + this.o;
        int iA2 = ((kb.a(this.c.getMeasuredHeight(), this.j.getMeasuredHeight()) - this.h.getMeasuredHeight()) / 2) + this.k.getMeasuredHeight();
        int i5 = this.r;
        if (iA2 < i5) {
            bottom = paddingTop + i5;
        }
        kb.c(this.c, ((iA - this.c.getMeasuredHeight()) / 2) + bottom, paddingLeft);
        kb.b(this.h, ((iA - this.h.getMeasuredHeight()) / 2) + bottom, getMeasuredWidth() - getPaddingRight());
        kb.c(this.j, bottom + ((iA - this.j.getMeasuredHeight()) / 2), kb.a(this.c.getRight() + this.o, paddingLeft));
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        int paddingLeft = (size - getPaddingLeft()) - getPaddingRight();
        int paddingTop = (size2 - getPaddingTop()) - getPaddingBottom();
        kb.a(this.k, paddingLeft - this.q, paddingTop, Integer.MIN_VALUE);
        this.c.measure(View.MeasureSpec.makeMeasureSpec(this.p, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.p, Integer.MIN_VALUE));
        this.h.measure(View.MeasureSpec.makeMeasureSpec(paddingLeft, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.m, 1073741824));
        kb.a(this.j, ((paddingLeft - this.c.getMeasuredWidth()) - this.h.getMeasuredWidth()) - (this.o * 2), (paddingTop - this.k.getMeasuredHeight()) - this.n, Integer.MIN_VALUE);
        int measuredHeight = this.k.getMeasuredHeight() + this.o;
        int iA = ((kb.a(this.c.getMeasuredHeight(), this.j.getMeasuredHeight()) - this.h.getMeasuredHeight()) / 2) + this.k.getMeasuredHeight();
        int i3 = this.r;
        if (iA < i3) {
            measuredHeight = i3;
        }
        setMeasuredDimension(size, measuredHeight + kb.a(this.j.getMeasuredHeight(), this.c.getMeasuredHeight(), this.h.getMeasuredHeight()) + getPaddingTop() + getPaddingBottom());
    }

    public void setupView(NativeBanner nativeBanner) {
        if (nativeBanner == null) {
            return;
        }
        gb.a("NativeBannerAdView: Setup banner");
        if (nativeBanner.getIcon() != null) {
            this.c.setVisibility(0);
        } else {
            this.c.setVisibility(8);
        }
        if (NavigationType.WEB.equals(nativeBanner.getNavigationType())) {
            a(nativeBanner.getDomain(), this.e);
            this.f.setVisibility(8);
            this.g.setVisibility(8);
        } else if (NavigationType.STORE.equals(nativeBanner.getNavigationType())) {
            if (nativeBanner.getRating() <= 0.0f || nativeBanner.getRating() > 5.0f) {
                this.f.setVisibility(8);
            } else {
                this.f.setRating(nativeBanner.getRating());
                this.f.setVisibility(0);
                a(String.valueOf(nativeBanner.getVotes()), this.g);
                this.e.setVisibility(8);
                if (nativeBanner.getVotes() > 0) {
                    this.g.setVisibility(0);
                } else {
                    this.g.setVisibility(8);
                }
                kb.b(this.g, "votes_text");
            }
        }
        a(nativeBanner.getTitle(), this.d);
        a(nativeBanner.getAdvertisingLabel(), this.b);
        a(nativeBanner.getCtaText(), this.h);
        a(nativeBanner.getAgeRestrictions(), this.f4742a);
        a(nativeBanner.getDisclaimer(), this.i);
    }

    public NativeBannerAdView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public NativeBannerAdView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        r0 r0Var = new r0(context);
        this.f4742a = r0Var;
        TextView textView = new TextView(context);
        this.b = textView;
        IconAdView iconAdView = new IconAdView(context);
        this.c = iconAdView;
        TextView textView2 = new TextView(context);
        this.d = textView2;
        TextView textView3 = new TextView(context);
        this.e = textView3;
        StarsRatingView starsRatingView = new StarsRatingView(context);
        this.f = starsRatingView;
        TextView textView4 = new TextView(context);
        this.g = textView4;
        TextView textView5 = new TextView(context);
        this.i = textView5;
        Button button = new Button(context);
        this.h = button;
        LinearLayout linearLayout = new LinearLayout(context);
        this.j = linearLayout;
        LinearLayout linearLayout2 = new LinearLayout(context);
        this.k = linearLayout2;
        LinearLayout linearLayout3 = new LinearLayout(context);
        kb kbVarE = kb.e(context);
        setId(R.id.nativeads_ad_view);
        r0Var.setId(R.id.nativeads_age_restrictions);
        textView.setId(R.id.nativeads_advertising);
        iconAdView.setId(R.id.nativeads_icon);
        textView2.setId(R.id.nativeads_title);
        textView3.setId(R.id.nativeads_domain);
        starsRatingView.setId(R.id.nativeads_rating);
        textView4.setId(R.id.nativeads_votes);
        textView5.setId(R.id.nativeads_disclaimer);
        button.setId(R.id.nativeads_call_to_action);
        kb.b(textView4, "votes_text");
        int iB = kbVarE.b(4);
        setPadding(iB, iB, iB, iB);
        this.n = kbVarE.b(2);
        int iB2 = kbVarE.b(4);
        this.q = iB2;
        this.p = kbVarE.b(54);
        this.r = kbVarE.b(20);
        int iB3 = kbVarE.b(12);
        int iB4 = kbVarE.b(10);
        this.m = kbVarE.b(40);
        this.o = kbVarE.b(4);
        button.setPadding(iB4, 0, iB4, 0);
        button.setTransformationMethod(null);
        button.setMaxEms(8);
        button.setLines(1);
        TextUtils.TruncateAt truncateAt = TextUtils.TruncateAt.END;
        button.setEllipsize(truncateAt);
        button.setTextColor(NativeAdColor.STANDARD_BLUE);
        button.setTextSize(2, 16.0f);
        kb.a(this, -1, NativeAdColor.BACKGROUND_TOUCH);
        GradientDrawable.Orientation orientation = GradientDrawable.Orientation.TOP_BOTTOM;
        GradientDrawable gradientDrawable = new GradientDrawable(orientation, new int[]{0, 0});
        gradientDrawable.setStroke(kbVarE.a(1.5f), NativeAdColor.STANDARD_BLUE);
        gradientDrawable.setCornerRadius(kbVarE.b(2));
        GradientDrawable gradientDrawable2 = new GradientDrawable(orientation, new int[]{NativeAdColor.BACKGROUND_TOUCH, NativeAdColor.BACKGROUND_TOUCH});
        gradientDrawable2.setStroke(kbVarE.a(1.5f), NativeAdColor.STANDARD_BLUE);
        gradientDrawable2.setCornerRadius(kbVarE.b(2));
        StateListDrawable stateListDrawable = new StateListDrawable();
        stateListDrawable.addState(new int[]{android.R.attr.state_pressed}, gradientDrawable2);
        stateListDrawable.addState(StateSet.WILD_CARD, gradientDrawable);
        button.setBackground(stateListDrawable);
        setClickable(true);
        r0Var.setTextColor(NativeAdColor.STANDARD_GREY);
        GradientDrawable gradientDrawable3 = new GradientDrawable();
        gradientDrawable3.setColor(0);
        gradientDrawable3.setStroke(1, -13421773);
        int iB5 = kbVarE.b(2);
        r0Var.setBackgroundDrawable(gradientDrawable3);
        r0Var.setGravity(17);
        r0Var.setPadding(iB5, 0, 0, 0);
        r0Var.setBackgroundColor(0);
        r0Var.setMaxEms(10);
        r0Var.setLines(1);
        r0Var.setTextSize(2, 10.0f);
        textView.setTextSize(2, 10.0f);
        textView.setTextColor(NativeAdColor.STANDARD_GREY);
        textView.setLines(1);
        textView.setEllipsize(truncateAt);
        textView.setPadding(iB2, 0, 0, 0);
        textView2.setTextColor(ViewCompat.MEASURED_STATE_MASK);
        textView2.setTextSize(2, 16.0f);
        textView2.setTypeface(null, 1);
        textView2.setMaxLines(2);
        textView2.setEllipsize(truncateAt);
        textView3.setTextColor(NativeAdColor.STANDARD_GREY);
        textView3.setTextSize(2, 14.0f);
        textView3.setLines(1);
        textView3.setEllipsize(truncateAt);
        textView3.setIncludeFontPadding(false);
        textView4.setTextColor(NativeAdColor.STANDARD_GREY);
        textView4.setTextSize(2, 12.0f);
        textView4.setLines(1);
        textView4.setEllipsize(truncateAt);
        textView4.setPadding(kbVarE.b(4), 0, 0, 0);
        textView5.setTextColor(NativeAdColor.STANDARD_GREY);
        textView5.setTextSize(2, 12.0f);
        textView5.setMaxLines(2);
        textView5.setEllipsize(truncateAt);
        starsRatingView.setStarSize(iB3);
        linearLayout2.setOrientation(0);
        linearLayout2.setGravity(16);
        linearLayout.setOrientation(1);
        linearLayout3.setOrientation(0);
        linearLayout3.setGravity(16);
        addView(iconAdView);
        addView(button);
        addView(linearLayout);
        addView(linearLayout2);
        linearLayout2.addView(r0Var);
        linearLayout2.addView(textView);
        linearLayout.addView(textView2);
        linearLayout.addView(linearLayout3);
        linearLayout.addView(textView5);
        linearLayout3.addView(textView3);
        linearLayout3.addView(starsRatingView);
        linearLayout3.addView(textView4);
        this.l = new a(this);
        ba.f();
    }
}
