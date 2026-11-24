package com.my.target;

import android.content.Context;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.graphics.Point;
import android.text.TextUtils;
import android.util.TypedValue;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import com.my.target.common.models.ImageData;
import com.my.target.nativeads.views.MediaAdView;

/* JADX INFO: loaded from: classes6.dex */
public class x4 extends RelativeLayout {
    public static final int i = kb.c();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final y2 f4860a;
    public final RelativeLayout.LayoutParams b;
    public final ma c;
    public final r0 d;
    public final kb e;
    public final i f;
    public ImageData g;
    public ImageData h;

    public x4(Context context) {
        super(context);
        setBackgroundColor(0);
        kb kbVarE = kb.e(context);
        this.e = kbVarE;
        ma maVar = new ma(context);
        this.c = maVar;
        int i2 = i;
        maVar.setId(i2);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams.addRule(13);
        maVar.setLayoutParams(layoutParams);
        kb.b(maVar, "image_view");
        addView(maVar);
        y2 y2Var = new y2(context);
        this.f4860a = y2Var;
        y2Var.a(l0.a((int) TypedValue.applyDimension(1, 28.0f, context.getResources().getDisplayMetrics())), false);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, -2);
        this.b = layoutParams2;
        layoutParams2.addRule(7, i2);
        layoutParams2.addRule(6, i2);
        y2Var.setLayoutParams(layoutParams2);
        r0 r0Var = new r0(context);
        this.d = r0Var;
        i iVar = new i(context);
        this.f = iVar;
        iVar.setVisibility(8);
        int iB = kbVarE.b(10);
        LinearLayout.LayoutParams layoutParams3 = new LinearLayout.LayoutParams(-2, -2);
        layoutParams3.leftMargin = iB;
        layoutParams3.gravity = 16;
        LinearLayout linearLayout = new LinearLayout(context);
        RelativeLayout.LayoutParams layoutParams4 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams4.setMargins(iB, iB, iB, iB);
        layoutParams4.addRule(5, i2);
        layoutParams4.addRule(6, i2);
        linearLayout.setOrientation(0);
        linearLayout.addView(r0Var);
        linearLayout.addView(iVar, layoutParams3);
        kb.b(y2Var, "close_button");
        addView(y2Var);
        kb.b(r0Var, "age_bordering");
        addView(linearLayout, layoutParams4);
    }

    public void a(ImageData imageData, ImageData imageData2, ImageData imageData3) {
        this.h = imageData;
        this.g = imageData2;
        Bitmap bitmap = imageData3 != null ? imageData3.getBitmap() : null;
        if (bitmap != null) {
            this.f4860a.a(bitmap, true);
            this.b.leftMargin = -this.f4860a.getMeasuredWidth();
            RelativeLayout.LayoutParams layoutParams = this.b;
            layoutParams.bottomMargin = layoutParams.leftMargin;
        }
        a();
    }

    public y2 getCloseButton() {
        return this.f4860a;
    }

    public ImageView getImageView() {
        return this.c;
    }

    @Override // android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        a();
    }

    public void setAgeRestrictions(String str) {
        if (TextUtils.isEmpty(str)) {
            this.d.setVisibility(8);
            return;
        }
        this.d.a(1, -7829368);
        this.d.setPadding(this.e.b(2), 0, 0, 0);
        this.d.setTextColor(MediaAdView.COLOR_PLACEHOLDER_GRAY);
        this.d.a(1, MediaAdView.COLOR_PLACEHOLDER_GRAY, this.e.b(3));
        this.d.setBackgroundColor(1711276032);
        this.d.setText(str);
    }

    public void a(c cVar, View.OnClickListener onClickListener) {
        this.f.setVisibility(0);
        this.f.setImageBitmap(cVar.c().getBitmap());
        this.f.setOnClickListener(onClickListener);
    }

    public final void a() {
        Point pointB = kb.b(getContext());
        int i2 = pointB.x;
        int i3 = pointB.y;
        if (i2 <= 0 || i3 <= 0) {
            return;
        }
        ImageData imageData = ((float) i2) / ((float) i3) > 1.0f ? this.h : this.g;
        if (imageData == null && (imageData = this.h) == null) {
            imageData = this.g;
        }
        if (imageData == null) {
            return;
        }
        this.c.setImageData(imageData);
    }
}
