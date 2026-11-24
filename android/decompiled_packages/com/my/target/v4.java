package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.webkit.WebView;
import android.widget.FrameLayout;
import androidx.core.view.GravityCompat;
import com.my.target.common.models.ImageData;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class v4 implements j0.a, l5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final j0 f4839a;
    public final y2 b;
    public final FrameLayout c;
    public final Handler d = new Handler(Looper.getMainLooper());
    public final i e;
    public e f;
    public d g;
    public l5.a h;
    public long i;
    public long j;
    public j4 k;
    public long l;
    public long m;
    public f n;

    public class a implements View.OnClickListener {
        public a() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            v4.this.b();
        }
    }

    public class b implements com.my.target.d.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ com.my.target.b f4841a;

        public b(com.my.target.b bVar) {
            this.f4841a = bVar;
        }

        @Override // com.my.target.d.a
        public void a(Context context) {
            l5.a aVar = v4.this.h;
            if (aVar != null) {
                aVar.a(this.f4841a, context);
            }
        }
    }

    public static class c implements View.OnClickListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final v4 f4842a;

        public c(v4 v4Var) {
            this.f4842a = v4Var;
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            l5.a aVarC = this.f4842a.c();
            v4 v4Var = this.f4842a;
            j4 j4Var = v4Var.k;
            if (aVarC == null || j4Var == null) {
                return;
            }
            aVarC.b(j4Var, v4Var.c.getContext());
        }
    }

    public static class d implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final v4 f4843a;

        public d(v4 v4Var) {
            this.f4843a = v4Var;
        }

        @Override // java.lang.Runnable
        public void run() {
            l5.a aVarC = this.f4843a.c();
            if (aVarC != null) {
                aVarC.b(this.f4843a.c.getContext());
            }
        }
    }

    public static class e implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final y2 f4844a;

        public e(y2 y2Var) {
            this.f4844a = y2Var;
        }

        @Override // java.lang.Runnable
        public void run() {
            gb.a("InterstitialHtmlPresenter: Banner became just closeable");
            this.f4844a.setVisibility(0);
        }
    }

    public v4(Context context) {
        j0 j0Var = new j0(context);
        this.f4839a = j0Var;
        y2 y2Var = new y2(context);
        this.b = y2Var;
        FrameLayout frameLayout = new FrameLayout(context);
        this.c = frameLayout;
        y2Var.setContentDescription("Close");
        kb.b(y2Var, "close_button");
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, -2);
        layoutParams.gravity = GravityCompat.END;
        y2Var.setVisibility(8);
        y2Var.setLayoutParams(layoutParams);
        FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(-1, -1);
        layoutParams2.gravity = 1;
        j0Var.setLayoutParams(layoutParams2);
        frameLayout.addView(j0Var);
        if (y2Var.getParent() == null) {
            frameLayout.addView(y2Var);
        }
        Bitmap bitmapA = l0.a(kb.e(context).b(28));
        if (bitmapA != null) {
            y2Var.a(bitmapA, false);
        }
        i iVar = new i(context);
        this.e = iVar;
        int iA = kb.a(10, context);
        FrameLayout.LayoutParams layoutParams3 = new FrameLayout.LayoutParams(-2, -2);
        layoutParams3.setMargins(iA, iA, iA, iA);
        frameLayout.addView(iVar, layoutParams3);
    }

    public static v4 a(Context context) {
        return new v4(context);
    }

    @Override // com.my.target.j0.a
    public void b(String str) {
        l5.a aVar = this.h;
        if (aVar != null) {
            aVar.a(this.k, str, 1, j().getContext());
        }
    }

    public l5.a c() {
        return this.h;
    }

    @Override // com.my.target.b5
    public void destroy() {
        a(0);
    }

    @Override // com.my.target.b5
    public View getCloseButton() {
        return this.b;
    }

    @Override // com.my.target.b5
    public View j() {
        return this.c;
    }

    /* JADX WARN: Code duplicated, block: B:17:0x003a  */
    /* JADX WARN: Code duplicated, block: B:9:0x001d  */
    @Override // com.my.target.b5
    public void pause() {
        if (this.i > 0) {
            long jCurrentTimeMillis = System.currentTimeMillis() - this.i;
            if (jCurrentTimeMillis > 0) {
                long j = this.j;
                if (jCurrentTimeMillis < j) {
                    this.j = j - jCurrentTimeMillis;
                } else {
                    this.j = 0L;
                }
            } else {
                this.j = 0L;
            }
        }
        if (this.l > 0) {
            long jCurrentTimeMillis2 = System.currentTimeMillis() - this.l;
            if (jCurrentTimeMillis2 > 0) {
                long j2 = this.m;
                if (jCurrentTimeMillis2 < j2) {
                    this.m = j2 - jCurrentTimeMillis2;
                } else {
                    this.m = 0L;
                }
            } else {
                this.m = 0L;
            }
        }
        d dVar = this.g;
        if (dVar != null) {
            this.d.removeCallbacks(dVar);
        }
        e eVar = this.f;
        if (eVar != null) {
            this.d.removeCallbacks(eVar);
        }
    }

    @Override // com.my.target.b5
    public void resume() {
        long j = this.j;
        if (j > 0) {
            a(j);
        }
        long j2 = this.m;
        if (j2 > 0) {
            b(j2);
        }
    }

    @Override // com.my.target.b5
    public void stop() {
    }

    @Override // com.my.target.l5
    public void a(t4 t4Var, j4 j4Var) {
        this.k = j4Var;
        this.f4839a.setBannerWebViewListener(this);
        String strQ = j4Var.Q();
        if (strQ == null) {
            c("failed to load, null source");
            return;
        }
        this.f4839a.setData(strQ);
        this.f4839a.setForceMediaPlayback(j4Var.P());
        ImageData imageDataM = j4Var.M();
        if (imageDataM != null) {
            this.b.a(imageDataM.getBitmap(), false);
        }
        this.b.setOnClickListener(new c(this));
        if (j4Var.L() > 0.0f) {
            gb.a("InterstitialHtmlPresenter: Banner will be allowed to close in " + j4Var.L() + " seconds");
            this.f = new e(this.b);
            long jL = (long) (j4Var.L() * 1000.0f);
            this.j = jL;
            a(jL);
        } else {
            gb.a("InterstitialHtmlPresenter: Banner is allowed to close");
            this.b.setVisibility(0);
        }
        float fR = j4Var.R();
        if (fR > 0.0f) {
            this.g = new d(this);
            long j = ((long) fR) * 1000;
            this.m = j;
            b(j);
        }
        a(j4Var);
        l5.a aVar = this.h;
        if (aVar != null) {
            aVar.a(j4Var, j());
        }
    }

    public final void c(String str) {
        l5.a aVar = this.h;
        if (aVar != null) {
            aVar.a(str);
        }
    }

    public void b() {
        com.my.target.c cVarA;
        j4 j4Var = this.k;
        if (j4Var == null || (cVarA = j4Var.a()) == null) {
            return;
        }
        f fVar = this.n;
        if (fVar == null || !fVar.b()) {
            Context context = j().getContext();
            if (fVar == null) {
                y3.a(cVarA.b(), context);
            } else {
                fVar.a(context);
            }
        }
    }

    public final void b(long j) {
        d dVar = this.g;
        if (dVar == null) {
            return;
        }
        this.d.removeCallbacks(dVar);
        this.l = System.currentTimeMillis();
        this.d.postDelayed(this.g, j);
    }

    @Override // com.my.target.l5
    public void a(int i) {
        this.f4839a.b("window.playerDestroy && window.playerDestroy();");
        this.c.removeView(this.f4839a);
        this.f4839a.a(i);
    }

    @Override // com.my.target.j0.a
    public void a(String str) {
        c(str);
    }

    @Override // com.my.target.j0.a
    public void a(WebView webView) {
        l5.a aVar = this.h;
        if (aVar != null) {
            aVar.a(webView);
        }
    }

    @Override // com.my.target.j0.a
    public void a() {
        l5.a aVar = this.h;
        if (aVar == null) {
            return;
        }
        q5 q5VarF = q5.a("WebView error").f("InterstitialHtml WebView renderer crashed");
        j4 j4Var = this.k;
        q5 q5VarE = q5VarF.e(j4Var == null ? null : j4Var.Q());
        j4 j4Var2 = this.k;
        aVar.a(q5VarE.d(j4Var2 != null ? j4Var2.r() : null));
    }

    @Override // com.my.target.l5
    public void a(l5.a aVar) {
        this.h = aVar;
    }

    public final void a(com.my.target.b bVar) {
        com.my.target.c cVarA = bVar.a();
        if (cVarA == null) {
            this.e.setVisibility(8);
            return;
        }
        this.e.setImageBitmap(cVarA.c().getBitmap());
        this.e.setOnClickListener(new a());
        List listA = cVarA.a();
        if (listA == null) {
            return;
        }
        f fVarA = f.a(listA, new q1());
        this.n = fVarA;
        fVarA.a(new b(bVar));
    }

    public final void a(long j) {
        e eVar = this.f;
        if (eVar == null) {
            return;
        }
        this.d.removeCallbacks(eVar);
        this.i = System.currentTimeMillis();
        this.d.postDelayed(this.f, j);
    }
}
