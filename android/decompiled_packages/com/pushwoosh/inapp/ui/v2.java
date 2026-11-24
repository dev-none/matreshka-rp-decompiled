package com.pushwoosh.inapp.ui;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.graphics.drawable.InsetDrawable;
import android.media.MediaPlayer;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import com.bumptech.glide.Glide;
import com.pushwoosh.inapp.ui.activity.InAppOverlayActivity;
import com.pushwoosh.internal.utils.PWLog;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class v2 extends j1 {
    public final n1 c;
    public final LinearLayout d;
    public final v1 e;
    public final ImageView f;
    public final TextView g;
    public final int h;
    public final int i;
    public final int j;
    public final int k;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public v2(InAppOverlayActivity context, q2 content) {
        boolean z;
        InAppOverlayActivity context2;
        float f;
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(content, "content");
        n1 n1Var = new n1(context);
        this.c = n1Var;
        this.e = new v1();
        int iA = a(24.0f);
        this.h = iA;
        int iA2 = a(28.0f);
        this.i = iA2;
        this.j = a(5.0f);
        this.k = a(9.0f);
        setBackgroundColor(ViewCompat.MEASURED_STATE_MASK);
        addView(n1Var, new FrameLayout.LayoutParams(-1, -1));
        LinearLayout linearLayout = new LinearLayout(context);
        linearLayout.setOrientation(1);
        linearLayout.setPadding(iA, iA, iA, iA2);
        this.d = linearLayout;
        addView(linearLayout, new FrameLayout.LayoutParams(-1, -2, 80));
        p1.a(linearLayout, 48.0f);
        k1 k1Var = content.d;
        if (k1Var != null) {
            TextView textViewA = p1.a(context, k1Var.f5137a, k1Var.b, 28.0f, true, 0);
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -2);
            layoutParams.topMargin = 0;
            linearLayout.addView(textViewA, layoutParams);
            z = true;
        } else {
            z = false;
        }
        k1 k1Var2 = content.e;
        if (k1Var2 != null) {
            String str = k1Var2.f5137a;
            int i = k1Var2.b;
            f = 8.0f;
            context2 = context;
            TextView textViewA2 = p1.a(context2, str, i, 16.0f, false, 0);
            int iA3 = z ? a(8.0f) : 0;
            LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(-1, -2);
            layoutParams2.topMargin = iA3;
            linearLayout.addView(textViewA2, layoutParams2);
            z = true;
        } else {
            context2 = context;
            f = 8.0f;
        }
        int i2 = 0;
        for (Object obj : content.f) {
            int i3 = i2 + 1;
            if (i2 < 0) {
                CollectionsKt.throwIndexOverflow();
            }
            c0 c0Var = (c0) obj;
            int iA4 = i2 > 0 ? a(f) : z ? a(20.0f) : 0;
            LinearLayout linearLayout2 = this.d;
            TextView textViewA3 = p1.a(context2, c0Var, new r2(this));
            LinearLayout.LayoutParams layoutParams3 = new LinearLayout.LayoutParams(-1, -2);
            layoutParams3.topMargin = iA4;
            linearLayout2.addView(textViewA3, layoutParams3);
            i2 = i3;
        }
        int iA5 = a(48.0f);
        ImageView imageViewD = d();
        FrameLayout.LayoutParams layoutParams4 = new FrameLayout.LayoutParams(iA5, iA5, 8388659);
        layoutParams4.topMargin = this.j;
        layoutParams4.setMarginStart(this.k);
        Unit unit = Unit.INSTANCE;
        addView(imageViewD, layoutParams4);
        this.f = imageViewD;
        if (content.i || content.f.isEmpty()) {
            s2 onClick = new s2(this);
            Intrinsics.checkNotNullParameter(context2, "context");
            Intrinsics.checkNotNullParameter(onClick, "onClick");
            TextView textViewA4 = p1.a(context2, onClick);
            textViewA4.setBackground(p1.a(context2));
            FrameLayout.LayoutParams layoutParams5 = new FrameLayout.LayoutParams(iA5, iA5, 8388661);
            layoutParams5.topMargin = this.j;
            layoutParams5.setMarginEnd(this.k);
            addView(textViewA4, layoutParams5);
            this.g = textViewA4;
        }
        this.c.setOnFailed(new t2(this));
        this.c.setOnMuteStateChanged(new u2(this));
        n1 n1Var2 = this.c;
        String videoUrl = content.f5158a;
        String str2 = content.b;
        String str3 = content.c;
        boolean z2 = content.g;
        boolean z3 = content.h;
        n1Var2.getClass();
        Intrinsics.checkNotNullParameter(videoUrl, "videoUrl");
        n1Var2.k = videoUrl;
        n1Var2.l = str3;
        n1Var2.m = z2;
        ImageView imageView = n1Var2.d;
        Intrinsics.checkNotNullParameter(imageView, "imageView");
        if (str2 == null || str2.length() == 0) {
            imageView.setVisibility(8);
        } else {
            imageView.setVisibility(0);
            GradientDrawable gradientDrawable = new GradientDrawable();
            gradientDrawable.setColor(Color.parseColor("#E0E0E0"));
            Glide.with(imageView).load(str2).placeholder(gradientDrawable).error((Drawable) gradientDrawable).into(imageView);
        }
        n1Var2.e.setVisibility(0);
        n1Var2.setMuted(z3);
        n1Var2.d();
        e();
    }

    public static final void a(v2 this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        n1 n1Var = this$0.c;
        n1Var.setMuted(!n1Var.u);
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void b() {
        boolean zIsPlaying;
        n1 n1Var = this.c;
        n1Var.p = true;
        n1Var.a();
        MediaPlayer mediaPlayer = n1Var.i;
        if (mediaPlayer == null) {
            return;
        }
        try {
            zIsPlaying = mediaPlayer.isPlaying();
        } catch (IllegalStateException unused) {
            zIsPlaying = false;
        }
        n1Var.q = zIsPlaying;
        if (zIsPlaying) {
            try {
                mediaPlayer.pause();
            } catch (IllegalStateException e) {
                PWLog.warn("InAppVideoPlayerView", "video: pause refused (" + e + ')');
            }
        }
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void c() {
        n1 n1Var = this.c;
        n1Var.p = false;
        if (n1Var.q) {
            n1Var.q = false;
            MediaPlayer mediaPlayer = n1Var.i;
            if (mediaPlayer != null) {
                n1Var.a(mediaPlayer);
            }
        }
    }

    public final ImageView d() {
        ImageView imageView = new ImageView(getContext());
        Context context = imageView.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setShape(1);
        gradientDrawable.setColor(Color.parseColor("#66000000"));
        Intrinsics.checkNotNullParameter(context, "context");
        imageView.setBackground(new InsetDrawable((Drawable) gradientDrawable, (int) TypedValue.applyDimension(1, 7.0f, context.getResources().getDisplayMetrics())));
        int iA = a(15.0f);
        imageView.setPadding(iA, iA, iA, iA);
        imageView.setImageDrawable(this.e);
        imageView.setOnClickListener(new View.OnClickListener() { // from class: com.pushwoosh.inapp.ui.v2$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                v2.a(this.f$0, view);
            }
        });
        return imageView;
    }

    public final void e() {
        v1 v1Var = this.e;
        boolean z = this.c.u;
        if (v1Var.d != z) {
            v1Var.d = z;
            v1Var.invalidateSelf();
        }
        ImageView imageView = this.f;
        if (imageView == null) {
            return;
        }
        imageView.setContentDescription(this.c.u ? "Unmute" : "Mute");
    }

    @Override // android.view.View
    public final void onRtlPropertiesChanged(int i) {
        super.onRtlPropertiesChanged(i);
        if (this.f != null) {
            a(getSystemInsets());
        }
    }

    public final int a(float f) {
        Context context = getContext();
        Intrinsics.checkNotNullExpressionValue(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        return (int) TypedValue.applyDimension(1, f, context.getResources().getDisplayMetrics());
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Insets insets) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        ImageView button = this.f;
        if (button == null) {
            return;
        }
        LinearLayout linearLayout = this.d;
        int i = this.h;
        linearLayout.setPadding(insets.left + i, i, insets.right + i, this.i + insets.bottom);
        TextView button2 = this.g;
        if (button2 != null) {
            int layoutDirection = getLayoutDirection();
            int i2 = this.j + insets.top;
            int i3 = this.k;
            Intrinsics.checkNotNullParameter(button2, "button");
            Intrinsics.checkNotNullParameter(insets, "insets");
            int i4 = layoutDirection == 1 ? insets.left : insets.right;
            ViewGroup.LayoutParams layoutParams = button2.getLayoutParams();
            Intrinsics.checkNotNull(layoutParams, "null cannot be cast to non-null type android.widget.FrameLayout.LayoutParams");
            FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) layoutParams;
            layoutParams2.topMargin = i2;
            layoutParams2.setMarginEnd(i3 + i4);
            button2.setLayoutParams(layoutParams2);
        }
        int layoutDirection2 = getLayoutDirection();
        int i5 = this.j + insets.top;
        int i6 = this.k;
        Intrinsics.checkNotNullParameter(button, "button");
        Intrinsics.checkNotNullParameter(insets, "insets");
        int i7 = layoutDirection2 == 1 ? insets.right : insets.left;
        ViewGroup.LayoutParams layoutParams3 = button.getLayoutParams();
        Intrinsics.checkNotNull(layoutParams3, "null cannot be cast to non-null type android.widget.FrameLayout.LayoutParams");
        FrameLayout.LayoutParams layoutParams4 = (FrameLayout.LayoutParams) layoutParams3;
        layoutParams4.topMargin = i5;
        layoutParams4.setMarginStart(i6 + i7);
        button.setLayoutParams(layoutParams4);
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a() {
        b0.a(this);
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Function0 onEnd) {
        Intrinsics.checkNotNullParameter(onEnd, "onEnd");
        this.c.e();
        b0.a(onEnd, this);
    }
}
