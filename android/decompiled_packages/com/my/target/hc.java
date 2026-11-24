package com.my.target;

import android.content.Context;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.FrameLayout;
import com.my.target.common.models.IAdLoadingError;

/* JADX INFO: loaded from: classes6.dex */
public class hc implements xa, j0.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final j0 f4655a;
    public final m1 b;
    public wa.a c;
    public xa.a d;
    public na e;

    public hc(j0 j0Var, m1 m1Var) {
        this.f4655a = j0Var;
        this.b = m1Var;
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
        layoutParams.gravity = 1;
        m1Var.addView(j0Var, 0);
        j0Var.setLayoutParams(layoutParams);
        j0Var.setBannerWebViewListener(this);
    }

    public static hc a(Context context) {
        return new hc(context);
    }

    @Override // com.my.target.j0.a
    public void a(String str) {
    }

    @Override // com.my.target.wa
    public void a(boolean z) {
    }

    @Override // com.my.target.j0.a
    public void b(String str) {
        if (this.e != null) {
            c(str);
        }
    }

    public final void c(String str) {
        na naVar;
        wa.a aVar = this.c;
        if (aVar == null || (naVar = this.e) == null) {
            return;
        }
        aVar.a(naVar, str);
    }

    public final /* synthetic */ void d(String str) {
        e(str);
        this.f4655a.setOnLayoutListener(null);
    }

    public final void e(String str) {
        this.f4655a.setData(str);
    }

    @Override // com.my.target.wa
    public m1 getView() {
        return this.b;
    }

    @Override // com.my.target.wa
    public void pause() {
    }

    @Override // com.my.target.wa
    public void resume() {
    }

    @Override // com.my.target.wa
    public void start() {
        na naVar;
        wa.a aVar = this.c;
        if (aVar == null || (naVar = this.e) == null) {
            return;
        }
        aVar.a(naVar);
    }

    @Override // com.my.target.wa
    public void a(na naVar) {
        this.e = naVar;
        final String strM = naVar.M();
        if (strM == null) {
            a(m.q);
            return;
        }
        if (this.f4655a.getMeasuredHeight() == 0 || this.f4655a.getMeasuredWidth() == 0) {
            this.f4655a.setOnLayoutListener(new j0.d() { // from class: com.my.target.hc$$ExternalSyntheticLambda0
                @Override // com.my.target.j0.d
                public final void a() {
                    this.f$0.d(strM);
                }
            });
        } else {
            e(strM);
        }
        xa.a aVar = this.d;
        if (aVar != null) {
            aVar.a();
        }
    }

    public hc(Context context) {
        this(new j0(context), new m1(context));
    }

    @Override // com.my.target.wa
    public void a(wa.a aVar) {
        this.c = aVar;
    }

    @Override // com.my.target.wa
    public void a(int i) {
        a((xa.a) null);
        a((wa.a) null);
        if (this.f4655a.getParent() != null) {
            ((ViewGroup) this.f4655a.getParent()).removeView(this.f4655a);
        }
        this.f4655a.a(i);
    }

    @Override // com.my.target.xa
    public void a(xa.a aVar) {
        this.d = aVar;
    }

    @Override // com.my.target.j0.a
    public void a(WebView webView) {
        wa.a aVar = this.c;
        if (aVar != null) {
            aVar.a(webView);
        }
    }

    @Override // com.my.target.j0.a
    public void a() {
        wa.a aVar = this.c;
        if (aVar == null) {
            return;
        }
        q5 q5VarF = q5.a("WebView error").f("WebView renderer crashed");
        na naVar = this.e;
        q5 q5VarE = q5VarF.e(naVar == null ? null : naVar.M());
        na naVar2 = this.e;
        aVar.a(q5VarE.d(naVar2 != null ? naVar2.r() : null));
    }

    private void a(IAdLoadingError iAdLoadingError) {
        xa.a aVar = this.d;
        if (aVar != null) {
            aVar.a(iAdLoadingError);
        }
    }
}
