package com.my.target;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.view.View;
import android.widget.ImageView;
import android.widget.RelativeLayout;

/* JADX INFO: loaded from: classes6.dex */
public class f2 extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final RelativeLayout f4615a;
    public final ImageView b;
    public final ImageView c;
    public final kb d;
    public final boolean e;
    public final View.OnClickListener f;

    public static class a implements View.OnClickListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final Context f4616a;

        public a(Context context) {
            this.f4616a = context;
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            try {
                Intent intent = new Intent("android.intent.action.VIEW", Uri.parse("https://target.my.com/"));
                if (!(this.f4616a instanceof Activity)) {
                    intent.addFlags(268435456);
                }
                this.f4616a.startActivity(intent);
            } catch (Throwable th) {
                gb.a("FooterView$GoToMyTargetClickListener: Error - " + th.getMessage());
            }
        }
    }

    public f2(Context context, kb kbVar, boolean z) {
        super(context);
        this.f4615a = new RelativeLayout(context);
        ImageView imageView = new ImageView(context);
        this.b = imageView;
        kb.b(imageView, "logo_image");
        ImageView imageView2 = new ImageView(context);
        this.c = imageView2;
        kb.b(imageView2, "store_image");
        this.d = kbVar;
        this.e = z;
        this.f = new a(context);
    }

    public void a() {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams.addRule(12, -1);
        this.f4615a.setLayoutParams(layoutParams);
        this.b.setImageBitmap(q4.a(getContext()));
        this.f4615a.addView(this.b);
        this.f4615a.addView(this.c);
        addView(this.f4615a);
    }

    public void a(int i, boolean z) {
        int i2 = i / 3;
        if (this.e) {
            i2 = i / 5;
        }
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, i2);
        if (z) {
            layoutParams.setMargins(this.d.b(24), this.d.b(4), this.d.b(24), this.d.b(8));
        } else {
            layoutParams.setMargins(this.d.b(24), this.d.b(16), this.d.b(24), this.d.b(16));
        }
        layoutParams.addRule(15, -1);
        layoutParams.addRule(20);
        this.c.setScaleType(ImageView.ScaleType.FIT_START);
        this.c.setLayoutParams(layoutParams);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, i2);
        if (z) {
            layoutParams2.setMargins(this.d.b(8), this.d.b(4), this.d.b(8), this.d.b(8));
        } else {
            layoutParams2.setMargins(this.d.b(24), this.d.b(16), this.d.b(24), this.d.b(16));
        }
        layoutParams2.addRule(15, -1);
        layoutParams2.addRule(21);
        this.b.setScaleType(ImageView.ScaleType.FIT_END);
        this.b.setLayoutParams(layoutParams2);
        this.b.setOnClickListener(this.f);
    }
}
