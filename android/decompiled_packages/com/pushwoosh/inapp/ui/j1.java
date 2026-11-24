package com.pushwoosh.inapp.ui;

import android.app.Activity;
import android.view.View;
import android.widget.FrameLayout;
import androidx.core.graphics.Insets;
import androidx.core.view.OnApplyWindowInsetsListener;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public abstract class j1 extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public i1 f5133a;
    public Insets b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j1(Activity context) {
        super(context, null);
        Intrinsics.checkNotNullParameter(context, "context");
        Insets NONE = Insets.NONE;
        Intrinsics.checkNotNullExpressionValue(NONE, "NONE");
        this.b = NONE;
    }

    public static final WindowInsetsCompat a(j1 this$0, View view, WindowInsetsCompat insets) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(view, "<anonymous parameter 0>");
        Intrinsics.checkNotNullParameter(insets, "insets");
        Insets insets2 = insets.getInsets(WindowInsetsCompat.Type.systemBars() | WindowInsetsCompat.Type.displayCutout());
        Intrinsics.checkNotNullExpressionValue(insets2, "insets.getInsets(\n      …layCutout()\n            )");
        this$0.b = insets2;
        this$0.a(insets2);
        return insets;
    }

    public abstract void a();

    public abstract void a(Insets insets);

    public abstract void a(Function0 function0);

    public void b() {
    }

    public void c() {
    }

    public final i1 getListener() {
        return this.f5133a;
    }

    public final Insets getSystemInsets() {
        return this.b;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        ViewCompat.setOnApplyWindowInsetsListener(this, new OnApplyWindowInsetsListener() { // from class: com.pushwoosh.inapp.ui.j1$$ExternalSyntheticLambda0
            @Override // androidx.core.view.OnApplyWindowInsetsListener
            public final WindowInsetsCompat onApplyWindowInsets(View view, WindowInsetsCompat windowInsetsCompat) {
                return j1.a(this.f$0, view, windowInsetsCompat);
            }
        });
        ViewCompat.requestApplyInsets(this);
    }

    public final void setListener(i1 i1Var) {
        this.f5133a = i1Var;
    }

    public final void a(x action) {
        i1 i1Var;
        Intrinsics.checkNotNullParameter(action, "action");
        if (action instanceof v) {
            i1 i1Var2 = this.f5133a;
            if (i1Var2 != null) {
                i1Var2.a();
                return;
            }
            return;
        }
        if (!(action instanceof w) || (i1Var = this.f5133a) == null) {
            return;
        }
        i1Var.a(action);
    }
}
