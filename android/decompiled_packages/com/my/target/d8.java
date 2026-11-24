package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.ImageData;
import com.my.target.nativeads.NativeBannerAdViewBinder;
import com.my.target.nativeads.views.IconAdView;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class d8 implements d.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final b7 f4593a;
    public final bc b;
    public final yb c;
    public final f8 d;
    public final b e;
    public final e7 g;
    public g8 j;
    public boolean k;
    public final View.OnClickListener h = new View.OnClickListener() { // from class: com.my.target.d8$$ExternalSyntheticLambda1
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            this.f$0.a(view);
        }
    };
    public final View.OnClickListener i = new View.OnClickListener() { // from class: com.my.target.d8$$ExternalSyntheticLambda2
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            this.f$0.b(view);
        }
    };
    public final bc.a f = new a();

    public class a extends bc.a {
        public a() {
        }

        @Override // com.my.target.bc.a
        public void a() {
            d8.this.a();
        }
    }

    public interface b extends m8, a3.b {
        void a(View view);

        void b();

        void b(Context context);
    }

    public d8(b7 b7Var, b bVar, MenuFactory menuFactory) {
        this.e = bVar;
        this.f4593a = b7Var;
        this.g = e7.b(b7Var.a(), menuFactory, bVar);
        this.b = bc.a(b7Var.E(), b7Var.x(), true);
        this.c = yb.a(b7Var.x());
        this.d = new f8(b7Var.x());
    }

    public static d8 a(b7 b7Var, b bVar, MenuFactory menuFactory) {
        return new d8(b7Var, bVar, menuFactory);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(View view) {
        this.e.a(view, 2);
    }

    public void c(Context context) {
        this.g.a(context);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(View view) {
        this.e.a(view, 1);
    }

    public void b() {
        this.b.e();
        this.b.a((bc.a) null);
        this.c.a((View) null);
        g8 g8Var = this.j;
        if (g8Var == null) {
            return;
        }
        IconAdView iconAdViewK = g8Var.k();
        if (iconAdViewK != null) {
            b(iconAdViewK);
        }
        ViewGroup viewGroupO = this.j.o();
        if (viewGroupO != null) {
            this.g.b(viewGroupO);
            viewGroupO.setVisibility(0);
        }
        a(this.j, (View.OnClickListener) null, (View.OnClickListener) null);
        this.j.a();
        this.j = null;
    }

    public void a(NativeBannerAdViewBinder nativeBannerAdViewBinder, List list, int i) {
        if (this.k) {
            gb.b("Registering ad was disabled by user");
            nativeBannerAdViewBinder.getRootAdBannerView().setVisibility(4);
        } else {
            g8 g8VarA = new g8.a().a(nativeBannerAdViewBinder).a(list).a();
            this.j = g8VarA;
            a(g8VarA, this.h, this.i);
            a(this.j, i);
        }
    }

    private void a(View view, View.OnClickListener onClickListener) {
        if (view != null) {
            view.setOnClickListener(onClickListener);
        }
    }

    public void a(View view, List list, int i) {
        if (this.k) {
            gb.b("Registering ad was disabled by user");
            view.setVisibility(4);
            return;
        }
        view.setVisibility(0);
        if (!(view instanceof ViewGroup)) {
            gb.b("unable to register view for displaying NativeBannerAd " + view + ", should be instance of ViewGroup");
            return;
        }
        g8 g8VarA = new g8.a().b((ViewGroup) view).a(list).a();
        this.j = g8VarA;
        a(g8VarA, this.h, this.i);
        a(this.j, i);
    }

    public void b(Context context) {
        bb.b(this.f4593a.x(), "closedByUser", -1, context);
        g8 g8Var = this.j;
        ViewGroup viewGroupO = g8Var != null ? g8Var.o() : null;
        this.b.e();
        this.b.a((bc.a) null);
        this.c.c();
        this.k = true;
        if (viewGroupO != null) {
            viewGroupO.setVisibility(4);
        }
    }

    private void b(IconAdView iconAdView) {
        iconAdView.setOnClickListener(null);
        ImageView imageView = iconAdView.getImageView();
        imageView.setImageBitmap(null);
        if (imageView instanceof ma) {
            ((ma) imageView).setPlaceholderDimensions(0, 0);
        }
        ImageData imageDataQ = this.f4593a.q();
        if (imageDataQ != null) {
            a3.a(imageDataQ, imageView);
        }
    }

    private void a(g8 g8Var, int i) {
        ViewGroup viewGroupO = g8Var.o();
        if (viewGroupO == null) {
            gb.b("something wrong, root ad view is null");
            return;
        }
        IconAdView iconAdViewK = g8Var.k();
        if (iconAdViewK == null) {
            gb.b("IconAdView component not found in ad view  " + viewGroupO + ". It's required");
            return;
        }
        ba.c();
        a(iconAdViewK);
        this.b.a(this.f);
        this.g.a(viewGroupO, g8Var, this, i);
        ba.b(viewGroupO.getContext());
        this.b.c(viewGroupO);
        this.c.a(viewGroupO);
        this.c.b();
        this.d.a(g8Var);
    }

    @Override // com.my.target.d.a
    public void a(Context context) {
        this.e.b(context);
    }

    public void a() {
        g8 g8Var = this.j;
        ViewGroup viewGroupO = g8Var != null ? g8Var.o() : null;
        if (viewGroupO != null) {
            this.e.a(viewGroupO);
        }
    }

    private void a(IconAdView iconAdView) {
        ImageView imageView = iconAdView.getImageView();
        if (imageView instanceof ma) {
            ImageData imageDataQ = this.f4593a.q();
            if (imageDataQ != null) {
                Bitmap bitmap = imageDataQ.getBitmap();
                int width = imageDataQ.getWidth();
                int height = imageDataQ.getHeight();
                if (width <= 0 || height <= 0) {
                    width = 100;
                    height = 100;
                }
                ((ma) imageView).setPlaceholderDimensions(width, height);
                if (bitmap == null) {
                    a3.a(imageDataQ, imageView, new a3.b() { // from class: com.my.target.d8$$ExternalSyntheticLambda0
                        @Override // com.my.target.a3.b
                        public final void a(boolean z) {
                            this.f$0.a(z);
                        }
                    });
                    return;
                } else {
                    imageView.setImageBitmap(bitmap);
                    return;
                }
            }
            imageView.setImageBitmap(null);
            ((ma) imageView).setPlaceholderDimensions(0, 0);
        }
    }

    public final /* synthetic */ void a(boolean z) {
        if (z) {
            this.e.b();
        }
    }

    private void a(g8 g8Var, View.OnClickListener onClickListener, View.OnClickListener onClickListener2) {
        List listE = g8Var.e();
        if (listE != null && !listE.isEmpty()) {
            Iterator it = listE.iterator();
            while (it.hasNext()) {
                a((View) it.next(), onClickListener);
            }
            return;
        }
        Iterator it2 = g8Var.m().iterator();
        while (it2.hasNext()) {
            a((View) it2.next(), onClickListener);
        }
        a(g8Var.d(), onClickListener);
        a(g8Var.c(), onClickListener);
        a(g8Var.k(), onClickListener);
        a(g8Var.q(), onClickListener);
        a(g8Var.j(), onClickListener);
        a(g8Var.r(), onClickListener);
        a(g8Var.p(), onClickListener);
        a(g8Var.i(), onClickListener);
        a(g8Var.g(), onClickListener2);
    }
}
