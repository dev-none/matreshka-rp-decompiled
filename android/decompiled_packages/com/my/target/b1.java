package com.my.target;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.TextView;
import androidx.recyclerview.widget.LinearSnapHelper;
import androidx.recyclerview.widget.RecyclerView;
import com.my.target.common.NavigationType;
import com.my.target.common.models.ImageData;
import com.my.target.common.views.StarsRatingView;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class b1 extends RecyclerView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final a1 f4544a;
    public final LinearSnapHelper b;
    public List c;
    public c1.b d;
    public final View.OnClickListener e;
    public boolean f;
    public boolean g;
    public final View.OnClickListener h;

    public class a implements View.OnClickListener {
        public a() {
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            List list;
            ViewParent parent = view.getParent();
            while (parent != 0 && !(parent instanceof u0)) {
                parent = parent.getParent();
            }
            b1 b1Var = b1.this;
            c1.b bVar = b1Var.d;
            if (bVar == null || (list = b1Var.c) == null || parent == 0) {
                return;
            }
            bVar.a((g4) list.get(b1Var.getCardLayoutManager().getPosition((View) parent)), 2);
        }
    }

    public class b implements View.OnClickListener {
        public b() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            View viewFindContainingItemView;
            b1 b1Var;
            c1.b bVar;
            List list;
            b1 b1Var2 = b1.this;
            if (b1Var2.f || (viewFindContainingItemView = b1Var2.getCardLayoutManager().findContainingItemView(view)) == null) {
                return;
            }
            if (!b1.this.getCardLayoutManager().a(viewFindContainingItemView)) {
                b1 b1Var3 = b1.this;
                if (!b1Var3.g) {
                    b1Var3.a(viewFindContainingItemView);
                    return;
                }
            }
            if (!view.isClickable() || (bVar = (b1Var = b1.this).d) == null || (list = b1Var.c) == null) {
                return;
            }
            bVar.a((g4) list.get(b1Var.getCardLayoutManager().getPosition(viewFindContainingItemView)), 1);
        }
    }

    public static class c extends RecyclerView.Adapter {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final Context f4547a;
        public final List b;
        public final List c = new ArrayList();
        public final boolean d;
        public View.OnClickListener e;
        public View.OnClickListener f;

        public c(List list, Context context) {
            this.b = list;
            this.f4547a = context;
            this.d = (context.getResources().getConfiguration().screenLayout & 15) >= 3;
        }

        public List a() {
            return this.b;
        }

        public void b(View.OnClickListener onClickListener) {
            this.f = onClickListener;
        }

        @Override // androidx.recyclerview.widget.RecyclerView.Adapter
        public int getItemCount() {
            return a().size();
        }

        @Override // androidx.recyclerview.widget.RecyclerView.Adapter
        public int getItemViewType(int i) {
            if (i == 0) {
                return 1;
            }
            return i == getItemCount() - 1 ? 2 : 0;
        }

        public void a(View.OnClickListener onClickListener) {
            this.e = onClickListener;
        }

        @Override // androidx.recyclerview.widget.RecyclerView.Adapter
        public void onBindViewHolder(d dVar, int i) {
            u0 u0VarA = dVar.a();
            g4 g4Var = (g4) a().get(i);
            if (!this.c.contains(g4Var)) {
                this.c.add(g4Var);
                bb.b(g4Var.x(), "render", 1, dVar.itemView.getContext());
            }
            a(g4Var, u0VarA);
            u0VarA.a(this.e, g4Var.g(), this.f);
        }

        @Override // androidx.recyclerview.widget.RecyclerView.Adapter
        public d onCreateViewHolder(ViewGroup viewGroup, int i) {
            return new d(new u0(this.d, this.f4547a));
        }

        @Override // androidx.recyclerview.widget.RecyclerView.Adapter
        public void onViewRecycled(d dVar) {
            dVar.a().a(null, null, null);
        }

        public final void a(g4 g4Var, u0 u0Var) {
            ImageData imageDataS = g4Var.s();
            if (imageDataS != null) {
                ma smartImageView = u0Var.getSmartImageView();
                smartImageView.setPlaceholderDimensions(imageDataS.getWidth(), imageDataS.getHeight());
                a3.b(imageDataS, smartImageView);
            }
            u0Var.getTitleTextView().setText(g4Var.A());
            u0Var.getDescriptionTextView().setText(g4Var.k());
            u0Var.getCtaButtonView().setText(g4Var.i());
            TextView domainTextView = u0Var.getDomainTextView();
            String strN = g4Var.n();
            StarsRatingView ratingView = u0Var.getRatingView();
            if (NavigationType.WEB.equals(g4Var.t())) {
                ratingView.setVisibility(8);
                domainTextView.setVisibility(0);
                domainTextView.setText(strN);
                return;
            }
            domainTextView.setVisibility(8);
            float fW = g4Var.w();
            if (fW > 0.0f) {
                ratingView.setVisibility(0);
                ratingView.setRating(fW);
            } else {
                ratingView.setVisibility(8);
            }
        }
    }

    public static class d extends RecyclerView.ViewHolder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final u0 f4548a;

        public d(u0 u0Var) {
            super(u0Var);
            this.f4548a = u0Var;
        }

        public u0 a() {
            return this.f4548a;
        }
    }

    public b1(Context context) {
        this(context, null);
    }

    private List<g4> getVisibleCards() {
        int iFindFirstCompletelyVisibleItemPosition;
        int iFindLastCompletelyVisibleItemPosition;
        ArrayList arrayList = new ArrayList();
        if (this.c != null && (iFindFirstCompletelyVisibleItemPosition = getCardLayoutManager().findFirstCompletelyVisibleItemPosition()) <= (iFindLastCompletelyVisibleItemPosition = getCardLayoutManager().findLastCompletelyVisibleItemPosition()) && iFindFirstCompletelyVisibleItemPosition >= 0 && iFindLastCompletelyVisibleItemPosition < this.c.size()) {
            while (iFindFirstCompletelyVisibleItemPosition <= iFindLastCompletelyVisibleItemPosition) {
                arrayList.add((g4) this.c.get(iFindFirstCompletelyVisibleItemPosition));
                iFindFirstCompletelyVisibleItemPosition++;
            }
        }
        return arrayList;
    }

    private void setCardLayoutManager(a1 a1Var) {
        a1Var.a(new a1.a() { // from class: com.my.target.b1$$ExternalSyntheticLambda0
            @Override // com.my.target.a1.a
            public final void a() {
                this.f$0.a();
            }
        });
        super.setLayoutManager(a1Var);
    }

    public void a(List list) {
        c cVar = new c(list, getContext());
        this.c = list;
        cVar.a(this.h);
        cVar.b(this.e);
        setCardLayoutManager(this.f4544a);
        setAdapter(cVar);
    }

    public a1 getCardLayoutManager() {
        return this.f4544a;
    }

    public LinearSnapHelper getSnapHelper() {
        return this.b;
    }

    @Override // androidx.recyclerview.widget.RecyclerView, android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        if (i3 > i4) {
            this.g = true;
        }
        super.onLayout(z, i, i2, i3, i4);
    }

    @Override // androidx.recyclerview.widget.RecyclerView
    public void onScrollStateChanged(int i) {
        super.onScrollStateChanged(i);
        boolean z = i != 0;
        this.f = z;
        if (z) {
            return;
        }
        a();
    }

    public void setCarouselListener(c1.b bVar) {
        this.d = bVar;
    }

    public void setSideSlidesMargins(int i) {
        getCardLayoutManager().a(i);
    }

    public b1(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public b1(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.e = new a();
        this.h = new b();
        setOverScrollMode(2);
        this.f4544a = new a1(context);
        LinearSnapHelper linearSnapHelper = new LinearSnapHelper();
        this.b = linearSnapHelper;
        linearSnapHelper.attachToRecyclerView(this);
    }

    public void a(boolean z) {
        if (z) {
            this.b.attachToRecyclerView(this);
        } else {
            this.b.attachToRecyclerView(null);
        }
    }

    public void a(View view) {
        int[] iArrCalculateDistanceToFinalSnap = this.b.calculateDistanceToFinalSnap(getCardLayoutManager(), view);
        if (iArrCalculateDistanceToFinalSnap != null) {
            smoothScrollBy(iArrCalculateDistanceToFinalSnap[0], 0);
        }
    }

    public final void a() {
        c1.b bVar = this.d;
        if (bVar != null) {
            bVar.a(getVisibleCards());
        }
    }
}
