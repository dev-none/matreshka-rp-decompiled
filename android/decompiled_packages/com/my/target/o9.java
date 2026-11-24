package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.ProgressBar;
import android.widget.TextView;
import com.my.target.common.models.ImageData;

/* JADX INFO: loaded from: classes6.dex */
public abstract class o9 extends ViewGroup implements n9, View.OnClickListener {
    public final int A;
    public final int B;
    public final int C;
    public final int D;
    public final int E;
    public final int F;
    public final int G;
    public final int H;
    public final int I;
    public final int J;
    public View K;
    public int L;
    public int M;
    public int N;
    public int O;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final x2 f4758a;
    public final aa b;
    public final x2 c;
    public final View d;
    public final View e;
    public final n9.a f;
    public final g2 g;
    public final Button h;
    public final ma i;
    public final ma j;
    public final i k;
    public final ProgressBar l;
    public final View m;
    public final View n;
    public final View o;
    public final Button p;
    public final TextView q;
    public final TextView r;
    public final TextView s;
    public final ub t;
    public final Bitmap u;
    public final Bitmap v;
    public final Bitmap w;
    public final Bitmap x;
    public final Bitmap y;
    public final int z;

    public o9(View view, View view2, n9.a aVar, View view3, aa aaVar, Context context) {
        super(context);
        this.f = aVar;
        this.K = view3;
        this.e = view2;
        this.d = view;
        this.b = aaVar;
        int iA = aaVar.a(aa.j);
        this.D = iA;
        int iA2 = aaVar.a(aa.V);
        this.J = iA2;
        this.G = aaVar.a(aa.T);
        this.H = aaVar.a(aa.H);
        this.I = aaVar.a(aa.W);
        this.E = aaVar.a(aa.Y);
        x2 x2Var = new x2(context);
        this.c = x2Var;
        x2Var.setVisibility(8);
        x2Var.setOnClickListener(this);
        x2Var.setPadding(iA);
        g2 g2Var = new g2(context);
        this.g = g2Var;
        g2Var.setVisibility(8);
        g2Var.setOnClickListener(this);
        kb.a(g2Var, -2013265920, -1, -1, aaVar.a(aa.e), aaVar.a(aa.f));
        Button button = new Button(context);
        this.h = button;
        button.setTextColor(-1);
        button.setLines(aaVar.a(aa.g));
        button.setTextSize(1, aaVar.a(aa.h));
        button.setMaxWidth(aaVar.a(aa.d));
        button.setOnClickListener(this);
        button.setBackgroundColor(0);
        button.setIncludeFontPadding(false);
        int iA3 = aaVar.a(aa.i);
        this.z = iA3;
        this.A = aaVar.a(aa.m);
        this.B = aaVar.a(aa.n);
        int iA4 = aaVar.a(aa.r);
        this.C = iA4;
        this.N = aaVar.a(aa.o);
        this.F = aaVar.a(aa.p);
        i iVar = new i(context);
        this.k = iVar;
        iVar.setFixedHeight(iA4);
        this.w = q4.c(context);
        this.x = q4.d(context);
        this.y = q4.b(context);
        this.u = q4.f(context);
        this.v = q4.e(context);
        ma maVar = new ma(context);
        this.i = maVar;
        ProgressBar progressBar = new ProgressBar(context, null, android.R.attr.progressBarStyleLarge);
        this.l = progressBar;
        progressBar.setVisibility(8);
        View view4 = new View(context);
        this.m = view4;
        view4.setBackgroundColor(-1728053248);
        view4.setVisibility(8);
        View view5 = new View(context);
        this.o = view5;
        View view6 = new View(context);
        this.n = view6;
        TextView textView = new TextView(context);
        this.q = textView;
        textView.setTextSize(1, aaVar.a(aa.s));
        textView.setTextColor(-1);
        textView.setMaxLines(aaVar.a(aa.t));
        TextUtils.TruncateAt truncateAt = TextUtils.TruncateAt.END;
        textView.setEllipsize(truncateAt);
        textView.setGravity(17);
        textView.setIncludeFontPadding(false);
        TextView textView2 = new TextView(context);
        this.r = textView2;
        textView2.setTextSize(1, aaVar.a(aa.u));
        textView2.setTextColor(-1);
        textView2.setMaxLines(aaVar.a(aa.v));
        textView2.setEllipsize(truncateAt);
        textView2.setGravity(17);
        textView2.setIncludeFontPadding(false);
        Button button2 = new Button(context);
        this.p = button2;
        button2.setLines(1);
        button2.setTextSize(1, aaVar.a(aa.w));
        button2.setEllipsize(truncateAt);
        button2.setIncludeFontPadding(false);
        button2.setMinimumWidth(iA2);
        button2.setPadding(iA3, 0, iA3, 0);
        TextView textView3 = new TextView(context);
        this.s = textView3;
        textView3.setPadding(aaVar.a(aa.y), 0, 0, 0);
        textView3.setTextColor(-1);
        textView3.setMaxLines(aaVar.a(aa.B));
        textView3.setIncludeFontPadding(false);
        textView3.setTextSize(1, aaVar.a(aa.X));
        ub ubVar = new ub(context);
        this.t = ubVar;
        x2 x2Var2 = new x2(context);
        this.f4758a = x2Var2;
        x2Var2.setPadding(iA);
        ma maVar2 = new ma(context);
        this.j = maVar2;
        kb.a(this, "ad_view");
        kb.a(textView, "title");
        kb.a(textView2, "description");
        kb.a(maVar, "image");
        kb.a(button2, "cta");
        kb.a(x2Var, "dismiss");
        kb.a(g2Var, "play");
        kb.a(maVar2, "ads_logo");
        kb.a(view4, "media_dim");
        kb.a(view6, "top_dim");
        kb.a(view5, "bot_dim");
        kb.a(textView3, "age_bordering");
        kb.a(iVar, "ad_choices");
        kb.b(x2Var2, "sound_button");
        if (view3 != null) {
            addView(view3);
        }
        addView(maVar);
        addView(view4);
        addView(view5);
        addView(view6);
        addView(view);
        addView(x2Var);
        addView(textView);
        addView(textView2);
        addView(button2);
        addView(textView3);
        addView(maVar2);
        addView(iVar);
        addView(ubVar);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v10 */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r0v3, types: [android.view.View$OnClickListener] */
    /* JADX WARN: Type inference failed for: r0v5, types: [android.view.View, android.widget.Button] */
    /* JADX WARN: Type inference failed for: r0v6, types: [android.view.View, android.widget.TextView] */
    /* JADX WARN: Type inference failed for: r0v7, types: [android.view.View, android.widget.TextView] */
    /* JADX WARN: Type inference failed for: r0v8, types: [android.view.View, android.widget.TextView] */
    /* JADX WARN: Type inference failed for: r0v9, types: [android.view.View, com.my.target.ma] */
    /* JADX WARN: Type inference failed for: r1v0 */
    /* JADX WARN: Type inference failed for: r1v1, types: [android.view.View$OnClickListener] */
    /* JADX WARN: Type inference failed for: r1v2 */
    /* JADX WARN: Type inference failed for: r2v11 */
    /* JADX WARN: Type inference failed for: r2v12, types: [android.view.View$OnClickListener] */
    /* JADX WARN: Type inference failed for: r2v13 */
    /* JADX WARN: Type inference failed for: r2v15 */
    /* JADX WARN: Type inference failed for: r2v16 */
    /* JADX WARN: Type inference failed for: r2v17 */
    /* JADX WARN: Type inference failed for: r2v2 */
    /* JADX WARN: Type inference failed for: r2v3, types: [android.view.View$OnClickListener] */
    /* JADX WARN: Type inference failed for: r2v5 */
    /* JADX WARN: Type inference failed for: r2v6, types: [android.view.View$OnClickListener] */
    /* JADX WARN: Type inference failed for: r2v8 */
    /* JADX WARN: Type inference failed for: r2v9, types: [android.view.View$OnClickListener] */
    /* JADX WARN: Type inference failed for: r3v0, types: [android.view.View, android.view.View$OnClickListener, com.my.target.o9] */
    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:596)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    private void setClickArea(d1 d1Var) {
        if (d1Var.m) {
            setOnClickListener(this);
            this.p.setOnClickListener(this);
            return;
        }
        setOnClickListener(d1Var.l ? this : 0);
        this.p.setEnabled(d1Var.g);
        this.p.setOnClickListener(d1Var.g ? this : 0);
        this.q.setOnClickListener(d1Var.f4588a ? this : 0);
        this.s.setOnClickListener((d1Var.h || d1Var.i) ? this : 0);
        this.r.setOnClickListener(d1Var.b ? this : 0);
        this.i.setOnClickListener(d1Var.d ? this : 0);
    }

    @Override // com.my.target.n9
    public View a() {
        return this;
    }

    @Override // com.my.target.n9
    public void b() {
        this.c.setVisibility(0);
        this.t.setVisibility(8);
    }

    @Override // com.my.target.n9
    public void c(boolean z) {
        this.m.setVisibility(z ? 0 : 8);
    }

    @Override // com.my.target.n9
    public void d() {
        this.g.setVisibility(8);
        this.h.setVisibility(8);
    }

    @Override // com.my.target.n9
    public void e() {
        this.f4758a.setVisibility(8);
    }

    @Override // com.my.target.n9
    public View getCloseButton() {
        return this.c;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.c) {
            this.f.l();
            return;
        }
        if (view == this.f4758a) {
            this.f.g();
            return;
        }
        if (view == this.g || view == this.h) {
            this.f.b(this.O);
            return;
        }
        if (view == this.K) {
            this.f.n();
            return;
        }
        if (view == this.m) {
            this.f.i();
            return;
        }
        if (view == this.j) {
            this.f.m();
            return;
        }
        if (view == this.k) {
            this.f.c();
            return;
        }
        Button button = this.p;
        if (view == button && button.isEnabled()) {
            this.f.a(null, 2);
        } else {
            this.f.a(null, 1);
        }
    }

    @Override // com.my.target.n9
    public void setBackgroundImage(ImageData imageData) {
        this.i.setImageData(imageData);
    }

    @Override // com.my.target.n9
    public void setBanner(o4 o4Var) {
        m9 m9VarT = o4Var.T();
        setBackgroundColor(m9VarT.a());
        int iJ = m9VarT.j();
        this.q.setTextColor(m9VarT.k());
        this.r.setTextColor(iJ);
        if (TextUtils.isEmpty(o4Var.c()) && TextUtils.isEmpty(o4Var.b())) {
            this.s.setVisibility(8);
        } else {
            String strB = o4Var.b();
            if (!TextUtils.isEmpty(o4Var.c()) && !TextUtils.isEmpty(o4Var.b())) {
                strB = strB + " ";
            }
            String str = strB + o4Var.c();
            this.s.setVisibility(0);
            this.s.setText(str);
        }
        ImageData imageDataM = o4Var.M();
        if (imageDataM == null || imageDataM.getData() == null) {
            Bitmap bitmapA = l0.a(this.b.a(aa.r));
            if (bitmapA != null) {
                this.c.a(bitmapA, false);
            }
        } else {
            this.c.a(imageDataM.getData(), true);
        }
        kb.b(this.p, m9VarT.d(), m9VarT.f(), this.N);
        this.p.setTextColor(m9VarT.j());
        this.p.setText(o4Var.i());
        this.q.setText(o4Var.A());
        this.r.setText(o4Var.k());
        ImageData imageDataP = o4Var.P();
        if (imageDataP != null && imageDataP.getBitmap() != null) {
            this.j.setImageData(imageDataP);
            this.j.setOnClickListener(this);
        }
        c cVarA = o4Var.a();
        if (cVarA != null) {
            this.k.setImageBitmap(cVarA.c().getBitmap());
            this.k.setOnClickListener(this);
        } else {
            this.k.setVisibility(8);
        }
        setClickArea(o4Var.g());
    }

    @Override // com.my.target.n9
    public void setPanelColor(int i) {
        this.o.setBackgroundColor(i);
        this.n.setBackgroundColor(i);
    }

    @Override // com.my.target.n9
    public void setSoundState(boolean z) {
        if (z) {
            this.f4758a.a(this.u, false);
            this.f4758a.setContentDescription("sound_on");
        } else {
            this.f4758a.a(this.v, false);
            this.f4758a.setContentDescription("sound_off");
        }
    }

    @Override // com.my.target.n9
    public void a(int i, String str) {
        this.g.setVisibility(0);
        if (i == 1) {
            this.g.setImageBitmap(this.y);
            this.O = 1;
        } else if (i == 2) {
            this.g.setImageBitmap(this.x);
            this.O = 2;
        } else {
            this.g.setImageBitmap(this.w);
            this.O = 0;
        }
        if (str == null) {
            this.h.setVisibility(8);
        } else {
            this.h.setVisibility(0);
            this.h.setText(str);
        }
    }

    @Override // com.my.target.n9
    public void c() {
        this.t.setVisibility(8);
    }

    @Override // com.my.target.n9
    public void b(boolean z) {
        this.l.setVisibility(z ? 0 : 8);
    }

    @Override // com.my.target.n9
    public void a(boolean z) {
        this.i.setVisibility(z ? 0 : 4);
    }

    @Override // com.my.target.n9
    public void a(int i, float f) {
        this.t.setDigit(i);
        this.t.setProgress(f);
    }

    public boolean a(int i) {
        View view = this.K;
        return ((double) kb.a(view != null ? view.getMeasuredWidth() : 0, this.i.getMeasuredWidth())) * 1.6d <= ((double) i);
    }
}
