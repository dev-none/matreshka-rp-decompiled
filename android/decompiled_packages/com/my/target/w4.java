package com.my.target;

import android.content.Context;
import android.view.View;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class w4 implements b5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final b5.a f4852a;
    public final x4 b;
    public f c;

    public class a implements View.OnClickListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ c f4853a;

        public a(c cVar) {
            this.f4853a = cVar;
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            w4.this.a(view.getContext(), this.f4853a);
        }
    }

    public class b implements d.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ com.my.target.b f4854a;

        public b(com.my.target.b bVar) {
            this.f4854a = bVar;
        }

        @Override // com.my.target.d.a
        public void a(Context context) {
            w4.this.f4852a.a(this.f4854a, context);
        }
    }

    public w4(x4 x4Var, b5.a aVar) {
        this.b = x4Var;
        this.f4852a = aVar;
    }

    public static w4 a(Context context, b5.a aVar) {
        return new w4(new x4(context), aVar);
    }

    public final /* synthetic */ void b(l4 l4Var, View view) {
        this.f4852a.b(l4Var, view.getContext());
    }

    @Override // com.my.target.b5
    public void destroy() {
    }

    @Override // com.my.target.b5
    public View getCloseButton() {
        return this.b.getCloseButton();
    }

    @Override // com.my.target.b5
    public View j() {
        return this.b;
    }

    @Override // com.my.target.b5
    public void pause() {
    }

    @Override // com.my.target.b5
    public void resume() {
    }

    @Override // com.my.target.b5
    public void stop() {
    }

    public void a(final l4 l4Var) {
        this.b.a(l4Var.Q(), l4Var.R(), l4Var.M());
        this.b.setAgeRestrictions(l4Var.c());
        this.b.getImageView().setOnClickListener(new View.OnClickListener() { // from class: com.my.target.w4$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.a(l4Var, view);
            }
        });
        this.b.getCloseButton().setOnClickListener(new View.OnClickListener() { // from class: com.my.target.w4$$ExternalSyntheticLambda1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.b(l4Var, view);
            }
        });
        a((com.my.target.b) l4Var);
        this.f4852a.a(l4Var, this.b);
    }

    public final /* synthetic */ void a(l4 l4Var, View view) {
        this.f4852a.a(l4Var, null, 1, view.getContext());
    }

    public void a(Context context, c cVar) {
        f fVar = this.c;
        if (fVar == null || !fVar.b()) {
            f fVar2 = this.c;
            if (fVar2 == null) {
                y3.a(cVar.b(), context);
            } else {
                fVar2.a(context);
            }
        }
    }

    private void a(com.my.target.b bVar) {
        c cVarA = bVar.a();
        if (cVarA == null) {
            return;
        }
        this.b.a(cVarA, new a(cVarA));
        List listA = cVarA.a();
        if (listA == null) {
            return;
        }
        f fVarA = f.a(listA, new q1());
        this.c = fVarA;
        fVarA.a(new b(bVar));
    }
}
