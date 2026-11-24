package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import androidx.recyclerview.widget.RecyclerView;
import com.my.target.common.models.ImageData;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class x8 extends RecyclerView.Adapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f4862a;
    public final List b = new ArrayList();
    public c c;

    public static class a extends FrameLayout {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f4863a;
        public int b;

        public a(Context context) {
            super(context);
        }

        @Override // android.widget.FrameLayout, android.view.View
        public void onMeasure(int i, int i2) {
            int size = View.MeasureSpec.getSize(i);
            int size2 = View.MeasureSpec.getSize(i2);
            int mode = View.MeasureSpec.getMode(i);
            int mode2 = View.MeasureSpec.getMode(i2);
            if (size == 0) {
                size = this.f4863a;
            }
            if (size2 == 0) {
                size2 = this.b;
            }
            super.onMeasure(View.MeasureSpec.makeMeasureSpec(size, mode), View.MeasureSpec.makeMeasureSpec(size2, mode2));
        }
    }

    public static class b extends RecyclerView.ViewHolder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final ma f4864a;
        public final FrameLayout b;

        public b(FrameLayout frameLayout, ma maVar, FrameLayout frameLayout2) {
            super(frameLayout);
            this.f4864a = maVar;
            this.b = frameLayout2;
        }
    }

    public interface c extends m8 {
        void a(int i);
    }

    public x8(Context context) {
        this.f4862a = context;
    }

    public final /* synthetic */ void a(View view) {
        this.c.a(view, 1);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public int getItemCount() {
        return this.b.size();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public int getItemViewType(int i) {
        if (i == 0) {
            return 1;
        }
        return i == this.b.size() - 1 ? 2 : 0;
    }

    public void a(List list) {
        this.b.addAll(list);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onBindViewHolder(b bVar, int i) {
        c cVar = this.c;
        if (cVar != null) {
            cVar.a(i);
        }
        d7 d7Var = i < this.b.size() ? (d7) this.b.get(i) : null;
        ImageData imageDataS = d7Var != null ? d7Var.s() : null;
        if (imageDataS != null) {
            bVar.f4864a.setPlaceholderDimensions(imageDataS.getWidth(), imageDataS.getHeight());
            Bitmap bitmap = imageDataS.getBitmap();
            if (bitmap != null) {
                bVar.f4864a.setImageBitmap(bitmap);
            } else {
                a3.b(imageDataS, bVar.f4864a);
            }
        }
        bVar.f4864a.setContentDescription("card_" + i);
        bVar.b.setOnClickListener(new View.OnClickListener() { // from class: com.my.target.x8$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.a(view);
            }
        });
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public b onCreateViewHolder(ViewGroup viewGroup, int i) {
        a aVar = new a(this.f4862a);
        aVar.setLayoutParams(new RelativeLayout.LayoutParams(-2, -1));
        ma maVar = new ma(this.f4862a);
        kb.b(maVar, "card_media_view");
        aVar.addView(maVar, new FrameLayout.LayoutParams(-1, -1));
        FrameLayout frameLayout = new FrameLayout(this.f4862a);
        if (viewGroup.isClickable()) {
            kb.a(frameLayout, 0, 1153821432);
        }
        aVar.addView(frameLayout, new FrameLayout.LayoutParams(-1, -1));
        return new b(aVar, maVar, frameLayout);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onViewRecycled(b bVar) {
        int adapterPosition = bVar.getAdapterPosition();
        d7 d7Var = (adapterPosition <= 0 || adapterPosition >= this.b.size()) ? null : (d7) this.b.get(adapterPosition);
        bVar.f4864a.setImageData(null);
        ImageData imageDataS = d7Var != null ? d7Var.s() : null;
        if (imageDataS != null) {
            a3.a(imageDataS, bVar.f4864a);
        }
        bVar.b.setOnClickListener(null);
    }

    public void a() {
        this.b.clear();
        notifyDataSetChanged();
        this.c = null;
    }

    public void a(c cVar) {
        this.c = cVar;
    }
}
