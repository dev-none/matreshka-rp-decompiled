package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.os.Parcelable;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import androidx.media3.common.PlaybackException;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.ImageData;
import com.my.target.common.models.VideoData;
import com.my.target.nativeads.NativeAdViewBinder;
import com.my.target.nativeads.views.IconAdView;
import com.my.target.nativeads.views.MediaAdView;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class r7 implements d.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f4802a;
    public final e8 b;
    public final b7 c;
    public final bc d;
    public final yb e;
    public final f8 f;
    public final c g;
    public final bc.a h;
    public final e7 i;
    public boolean k;
    public boolean l;
    public boolean n;
    public q7 o;
    public Parcelable p;
    public g8 q;
    public b r;
    public final View.OnClickListener s;
    public final View.OnClickListener t;
    public int j = 0;
    public boolean m = true;

    public class a extends bc.a {
        public a() {
        }

        @Override // com.my.target.bc.a
        public void a(boolean z) {
            r7.this.d(z);
        }

        @Override // com.my.target.bc.a
        public void a() {
            r7.this.d();
        }
    }

    public static final class b implements View.OnClickListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final f7 f4804a;
        public final c b;
        public g7 c;

        public b(f7 f7Var, c cVar) {
            this.f4804a = f7Var;
            this.b = cVar;
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            g7 g7VarA = g7.a(this.f4804a);
            this.c = g7VarA;
            g7VarA.a(this.b);
            this.c.a(view.getContext());
        }
    }

    public interface c extends q7.b, c9.a, m8, g7.a, a3.b {
        void a(Context context);

        void a(View view);

        void b();

        void f();
    }

    public r7(b7 b7Var, c cVar, e8 e8Var, MenuFactory menuFactory) {
        this.g = cVar;
        this.c = b7Var;
        this.f4802a = b7Var.O().size() > 0;
        this.b = e8Var;
        this.i = e7.b(b7Var.a(), menuFactory, cVar);
        this.s = new View.OnClickListener() { // from class: com.my.target.r7$$ExternalSyntheticLambda1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.b(view);
            }
        };
        this.t = new View.OnClickListener() { // from class: com.my.target.r7$$ExternalSyntheticLambda2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.c(view);
            }
        };
        s5 s5VarP = b7Var.P();
        this.k = (s5VarP == null || s5VarP.k0() == null) ? false : true;
        this.d = bc.a(b7Var.E(), b7Var.x(), s5VarP == null);
        this.e = yb.a(b7Var.x());
        this.f = new f8(b7Var.x());
        this.h = new a();
    }

    public static r7 a(b7 b7Var, c cVar, e8 e8Var, MenuFactory menuFactory) {
        return new r7(b7Var, cVar, e8Var, menuFactory);
    }

    public final /* synthetic */ void b(View view) {
        this.g.a(view, 1);
    }

    public final /* synthetic */ void c(View view) {
        this.g.a(view, 2);
    }

    public void d() {
        g8 g8Var = this.q;
        ViewGroup viewGroupO = g8Var != null ? g8Var.o() : null;
        if (viewGroupO != null) {
            this.g.a(viewGroupO);
        }
    }

    public final /* synthetic */ void e(View view) {
        this.o.b(view);
    }

    public void f() {
        this.d.e();
        this.d.a((bc.a) null);
        this.e.a((View) null);
        e();
        if (this.q == null) {
            return;
        }
        this.c.d().a(1, PlaybackException.ERROR_CODE_AUDIO_TRACK_OFFLOAD_INIT_FAILED);
        IconAdView iconAdViewK = this.q.k();
        if (iconAdViewK != null) {
            b(iconAdViewK);
        }
        MediaAdView mediaAdViewL = this.q.l();
        if (mediaAdViewL != null) {
            e(mediaAdViewL);
        }
        c9 c9VarN = this.q.n();
        if (c9VarN != null) {
            c9VarN.setPromoCardSliderListener(null);
            this.p = c9VarN.getState();
            c9VarN.dispose();
        }
        ViewGroup viewGroupO = this.q.o();
        if (viewGroupO != null) {
            this.i.b(viewGroupO);
            viewGroupO.setVisibility(0);
        }
        a(this.q, (View.OnClickListener) null, (View.OnClickListener) null);
        this.q.a();
        this.q = null;
        this.r = null;
    }

    public void a(NativeAdViewBinder nativeAdViewBinder, List list, int i) {
        ViewGroup rootAdView = nativeAdViewBinder.getRootAdView();
        if (this.n) {
            this.c.d().b(1, PlaybackException.ERROR_CODE_AUDIO_TRACK_OFFLOAD_WRITE_FAILED);
            gb.b("NativeAdViewController: Registering ad was disabled by user");
            rootAdView.setVisibility(4);
        } else {
            g8 g8VarA = new g8.a().a(nativeAdViewBinder).a(list).a();
            this.q = g8VarA;
            a(g8VarA, this.s, this.t);
            a(this.q, i);
        }
    }

    public void b(Context context) {
        bb.b(this.c.x(), "closedByUser", -1, context);
        this.d.e();
        this.d.a((bc.a) null);
        this.e.c();
        a(false);
        this.n = true;
        g8 g8Var = this.q;
        ViewGroup viewGroupO = g8Var != null ? g8Var.o() : null;
        if (viewGroupO != null) {
            viewGroupO.setVisibility(4);
        }
    }

    public void c(Context context) {
        this.i.a(context);
    }

    public final void e() {
        q7 q7Var = this.o;
        if (q7Var == null) {
            return;
        }
        q7Var.z();
    }

    public final /* synthetic */ void c(boolean z) {
        if (z) {
            this.g.b();
        }
    }

    public final void c(MediaAdView mediaAdView, ImageData imageData) {
        a(mediaAdView, imageData);
        if (this.j == 2) {
            return;
        }
        this.j = 3;
        Context context = mediaAdView.getContext();
        z8 z8VarB = b(mediaAdView);
        if (z8VarB == null) {
            z8VarB = new y8(context);
            mediaAdView.addView(z8VarB.getView(), new ViewGroup.LayoutParams(-1, -1));
        }
        Parcelable parcelable = this.p;
        if (parcelable != null) {
            z8VarB.restoreState(parcelable);
        }
        z8VarB.getView().setClickable(this.m);
        z8VarB.setupCards(this.c.O());
        z8VarB.setPromoCardSliderListener(this.g);
        z8VarB.setVisibility(0);
        mediaAdView.setBackgroundColor(0);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void e(MediaAdView mediaAdView) {
        ImageData imageDataS = this.c.s();
        ma maVar = (ma) mediaAdView.getImageView();
        if (imageDataS != null) {
            a3.a(imageDataS, maVar);
        }
        maVar.setImageData(null);
        mediaAdView.getProgressBarView().setVisibility(8);
        mediaAdView.getPlayButtonView().setVisibility(8);
        mediaAdView.setPlaceHolderDimension(0, 0);
        mediaAdView.setOnClickListener(null);
        mediaAdView.setBackgroundColor(MediaAdView.COLOR_PLACEHOLDER_GRAY);
        z8 z8VarB = b(mediaAdView);
        if (z8VarB != 0) {
            this.p = z8VarB.getState();
            z8VarB.dispose();
            ((View) z8VarB).setVisibility(8);
        }
        com.my.target.a aVarA = a(mediaAdView);
        if (aVarA != null) {
            mediaAdView.removeView(aVarA);
        }
    }

    public void d(boolean z) {
        g8 g8Var = this.q;
        if (g8Var != null && g8Var.o() != null) {
            if (this.j == 1) {
                a(z);
                return;
            }
            return;
        }
        f();
    }

    public int[] b() {
        c9 c9VarB;
        g8 g8Var = this.q;
        if (g8Var == null) {
            return null;
        }
        int i = this.j;
        if (i == 2) {
            c9VarB = g8Var.n();
        } else if (i == 3) {
            MediaAdView mediaAdViewL = g8Var.l();
            if (mediaAdViewL == null) {
                return null;
            }
            c9VarB = b(mediaAdViewL);
        } else {
            c9VarB = null;
        }
        if (c9VarB == null) {
            return null;
        }
        return c9VarB.getVisibleCardNumbers();
    }

    public final void d(MediaAdView mediaAdView) {
        ImageData imageDataS = this.c.s();
        if (this.f4802a) {
            c(mediaAdView, imageDataS);
            return;
        }
        b(mediaAdView, imageDataS);
        com.my.target.a aVarC = this.r != null ? c(mediaAdView) : null;
        if (this.k) {
            a(mediaAdView, aVarC != null, this.g);
        } else {
            d(mediaAdView, imageDataS);
        }
    }

    public void a(View view, List list, int i, MediaAdView mediaAdView) {
        this.c.d().a(1, 5000);
        if (!(view instanceof ViewGroup)) {
            this.c.d().a(1, 5001, "rootView is not ViewGroup");
            gb.b("NativeAdViewController: Unable to register view for displaying NativeAd " + view + ", should be instance of ViewGroup");
            return;
        }
        if (this.n) {
            this.c.d().b(1, PlaybackException.ERROR_CODE_AUDIO_TRACK_OFFLOAD_WRITE_FAILED);
            gb.b("NativeAdViewController: Registering ad was disabled by user");
            view.setVisibility(4);
        } else {
            view.setVisibility(0);
            g8 g8VarA = new g8.a().b((ViewGroup) view).a(list).a(mediaAdView).a();
            this.q = g8VarA;
            a(g8VarA, this.s, this.t);
            a(this.q, i);
        }
    }

    public final com.my.target.a c(MediaAdView mediaAdView) {
        com.my.target.a aVarA = a(mediaAdView);
        if (aVarA == null) {
            ViewGroup.LayoutParams layoutParams = new ViewGroup.LayoutParams(-2, -2);
            com.my.target.a aVar = new com.my.target.a(mediaAdView.getContext());
            mediaAdView.addView(aVar, layoutParams);
            aVarA = aVar;
        }
        aVarA.a(this.c.N(), this.c.M());
        aVarA.setOnClickListener(this.r);
        return aVarA;
    }

    public final void b(IconAdView iconAdView) {
        iconAdView.setOnClickListener(null);
        ImageView imageView = iconAdView.getImageView();
        imageView.setImageBitmap(null);
        if (imageView instanceof ma) {
            ((ma) imageView).setPlaceholderDimensions(0, 0);
        }
        ImageData imageDataQ = this.c.q();
        if (imageDataQ != null) {
            a3.a(imageDataQ, imageView);
        }
    }

    public final void d(MediaAdView mediaAdView, ImageData imageData) {
        a(mediaAdView, imageData);
        this.j = 0;
        mediaAdView.getImageView().setVisibility(0);
        mediaAdView.getPlayButtonView().setVisibility(8);
        mediaAdView.getProgressBarView().setVisibility(8);
        if (this.m) {
            b bVar = this.r;
            if (bVar != null) {
                mediaAdView.setOnClickListener(bVar);
            } else {
                mediaAdView.setOnClickListener(new View.OnClickListener() { // from class: com.my.target.r7$$ExternalSyntheticLambda4
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        this.f$0.d(view);
                    }
                });
            }
        }
    }

    public final z8 b(MediaAdView mediaAdView) {
        if (!this.f4802a) {
            return null;
        }
        for (int i = 0; i < mediaAdView.getChildCount(); i++) {
            KeyEvent.Callback childAt = mediaAdView.getChildAt(i);
            if (childAt instanceof c9) {
                return (z8) childAt;
            }
        }
        return null;
    }

    public final void a(g8 g8Var, View.OnClickListener onClickListener, View.OnClickListener onClickListener2) {
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
        a(g8Var.c(), onClickListener);
        a(g8Var.d(), onClickListener);
        a(g8Var.h(), onClickListener);
        a(g8Var.i(), onClickListener);
        a(g8Var.j(), onClickListener);
        a(g8Var.k(), onClickListener);
        a(g8Var.p(), onClickListener);
        a(g8Var.q(), onClickListener);
        a(g8Var.r(), onClickListener);
        a(g8Var.g(), onClickListener2);
    }

    public final /* synthetic */ void d(View view) {
        this.g.a(view, 1);
    }

    public final void b(MediaAdView mediaAdView, ImageData imageData) {
        ma maVar = (ma) mediaAdView.getImageView();
        if (imageData == null) {
            maVar.setImageBitmap(null);
            return;
        }
        Bitmap bitmap = imageData.getBitmap();
        if (bitmap != null) {
            maVar.setImageBitmap(bitmap);
        } else {
            maVar.setImageBitmap(null);
            a3.a(imageData, maVar, new a3.b() { // from class: com.my.target.r7$$ExternalSyntheticLambda6
                @Override // com.my.target.a3.b
                public final void a(boolean z) {
                    this.f$0.b(z);
                }
            });
        }
    }

    public final /* synthetic */ void b(boolean z) {
        if (z) {
            this.g.f();
        }
    }

    public final void a(g8 g8Var, int i) {
        ViewGroup viewGroupO = g8Var.o();
        if (viewGroupO == null) {
            gb.b("NativeAdViewController: something wrong, adview is null");
            return;
        }
        c9 c9VarN = g8Var.n();
        this.m = g8Var.s();
        f7 f7VarL = this.c.L();
        if (f7VarL != null) {
            this.r = new b(f7VarL, this.g);
        }
        IconAdView iconAdViewK = g8Var.k();
        if (iconAdViewK == null) {
            this.c.d().c(1, 5001, "iconAdView is null");
            gb.b("NativeAdViewController: IconAdView component not found in ad view " + viewGroupO.getClass().getName() + ". It will be required in future versions of sdk.");
        } else {
            ba.c();
        }
        MediaAdView mediaAdViewL = g8Var.l();
        if (mediaAdViewL == null) {
            gb.b("NativeAdViewController: MediaAdView component not found in ad view " + viewGroupO.getClass().getName() + ". It will be required in future versions of sdk.");
        } else {
            ba.d();
        }
        this.d.a(this.h);
        this.i.a(viewGroupO, g8Var, this, i);
        if (this.f4802a && c9VarN != null) {
            a(c9VarN);
        } else if (mediaAdViewL != null) {
            d(mediaAdViewL);
        }
        if (iconAdViewK != null) {
            a(iconAdViewK);
        }
        ba.b(viewGroupO.getContext());
        this.d.c(viewGroupO);
        this.e.a(viewGroupO);
        this.e.b();
        this.f.a(g8Var);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void a() {
        MediaAdView mediaAdViewL;
        this.k = false;
        this.j = 0;
        q7 q7Var = this.o;
        if (q7Var != null) {
            q7Var.z();
        }
        g8 g8Var = this.q;
        if (g8Var == null || (mediaAdViewL = g8Var.l()) == null) {
            return;
        }
        mediaAdViewL.setBackgroundColor(MediaAdView.COLOR_PLACEHOLDER_GRAY);
        z8 z8VarB = b(mediaAdViewL);
        if (z8VarB != 0) {
            this.p = z8VarB.getState();
            z8VarB.dispose();
            ((View) z8VarB).setVisibility(8);
        }
        a(mediaAdViewL, this.c.s());
        mediaAdViewL.getImageView().setVisibility(0);
        mediaAdViewL.getProgressBarView().setVisibility(8);
        mediaAdViewL.getPlayButtonView().setVisibility(8);
        if (this.m) {
            mediaAdViewL.setOnClickListener(new View.OnClickListener() { // from class: com.my.target.r7$$ExternalSyntheticLambda3
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    this.f$0.a(view);
                }
            });
        }
    }

    public final /* synthetic */ void a(View view) {
        this.g.a(view, 1);
    }

    @Override // com.my.target.d.a
    public void a(Context context) {
        this.g.a(context);
    }

    public void a(boolean z) {
        q7 q7Var = this.o;
        if (q7Var == null) {
            return;
        }
        if (z) {
            q7Var.w();
        } else {
            q7Var.v();
        }
    }

    public final void a(IconAdView iconAdView) {
        ImageView imageView = iconAdView.getImageView();
        if (imageView instanceof ma) {
            ma maVar = (ma) imageView;
            ImageData imageDataQ = this.c.q();
            if (imageDataQ == null) {
                imageView.setImageBitmap(null);
                maVar.setPlaceholderDimensions(0, 0);
                return;
            }
            int width = imageDataQ.getWidth();
            int height = imageDataQ.getHeight();
            if (width <= 0 || height <= 0) {
                width = 100;
                height = 100;
            }
            maVar.setPlaceholderDimensions(width, height);
            Bitmap bitmap = imageDataQ.getBitmap();
            if (bitmap != null) {
                imageView.setImageBitmap(bitmap);
            } else {
                a3.a(imageDataQ, imageView, new a3.b() { // from class: com.my.target.r7$$ExternalSyntheticLambda5
                    @Override // com.my.target.a3.b
                    public final void a(boolean z) {
                        this.f$0.c(z);
                    }
                });
            }
        }
    }

    public final void a(c9 c9Var) {
        this.j = 2;
        c9Var.setPromoCardSliderListener(this.g);
        Parcelable parcelable = this.p;
        if (parcelable != null) {
            c9Var.restoreState(parcelable);
        }
    }

    public final void a(MediaAdView mediaAdView, q7 q7Var) {
        q7Var.a((m8) this.g);
        g8 g8Var = this.q;
        if (g8Var == null) {
            return;
        }
        q7Var.a(mediaAdView, g8Var.f());
    }

    public final void a(MediaAdView mediaAdView, boolean z, q7.b bVar) {
        VideoData videoData;
        this.j = 1;
        s5 s5VarP = this.c.P();
        if (s5VarP != null) {
            mediaAdView.setPlaceHolderDimension(s5VarP.G(), s5VarP.p());
            videoData = (VideoData) s5VarP.k0();
        } else {
            videoData = null;
        }
        if (videoData == null) {
            return;
        }
        if (this.o == null) {
            this.o = new q7(this.c, s5VarP, videoData, this.b);
        }
        b bVar2 = this.r;
        if (bVar2 != null) {
            mediaAdView.setOnClickListener(bVar2);
        } else {
            mediaAdView.setOnClickListener(new View.OnClickListener() { // from class: com.my.target.r7$$ExternalSyntheticLambda0
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    this.f$0.e(view);
                }
            });
        }
        this.o.a(bVar);
        this.o.c(z);
        this.o.a(z);
        a(mediaAdView, this.o);
    }

    public final com.my.target.a a(MediaAdView mediaAdView) {
        int childCount = mediaAdView.getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = mediaAdView.getChildAt(i);
            if (childAt instanceof com.my.target.a) {
                return (com.my.target.a) childAt;
            }
        }
        return null;
    }

    public final void a(MediaAdView mediaAdView, ImageData imageData) {
        if (imageData == null) {
            mediaAdView.setPlaceHolderDimension(0, 0);
            return;
        }
        int width = imageData.getWidth();
        int height = imageData.getHeight();
        if (!this.l && width > 0 && height > 0) {
            mediaAdView.setPlaceHolderDimension(width, height);
        } else {
            mediaAdView.setPlaceHolderDimension(16, 9);
            this.l = true;
        }
    }

    public final void a(View view, View.OnClickListener onClickListener) {
        if (view != null) {
            view.setOnClickListener(onClickListener);
        }
    }
}
