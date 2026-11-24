package com.my.target.nativeads.views;

import android.R;
import android.content.Context;
import android.graphics.drawable.GradientDrawable;
import android.graphics.drawable.StateListDrawable;
import android.util.StateSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.widget.AbsListView;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.my.target.kb;
import com.my.target.nativeads.NativeAppwallAd;
import com.my.target.nativeads.banners.NativeAppwallBanner;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class AppwallAdView extends FrameLayout implements ViewTreeObserver.OnGlobalLayoutListener, AdapterView.OnItemClickListener, AbsListView.OnScrollListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ListView f4734a;
    public final kb b;
    public final HashMap c;
    public AppwallAdViewListener d;

    public interface AppwallAdViewListener {
        void onBannerClick(NativeAppwallBanner nativeAppwallBanner);

        void onBannersShow(List<NativeAppwallBanner> list);
    }

    public static class AppwallAdapter extends ArrayAdapter<NativeAppwallBanner> {
        public AppwallAdapter(Context context, List list) {
            super(context, 0, list);
        }

        @Override // android.widget.ArrayAdapter, android.widget.Adapter
        public View getView(int i, View view, ViewGroup viewGroup) {
            NativeAppwallBanner nativeAppwallBanner = (NativeAppwallBanner) getItem(i);
            if (view == null) {
                view = new AppwallCardPlaceholder(new AppwallAdTeaserView(getContext()), getContext());
            }
            if (nativeAppwallBanner != null) {
                ((AppwallCardPlaceholder) view).getView().setNativeAppwallBanner(nativeAppwallBanner);
            }
            return view;
        }
    }

    public static class AppwallCardPlaceholder extends FrameLayout {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final AppwallAdTeaserView f4735a;
        public final LinearLayout b;

        public AppwallCardPlaceholder(AppwallAdTeaserView appwallAdTeaserView, Context context) {
            super(context);
            kb kbVarE = kb.e(context);
            this.f4735a = appwallAdTeaserView;
            int iB = kbVarE.b(9);
            int iB2 = kbVarE.b(4);
            int iB3 = kbVarE.b(2);
            LinearLayout linearLayout = new LinearLayout(context);
            this.b = linearLayout;
            linearLayout.setOrientation(1);
            linearLayout.setBackgroundColor(MediaAdView.COLOR_PLACEHOLDER_GRAY);
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -2);
            layoutParams.setMargins(iB, iB2, iB, iB2);
            appwallAdTeaserView.setLayoutParams(layoutParams);
            linearLayout.addView(appwallAdTeaserView);
            appwallAdTeaserView.setElevation(iB3);
            GradientDrawable.Orientation orientation = GradientDrawable.Orientation.TOP_BOTTOM;
            GradientDrawable gradientDrawable = new GradientDrawable(orientation, new int[]{-1, -1});
            GradientDrawable gradientDrawable2 = new GradientDrawable(orientation, new int[]{MediaAdView.COLOR_PLACEHOLDER_GRAY, MediaAdView.COLOR_PLACEHOLDER_GRAY});
            StateListDrawable stateListDrawable = new StateListDrawable();
            stateListDrawable.addState(new int[]{R.attr.state_pressed}, gradientDrawable2);
            stateListDrawable.addState(StateSet.WILD_CARD, gradientDrawable);
            appwallAdTeaserView.setBackground(stateListDrawable);
            addView(linearLayout, -2, -2);
        }

        public AppwallAdTeaserView getView() {
            return this.f4735a;
        }
    }

    public AppwallAdView(Context context) {
        super(context);
        this.c = new HashMap();
        setVerticalFadingEdgeEnabled(false);
        setBackgroundColor(-1);
        this.b = kb.e(context);
        this.f4734a = new ListView(context);
        b();
    }

    public final void a() {
        AppwallAdViewListener appwallAdViewListener;
        if (this.f4734a.getAdapter() == null) {
            return;
        }
        int lastVisiblePosition = this.f4734a.getLastVisiblePosition();
        ArrayList arrayList = new ArrayList();
        for (int firstVisiblePosition = this.f4734a.getFirstVisiblePosition(); firstVisiblePosition <= lastVisiblePosition; firstVisiblePosition++) {
            NativeAppwallBanner nativeAppwallBanner = (NativeAppwallBanner) this.f4734a.getAdapter().getItem(firstVisiblePosition);
            if (this.c.get(nativeAppwallBanner) == null) {
                arrayList.add(nativeAppwallBanner);
                this.c.put(nativeAppwallBanner, Boolean.TRUE);
            }
        }
        if (arrayList.size() <= 0 || (appwallAdViewListener = this.d) == null) {
            return;
        }
        appwallAdViewListener.onBannersShow(arrayList);
    }

    public final void b() {
        int iB = this.b.b(4);
        int iB2 = this.b.b(4);
        this.f4734a.setDividerHeight(0);
        this.f4734a.setVerticalFadingEdgeEnabled(false);
        this.f4734a.setOnItemClickListener(this);
        this.f4734a.setOnScrollListener(this);
        this.f4734a.setPadding(0, iB, 0, iB2);
        this.f4734a.setClipToPadding(false);
        addView(this.f4734a, -1, -1);
        this.f4734a.setBackgroundColor(MediaAdView.COLOR_PLACEHOLDER_GRAY);
    }

    public void notifyDataSetChanged() {
        ((AppwallAdapter) this.f4734a.getAdapter()).notifyDataSetChanged();
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        a();
        ViewTreeObserver viewTreeObserver = getViewTreeObserver();
        if (viewTreeObserver.isAlive()) {
            viewTreeObserver.addOnGlobalLayoutListener(this);
        }
    }

    @Override // android.view.ViewTreeObserver.OnGlobalLayoutListener
    public void onGlobalLayout() {
        a();
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        NativeAppwallBanner nativeAppwallBanner = (NativeAppwallBanner) this.f4734a.getAdapter().getItem(i);
        AppwallAdViewListener appwallAdViewListener = this.d;
        if (appwallAdViewListener != null) {
            appwallAdViewListener.onBannerClick(nativeAppwallBanner);
        }
    }

    @Override // android.widget.AbsListView.OnScrollListener
    public void onScroll(AbsListView absListView, int i, int i2, int i3) {
        a();
    }

    @Override // android.widget.AbsListView.OnScrollListener
    public void onScrollStateChanged(AbsListView absListView, int i) {
    }

    public void setAppwallAdViewListener(AppwallAdViewListener appwallAdViewListener) {
        this.d = appwallAdViewListener;
    }

    public void setupView(NativeAppwallAd nativeAppwallAd) {
        this.f4734a.setAdapter((ListAdapter) new AppwallAdapter(getContext(), nativeAppwallAd.getBanners()));
    }
}
