package com.my.target;

import android.app.ActionBar;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.drawable.ColorDrawable;
import android.text.SpannableStringBuilder;
import android.text.style.ForegroundColorSpan;
import android.view.MenuItem;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import com.my.target.common.MyTargetActivity;
import com.my.target.nativeads.NativeAppwallAd;
import com.my.target.nativeads.factories.NativeAppwallViewsFactory;
import com.my.target.nativeads.views.AppwallAdView;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public class u7 implements MyTargetActivity.ActivityEngine {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final NativeAppwallAd f4833a;
    public WeakReference b;
    public boolean c;

    public u7(NativeAppwallAd nativeAppwallAd) {
        this.f4833a = nativeAppwallAd;
    }

    public static u7 a(NativeAppwallAd nativeAppwallAd) {
        return new u7(nativeAppwallAd);
    }

    public void b() {
        this.c = false;
        WeakReference weakReference = this.b;
        MyTargetActivity myTargetActivity = weakReference == null ? null : (MyTargetActivity) weakReference.get();
        if (myTargetActivity != null) {
            myTargetActivity.finish();
        }
    }

    @Override // com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityAttach(MyTargetActivity myTargetActivity) {
    }

    @Override // com.my.target.common.MyTargetActivity.ActivityEngine
    public boolean onActivityBackPressed() {
        return true;
    }

    @Override // com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityCreate(MyTargetActivity myTargetActivity, Intent intent, FrameLayout frameLayout) {
        this.b = new WeakReference(myTargetActivity);
        a(myTargetActivity);
        if (myTargetActivity.getActionBar() == null) {
            LinearLayout linearLayout = new LinearLayout(myTargetActivity);
            linearLayout.setOrientation(1);
            linearLayout.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
            frameLayout.addView(linearLayout);
            a(linearLayout);
            b(linearLayout);
        } else {
            b(frameLayout);
        }
        NativeAppwallAd.AppwallAdListener listener = this.f4833a.getListener();
        if (listener != null) {
            listener.onDisplay(this.f4833a);
        }
    }

    @Override // com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityDestroy() {
        this.c = false;
        this.b = null;
        NativeAppwallAd.AppwallAdListener listener = this.f4833a.getListener();
        if (listener != null) {
            listener.onDismiss(this.f4833a);
        }
    }

    @Override // com.my.target.common.MyTargetActivity.ActivityEngine
    public boolean onActivityOptionsItemSelected(MenuItem menuItem) {
        WeakReference weakReference;
        MyTargetActivity myTargetActivity;
        if (menuItem.getItemId() != 16908332 || (weakReference = this.b) == null || (myTargetActivity = (MyTargetActivity) weakReference.get()) == null) {
            return false;
        }
        myTargetActivity.finish();
        return true;
    }

    @Override // com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityPause() {
    }

    @Override // com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityResume() {
    }

    @Override // com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityStart() {
    }

    @Override // com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityStop() {
    }

    public void a(Context context) {
        if (this.c) {
            gb.a("NativeAppwallAdEngine: Unable to open Appwall Ad twice, please dismiss currently showing ad first");
            return;
        }
        this.c = true;
        MyTargetActivity.activityEngine = this;
        Intent intent = new Intent(context, (Class<?>) MyTargetActivity.class);
        if (!(context instanceof Activity)) {
            intent.addFlags(268435456);
        }
        context.startActivity(intent);
    }

    public final void b(ViewGroup viewGroup) {
        AppwallAdView appwallView = NativeAppwallViewsFactory.getAppwallView(this.f4833a, viewGroup.getContext());
        this.f4833a.registerAppwallAdView(appwallView);
        appwallView.setLayoutParams(new ViewGroup.LayoutParams(-1, -1));
        viewGroup.addView(appwallView);
    }

    public void a() {
        b();
    }

    public final void a(MyTargetActivity myTargetActivity) {
        Window window = myTargetActivity.getWindow();
        window.addFlags(Integer.MIN_VALUE);
        myTargetActivity.setTheme(android.R.style.Theme.Material.Light.DarkActionBar);
        ActionBar actionBar = myTargetActivity.getActionBar();
        if (actionBar != null) {
            actionBar.setTitle(this.f4833a.getTitle());
            actionBar.setIcon(android.R.color.transparent);
            actionBar.setDisplayShowTitleEnabled(true);
            actionBar.setDisplayHomeAsUpEnabled(true);
            actionBar.setBackgroundDrawable(new ColorDrawable(this.f4833a.getTitleBackgroundColor()));
            a(actionBar, this.f4833a.getTitleTextColor());
            actionBar.setElevation(kb.e(myTargetActivity).b(4));
        }
        window.setStatusBarColor(this.f4833a.getTitleSupplementaryColor());
    }

    public final void a(ActionBar actionBar, int i) {
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder(actionBar.getTitle());
        spannableStringBuilder.setSpan(new ForegroundColorSpan(i), 0, actionBar.getTitle().length(), 18);
        actionBar.setTitle(spannableStringBuilder);
    }

    public final void a(ViewGroup viewGroup) {
        x xVar = new x(viewGroup.getContext());
        xVar.setTitle(this.f4833a.getTitle());
        xVar.setStripeColor(this.f4833a.getTitleSupplementaryColor());
        xVar.setMainColor(this.f4833a.getTitleBackgroundColor());
        xVar.setTitleColor(this.f4833a.getTitleTextColor());
        xVar.setLayoutParams(new ViewGroup.LayoutParams(-1, kb.e(viewGroup.getContext()).b(52)));
        viewGroup.addView(xVar);
        xVar.setOnCloseClickListener(new x.a() { // from class: com.my.target.u7$$ExternalSyntheticLambda0
            @Override // com.my.target.x.a
            public final void a() {
                this.f$0.b();
            }
        });
    }
}
