package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;
import androidx.core.view.ViewCompat;
import com.my.target.common.models.ImageData;
import com.my.target.nativeads.constants.NativeAdColor;
import com.pravera.flutter_foreground_task.PreferencesKey;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class c1 extends ViewGroup implements View.OnTouchListener, j5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final TextView f4563a;
    public final TextView b;
    public final TextView c;
    public final y2 d;
    public final kb e;
    public final ma f;
    public final b1 g;
    public final HashMap h;
    public final i i;
    public final Button j;
    public final int k;
    public final int l;
    public final int m;
    public final boolean n;
    public final double o;
    public j5.a p;

    public class a implements View.OnClickListener {
        public a() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            j5.a aVar = c1.this.p;
            if (aVar != null) {
                aVar.c();
            }
        }
    }

    public interface b {
        void a(g4 g4Var, int i);

        void a(List list);
    }

    public c1(Context context) {
        super(context);
        kb.a(this, -1, NativeAdColor.BACKGROUND_TOUCH);
        boolean z = (context.getResources().getConfiguration().screenLayout & 15) >= 3;
        this.n = z;
        this.o = z ? 0.5d : 0.7d;
        y2 y2Var = new y2(context);
        this.d = y2Var;
        kb kbVarE = kb.e(context);
        this.e = kbVarE;
        TextView textView = new TextView(context);
        this.f4563a = textView;
        TextView textView2 = new TextView(context);
        this.b = textView2;
        TextView textView3 = new TextView(context);
        this.c = textView3;
        ma maVar = new ma(context);
        this.f = maVar;
        Button button = new Button(context);
        this.j = button;
        b1 b1Var = new b1(context);
        this.g = b1Var;
        y2Var.setContentDescription("close");
        y2Var.setVisibility(4);
        maVar.setContentDescription(PreferencesKey.NOTIFICATION_CONTENT_ICON);
        textView.setLines(1);
        TextUtils.TruncateAt truncateAt = TextUtils.TruncateAt.END;
        textView.setEllipsize(truncateAt);
        textView2.setLines(1);
        textView2.setEllipsize(truncateAt);
        textView3.setTextColor(ViewCompat.MEASURED_STATE_MASK);
        boolean z2 = z;
        button.setPadding(kbVarE.b(15), kbVarE.b(10), kbVarE.b(15), kbVarE.b(10));
        button.setMinimumWidth(kbVarE.b(100));
        button.setMaxEms(12);
        button.setTransformationMethod(null);
        button.setSingleLine();
        button.setTextSize(18.0f);
        button.setEllipsize(truncateAt);
        button.setElevation(kbVarE.b(2));
        kb.b(button, -16733198, -16746839, kbVarE.b(2));
        button.setTextColor(-1);
        b1Var.setPadding(0, 0, 0, kbVarE.b(8));
        b1Var.setSideSlidesMargins(kbVarE.b(10));
        if (z2) {
            int iB = kbVarE.b(18);
            this.l = iB;
            this.k = iB;
            textView.setTextSize(kbVarE.d(24));
            textView3.setTextSize(kbVarE.d(20));
            textView2.setTextSize(kbVarE.d(20));
            this.m = kbVarE.b(96);
            textView.setTypeface(null, 1);
        } else {
            this.k = kbVarE.b(12);
            this.l = kbVarE.b(10);
            textView.setTextSize(22.0f);
            textView3.setTextSize(18.0f);
            textView2.setTextSize(18.0f);
            this.m = kbVarE.b(64);
        }
        i iVar = new i(context);
        this.i = iVar;
        kb.b(this, "ad_view");
        kb.b(textView, "title_text");
        kb.b(textView3, "description_text");
        kb.b(maVar, "icon_image");
        kb.b(y2Var, "close_button");
        kb.b(textView2, "category_text");
        addView(b1Var);
        addView(maVar);
        addView(textView);
        addView(textView2);
        addView(iVar);
        addView(textView3);
        addView(y2Var);
        addView(button);
        this.h = new HashMap();
    }

    public final /* synthetic */ void a(View view) {
        j5.a aVar = this.p;
        if (aVar != null) {
            aVar.a(1);
        }
    }

    public final /* synthetic */ void b(View view) {
        j5.a aVar = this.p;
        if (aVar != null) {
            aVar.a(2);
        }
    }

    @Override // com.my.target.j5
    public void c() {
        this.d.setVisibility(0);
    }

    @Override // com.my.target.j5
    public View getCloseButton() {
        return this.d;
    }

    public int[] getNumbersOfCurrentShowingCards() {
        int iFindFirstVisibleItemPosition = this.g.getCardLayoutManager().findFirstVisibleItemPosition();
        int iFindLastCompletelyVisibleItemPosition = this.g.getCardLayoutManager().findLastCompletelyVisibleItemPosition();
        int i = 0;
        if (iFindFirstVisibleItemPosition == -1 || iFindLastCompletelyVisibleItemPosition == -1) {
            return new int[0];
        }
        int i2 = (iFindLastCompletelyVisibleItemPosition - iFindFirstVisibleItemPosition) + 1;
        int[] iArr = new int[i2];
        while (i < i2) {
            iArr[i] = iFindFirstVisibleItemPosition;
            i++;
            iFindFirstVisibleItemPosition++;
        }
        return iArr;
    }

    @Override // com.my.target.j5
    public View getView() {
        return this;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int i5;
        int i6 = i3 - i;
        int i7 = i4 - i2;
        y2 y2Var = this.d;
        y2Var.layout(i3 - y2Var.getMeasuredWidth(), i2, i3, this.d.getMeasuredHeight() + i2);
        kb.a(this.i, this.d.getLeft() - this.i.getMeasuredWidth(), this.d.getTop(), this.d.getLeft(), this.d.getBottom());
        if (i7 > i6 || this.n) {
            int bottom = this.d.getBottom();
            int measuredHeight = this.g.getMeasuredHeight() + Math.max(this.f4563a.getMeasuredHeight() + this.b.getMeasuredHeight(), this.f.getMeasuredHeight()) + this.c.getMeasuredHeight();
            int i8 = this.l;
            int i9 = measuredHeight + (i8 * 2);
            if (i9 < i7 && (i5 = (i7 - i9) / 2) > bottom) {
                bottom = i5;
            }
            ma maVar = this.f;
            maVar.layout(i8 + i, bottom, maVar.getMeasuredWidth() + i + this.l, i2 + this.f.getMeasuredHeight() + bottom);
            this.f4563a.layout(this.f.getRight(), bottom, this.f.getRight() + this.f4563a.getMeasuredWidth(), this.f4563a.getMeasuredHeight() + bottom);
            this.b.layout(this.f.getRight(), this.f4563a.getBottom(), this.f.getRight() + this.b.getMeasuredWidth(), this.f4563a.getBottom() + this.b.getMeasuredHeight());
            int iMax = Math.max(Math.max(this.f.getBottom(), this.b.getBottom()), this.f4563a.getBottom());
            TextView textView = this.c;
            int i10 = this.l + i;
            textView.layout(i10, iMax, textView.getMeasuredWidth() + i10, this.c.getMeasuredHeight() + iMax);
            int iMax2 = Math.max(iMax, this.c.getBottom());
            int i11 = this.l;
            int i12 = iMax2 + i11;
            b1 b1Var = this.g;
            b1Var.layout(i + i11, i12, i3, b1Var.getMeasuredHeight() + i12);
            this.g.a(!this.n);
            return;
        }
        this.g.a(false);
        ma maVar2 = this.f;
        int i13 = this.l;
        maVar2.layout(i13, (i4 - i13) - maVar2.getMeasuredHeight(), this.l + this.f.getMeasuredWidth(), i4 - this.l);
        int iMax3 = ((Math.max(this.f.getMeasuredHeight(), this.j.getMeasuredHeight()) - this.f4563a.getMeasuredHeight()) - this.b.getMeasuredHeight()) / 2;
        if (iMax3 < 0) {
            iMax3 = 0;
        }
        this.b.layout(this.f.getRight(), ((i4 - this.l) - iMax3) - this.b.getMeasuredHeight(), this.f.getRight() + this.b.getMeasuredWidth(), (i4 - this.l) - iMax3);
        this.f4563a.layout(this.f.getRight(), this.b.getTop() - this.f4563a.getMeasuredHeight(), this.f.getRight() + this.f4563a.getMeasuredWidth(), this.b.getTop());
        int iMax4 = (Math.max(this.f.getMeasuredHeight(), this.f4563a.getMeasuredHeight() + this.b.getMeasuredHeight()) - this.j.getMeasuredHeight()) / 2;
        if (iMax4 < 0) {
            iMax4 = 0;
        }
        Button button = this.j;
        int measuredWidth = (i3 - this.l) - button.getMeasuredWidth();
        int measuredHeight2 = ((i4 - this.l) - iMax4) - this.j.getMeasuredHeight();
        int i14 = this.l;
        button.layout(measuredWidth, measuredHeight2, i3 - i14, (i4 - i14) - iMax4);
        b1 b1Var2 = this.g;
        int i15 = this.l;
        b1Var2.layout(i15, i15, i3, b1Var2.getMeasuredHeight() + i15);
        this.c.layout(0, 0, 0, 0);
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        this.d.measure(View.MeasureSpec.makeMeasureSpec(size, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
        this.f.measure(View.MeasureSpec.makeMeasureSpec(this.m, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.m, Integer.MIN_VALUE));
        this.i.measure(i, i2);
        if (size2 > size || this.n) {
            this.j.setVisibility(8);
            int measuredHeight = this.d.getMeasuredHeight();
            if (this.n) {
                measuredHeight = this.l;
            }
            this.f4563a.measure(View.MeasureSpec.makeMeasureSpec((size - (this.l * 2)) - this.f.getMeasuredWidth(), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
            this.b.measure(View.MeasureSpec.makeMeasureSpec((size - (this.l * 2)) - this.f.getMeasuredWidth(), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
            this.c.measure(View.MeasureSpec.makeMeasureSpec(size - (this.l * 2), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
            int iMax = ((size2 - measuredHeight) - Math.max(this.f4563a.getMeasuredHeight() + this.b.getMeasuredHeight(), this.f.getMeasuredHeight() - (this.l * 2))) - this.c.getMeasuredHeight();
            int i3 = size - this.l;
            if (size2 > size) {
                double d = iMax / size2;
                double d2 = this.o;
                if (d > d2) {
                    iMax = (int) (((double) size2) * d2);
                }
            }
            if (this.n) {
                this.g.measure(View.MeasureSpec.makeMeasureSpec(i3, 1073741824), View.MeasureSpec.makeMeasureSpec(iMax - (this.l * 2), Integer.MIN_VALUE));
            } else {
                this.g.measure(View.MeasureSpec.makeMeasureSpec(i3, 1073741824), View.MeasureSpec.makeMeasureSpec(iMax - (this.l * 2), 1073741824));
            }
        } else {
            this.j.setVisibility(0);
            this.j.measure(View.MeasureSpec.makeMeasureSpec(size, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
            int measuredWidth = this.j.getMeasuredWidth();
            int i4 = (size / 2) - (this.l * 2);
            if (measuredWidth > i4) {
                this.j.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
            }
            this.f4563a.measure(View.MeasureSpec.makeMeasureSpec((((size - this.f.getMeasuredWidth()) - measuredWidth) - this.k) - this.l, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
            this.b.measure(View.MeasureSpec.makeMeasureSpec((((size - this.f.getMeasuredWidth()) - measuredWidth) - this.k) - this.l, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
            this.g.measure(View.MeasureSpec.makeMeasureSpec(size - this.l, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec((((size2 - Math.max(this.f.getMeasuredHeight(), Math.max(this.j.getMeasuredHeight(), this.f4563a.getMeasuredHeight() + this.b.getMeasuredHeight()))) - (this.l * 2)) - this.g.getPaddingBottom()) - this.g.getPaddingTop(), Integer.MIN_VALUE));
        }
        setMeasuredDimension(size, size2);
    }

    @Override // android.view.View.OnTouchListener
    public boolean onTouch(View view, MotionEvent motionEvent) {
        if (!this.h.containsKey(view)) {
            return false;
        }
        if (!((Boolean) this.h.get(view)).booleanValue()) {
            return true;
        }
        int action = motionEvent.getAction();
        if (action == 0) {
            setBackgroundColor(NativeAdColor.BACKGROUND_TOUCH);
        } else if (action == 1) {
            setBackgroundColor(-1);
            if (this.p != null) {
                Button button = this.j;
                this.p.a((view == button && Boolean.TRUE.equals(this.h.get(button))) ? 2 : 1);
            }
        } else if (action == 3) {
            setBackgroundColor(-1);
        }
        return true;
    }

    @Override // com.my.target.j5
    public void setBanner(o4 o4Var) {
        ImageData imageDataM = o4Var.M();
        if (imageDataM == null || imageDataM.getData() == null) {
            Bitmap bitmapA = l0.a(this.e.b(28));
            if (bitmapA != null) {
                this.d.a(bitmapA, false);
            }
        } else {
            this.d.a(imageDataM.getData(), true);
        }
        this.j.setText(o4Var.i());
        ImageData imageDataQ = o4Var.q();
        if (imageDataQ != null) {
            this.f.setPlaceholderDimensions(imageDataQ.getWidth(), imageDataQ.getHeight());
            a3.b(imageDataQ, this.f);
        }
        this.f4563a.setTextColor(ViewCompat.MEASURED_STATE_MASK);
        this.f4563a.setText(o4Var.A());
        String strF = o4Var.f();
        String strZ = o4Var.z();
        String str = "";
        if (!TextUtils.isEmpty(strF)) {
            str = "" + strF;
        }
        if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(strZ)) {
            str = str + ", ";
        }
        if (!TextUtils.isEmpty(strZ)) {
            str = str + strZ;
        }
        if (TextUtils.isEmpty(str)) {
            this.b.setVisibility(8);
        } else {
            this.b.setText(str);
            this.b.setVisibility(0);
        }
        this.c.setText(o4Var.k());
        this.g.a(o4Var.S());
        c cVarA = o4Var.a();
        if (cVarA != null) {
            a(cVarA);
        } else {
            this.i.setVisibility(8);
        }
    }

    public void setCarouselListener(b bVar) {
        this.g.setCarouselListener(bVar);
    }

    @Override // com.my.target.j5
    public void setClickArea(d1 d1Var) {
        boolean z = true;
        if (d1Var.m) {
            setOnClickListener(new View.OnClickListener() { // from class: com.my.target.c1$$ExternalSyntheticLambda0
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    this.f$0.a(view);
                }
            });
            kb.a(this, -1, NativeAdColor.BACKGROUND_TOUCH);
            setClickable(true);
            this.j.setOnClickListener(new View.OnClickListener() { // from class: com.my.target.c1$$ExternalSyntheticLambda1
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    this.f$0.b(view);
                }
            });
            return;
        }
        this.f4563a.setOnTouchListener(this);
        this.b.setOnTouchListener(this);
        this.f.setOnTouchListener(this);
        this.c.setOnTouchListener(this);
        this.j.setOnTouchListener(this);
        setOnTouchListener(this);
        this.h.put(this.f4563a, Boolean.valueOf(d1Var.f4588a));
        this.h.put(this.b, Boolean.valueOf(d1Var.k));
        this.h.put(this.f, Boolean.valueOf(d1Var.c));
        this.h.put(this.c, Boolean.valueOf(d1Var.b));
        HashMap map = this.h;
        Button button = this.j;
        if (!d1Var.l && !d1Var.g) {
            z = false;
        }
        map.put(button, Boolean.valueOf(z));
        this.h.put(this, Boolean.valueOf(d1Var.l));
    }

    @Override // com.my.target.j5
    public void setInterstitialPromoViewListener(j5.a aVar) {
        this.p = aVar;
    }

    private void a(c cVar) {
        this.i.setImageBitmap(cVar.c().getBitmap());
        this.i.setOnClickListener(new a());
    }
}
