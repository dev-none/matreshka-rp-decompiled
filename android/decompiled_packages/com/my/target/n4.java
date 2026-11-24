package com.my.target;

import android.content.Context;
import android.content.Intent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.my.target.common.MyTargetActivity;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public final class n4 extends h4 {
    public final l4 h;
    public bc i;
    public final yb j;
    public WeakReference k;
    public l8 l;

    public class a extends bc.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ View f4720a;

        public a(View view) {
            this.f4720a = view;
        }

        @Override // com.my.target.bc.a
        public void a() {
            View closeButton;
            super.a();
            l8 l8Var = n4.this.l;
            if (l8Var != null) {
                l8Var.a(this.f4720a, new l8.b[0]);
                WeakReference weakReference = n4.this.k;
                if (weakReference != null && (closeButton = ((w4) weakReference.get()).getCloseButton()) != null) {
                    n4.this.l.a(new l8.b(closeButton, 0));
                }
                n4.this.l.c();
            }
        }
    }

    public static class b implements b5.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final n4 f4721a;

        public b(n4 n4Var) {
            this.f4721a = n4Var;
        }

        @Override // com.my.target.b5.a
        public void a(com.my.target.b bVar, String str, int i, Context context) {
            this.f4721a.a(context, i);
        }

        @Override // com.my.target.b5.a
        public void b(com.my.target.b bVar, Context context) {
            this.f4721a.b(bVar, context);
        }

        @Override // com.my.target.b5.a
        public void a(com.my.target.b bVar, Context context) {
            this.f4721a.a(bVar, context);
        }

        @Override // com.my.target.b5.a
        public void a(com.my.target.b bVar, View view) {
            gb.a("InterstitialAdImagineEngine$InterstitialImageListener: Ad shown, banner Id = " + bVar.r());
            this.f4721a.a(bVar, view);
        }
    }

    public n4(l4 l4Var, s2.a aVar) {
        super(aVar);
        this.h = l4Var;
        this.j = yb.a(l4Var.x());
    }

    public static n4 a(l4 l4Var, s2.a aVar) {
        return new n4(l4Var, aVar);
    }

    public void b(com.my.target.b bVar, Context context) {
        bb.b(bVar.x(), "closedByUser", -1, context);
        dismiss();
    }

    @Override // com.my.target.h4
    public boolean d() {
        return this.h.N();
    }

    @Override // com.my.target.h4, com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityCreate(MyTargetActivity myTargetActivity, Intent intent, FrameLayout frameLayout) {
        super.onActivityCreate(myTargetActivity, intent, frameLayout);
        a(frameLayout);
    }

    @Override // com.my.target.h4, com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityDestroy() {
        super.onActivityDestroy();
        bc bcVar = this.i;
        if (bcVar != null) {
            bcVar.e();
            this.i = null;
        }
        l8 l8Var = this.l;
        if (l8Var != null) {
            l8Var.a();
        }
    }

    @Override // com.my.target.h4, com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityPause() {
        super.onActivityPause();
        bc bcVar = this.i;
        if (bcVar != null) {
            bcVar.e();
        }
        this.j.a((View) null);
    }

    @Override // com.my.target.h4, com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityResume() {
        w4 w4Var;
        super.onActivityResume();
        WeakReference weakReference = this.k;
        if (weakReference == null || (w4Var = (w4) weakReference.get()) == null) {
            return;
        }
        bc bcVar = this.i;
        if (bcVar != null) {
            bcVar.c(w4Var.j());
        }
        this.j.a(w4Var.j());
        this.j.b();
    }

    public void a(com.my.target.b bVar, View view) {
        bc bcVar = this.i;
        if (bcVar != null) {
            bcVar.e();
        }
        bc bcVarB = bc.b(this.h.E(), this.h.x());
        this.i = bcVarB;
        bcVarB.a(new a(view));
        if (this.b) {
            this.i.c(view);
        }
        gb.a("InterstitialAdImagineEngine: Ad shown, banner Id = " + bVar.r());
    }

    public void a(Context context, int i) {
        e1.a().a(this.h, i, context);
        this.f4648a.c();
        dismiss();
    }

    private void a(ViewGroup viewGroup) {
        this.l = l8.a(this.h, 2, null, viewGroup.getContext());
        w4 w4VarA = w4.a(viewGroup.getContext(), new b(this));
        this.k = new WeakReference(w4VarA);
        w4VarA.a(this.h);
        viewGroup.addView(w4VarA.j(), new FrameLayout.LayoutParams(-1, -1));
    }
}
