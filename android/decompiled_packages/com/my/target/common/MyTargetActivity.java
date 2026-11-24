package com.my.target.common;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.Color;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.util.AttributeSet;
import android.view.MenuItem;
import android.view.View;
import android.view.WindowInsets;
import android.view.WindowInsetsController;
import android.widget.FrameLayout;
import androidx.compose.runtime.ComposerKt;
import androidx.core.view.ViewCompat;
import com.my.target.ib;
import com.my.target.jb;
import com.my.target.o0;

/* JADX INFO: loaded from: classes6.dex */
public class MyTargetActivity extends Activity {
    public static ActivityEngine activityEngine;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public ActivityEngine f4580a;
    public FrameLayout b;
    public a c;
    public WindowInsetsController d;

    public interface ActivityEngine {
        void onActivityAttach(MyTargetActivity myTargetActivity);

        boolean onActivityBackPressed();

        void onActivityCreate(MyTargetActivity myTargetActivity, Intent intent, FrameLayout frameLayout);

        void onActivityDestroy();

        boolean onActivityOptionsItemSelected(MenuItem menuItem);

        void onActivityPause();

        void onActivityResume();

        void onActivityStart();

        void onActivityStop();
    }

    public final class a extends FrameLayout {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final View f4581a;
        public final View b;
        public final View c;
        public final View d;

        public a(MyTargetActivity myTargetActivity, Context context) {
            this(myTargetActivity, context, null);
        }

        public void a() {
            int iArgb = Color.argb(ComposerKt.providerMapsKey, Color.red(ViewCompat.MEASURED_STATE_MASK), Color.green(ViewCompat.MEASURED_STATE_MASK), Color.blue(ViewCompat.MEASURED_STATE_MASK));
            this.f4581a.setBackground(new ColorDrawable(iArgb));
            this.d.setBackground(new ColorDrawable(iArgb));
            this.b.setBackground(new ColorDrawable(iArgb));
            this.c.setBackground(new ColorDrawable(iArgb));
            if (MyTargetActivity.this.d != null) {
                float fRed = Color.red(iArgb);
                float fGreen = Color.green(iArgb);
                float fBlue = Color.blue(iArgb);
                if (16256.25f < (fRed * fRed * 0.299f) + (fGreen * fGreen * 0.587f) + (fBlue * fBlue * 0.114f)) {
                    MyTargetActivity.this.d.setSystemBarsAppearance(8, 8);
                    MyTargetActivity.this.d.setSystemBarsAppearance(16, 16);
                } else {
                    MyTargetActivity.this.d.setSystemBarsAppearance(0, 8);
                    MyTargetActivity.this.d.setSystemBarsAppearance(0, 16);
                }
            }
        }

        public final void b(FrameLayout frameLayout) {
            setLayoutParams(new FrameLayout.LayoutParams(-1, -1, 17));
            frameLayout.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
            addView(frameLayout);
            this.f4581a.setLayoutParams(new FrameLayout.LayoutParams(-1, -2, 48));
            addView(this.f4581a);
            this.b.setLayoutParams(new FrameLayout.LayoutParams(-2, -1, 5));
            addView(this.b);
            this.c.setLayoutParams(new FrameLayout.LayoutParams(-1, -2, 80));
            addView(this.c);
            this.d.setLayoutParams(new FrameLayout.LayoutParams(-2, -1, 3));
            addView(this.d);
        }

        public a(MyTargetActivity myTargetActivity, Context context, AttributeSet attributeSet) {
            this(myTargetActivity, context, attributeSet, 0);
        }

        public a(MyTargetActivity myTargetActivity, Context context, AttributeSet attributeSet, int i) {
            this(context, attributeSet, i, 0);
        }

        public a(Context context, AttributeSet attributeSet, int i, int i2) {
            super(context, attributeSet, i, i2);
            this.f4581a = new View(getContext());
            this.b = new View(getContext());
            this.c = new View(getContext());
            this.d = new View(getContext());
        }

        public final void a(final FrameLayout frameLayout) {
            b(frameLayout);
            jb.a(this, new o0() { // from class: com.my.target.common.MyTargetActivity$a$$ExternalSyntheticLambda0
                @Override // com.my.target.o0
                public final Object a(Object obj, Object obj2) {
                    return this.f$0.a(frameLayout, (View) obj, (WindowInsets) obj2);
                }
            });
        }

        public final /* synthetic */ WindowInsets a(FrameLayout frameLayout, View view, WindowInsets windowInsets) {
            ib ibVarA = jb.a(windowInsets);
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) this.b.getLayoutParams();
            layoutParams.width = ibVarA.c;
            this.b.setLayoutParams(layoutParams);
            FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) this.c.getLayoutParams();
            layoutParams2.height = ibVarA.d;
            layoutParams2.leftMargin = Math.max(ibVarA.f4662a, 0);
            layoutParams2.rightMargin = Math.max(ibVarA.c, 0);
            this.c.setLayoutParams(layoutParams2);
            FrameLayout.LayoutParams layoutParams3 = (FrameLayout.LayoutParams) this.d.getLayoutParams();
            layoutParams3.width = ibVarA.f4662a;
            this.d.setLayoutParams(layoutParams3);
            FrameLayout.LayoutParams layoutParams4 = (FrameLayout.LayoutParams) this.f4581a.getLayoutParams();
            layoutParams4.height = ibVarA.b;
            layoutParams4.leftMargin = Math.max(ibVarA.f4662a, 0);
            layoutParams4.rightMargin = Math.max(ibVarA.c, 0);
            this.f4581a.setLayoutParams(layoutParams4);
            FrameLayout.LayoutParams layoutParams5 = (FrameLayout.LayoutParams) frameLayout.getLayoutParams();
            layoutParams5.topMargin = ibVarA.b;
            layoutParams5.leftMargin = ibVarA.f4662a;
            layoutParams5.rightMargin = ibVarA.c;
            layoutParams5.bottomMargin = ibVarA.d;
            frameLayout.setLayoutParams(layoutParams5);
            FrameLayout frameLayout2 = MyTargetActivity.this.b;
            if (frameLayout2 != null) {
                frameLayout2.dispatchApplyWindowInsets(windowInsets);
            }
            view.invalidate();
            return WindowInsets.CONSUMED;
        }
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.f4580a != null) {
            if (jb.a(getApplicationInfo())) {
                getWindow().setNavigationBarContrastEnforced(false);
                this.d = getWindow().getInsetsController();
                a aVar = this.c;
                if (aVar != null) {
                    aVar.a();
                }
            }
            this.f4580a.onActivityAttach(this);
        }
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        ActivityEngine activityEngine2 = this.f4580a;
        if (activityEngine2 == null || activityEngine2.onActivityBackPressed()) {
            super.onBackPressed();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Intent intent = getIntent();
        ActivityEngine activityEngine2 = activityEngine;
        this.f4580a = activityEngine2;
        activityEngine = null;
        if (activityEngine2 == null || intent == null) {
            finish();
            return;
        }
        this.b = new FrameLayout(this);
        if (jb.a(getApplicationInfo())) {
            a aVar = new a(this, this);
            this.c = aVar;
            aVar.a(this.b);
        }
        this.f4580a.onActivityCreate(this, intent, this.b);
        View view = this.c;
        if (view == null) {
            view = this.b;
        }
        setContentView(view);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        ActivityEngine activityEngine2 = this.f4580a;
        if (activityEngine2 != null) {
            activityEngine2.onActivityDestroy();
        }
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public void onDetachedFromWindow() {
        this.d = null;
        super.onDetachedFromWindow();
    }

    @Override // android.app.Activity
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        ActivityEngine activityEngine2 = this.f4580a;
        if (activityEngine2 == null || !activityEngine2.onActivityOptionsItemSelected(menuItem)) {
            return super.onOptionsItemSelected(menuItem);
        }
        return true;
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
        ActivityEngine activityEngine2 = this.f4580a;
        if (activityEngine2 != null) {
            activityEngine2.onActivityPause();
        }
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        ActivityEngine activityEngine2 = this.f4580a;
        if (activityEngine2 != null) {
            activityEngine2.onActivityResume();
        }
    }

    @Override // android.app.Activity
    public void onStart() {
        super.onStart();
        ActivityEngine activityEngine2 = this.f4580a;
        if (activityEngine2 != null) {
            activityEngine2.onActivityStart();
        }
    }

    @Override // android.app.Activity
    public void onStop() {
        super.onStop();
        ActivityEngine activityEngine2 = this.f4580a;
        if (activityEngine2 != null) {
            activityEngine2.onActivityStop();
        }
    }
}
