package com.my.target;

import android.content.Context;
import android.webkit.WebView;
import android.widget.FrameLayout;
import android.widget.ProgressBar;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public final class g7 implements k.a, j0.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final f7 f4634a;
    public bc b;
    public WeakReference c;
    public WeakReference d;
    public a e;
    public l8 f;
    public j0 g;
    public boolean h;
    public boolean i;

    public interface a {
        void a(f7 f7Var, String str, Context context);
    }

    public g7(f7 f7Var) {
        this.f4634a = f7Var;
    }

    public static g7 a(f7 f7Var) {
        return new g7(f7Var);
    }

    @Override // com.my.target.j0.a
    public void a() {
    }

    @Override // com.my.target.k.a
    public void r() {
        WeakReference weakReference = this.c;
        if (weakReference != null) {
            k kVar = (k) weakReference.get();
            if (!this.h) {
                bb.b(this.f4634a.x(), "closedByUser", -1, kVar.getContext());
            }
            this.c.clear();
            this.c = null;
        }
        bc bcVar = this.b;
        if (bcVar != null) {
            bcVar.e();
            this.b = null;
        }
        WeakReference weakReference2 = this.d;
        if (weakReference2 != null) {
            weakReference2.clear();
            this.d = null;
        }
        l8 l8Var = this.f;
        if (l8Var != null) {
            l8Var.a();
        }
        j0 j0Var = this.g;
        if (j0Var != null) {
            j0Var.a(this.f != null ? 7000 : 0);
        }
    }

    public void a(a aVar) {
        this.e = aVar;
    }

    @Override // com.my.target.k.a
    public void b(boolean z) {
        j0 j0Var;
        if (z == this.i) {
            return;
        }
        this.i = z;
        bc bcVar = this.b;
        if (bcVar == null) {
            return;
        }
        if (!z) {
            bcVar.e();
            return;
        }
        WeakReference weakReference = this.d;
        if (weakReference == null || (j0Var = (j0) weakReference.get()) == null) {
            return;
        }
        this.b.c(j0Var);
    }

    public void a(Context context) {
        k kVarA = k.a(this, context);
        this.c = new WeakReference(kVarA);
        try {
            kVarA.show();
        } catch (Throwable th) {
            th.printStackTrace();
            gb.b("Unable to start video dialog! Check myTarget MediaAdView, maybe it was created with non-Activity context");
            r();
        }
    }

    @Override // com.my.target.k.a
    public void a(final k kVar, FrameLayout frameLayout) {
        f1 f1Var = new f1(frameLayout.getContext());
        f1Var.setOnCloseListener(new f1.a() { // from class: com.my.target.g7$$ExternalSyntheticLambda0
            @Override // com.my.target.f1.a
            public final void b() {
                this.f$0.b(kVar);
            }
        });
        frameLayout.addView(f1Var, -1, -1);
        j0 j0Var = new j0(frameLayout.getContext());
        this.g = j0Var;
        j0Var.setVisibility(8);
        this.g.setBannerWebViewListener(this);
        f1Var.addView(this.g, new FrameLayout.LayoutParams(-1, -1));
        this.g.setData(this.f4634a.L());
        final ProgressBar progressBar = new ProgressBar(frameLayout.getContext(), null, android.R.attr.progressBarStyle);
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, -2);
        layoutParams.gravity = 17;
        frameLayout.addView(progressBar, layoutParams);
        frameLayout.postDelayed(new Runnable() { // from class: com.my.target.g7$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(progressBar);
            }
        }, 555L);
    }

    @Override // com.my.target.j0.a
    public void b(String str) {
        k kVar;
        WeakReference weakReference = this.c;
        if (weakReference == null || (kVar = (k) weakReference.get()) == null) {
            return;
        }
        a aVar = this.e;
        if (aVar != null) {
            aVar.a(this.f4634a, str, kVar.getContext());
        }
        this.h = true;
        b(kVar);
    }

    public final /* synthetic */ void a(ProgressBar progressBar) {
        a(this.g, progressBar);
    }

    @Override // com.my.target.j0.a
    public void a(String str) {
        gb.a("NativeAdContentController: Content JS error - " + str);
    }

    @Override // com.my.target.j0.a
    public void a(WebView webView) {
        l8 l8Var = this.f;
        if (l8Var == null) {
            return;
        }
        l8Var.a(webView, new l8.b[0]);
        this.f.c();
    }

    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void b(k kVar) {
        if (kVar.isShowing()) {
            kVar.dismiss();
        }
    }

    public final void a(j0 j0Var, ProgressBar progressBar) {
        this.f = l8.a(this.f4634a, 1, null, j0Var.getContext());
        this.d = new WeakReference(j0Var);
        progressBar.setVisibility(8);
        j0Var.setVisibility(0);
        bc bcVar = this.b;
        if (bcVar != null) {
            bcVar.e();
        }
        bc bcVarB = bc.b(this.f4634a.E(), this.f4634a.x());
        this.b = bcVarB;
        if (this.i) {
            bcVarB.c(j0Var);
        }
    }
}
