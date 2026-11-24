package com.my.target.nativeads.views;

import android.content.Context;
import android.graphics.Rect;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import androidx.recyclerview.widget.RecyclerView;
import com.my.target.a3;
import com.my.target.bc;
import com.my.target.c9;
import com.my.target.common.models.ImageData;
import com.my.target.gb;
import com.my.target.kb;
import com.my.target.m8;
import com.my.target.ma;
import com.my.target.nativeads.banners.NativePromoCard;
import com.my.target.x0;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class PromoCardRecyclerView extends RecyclerView implements c9, PromoCardSnapHelper.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final x0 f4744a;
    public final PromoCardSnapHelper b;
    public boolean c;
    public boolean d;
    public c9.a e;
    public boolean f;
    public final c g;
    public int h;
    public PromoCardAdapter i;

    public static abstract class PromoCardAdapter extends RecyclerView.Adapter<f> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final List f4745a = new ArrayList();
        public final List b = new ArrayList();
        public c c;

        public void a(c cVar) {
            this.c = cVar;
        }

        public final /* synthetic */ void b(View view) {
            c cVar = this.c;
            if (cVar != null) {
                cVar.a(view, 2);
            }
        }

        @Override // androidx.recyclerview.widget.RecyclerView.Adapter
        public int getItemCount() {
            return this.f4745a.size();
        }

        public List<NativePromoCard> getNativePromoCards() {
            return this.b;
        }

        public abstract PromoCardView getPromoCardView();

        public void setCards(List<NativePromoCard> list) {
            this.f4745a.clear();
            this.b.clear();
            for (NativePromoCard nativePromoCard : list) {
                this.f4745a.add(new d(nativePromoCard));
                this.b.add(nativePromoCard);
            }
            notifyDataSetChanged();
        }

        public final /* synthetic */ void a(View view) {
            c cVar = this.c;
            if (cVar != null) {
                cVar.a(view, 1);
            }
        }

        @Override // androidx.recyclerview.widget.RecyclerView.Adapter
        public void onBindViewHolder(f fVar, int i) {
            PromoCardView promoCardViewA = fVar.a();
            ArrayList arrayList = new ArrayList(this.f4745a);
            ArrayList arrayList2 = new ArrayList(this.b);
            if (i < arrayList.size() && arrayList.size() == arrayList2.size()) {
                a((NativePromoCard) arrayList2.get(i), promoCardViewA, (PromoCardView.Card) arrayList.get(i));
                c cVar = this.c;
                if (cVar != null) {
                    cVar.a(i);
                }
            }
            promoCardViewA.getView().setContentDescription("card_" + i);
            promoCardViewA.getView().setOnClickListener(new View.OnClickListener() { // from class: com.my.target.nativeads.views.PromoCardRecyclerView$PromoCardAdapter$$ExternalSyntheticLambda0
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    this.f$0.a(view);
                }
            });
            promoCardViewA.setCtaOnClickListener(new View.OnClickListener() { // from class: com.my.target.nativeads.views.PromoCardRecyclerView$PromoCardAdapter$$ExternalSyntheticLambda1
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    this.f$0.b(view);
                }
            });
        }

        @Override // androidx.recyclerview.widget.RecyclerView.Adapter
        public f onCreateViewHolder(ViewGroup viewGroup, int i) {
            return new f(getPromoCardView());
        }

        @Override // androidx.recyclerview.widget.RecyclerView.Adapter
        public void onViewRecycled(f fVar) {
            NativePromoCard nativePromoCard;
            ImageData image;
            int layoutPosition = fVar.getLayoutPosition();
            PromoCardView promoCardViewA = fVar.a();
            ma maVar = (ma) promoCardViewA.getMediaAdView().getImageView();
            maVar.setImageData(null);
            if (layoutPosition > 0 && layoutPosition < this.b.size() && (nativePromoCard = (NativePromoCard) this.b.get(layoutPosition)) != null && (image = nativePromoCard.getImage()) != null) {
                a3.a(image, maVar);
            }
            promoCardViewA.getView().setOnClickListener(null);
            promoCardViewA.setCtaOnClickListener(null);
            super.onViewRecycled(fVar);
        }

        public void b() {
            Iterator it = this.b.iterator();
            while (it.hasNext()) {
                this.f4745a.add(new d((NativePromoCard) it.next()));
            }
            notifyDataSetChanged();
        }

        public void a() {
            this.f4745a.clear();
            notifyDataSetChanged();
        }

        public final void a(NativePromoCard nativePromoCard, PromoCardView promoCardView, PromoCardView.Card card) {
            if (nativePromoCard.getImage() != null) {
                promoCardView.getMediaAdView().setPlaceHolderDimension(nativePromoCard.getImage().getWidth(), nativePromoCard.getImage().getHeight());
                if (nativePromoCard.getImage().getData() != null) {
                    promoCardView.getMediaAdView().getImageView().setImageBitmap(nativePromoCard.getImage().getData());
                } else {
                    a3.b(nativePromoCard.getImage(), promoCardView.getMediaAdView().getImageView());
                }
            }
            promoCardView.setCard(card);
        }
    }

    public class a implements c {
        public a() {
        }

        @Override // com.my.target.m8
        public void a(View view, int i) {
            PromoCardRecyclerView.this.a(view, i);
        }

        @Override // com.my.target.nativeads.views.PromoCardRecyclerView.c
        public void a(int i) {
            PromoCardRecyclerView.this.a(i);
        }
    }

    public class b extends RecyclerView.OnScrollListener {
        public b() {
        }

        @Override // androidx.recyclerview.widget.RecyclerView.OnScrollListener
        public void onScrollStateChanged(RecyclerView recyclerView, int i) {
            super.onScrollStateChanged(recyclerView, i);
            PromoCardRecyclerView promoCardRecyclerView = PromoCardRecyclerView.this;
            promoCardRecyclerView.d = !promoCardRecyclerView.canScrollHorizontally(1);
            PromoCardRecyclerView promoCardRecyclerView2 = PromoCardRecyclerView.this;
            promoCardRecyclerView2.c = true ^ promoCardRecyclerView2.canScrollHorizontally(-1);
        }
    }

    public interface c extends m8 {
        void a(int i);
    }

    public static final class d extends PromoCardView.Card {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final NativePromoCard f4748a;

        public d(NativePromoCard nativePromoCard) {
            this.f4748a = nativePromoCard;
        }

        @Override // com.my.target.nativeads.views.PromoCardView.Card
        public String getCtaButtonText() {
            return this.f4748a.getCtaText();
        }

        @Override // com.my.target.nativeads.views.PromoCardView.Card
        public String getCurrency() {
            return this.f4748a.getCurrency();
        }

        @Override // com.my.target.nativeads.views.PromoCardView.Card
        public String getDescription() {
            return this.f4748a.getDescription();
        }

        @Override // com.my.target.nativeads.views.PromoCardView.Card
        public String getDiscountText() {
            return this.f4748a.getDiscount();
        }

        @Override // com.my.target.nativeads.views.PromoCardView.Card
        public String getOldPriceText() {
            return this.f4748a.getOldPrice();
        }

        @Override // com.my.target.nativeads.views.PromoCardView.Card
        public String getPriceText() {
            return this.f4748a.getPrice();
        }

        @Override // com.my.target.nativeads.views.PromoCardView.Card
        public String getTitle() {
            return this.f4748a.getTitle();
        }
    }

    public static final class e extends RecyclerView.ItemDecoration {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f4749a;

        public e(int i) {
            this.f4749a = i / 2;
        }

        @Override // androidx.recyclerview.widget.RecyclerView.ItemDecoration
        public void getItemOffsets(Rect rect, View view, RecyclerView recyclerView, RecyclerView.State state) {
            super.getItemOffsets(rect, view, recyclerView, state);
            int childAdapterPosition = recyclerView.getChildAdapterPosition(view);
            if (state.getItemCount() == 1) {
                return;
            }
            if (childAdapterPosition == 0) {
                rect.right = this.f4749a;
            } else {
                if (childAdapterPosition == state.getItemCount() - 1) {
                    rect.left = this.f4749a;
                    return;
                }
                int i = this.f4749a;
                rect.right = i;
                rect.left = i;
            }
        }
    }

    public static class f extends RecyclerView.ViewHolder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final PromoCardView f4750a;

        public f(PromoCardView promoCardView) {
            super(promoCardView.getView());
            promoCardView.getView().setLayoutParams(new RelativeLayout.LayoutParams(-1, -2));
            this.f4750a = promoCardView;
        }

        public PromoCardView a() {
            return this.f4750a;
        }
    }

    public PromoCardRecyclerView(Context context) {
        this(context, null);
    }

    public void a(View view, int i) {
        View viewFindContainingItemView;
        if (this.f || (viewFindContainingItemView = this.f4744a.findContainingItemView(view)) == null) {
            return;
        }
        if (!this.f4744a.a(viewFindContainingItemView)) {
            smoothScrollBy(this.b.calculateDistanceToFinalSnap(this.f4744a, viewFindContainingItemView)[0], 0);
            return;
        }
        int position = this.f4744a.getPosition(viewFindContainingItemView);
        c9.a aVar = this.e;
        if (aVar == null || position < 0) {
            return;
        }
        aVar.a(viewFindContainingItemView, position, i);
    }

    @Override // com.my.target.c9
    public void dispose() {
        PromoCardAdapter promoCardAdapter = this.i;
        if (promoCardAdapter != null) {
            promoCardAdapter.a();
        }
    }

    @Override // com.my.target.c9
    public Parcelable getState() {
        return this.f4744a.onSaveInstanceState();
    }

    @Override // com.my.target.c9
    public int[] getVisibleCardNumbers() {
        int iFindFirstVisibleItemPosition = this.f4744a.findFirstVisibleItemPosition();
        int iFindLastVisibleItemPosition = this.f4744a.findLastVisibleItemPosition();
        if (iFindFirstVisibleItemPosition < 0 || iFindLastVisibleItemPosition < 0) {
            return new int[0];
        }
        if (bc.a(this.f4744a.findViewByPosition(iFindFirstVisibleItemPosition)) < 50.0f) {
            iFindFirstVisibleItemPosition++;
        }
        if (bc.a(this.f4744a.findViewByPosition(iFindLastVisibleItemPosition)) < 50.0f) {
            iFindLastVisibleItemPosition--;
        }
        if (iFindFirstVisibleItemPosition > iFindLastVisibleItemPosition) {
            return new int[0];
        }
        if (iFindFirstVisibleItemPosition == iFindLastVisibleItemPosition) {
            return new int[]{iFindFirstVisibleItemPosition};
        }
        int i = (iFindLastVisibleItemPosition - iFindFirstVisibleItemPosition) + 1;
        int[] iArr = new int[i];
        for (int i2 = 0; i2 < i; i2++) {
            iArr[i2] = iFindFirstVisibleItemPosition;
            iFindFirstVisibleItemPosition++;
        }
        return iArr;
    }

    @Override // com.my.target.nativeads.views.PromoCardSnapHelper.a
    public boolean isReachedEnd() {
        return this.d;
    }

    @Override // com.my.target.nativeads.views.PromoCardSnapHelper.a
    public boolean isReachedStart() {
        return this.c;
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

    @Override // com.my.target.c9
    public void restoreState(Parcelable parcelable) {
        PromoCardAdapter promoCardAdapter = this.i;
        if (promoCardAdapter != null) {
            promoCardAdapter.b();
        }
        this.f4744a.onRestoreInstanceState(parcelable);
    }

    @Override // androidx.recyclerview.widget.RecyclerView
    public void setAdapter(RecyclerView.Adapter adapter) {
        if (adapter instanceof PromoCardAdapter) {
            setPromoCardAdapter((PromoCardAdapter) adapter);
        } else {
            gb.a("PromoCardRecyclerView: You must use setPromoCardAdapter(PromoCardAdapter) method with custom CardRecyclerView");
        }
    }

    public void setPromoCardAdapter(PromoCardAdapter promoCardAdapter) {
        if (promoCardAdapter == null) {
            return;
        }
        this.i = promoCardAdapter;
        promoCardAdapter.a(this.g);
        this.f4744a.a(new x0.a() { // from class: com.my.target.nativeads.views.PromoCardRecyclerView$$ExternalSyntheticLambda0
            @Override // com.my.target.x0.a
            public final void a() {
                this.f$0.a();
            }
        });
        setLayoutManager(this.f4744a);
        super.swapAdapter(this.i, true);
    }

    @Override // com.my.target.c9
    public void setPromoCardSliderListener(c9.a aVar) {
        this.e = aVar;
    }

    public PromoCardRecyclerView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public PromoCardRecyclerView(Context context, AttributeSet attributeSet, int i) {
        this(context, attributeSet, i, -1.0f, -1);
    }

    public PromoCardRecyclerView(Context context, AttributeSet attributeSet, int i, float f2, int i2) {
        super(context, attributeSet, i);
        this.g = new a();
        this.h = -1;
        this.f4744a = new x0(f2, getContext());
        setHasFixedSize(true);
        int iA = kb.a(i2 == -1 ? 16 : i2, context);
        PromoCardSnapHelper promoCardSnapHelper = new PromoCardSnapHelper(iA, this);
        this.b = promoCardSnapHelper;
        promoCardSnapHelper.attachToRecyclerView(this);
        addItemDecoration(new e(iA));
        addOnScrollListener(new b());
    }

    public void a(int i) {
        c9.a aVar = this.e;
        if (aVar != null) {
            aVar.a(i, getContext());
        }
    }

    public final void a() {
        int iFindFirstCompletelyVisibleItemPosition = this.f4744a.findFirstCompletelyVisibleItemPosition();
        if (iFindFirstCompletelyVisibleItemPosition >= 0 && this.h != iFindFirstCompletelyVisibleItemPosition) {
            this.h = iFindFirstCompletelyVisibleItemPosition;
            if (this.e == null || this.f4744a.findViewByPosition(iFindFirstCompletelyVisibleItemPosition) == null) {
                return;
            }
            this.e.a(new int[]{this.h}, getContext());
        }
    }
}
