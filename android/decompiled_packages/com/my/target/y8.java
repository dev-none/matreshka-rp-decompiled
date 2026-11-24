package com.my.target;

import android.content.Context;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.view.View;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class y8 extends RecyclerView implements z8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final b f4871a;
    public final x8.c b;
    public final x8 c;
    public boolean d;
    public c9.a e;

    public static class b extends LinearLayoutManager {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public x0.a f4873a;
        public int b;

        public b(Context context) {
            super(context, 0, false);
        }

        public void a(x0.a aVar) {
            this.f4873a = aVar;
        }

        @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
        public void measureChildWithMargins(View view, int i, int i2) {
            RecyclerView.LayoutParams layoutParams = (RecyclerView.LayoutParams) view.getLayoutParams();
            int width = getWidth();
            if (getHeight() <= 0 || width <= 0) {
                return;
            }
            if (getItemViewType(view) == 1) {
                layoutParams.rightMargin = this.b;
            } else if (getItemViewType(view) == 2) {
                layoutParams.leftMargin = this.b;
            } else {
                int i3 = this.b;
                layoutParams.leftMargin = i3;
                layoutParams.rightMargin = i3;
            }
            super.measureChildWithMargins(view, i, i2);
        }

        @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
        public void onLayoutCompleted(RecyclerView.State state) {
            super.onLayoutCompleted(state);
            x0.a aVar = this.f4873a;
            if (aVar != null) {
                aVar.a();
            }
        }

        public void a(int i) {
            this.b = i;
        }
    }

    public y8(Context context) {
        this(context, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a() {
        c9.a aVar = this.e;
        if (aVar != null) {
            aVar.a(getVisibleCardNumbers(), getContext());
        }
    }

    private void setCardLayoutManager(b bVar) {
        bVar.a(new x0.a() { // from class: com.my.target.y8$$ExternalSyntheticLambda0
            @Override // com.my.target.x0.a
            public final void a() {
                this.f$0.a();
            }
        });
        super.setLayoutManager(bVar);
    }

    @Override // com.my.target.c9
    public void dispose() {
        this.c.a();
    }

    @Override // com.my.target.c9
    public Parcelable getState() {
        return this.f4871a.onSaveInstanceState();
    }

    @Override // com.my.target.z8
    public View getView() {
        return this;
    }

    @Override // com.my.target.c9
    public int[] getVisibleCardNumbers() {
        int iFindFirstVisibleItemPosition = this.f4871a.findFirstVisibleItemPosition();
        int iFindLastVisibleItemPosition = this.f4871a.findLastVisibleItemPosition();
        if (iFindFirstVisibleItemPosition < 0 || iFindLastVisibleItemPosition < 0) {
            return new int[0];
        }
        if (bc.a(this.f4871a.findViewByPosition(iFindFirstVisibleItemPosition)) < 50.0f) {
            iFindFirstVisibleItemPosition++;
        }
        if (bc.a(this.f4871a.findViewByPosition(iFindLastVisibleItemPosition)) < 50.0f) {
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

    @Override // androidx.recyclerview.widget.RecyclerView
    public void onScrollStateChanged(int i) {
        super.onScrollStateChanged(i);
        boolean z = i != 0;
        this.d = z;
        if (z) {
            return;
        }
        a();
    }

    @Override // com.my.target.c9
    public void restoreState(Parcelable parcelable) {
        this.f4871a.onRestoreInstanceState(parcelable);
    }

    @Override // com.my.target.c9
    public void setPromoCardSliderListener(c9.a aVar) {
        this.e = aVar;
    }

    @Override // com.my.target.z8
    public void setupCards(List<d7> list) {
        this.c.a(list);
        if (isClickable()) {
            this.c.a(this.b);
        }
        setCardLayoutManager(this.f4871a);
        swapAdapter(this.c, true);
    }

    public y8(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public y8(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.b = new a();
        b bVar = new b(context);
        this.f4871a = bVar;
        bVar.a(kb.a(4, context));
        this.c = new x8(getContext());
        setHasFixedSize(true);
    }

    public class a implements x8.c {
        public a() {
        }

        @Override // com.my.target.m8
        public void a(View view, int i) {
            View viewFindContainingItemView;
            int position;
            y8 y8Var = y8.this;
            if (y8Var.d || !y8Var.isClickable() || (viewFindContainingItemView = y8.this.f4871a.findContainingItemView(view)) == null) {
                return;
            }
            y8 y8Var2 = y8.this;
            if (y8Var2.e == null || (position = y8Var2.f4871a.getPosition(viewFindContainingItemView)) < 0) {
                return;
            }
            y8.this.e.a(viewFindContainingItemView, position, i);
        }

        @Override // com.my.target.x8.c
        public void a(int i) {
            y8 y8Var = y8.this;
            c9.a aVar = y8Var.e;
            if (aVar != null) {
                aVar.a(i, y8Var.getContext());
            }
        }
    }
}
