package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;
import androidx.core.view.ViewCompat;
import com.my.target.common.views.StarsRatingView;
import com.my.target.nativeads.constants.NativeAdColor;
import java.util.HashMap;

/* JADX INFO: loaded from: classes6.dex */
public class u0 extends ViewGroup implements View.OnTouchListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ma f4827a;
    public final TextView b;
    public final TextView c;
    public final Button d;
    public final kb e;
    public final StarsRatingView f;
    public final TextView g;
    public final HashMap h;
    public final boolean i;
    public View.OnClickListener j;
    public View.OnClickListener k;
    public int l;
    public int m;
    public int n;

    public u0(boolean z, Context context) {
        super(context);
        this.h = new HashMap();
        this.i = z;
        this.e = kb.e(context);
        this.f4827a = new ma(context);
        this.b = new TextView(context);
        this.c = new TextView(context);
        this.d = new Button(context);
        this.f = new StarsRatingView(context);
        this.g = new TextView(context);
        a();
    }

    public void a(View.OnClickListener onClickListener, d1 d1Var, View.OnClickListener onClickListener2) {
        this.j = onClickListener;
        this.k = onClickListener2;
        if (onClickListener == null || d1Var == null) {
            super.setOnClickListener(null);
            this.d.setOnClickListener(null);
            return;
        }
        setOnTouchListener(this);
        this.f4827a.setOnTouchListener(this);
        this.b.setOnTouchListener(this);
        this.c.setOnTouchListener(this);
        this.f.setOnTouchListener(this);
        this.g.setOnTouchListener(this);
        this.d.setOnTouchListener(this);
        this.h.put(this.f4827a, Boolean.valueOf(d1Var.d || d1Var.m));
        this.h.put(this, Boolean.valueOf(d1Var.l || d1Var.m));
        this.h.put(this.b, Boolean.valueOf(d1Var.f4588a || d1Var.m));
        this.h.put(this.c, Boolean.valueOf(d1Var.b || d1Var.m));
        this.h.put(this.f, Boolean.valueOf(d1Var.e || d1Var.m));
        this.h.put(this.g, Boolean.valueOf(d1Var.j || d1Var.m));
        this.h.put(this.d, Boolean.valueOf(d1Var.g || d1Var.m));
    }

    public Button getCtaButtonView() {
        return this.d;
    }

    public TextView getDescriptionTextView() {
        return this.c;
    }

    public TextView getDomainTextView() {
        return this.g;
    }

    public StarsRatingView getRatingView() {
        return this.f;
    }

    public ma getSmartImageView() {
        return this.f4827a;
    }

    public TextView getTitleTextView() {
        return this.b;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int i5 = (i3 - i) - (this.m * 2);
        boolean z2 = !this.i && getResources().getConfiguration().orientation == 2;
        ma maVar = this.f4827a;
        maVar.layout(0, 0, maVar.getMeasuredWidth(), this.f4827a.getMeasuredHeight());
        if (z2) {
            this.b.setTypeface(null, 1);
            this.b.layout(0, this.f4827a.getBottom(), i5, this.f4827a.getBottom() + this.b.getMeasuredHeight());
            kb.a(this, 0, 0);
            this.c.layout(0, 0, 0, 0);
            this.d.layout(0, 0, 0, 0);
            this.f.layout(0, 0, 0, 0);
            this.g.layout(0, 0, 0, 0);
            return;
        }
        this.b.setTypeface(null, 0);
        kb.a(this, 0, 0, -3355444, this.e.b(1), 0);
        this.b.layout(this.m + this.n, this.f4827a.getBottom(), this.b.getMeasuredWidth() + this.m + this.n, this.f4827a.getBottom() + this.b.getMeasuredHeight());
        this.c.layout(this.m + this.n, this.b.getBottom(), this.c.getMeasuredWidth() + this.m + this.n, this.b.getBottom() + this.c.getMeasuredHeight());
        int measuredWidth = (i5 - this.d.getMeasuredWidth()) / 2;
        Button button = this.d;
        button.layout(measuredWidth, (i4 - button.getMeasuredHeight()) - this.n, this.d.getMeasuredWidth() + measuredWidth, i4 - this.n);
        int measuredWidth2 = (i5 - this.f.getMeasuredWidth()) / 2;
        this.f.layout(measuredWidth2, (this.d.getTop() - this.n) - this.f.getMeasuredHeight(), this.f.getMeasuredWidth() + measuredWidth2, this.d.getTop() - this.n);
        int measuredWidth3 = (i5 - this.g.getMeasuredWidth()) / 2;
        this.g.layout(measuredWidth3, (this.d.getTop() - this.g.getMeasuredHeight()) - this.n, this.g.getMeasuredWidth() + measuredWidth3, this.d.getTop() - this.n);
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int measuredHeight;
        int measuredHeight2;
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        boolean z = !this.i && getResources().getConfiguration().orientation == 2;
        a(size, size2, z, size != 0 ? Integer.MIN_VALUE : 0);
        if (z) {
            measuredHeight = size2 - this.b.getMeasuredHeight();
            measuredHeight2 = this.m;
        } else {
            measuredHeight = (((size2 - this.d.getMeasuredHeight()) - (this.l * 2)) - Math.max(this.f.getMeasuredHeight(), this.g.getMeasuredHeight())) - this.c.getMeasuredHeight();
            measuredHeight2 = this.b.getMeasuredHeight();
        }
        int i3 = measuredHeight - measuredHeight2;
        if (i3 <= size) {
            size = i3;
        }
        this.f4827a.measure(View.MeasureSpec.makeMeasureSpec(size, 1073741824), View.MeasureSpec.makeMeasureSpec(size, 1073741824));
        setMeasuredDimension(size, size2);
    }

    @Override // android.view.View.OnTouchListener
    public boolean onTouch(View view, MotionEvent motionEvent) {
        if (!this.h.containsKey(view)) {
            return false;
        }
        boolean zBooleanValue = ((Boolean) this.h.get(view)).booleanValue();
        view.setClickable(zBooleanValue);
        int action = motionEvent.getAction();
        if (action != 0) {
            if (action == 1) {
                if (this.j != null) {
                    boolean zEquals = Boolean.TRUE.equals(this.h.get(this.d));
                    View.OnClickListener onClickListener = this.k;
                    if (onClickListener != null && view == this.d && zEquals) {
                        onClickListener.onClick(view);
                    } else {
                        this.j.onClick(view);
                    }
                }
                if (zBooleanValue) {
                    Button button = this.d;
                    if (view == button) {
                        button.setPressed(false);
                    } else {
                        kb.a(this, 0, 0, -3355444, this.e.b(1), 0);
                    }
                }
            } else if (action == 3 && zBooleanValue) {
                Button button2 = this.d;
                if (view == button2) {
                    button2.setPressed(false);
                } else {
                    kb.a(this, 0, 0, -3355444, this.e.b(1), 0);
                }
            }
        } else if (zBooleanValue) {
            Button button3 = this.d;
            if (view == button3) {
                button3.setPressed(true);
            } else {
                setBackgroundColor(NativeAdColor.BACKGROUND_TOUCH);
            }
        }
        return true;
    }

    public final void a() {
        kb.a(this, 0, 0, -3355444, this.e.b(1), 0);
        this.m = this.e.b(2);
        this.n = this.e.b(12);
        this.d.setPadding(this.e.b(15), this.e.b(10), this.e.b(15), this.e.b(10));
        this.d.setMinimumWidth(this.e.b(100));
        this.d.setTransformationMethod(null);
        this.d.setSingleLine();
        if (this.i) {
            this.d.setTextSize(20.0f);
        } else {
            this.d.setTextSize(18.0f);
        }
        Button button = this.d;
        TextUtils.TruncateAt truncateAt = TextUtils.TruncateAt.END;
        button.setEllipsize(truncateAt);
        this.d.setElevation(this.e.b(2));
        this.l = this.e.b(12);
        kb.b(this.d, -16733198, -16746839, this.e.b(2));
        this.d.setTextColor(-1);
        if (this.i) {
            this.b.setTextSize(20.0f);
        } else {
            this.b.setTextSize(18.0f);
        }
        this.b.setTextColor(ViewCompat.MEASURED_STATE_MASK);
        this.b.setTypeface(null, 1);
        this.b.setLines(1);
        this.b.setEllipsize(truncateAt);
        this.c.setTextColor(-7829368);
        this.c.setLines(2);
        if (this.i) {
            this.c.setTextSize(20.0f);
        } else {
            this.c.setTextSize(18.0f);
        }
        this.c.setEllipsize(truncateAt);
        if (this.i) {
            this.f.setStarSize(this.e.b(24));
        } else {
            this.f.setStarSize(this.e.b(18));
        }
        this.f.setStarsPadding(this.e.b(4));
        kb.b(this, "card_view");
        kb.b(this.b, "card_title_text");
        kb.b(this.c, "card_description_text");
        kb.b(this.g, "card_domain_text");
        kb.b(this.d, "card_cta_button");
        kb.b(this.f, "card_stars_view");
        kb.b(this.f4827a, "card_image");
        addView(this.f4827a);
        addView(this.c);
        addView(this.b);
        addView(this.d);
        addView(this.f);
        addView(this.g);
    }

    public final void a(int i, int i2, boolean z, int i3) {
        int i4 = this.m * 2;
        int i5 = i2 - i4;
        int i6 = i - i4;
        if (z) {
            this.b.measure(View.MeasureSpec.makeMeasureSpec(i, i3), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
            this.c.measure(0, 0);
            this.f.measure(0, 0);
            this.g.measure(0, 0);
            this.d.measure(0, 0);
            return;
        }
        this.b.measure(View.MeasureSpec.makeMeasureSpec(i6 - (this.n * 2), i3), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.c.measure(View.MeasureSpec.makeMeasureSpec(i6 - (this.n * 2), i3), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.f.measure(View.MeasureSpec.makeMeasureSpec(i6, i3), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.g.measure(View.MeasureSpec.makeMeasureSpec(i6, i3), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.d.measure(View.MeasureSpec.makeMeasureSpec(i6 - (this.n * 2), i3), View.MeasureSpec.makeMeasureSpec(i5 - (this.n * 2), Integer.MIN_VALUE));
    }
}
