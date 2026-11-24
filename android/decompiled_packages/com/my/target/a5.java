package com.my.target;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.webkit.ConsoleMessage;
import android.webkit.JsResult;
import android.webkit.WebView;
import android.widget.FrameLayout;
import com.my.tracker.ads.AdFormat;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class a5 implements l5, n6.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final f1 f4527a;
    public final r6 b;
    public final n6 c;
    public final WeakReference d;
    public final Context e;
    public final Handler f;
    public final c g;
    public final i h;
    public String i;
    public Integer j;
    public f k;
    public s6 l;
    public l5.a m;
    public j4 n;
    public boolean o;
    public long p;
    public long q;
    public boolean r;
    public boolean s;
    public p6 t;

    public class a implements View.OnClickListener {
        public a() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            a5.this.f();
        }
    }

    public class b implements d.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ com.my.target.b f4529a;

        public b(com.my.target.b bVar) {
            this.f4529a = bVar;
        }

        @Override // com.my.target.d.a
        public void a(Context context) {
            l5.a aVar = a5.this.m;
            if (aVar != null) {
                aVar.a(this.f4529a, context);
            }
        }
    }

    public static class c implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final f1 f4530a;

        public c(f1 f1Var) {
            this.f4530a = f1Var;
        }

        @Override // java.lang.Runnable
        public void run() {
            gb.a("InterstitialMraidPresenter$ShowCloseButtonRunnable: Banner became just closeable");
            this.f4530a.setCloseVisible(true);
        }
    }

    public a5(n6 n6Var, Handler handler, f1 f1Var, Context context) {
        this.s = true;
        this.t = p6.b();
        this.c = n6Var;
        this.e = context.getApplicationContext();
        this.f = handler;
        this.f4527a = f1Var;
        if (context instanceof Activity) {
            this.d = new WeakReference((Activity) context);
        } else {
            this.d = new WeakReference(null);
        }
        this.i = "loading";
        this.b = r6.e();
        f1Var.setOnCloseListener(new f1.a() { // from class: com.my.target.a5$$ExternalSyntheticLambda0
            @Override // com.my.target.f1.a
            public final void b() {
                this.f$0.g();
            }
        });
        this.g = new c(f1Var);
        this.h = new i(context);
        n6Var.a(this);
    }

    public static a5 a(Context context) {
        return new a5(context);
    }

    private boolean h() {
        s6 s6Var;
        Activity activity = (Activity) this.d.get();
        if (activity == null || (s6Var = this.l) == null) {
            return false;
        }
        return kb.a(activity, s6Var);
    }

    private void k() {
        DisplayMetrics displayMetrics = this.e.getResources().getDisplayMetrics();
        this.b.a(displayMetrics.widthPixels, displayMetrics.heightPixels);
        this.b.b(0, 0, displayMetrics.widthPixels, displayMetrics.heightPixels);
        this.b.a(0, 0, displayMetrics.widthPixels, displayMetrics.heightPixels);
        this.b.c(0, 0, displayMetrics.widthPixels, displayMetrics.heightPixels);
    }

    public final boolean a(int i, int i2) {
        return (i & i2) != 0;
    }

    @Override // com.my.target.n6.a
    public void b() {
        g();
    }

    @Override // com.my.target.n6.a
    public void c() {
        this.r = true;
    }

    @Override // com.my.target.n6.a
    public boolean d() {
        gb.a("InterstitialMraidPresenter: Resize method not used with interstitials");
        return false;
    }

    @Override // com.my.target.b5
    public void destroy() {
        a(0);
    }

    public boolean e() {
        if (!"none".equals(this.t.toString())) {
            return b(this.t.a());
        }
        if (this.s) {
            i();
            return true;
        }
        Activity activity = (Activity) this.d.get();
        if (activity != null) {
            return b(kb.a(activity));
        }
        this.c.a("setOrientationProperties", "Unable to set MRAID expand orientation to 'none'; expected passed in Activity Context.");
        return false;
    }

    public void f() {
        com.my.target.c cVarA;
        j4 j4Var = this.n;
        if (j4Var == null || (cVarA = j4Var.a()) == null) {
            return;
        }
        f fVar = this.k;
        if (fVar == null || !fVar.b()) {
            Activity activity = (Activity) this.d.get();
            if (fVar == null || activity == null) {
                y3.a(cVarA.b(), this.e);
            } else {
                fVar.a(activity);
            }
        }
    }

    public void g() {
        if (this.l == null || "loading".equals(this.i) || "hidden".equals(this.i)) {
            return;
        }
        i();
        if ("default".equals(this.i)) {
            this.f4527a.setVisibility(4);
            c("hidden");
        }
    }

    @Override // com.my.target.b5
    public View getCloseButton() {
        return null;
    }

    public void i() {
        Integer num;
        Activity activity = (Activity) this.d.get();
        if (activity != null && (num = this.j) != null) {
            activity.setRequestedOrientation(num.intValue());
        }
        this.j = null;
    }

    @Override // com.my.target.b5
    public View j() {
        return this.f4527a;
    }

    @Override // com.my.target.b5
    public void pause() {
        this.o = true;
        s6 s6Var = this.l;
        if (s6Var != null) {
            s6Var.a(false);
        }
        this.f.removeCallbacks(this.g);
        if (this.q > 0) {
            long jCurrentTimeMillis = System.currentTimeMillis() - this.q;
            if (jCurrentTimeMillis > 0) {
                long j = this.p;
                if (jCurrentTimeMillis < j) {
                    this.p = j - jCurrentTimeMillis;
                    return;
                }
            }
            this.p = 0L;
        }
    }

    @Override // com.my.target.b5
    public void resume() {
        this.o = false;
        s6 s6Var = this.l;
        if (s6Var != null) {
            s6Var.e();
        }
        long j = this.p;
        if (j > 0) {
            a(j);
        }
    }

    @Override // com.my.target.b5
    public void stop() {
        this.o = true;
        s6 s6Var = this.l;
        if (s6Var != null) {
            s6Var.a(false);
        }
    }

    private void c(String str) {
        j4 j4Var;
        gb.a("InterstitialMraidPresenter: MRAID state set to " + str);
        this.i = str;
        this.c.e(str);
        if ("hidden".equals(str)) {
            gb.a("InterstitialMraidPresenter: Mraid on close");
            l5.a aVar = this.m;
            if (aVar == null || (j4Var = this.n) == null) {
                return;
            }
            aVar.b(j4Var, this.e);
        }
    }

    @Override // com.my.target.l5
    public void a(t4 t4Var, j4 j4Var) {
        this.n = j4Var;
        long jL = (long) (j4Var.L() * 1000.0f);
        this.p = jL;
        if (jL > 0) {
            this.f4527a.setCloseVisible(false);
            gb.a("InterstitialMraidPresenter: Banner will be allowed to close in " + this.p + " millis");
            a(this.p);
        } else {
            gb.a("InterstitialMraidPresenter: Banner is allowed to close");
            this.f4527a.setCloseVisible(true);
        }
        String strQ = j4Var.Q();
        if (strQ != null) {
            b(strQ);
        }
        a(j4Var);
    }

    @Override // com.my.target.n6.a
    public boolean b(Uri uri) {
        gb.a("InterstitialMraidPresenter: Expand method not used with interstitials");
        return false;
    }

    public void b(String str) {
        s6 s6Var = new s6(this.e);
        this.l = s6Var;
        this.c.a(s6Var);
        this.f4527a.addView(this.l, new FrameLayout.LayoutParams(-1, -1));
        this.c.f(str);
    }

    public boolean b(int i) {
        Activity activity = (Activity) this.d.get();
        if (activity != null && a(this.t)) {
            if (this.j == null) {
                this.j = Integer.valueOf(activity.getRequestedOrientation());
            }
            activity.setRequestedOrientation(i);
            return true;
        }
        this.c.a("setOrientationProperties", "Attempted to lock orientation to unsupported value: " + this.t.toString());
        return false;
    }

    @Override // com.my.target.l5
    public void a(l5.a aVar) {
        this.m = aVar;
    }

    @Override // com.my.target.l5
    public void a(int i) {
        s6 s6Var;
        this.f.removeCallbacks(this.g);
        if (!this.o) {
            this.o = true;
            if (i <= 0 && (s6Var = this.l) != null) {
                s6Var.a(true);
            }
        }
        ViewParent parent = this.f4527a.getParent();
        if (parent instanceof ViewGroup) {
            ((ViewGroup) parent).removeView(this.f4527a);
        }
        this.c.a();
        s6 s6Var2 = this.l;
        if (s6Var2 != null) {
            s6Var2.a(i);
            this.l = null;
        }
        this.f4527a.removeAllViews();
    }

    public a5(Context context) {
        this(n6.b(AdFormat.INTERSTITIAL), new Handler(Looper.getMainLooper()), new f1(context), context);
    }

    @Override // com.my.target.n6.a
    public void a(n6 n6Var, WebView webView) {
        j4 j4Var;
        this.i = "default";
        k();
        ArrayList arrayList = new ArrayList();
        if (h()) {
            arrayList.add("'inlineVideo'");
        }
        arrayList.add("'vpaid'");
        n6Var.a(arrayList);
        n6Var.d(AdFormat.INTERSTITIAL);
        n6Var.a(n6Var.c());
        c("default");
        n6Var.d();
        n6Var.a(this.b);
        l5.a aVar = this.m;
        if (aVar == null || (j4Var = this.n) == null) {
            return;
        }
        aVar.a(j4Var, this.f4527a);
        this.m.a(webView);
    }

    @Override // com.my.target.n6.a
    public void a(boolean z) {
        this.c.a(z);
    }

    @Override // com.my.target.n6.a
    public boolean a(String str, JsResult jsResult) {
        gb.a("InterstitialMraidPresenter: JS Alert - " + str);
        jsResult.confirm();
        return true;
    }

    @Override // com.my.target.n6.a
    public boolean a(ConsoleMessage consoleMessage, n6 n6Var) {
        gb.a("InterstitialMraidPresenter: Console message - " + consoleMessage.message());
        return true;
    }

    @Override // com.my.target.n6.a
    public boolean a(boolean z, p6 p6Var) {
        if (!a(p6Var)) {
            this.c.a("setOrientationProperties", "Unable to force orientation to " + p6Var);
            return false;
        }
        this.s = z;
        this.t = p6Var;
        return e();
    }

    @Override // com.my.target.n6.a
    public void a(Uri uri) {
        l5.a aVar = this.m;
        if (aVar != null) {
            aVar.a(this.n, uri.toString(), 1, this.f4527a.getContext());
        }
    }

    @Override // com.my.target.n6.a
    public void a() {
        k();
    }

    @Override // com.my.target.n6.a
    public boolean a(String str) {
        if (!this.r) {
            this.c.a("vpaidEvent", "Calling VPAID command before VPAID init");
            return false;
        }
        l5.a aVar = this.m;
        boolean z = aVar != null;
        j4 j4Var = this.n;
        if ((j4Var != null) & z) {
            aVar.a(j4Var, str, this.e);
        }
        return true;
    }

    @Override // com.my.target.n6.a
    public boolean a(float f, float f2) {
        l5.a aVar;
        j4 j4Var;
        if (!this.r) {
            this.c.a("playheadEvent", "Calling VPAID command before VPAID init");
            return false;
        }
        if (f < 0.0f || f2 < 0.0f || (aVar = this.m) == null || (j4Var = this.n) == null) {
            return true;
        }
        aVar.a(j4Var, f, f2, this.e);
        return true;
    }

    @Override // com.my.target.n6.a
    public boolean a(int i, int i2, int i3, int i4, boolean z, int i5) {
        gb.a("InterstitialMraidPresenter: SetResizeProperties method not used with interstitials");
        return false;
    }

    public boolean a(p6 p6Var) {
        if ("none".equals(p6Var.toString())) {
            return true;
        }
        Activity activity = (Activity) this.d.get();
        if (activity == null) {
            return false;
        }
        try {
            ActivityInfo activityInfo = activity.getPackageManager().getActivityInfo(new ComponentName(activity, activity.getClass()), 0);
            int i = activityInfo.screenOrientation;
            if (i != -1) {
                return i == p6Var.a();
            }
            return a(activityInfo.configChanges, 128) && a(activityInfo.configChanges, 1024);
        } catch (Throwable unused) {
        }
    }

    private void a(long j) {
        this.f.removeCallbacks(this.g);
        this.q = System.currentTimeMillis();
        this.f.postDelayed(this.g, j);
    }

    private void a(com.my.target.b bVar) {
        com.my.target.c cVarA = bVar.a();
        if (cVarA == null) {
            this.h.setVisibility(8);
            return;
        }
        if (this.h.getParent() != null) {
            return;
        }
        int iA = kb.a(10, this.e);
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, -2);
        layoutParams.setMargins(iA, iA, iA, iA);
        this.f4527a.addView(this.h, layoutParams);
        this.h.setImageBitmap(cVarA.c().getBitmap());
        this.h.setOnClickListener(new a());
        List listA = cVarA.a();
        if (listA == null) {
            return;
        }
        f fVarA = f.a(listA, new q1());
        this.k = fVarA;
        fVarA.a(new b(bVar));
    }
}
