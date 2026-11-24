package com.my.target.nativeads.views;

import android.content.Context;
import android.graphics.Color;
import android.graphics.Typeface;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.shapes.RoundRectShape;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.google.android.material.timepicker.TimeModel;
import com.my.target.common.models.ImageData;
import com.my.target.common.views.StarsRatingView;
import com.my.target.kb;
import com.my.target.ma;
import com.my.target.nativeads.banners.NativeAppwallBanner;
import java.util.Locale;

/* JADX INFO: loaded from: classes6.dex */
public class AppwallAdTeaserView extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final kb f4733a;
    public final int b;
    public final ma c;
    public final ma d;
    public final ma e;
    public final TextView f;
    public final LinearLayout g;
    public final ShapeDrawable h;
    public final TextView i;
    public final StarsRatingView j;
    public final TextView k;
    public final ma l;
    public final TextView m;
    public final ma n;
    public NativeAppwallBanner o;
    public boolean p;

    public AppwallAdTeaserView(Context context) {
        super(context);
        this.b = Color.rgb(36, 36, 36);
        this.p = false;
        this.e = new ma(context);
        this.g = new LinearLayout(context);
        this.f = new TextView(context);
        this.n = new ma(context);
        this.d = new ma(context);
        this.l = new ma(context);
        this.m = new TextView(context);
        this.i = new TextView(context);
        this.j = new StarsRatingView(context);
        this.k = new TextView(context);
        this.c = new ma(context);
        kb kbVarE = kb.e(context);
        this.f4733a = kbVarE;
        float fB = kbVarE.b(6);
        this.h = new ShapeDrawable(new RoundRectShape(new float[]{fB, fB, fB, fB, fB, fB, fB, fB}, null, null));
        a();
    }

    public final void a() {
        int iB = this.f4733a.b(18);
        int iB2 = this.f4733a.b(14);
        int iB3 = this.f4733a.b(53);
        int iC = kb.c();
        int iC2 = kb.c();
        int iC3 = kb.c();
        setBackgroundColor(-1);
        ViewGroup.LayoutParams layoutParams = new RelativeLayout.LayoutParams(iB3 + iB2 + iB2, iB3 + iB + iB);
        this.e.setPadding(iB2, iB, iB2, iB);
        addView(this.e, layoutParams);
        int iB4 = this.f4733a.b(20);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(iB4, iB4);
        layoutParams2.leftMargin = this.f4733a.b(57);
        layoutParams2.topMargin = this.f4733a.b(10);
        this.c.setLayoutParams(layoutParams2);
        addView(this.c);
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(iB3, iB3);
        layoutParams3.addRule(11);
        layoutParams3.rightMargin = iB2;
        layoutParams3.topMargin = iB;
        this.g.setBackgroundDrawable(this.h);
        this.g.setOrientation(1);
        addView(this.g, layoutParams3);
        LinearLayout.LayoutParams layoutParams4 = new LinearLayout.LayoutParams(-1, -2);
        TextView textView = this.f;
        Typeface typeface = Typeface.SANS_SERIF;
        textView.setTypeface(typeface);
        this.f.setPadding(0, this.f4733a.b(10), 0, this.f4733a.b(2));
        this.f.setTextSize(2, 13.0f);
        this.f.setGravity(49);
        this.g.addView(this.f, layoutParams4);
        LinearLayout.LayoutParams layoutParams5 = new LinearLayout.LayoutParams(this.f4733a.b(20), this.f4733a.b(20));
        layoutParams5.gravity = 1;
        this.g.addView(this.n, layoutParams5);
        RelativeLayout.LayoutParams layoutParams6 = new RelativeLayout.LayoutParams(this.f4733a.b(19), -2);
        layoutParams6.addRule(15);
        layoutParams6.addRule(11);
        layoutParams6.rightMargin = this.f4733a.b(30);
        addView(this.d, layoutParams6);
        RelativeLayout.LayoutParams layoutParams7 = new RelativeLayout.LayoutParams(iB3, iB3);
        layoutParams7.addRule(10);
        layoutParams7.addRule(11);
        addView(this.l, layoutParams7);
        this.m.setTypeface(typeface);
        this.m.setTextSize(2, 18.0f);
        this.m.setTextColor(this.b);
        this.m.setPadding(0, 0, this.f4733a.b(67), 0);
        this.m.setId(iC3);
        RelativeLayout.LayoutParams layoutParams8 = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams8.leftMargin = this.f4733a.b(91);
        layoutParams8.rightMargin = this.f4733a.b(15);
        layoutParams8.topMargin = this.f4733a.b(13);
        this.m.setLayoutParams(layoutParams8);
        addView(this.m);
        this.i.setTypeface(typeface);
        this.i.setTextSize(2, 13.0f);
        this.i.setTextColor(this.b);
        RelativeLayout.LayoutParams layoutParams9 = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams9.leftMargin = this.f4733a.b(91);
        layoutParams9.addRule(3, iC3);
        this.i.setId(iC);
        this.i.setLayoutParams(layoutParams9);
        addView(this.i);
        RelativeLayout.LayoutParams layoutParams10 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams10.addRule(3, iC);
        layoutParams10.leftMargin = this.f4733a.b(91);
        layoutParams10.topMargin = this.f4733a.b(5);
        this.j.setPadding(0, 0, 0, this.f4733a.b(20));
        this.j.setStarsPadding(this.f4733a.b(2));
        this.j.setStarSize(this.f4733a.b(12));
        this.j.setId(iC2);
        addView(this.j, layoutParams10);
        RelativeLayout.LayoutParams layoutParams11 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams11.addRule(1, iC2);
        layoutParams11.addRule(3, iC);
        layoutParams11.leftMargin = this.f4733a.b(9);
        this.k.setTypeface(typeface);
        this.k.setPadding(0, this.f4733a.b(2), 0, 0);
        this.k.setTextSize(2, 13.0f);
        this.k.setTextColor(this.b);
        this.k.setGravity(16);
        addView(this.k, layoutParams11);
    }

    public NativeAppwallBanner getBanner() {
        return this.o;
    }

    public ImageView getBannerIconImageView() {
        return this.e;
    }

    public TextView getCoinsCountTextView() {
        return this.f;
    }

    public ImageView getCoinsIconImageView() {
        return this.n;
    }

    public TextView getDescriptionTextView() {
        return this.i;
    }

    public ImageView getNotificationImageView() {
        return this.c;
    }

    public ImageView getOpenImageView() {
        return this.d;
    }

    public StarsRatingView getStarsRatingView() {
        return this.j;
    }

    public ImageView getStatusIconImageView() {
        return this.l;
    }

    public TextView getTitleTextView() {
        return this.m;
    }

    public TextView getVotesCountTextView() {
        return this.k;
    }

    public boolean isViewed() {
        return this.p;
    }

    public void removeNotification() {
        removeView(this.c);
    }

    public void setNativeAppwallBanner(NativeAppwallBanner nativeAppwallBanner) {
        this.o = nativeAppwallBanner;
        this.e.setImageData(nativeAppwallBanner.getIcon());
        ImageData bubbleIcon = nativeAppwallBanner.getBubbleIcon();
        this.c.setImageData(bubbleIcon);
        String description = nativeAppwallBanner.getDescription();
        this.m.setText(nativeAppwallBanner.getTitle());
        this.i.setText(description);
        if (nativeAppwallBanner.isHasNotification()) {
            this.c.setVisibility(0);
            this.c.setImageData(bubbleIcon);
        } else {
            this.c.setVisibility(8);
        }
        if (nativeAppwallBanner.getCoins() > 0) {
            this.g.setVisibility(0);
            this.n.setImageData(nativeAppwallBanner.getCoinsIcon());
            this.f.setText(String.format(Locale.getDefault(), TimeModel.NUMBER_FORMAT, Integer.valueOf(nativeAppwallBanner.getCoins())));
            this.f.setTextColor(nativeAppwallBanner.getCoinsIconTextColor());
            this.h.getPaint().setColor(nativeAppwallBanner.getCoinsIconBgColor());
            this.d.setVisibility(8);
        } else if (nativeAppwallBanner.isAppInstalled()) {
            this.g.setVisibility(8);
            this.d.setVisibility(0);
            this.d.setImageData(nativeAppwallBanner.getGotoAppIcon());
        } else {
            this.g.setVisibility(8);
            this.d.setVisibility(8);
        }
        ImageData statusIcon = nativeAppwallBanner.getStatusIcon();
        if (statusIcon != null) {
            this.l.setVisibility(0);
            this.l.setImageData(statusIcon);
        } else {
            this.l.setVisibility(8);
        }
        if (nativeAppwallBanner.getCoins() != 0 || nativeAppwallBanner.isAppInstalled()) {
            this.i.setPadding(0, 0, this.f4733a.b(70), 0);
        } else if (statusIcon != null) {
            this.i.setPadding(0, 0, this.f4733a.b(20), 0);
        }
        if (nativeAppwallBanner.getRating() <= 0.0f) {
            this.j.setVisibility(8);
            this.k.setVisibility(8);
            TextView textView = this.i;
            textView.setPadding(textView.getPaddingLeft(), this.i.getPaddingTop(), this.i.getPaddingRight(), this.f4733a.b(20));
            return;
        }
        this.j.setRating(nativeAppwallBanner.getRating());
        this.j.setVisibility(0);
        if (nativeAppwallBanner.getVotes() <= 0) {
            this.k.setVisibility(8);
        } else {
            this.k.setText(String.format(Locale.getDefault(), TimeModel.NUMBER_FORMAT, Integer.valueOf(nativeAppwallBanner.getVotes())));
            this.k.setVisibility(0);
        }
    }

    public void setViewed(boolean z) {
        this.p = z;
    }
}
