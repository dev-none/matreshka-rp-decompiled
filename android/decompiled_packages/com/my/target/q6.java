package com.my.target;

import android.app.Activity;
import android.content.Context;
import android.graphics.Rect;
import android.net.Uri;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.webkit.ConsoleMessage;
import android.webkit.JsResult;
import android.webkit.WebView;
import android.widget.FrameLayout;
import com.my.target.common.models.IAdLoadingError;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.lang.ref.WeakReference;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public class q6 implements wa, k.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final m1 f4782a;
    public final Context b;
    public final r6 c;
    public final f1.a d;
    public final a e;
    public final n6.a f;
    public final n6 g;
    public final WeakReference h;
    public String i;
    public n6 j;
    public s6 k;
    public wa.a l;
    public c m;
    public na n;
    public boolean o;
    public f1 p;
    public k q;
    public ViewGroup r;
    public f s;
    public s6 t;
    public Uri u;
    public e v;

    public final class a implements View.OnLayoutChangeListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final n6 f4783a;

        public a(n6 n6Var) {
            this.f4783a = n6Var;
        }

        @Override // android.view.View.OnLayoutChangeListener
        public void onLayoutChange(View view, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8) {
            q6 q6Var = q6.this;
            q6Var.s = null;
            q6Var.b();
            this.f4783a.a(q6.this.c);
        }
    }

    public final class b implements f1.a {
        public b() {
        }

        @Override // com.my.target.f1.a
        public void b() {
            k kVar = q6.this.q;
            if (kVar != null) {
                kVar.dismiss();
            }
        }
    }

    public interface c {
        void a();

        void a(float f, float f2, na naVar, Context context);

        void a(IAdLoadingError iAdLoadingError);

        void a(String str, na naVar, Context context);

        void b();

        void d();
    }

    public static final class d implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final n6 f4785a;
        public final na b;
        public final Context c;
        public final k d;
        public final Uri e;

        public d(na naVar, k kVar, Uri uri, n6 n6Var, Context context) {
            this.b = naVar;
            this.c = context.getApplicationContext();
            this.d = kVar;
            this.e = uri;
            this.f4785a = n6Var;
        }

        public final /* synthetic */ void a(String str) {
            if (!TextUtils.isEmpty(str)) {
                this.f4785a.f(str);
            } else {
                this.f4785a.a("expand", "Failed to handling mraid");
                this.d.dismiss();
            }
        }

        @Override // java.lang.Runnable
        public void run() {
            final String strA = g1.a(this.b.L(), (String) k2.a().a(this.e.toString(), null, this.c).c());
            f0.f(new Runnable() { // from class: com.my.target.q6$d$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.a(strA);
                }
            });
        }
    }

    public static final class f {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public boolean f4787a = true;
        public int b;
        public int c;
        public int d;
        public int e;
        public int f;
        public int g;
        public int h;
        public Rect i;
        public Rect j;

        public int a() {
            return this.e;
        }

        public int b() {
            return this.d;
        }

        public void a(boolean z) {
            this.f4787a = z;
        }

        public boolean b(f1 f1Var) {
            if (this.i == null) {
                return false;
            }
            int i = this.h;
            int i2 = this.g;
            Rect rect = this.i;
            Rect rect2 = new Rect(i, i2, rect.right, rect.bottom);
            int i3 = this.h;
            int i4 = this.g;
            Rect rect3 = new Rect(i3, i4, this.d + i3, this.e + i4);
            Rect rect4 = new Rect();
            f1Var.b(this.f, rect3, rect4);
            return rect2.contains(rect4);
        }

        public void a(int i, int i2, int i3, int i4, int i5) {
            this.d = i;
            this.e = i2;
            this.b = i3;
            this.c = i4;
            this.f = i5;
        }

        public boolean a(Rect rect) {
            return this.d <= rect.width() && this.e <= rect.height();
        }

        public void a(f1 f1Var) {
            Rect rect;
            Rect rect2 = this.j;
            if (rect2 != null && (rect = this.i) != null) {
                int i = (rect2.top - rect.top) + this.c;
                this.g = i;
                this.h = (rect2.left - rect.left) + this.b;
                if (!this.f4787a) {
                    if (i + this.e > rect.height()) {
                        gb.a("MraidPresenter$ResizeHelper: Try to reposition creative vertically because of resize allowOffscreen:false and out of max size properties");
                        this.g = this.i.height() - this.e;
                    }
                    if (this.h + this.d > this.i.width()) {
                        gb.a("MraidPresenter$ResizeHelper: Try to reposition creative horizontally because of resize allowOffscreen:false and out of max size properties");
                        this.h = this.i.width() - this.d;
                    }
                }
                FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(this.d, this.e);
                layoutParams.topMargin = this.g;
                layoutParams.leftMargin = this.h;
                f1Var.setLayoutParams(layoutParams);
                f1Var.setCloseGravity(this.f);
                return;
            }
            gb.a("MraidPresenter$ResizeHelper: Setup views before resizing");
        }

        public boolean a(ViewGroup viewGroup, s6 s6Var) {
            this.i = new Rect();
            this.j = new Rect();
            return viewGroup.getGlobalVisibleRect(this.i) && s6Var.getGlobalVisibleRect(this.j);
        }
    }

    public q6(n6 n6Var, s6 s6Var, m1 m1Var, ViewGroup viewGroup) {
        this.d = new b();
        this.g = n6Var;
        this.k = s6Var;
        this.f4782a = m1Var;
        Context context = viewGroup.getContext();
        this.b = context;
        if (context instanceof Activity) {
            Activity activity = (Activity) context;
            this.h = new WeakReference(activity);
            this.r = (ViewGroup) activity.getWindow().getDecorView().findViewById(android.R.id.content);
        } else {
            this.h = new WeakReference(null);
            View rootView = viewGroup.getRootView();
            if (rootView != null) {
                ViewGroup viewGroup2 = (ViewGroup) rootView.findViewById(android.R.id.content);
                this.r = viewGroup2;
                if (viewGroup2 == null) {
                    this.r = (ViewGroup) rootView;
                }
            }
        }
        this.i = "loading";
        this.c = r6.e();
        e eVar = new e(n6Var, "inline");
        this.f = eVar;
        n6Var.a(eVar);
        a aVar = new a(n6Var);
        this.e = aVar;
        this.k.addOnLayoutChangeListener(aVar);
        a(s6Var);
    }

    public static q6 a(ViewGroup viewGroup) {
        return new q6(viewGroup);
    }

    @Override // com.my.target.k.a
    public void b(boolean z) {
        n6 n6Var = this.j;
        if (n6Var != null) {
            n6Var.a(z);
        } else {
            this.g.a(z);
        }
        s6 s6Var = this.t;
        if (s6Var == null) {
            return;
        }
        if (z) {
            s6Var.e();
        } else {
            s6Var.a(false);
        }
    }

    @Override // com.my.target.wa
    public m1 getView() {
        return this.f4782a;
    }

    @Override // com.my.target.wa
    public void pause() {
        s6 s6Var;
        if ((this.q == null || this.j != null) && (s6Var = this.k) != null) {
            s6Var.a(false);
        }
    }

    @Override // com.my.target.k.a
    public void r() {
        this.f4782a.setVisibility(0);
        if (this.u != null) {
            this.u = null;
            n6 n6Var = this.j;
            if (n6Var != null) {
                n6Var.a(false);
                this.j.e("hidden");
                this.j.a();
                this.j = null;
                this.g.a(true);
            }
            s6 s6Var = this.t;
            if (s6Var != null) {
                s6Var.a(true);
                if (this.t.getParent() != null) {
                    ((ViewGroup) this.t.getParent()).removeView(this.t);
                }
                this.t.a(0);
                this.t = null;
            }
        } else {
            s6 s6Var2 = this.k;
            if (s6Var2 != null) {
                if (s6Var2.getParent() != null) {
                    ((ViewGroup) this.k.getParent()).removeView(this.k);
                }
                a(this.k);
            }
        }
        f1 f1Var = this.p;
        if (f1Var != null && f1Var.getParent() != null) {
            ((ViewGroup) this.p.getParent()).removeView(this.p);
        }
        this.p = null;
        a("default");
        c cVar = this.m;
        if (cVar != null) {
            cVar.d();
        }
        b();
        this.g.a(this.c);
        s6 s6Var3 = this.k;
        if (s6Var3 != null) {
            s6Var3.e();
        }
    }

    @Override // com.my.target.wa
    public void resume() {
        s6 s6Var;
        if ((this.q == null || this.j != null) && (s6Var = this.k) != null) {
            s6Var.e();
        }
    }

    @Override // com.my.target.wa
    public void start() {
        na naVar;
        wa.a aVar = this.l;
        if (aVar == null || (naVar = this.n) == null) {
            return;
        }
        aVar.a(naVar);
    }

    @Override // com.my.target.k.a
    public void a(k kVar, FrameLayout frameLayout) {
        this.q = kVar;
        f1 f1Var = this.p;
        if (f1Var != null && f1Var.getParent() != null) {
            ((ViewGroup) this.p.getParent()).removeView(this.p);
        }
        f1 f1Var2 = new f1(this.b);
        this.p = f1Var2;
        a(f1Var2, frameLayout);
    }

    public final class e implements n6.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final n6 f4786a;
        public final String b;

        public e(n6 n6Var, String str) {
            this.f4786a = n6Var;
            this.b = str;
        }

        @Override // com.my.target.n6.a
        public void a() {
        }

        @Override // com.my.target.n6.a
        public void a(n6 n6Var, WebView webView) {
            StringBuilder sb = new StringBuilder("MraidPresenter$MyMraidBridgeListener: onPageLoaded callback from ");
            sb.append(n6Var == q6.this.j ? " second " : " primary ");
            sb.append("webview");
            gb.a(sb.toString());
            ArrayList arrayList = new ArrayList();
            if (q6.this.a()) {
                arrayList.add("'inlineVideo'");
            }
            arrayList.add("'vpaid'");
            n6Var.a(arrayList);
            n6Var.d(this.b);
            n6Var.a(n6Var.c());
            k kVar = q6.this.q;
            if (kVar == null || !kVar.isShowing()) {
                q6.this.a("default");
            } else {
                q6.this.a("expanded");
            }
            n6Var.d();
            q6 q6Var = q6.this;
            if (n6Var != q6Var.j) {
                c cVar = q6Var.m;
                if (cVar != null) {
                    cVar.a();
                }
                wa.a aVar = q6.this.l;
                if (aVar != null) {
                    aVar.a(webView);
                }
            }
        }

        @Override // com.my.target.n6.a
        public void b() {
            k kVar = q6.this.q;
            if (kVar != null) {
                kVar.dismiss();
            }
        }

        @Override // com.my.target.n6.a
        public void c() {
            q6.this.o = true;
        }

        @Override // com.my.target.n6.a
        public boolean d() {
            s6 s6Var;
            if (!q6.this.i.equals("default")) {
                gb.a("MraidPresenter$MyMraidBridgeListener: Unable to resize - wrong state for resize - " + q6.this.i);
                this.f4786a.a("resize", "wrong state for resize " + q6.this.i);
                return false;
            }
            q6 q6Var = q6.this;
            f fVar = q6Var.s;
            if (fVar == null) {
                gb.a("MraidPresenter$MyMraidBridgeListener: Unable to resize - resize properties not set");
                this.f4786a.a("resize", "resize properties not set");
                return false;
            }
            ViewGroup viewGroup = q6Var.r;
            if (viewGroup == null || (s6Var = q6Var.k) == null) {
                gb.a("MraidPresenter$MyMraidBridgeListener: Unable to resize - views not initialized");
                this.f4786a.a("resize", "views not initialized");
                return false;
            }
            if (!fVar.a(viewGroup, s6Var)) {
                gb.a("MraidPresenter$MyMraidBridgeListener: Unable to resize - views not visible");
                this.f4786a.a("resize", "views not visible");
                return false;
            }
            q6.this.p = new f1(q6.this.b);
            q6 q6Var2 = q6.this;
            q6Var2.s.a(q6Var2.p);
            q6 q6Var3 = q6.this;
            if (!q6Var3.s.b(q6Var3.p)) {
                gb.a("MraidPresenter$MyMraidBridgeListener: Unable to resize - close button is out of visible range");
                this.f4786a.a("resize", "close button is out of visible range");
                q6.this.p = null;
                return false;
            }
            ViewGroup viewGroup2 = (ViewGroup) q6.this.k.getParent();
            if (viewGroup2 != null) {
                viewGroup2.removeView(q6.this.k);
            }
            q6 q6Var4 = q6.this;
            q6Var4.p.addView(q6Var4.k, new FrameLayout.LayoutParams(-1, -1));
            q6.this.p.setOnCloseListener(new f1.a() { // from class: com.my.target.q6$e$$ExternalSyntheticLambda0
                @Override // com.my.target.f1.a
                public final void b() {
                    this.f$0.e();
                }
            });
            q6 q6Var5 = q6.this;
            q6Var5.r.addView(q6Var5.p);
            q6.this.a("resized");
            c cVar = q6.this.m;
            if (cVar == null) {
                return true;
            }
            cVar.b();
            return true;
        }

        public void e() {
            q6 q6Var = q6.this;
            f1 f1Var = q6Var.p;
            if (f1Var == null || q6Var.k == null) {
                return;
            }
            if (f1Var.getParent() != null) {
                ((ViewGroup) q6.this.p.getParent()).removeView(q6.this.p);
                q6.this.p.removeAllViews();
                q6.this.p.setOnCloseListener(null);
                q6 q6Var2 = q6.this;
                q6Var2.p = null;
                q6Var2.a(q6Var2.k);
                q6.this.a("default");
            }
            c cVar = q6.this.m;
            if (cVar != null) {
                cVar.d();
            }
        }

        @Override // com.my.target.n6.a
        public boolean b(Uri uri) {
            return q6.this.a(uri);
        }

        @Override // com.my.target.n6.a
        public void a(boolean z) {
            if (!z || q6.this.q == null) {
                this.f4786a.a(z);
            }
        }

        @Override // com.my.target.n6.a
        public boolean a(String str, JsResult jsResult) {
            gb.a("MraidPresenter$MyMraidBridgeListener: JS Alert - " + str);
            jsResult.confirm();
            return true;
        }

        @Override // com.my.target.n6.a
        public boolean a(ConsoleMessage consoleMessage, n6 n6Var) {
            StringBuilder sb = new StringBuilder("MraidPresenter$MyMraidBridgeListener: Console message: from ");
            sb.append(n6Var == q6.this.j ? " second " : " primary ");
            sb.append("webview: ");
            sb.append(consoleMessage.message());
            gb.a(sb.toString());
            return true;
        }

        @Override // com.my.target.n6.a
        public boolean a(boolean z, p6 p6Var) {
            gb.a("MraidPresenter$MyMraidBridgeListener: Orientation properties isn't supported in standard banners");
            return false;
        }

        @Override // com.my.target.n6.a
        public void a(Uri uri) {
            na naVar;
            q6 q6Var = q6.this;
            wa.a aVar = q6Var.l;
            if (aVar == null || (naVar = q6Var.n) == null) {
                return;
            }
            aVar.a(naVar, uri.toString());
        }

        @Override // com.my.target.n6.a
        public boolean a(String str) {
            na naVar;
            q6 q6Var = q6.this;
            if (!q6Var.o) {
                this.f4786a.a("vpaidEvent", "Calling VPAID command before VPAID init");
                return false;
            }
            c cVar = q6Var.m;
            if (cVar == null || (naVar = q6Var.n) == null) {
                return true;
            }
            cVar.a(str, naVar, q6Var.b);
            return true;
        }

        @Override // com.my.target.n6.a
        public boolean a(float f, float f2) {
            c cVar;
            na naVar;
            q6 q6Var = q6.this;
            if (!q6Var.o) {
                this.f4786a.a("playheadEvent", "Calling VPAID command before VPAID init");
                return false;
            }
            if (f < 0.0f || f2 < 0.0f || (cVar = q6Var.m) == null || (naVar = q6Var.n) == null) {
                return true;
            }
            cVar.a(f, f2, naVar, q6Var.b);
            return true;
        }

        @Override // com.my.target.n6.a
        public boolean a(int i, int i2, int i3, int i4, boolean z, int i5) {
            q6.this.s = new f();
            q6 q6Var = q6.this;
            if (q6Var.r == null) {
                gb.a("MraidPresenter$MyMraidBridgeListener: Unable to set resize properties: container view for resize is not defined");
                this.f4786a.a("setResizeProperties", "container view for resize is not defined");
                q6.this.s = null;
                return false;
            }
            if (i >= 50 && i2 >= 50) {
                kb kbVarE = kb.e(q6Var.b);
                q6.this.s.a(z);
                q6.this.s.a(kbVarE.b(i), kbVarE.b(i2), kbVarE.b(i3), kbVarE.b(i4), i5);
                if (z) {
                    return true;
                }
                Rect rect = new Rect();
                q6.this.r.getGlobalVisibleRect(rect);
                if (q6.this.s.a(rect)) {
                    return true;
                }
                gb.a("MraidPresenter$MyMraidBridgeListener: Unable to set resize properties: allowOffscreen is false, maxSize is (" + rect.width() + StringUtils.COMMA + rect.height() + ") resize properties: (" + q6.this.s.b() + StringUtils.COMMA + q6.this.s.a() + ")");
                this.f4786a.a("setResizeProperties", "resize properties with allowOffscreen false out of viewport");
                q6.this.s = null;
                return false;
            }
            gb.a("MraidPresenter$MyMraidBridgeListener: Unable to set resize properties: properties cannot be less than closeable container");
            this.f4786a.a("setResizeProperties", "properties cannot be less than closeable container");
            q6.this.s = null;
            return false;
        }
    }

    @Override // com.my.target.wa
    public void a(na naVar) {
        s6 s6Var;
        this.n = naVar;
        String strM = naVar.M();
        if (strM != null && (s6Var = this.k) != null) {
            this.g.a(s6Var);
            this.g.f(strM);
        } else {
            a(m.q);
        }
    }

    @Override // com.my.target.wa
    public void a(wa.a aVar) {
        this.l = aVar;
    }

    public void b() {
        int[] iArr = new int[2];
        DisplayMetrics displayMetrics = this.b.getResources().getDisplayMetrics();
        this.c.a(displayMetrics.widthPixels, displayMetrics.heightPixels);
        ViewGroup viewGroup = this.r;
        if (viewGroup != null) {
            viewGroup.getLocationOnScreen(iArr);
            r6 r6Var = this.c;
            int i = iArr[0];
            r6Var.c(i, iArr[1], this.r.getMeasuredWidth() + i, iArr[1] + this.r.getMeasuredHeight());
        }
        if (!this.i.equals("expanded") && !this.i.equals("resized")) {
            this.f4782a.getLocationOnScreen(iArr);
            r6 r6Var2 = this.c;
            int i2 = iArr[0];
            r6Var2.b(i2, iArr[1], this.f4782a.getMeasuredWidth() + i2, iArr[1] + this.f4782a.getMeasuredHeight());
        }
        s6 s6Var = this.t;
        if (s6Var != null) {
            s6Var.getLocationOnScreen(iArr);
            r6 r6Var3 = this.c;
            int i3 = iArr[0];
            r6Var3.a(i3, iArr[1], this.t.getMeasuredWidth() + i3, iArr[1] + this.t.getMeasuredHeight());
            return;
        }
        s6 s6Var2 = this.k;
        if (s6Var2 != null) {
            s6Var2.getLocationOnScreen(iArr);
            r6 r6Var4 = this.c;
            int i4 = iArr[0];
            r6Var4.a(i4, iArr[1], this.k.getMeasuredWidth() + i4, iArr[1] + this.k.getMeasuredHeight());
        }
    }

    @Override // com.my.target.wa
    public void a(boolean z) {
        s6 s6Var;
        if ((this.q == null || this.j != null) && (s6Var = this.k) != null) {
            s6Var.a(z);
        }
    }

    @Override // com.my.target.wa
    public void a(int i) {
        a("hidden");
        a((c) null);
        a((wa.a) null);
        this.g.a();
        f1 f1Var = this.p;
        if (f1Var != null) {
            f1Var.removeAllViews();
            this.p.setOnCloseListener(null);
            ViewParent parent = this.p.getParent();
            if (parent != null) {
                ((ViewGroup) parent).removeView(this.p);
            }
            this.p = null;
        }
        s6 s6Var = this.k;
        if (s6Var != null) {
            if (i <= 0) {
                s6Var.a(true);
            }
            if (this.k.getParent() != null) {
                ((ViewGroup) this.k.getParent()).removeView(this.k);
            }
            this.k.a(i);
            this.k = null;
        }
        n6 n6Var = this.j;
        if (n6Var != null) {
            n6Var.a();
            this.j = null;
        }
        s6 s6Var2 = this.t;
        if (s6Var2 != null) {
            s6Var2.a(true);
            if (this.t.getParent() != null) {
                ((ViewGroup) this.t.getParent()).removeView(this.t);
            }
            this.t.a(0);
            this.t = null;
        }
    }

    public q6(ViewGroup viewGroup) {
        this(n6.b("inline"), new s6(viewGroup.getContext()), new m1(viewGroup.getContext()), viewGroup);
    }

    public void a(c cVar) {
        this.m = cVar;
    }

    public void a(f1 f1Var, FrameLayout frameLayout) {
        this.f4782a.setVisibility(8);
        frameLayout.addView(f1Var, new ViewGroup.LayoutParams(-1, -1));
        if (this.u != null) {
            this.j = n6.b("inline");
            s6 s6Var = new s6(this.b);
            this.t = s6Var;
            a(this.j, s6Var, f1Var);
        } else {
            s6 s6Var2 = this.k;
            if (s6Var2 != null && s6Var2.getParent() != null) {
                ((ViewGroup) this.k.getParent()).removeView(this.k);
                f1Var.addView(this.k, new ViewGroup.LayoutParams(-1, -1));
                a("expanded");
            }
        }
        f1Var.setCloseVisible(true);
        f1Var.setOnCloseListener(this.d);
        c cVar = this.m;
        if (cVar != null && this.u == null) {
            cVar.b();
        }
        gb.a("MraidPresenter: MRAID dialog create");
    }

    public void a(n6 n6Var, s6 s6Var, f1 f1Var) {
        Uri uri;
        e eVar = new e(n6Var, "inline");
        this.v = eVar;
        n6Var.a(eVar);
        f1Var.addView(s6Var, new ViewGroup.LayoutParams(-1, -1));
        n6Var.a(s6Var);
        k kVar = this.q;
        if (kVar == null) {
            return;
        }
        na naVar = this.n;
        if (naVar != null && (uri = this.u) != null) {
            f0.b(new d(naVar, kVar, uri, n6Var, this.b));
        } else {
            kVar.dismiss();
        }
    }

    public void a(s6 s6Var) {
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
        layoutParams.gravity = 1;
        this.f4782a.addView(s6Var, 0);
        s6Var.setLayoutParams(layoutParams);
    }

    public boolean a() {
        s6 s6Var;
        Activity activity = (Activity) this.h.get();
        if (activity == null || (s6Var = this.k) == null) {
            return false;
        }
        return kb.a(activity, s6Var);
    }

    public void a(String str) {
        gb.a("MraidPresenter: MRAID state set to " + str);
        this.i = str;
        this.g.e(str);
        n6 n6Var = this.j;
        if (n6Var != null) {
            n6Var.e(str);
        }
        if ("hidden".equals(str)) {
            gb.a("MraidPresenter: Mraid on close");
        }
    }

    public boolean a(Uri uri) {
        if (this.k == null) {
            gb.a("MraidPresenter: Cannot expand - webview destroyed");
            return false;
        }
        if (!this.i.equals("default") && !this.i.equals("resized")) {
            return false;
        }
        this.u = uri;
        k.a(this, this.b).show();
        return true;
    }

    public final void a(IAdLoadingError iAdLoadingError) {
        c cVar = this.m;
        if (cVar != null) {
            cVar.a(iAdLoadingError);
        }
    }
}
