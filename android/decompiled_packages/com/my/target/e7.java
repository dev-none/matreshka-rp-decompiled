package com.my.target;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import com.my.target.common.menu.MenuFactory;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public final class e7 extends d {
    public int g;
    public a h;

    public class a implements View.OnLayoutChangeListener {
        public a() {
        }

        @Override // android.view.View.OnLayoutChangeListener
        public void onLayoutChange(View view, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8) {
            int paddingLeft;
            int paddingTop;
            int paddingTop2;
            int paddingRight;
            int paddingBottom;
            int paddingBottom2;
            WeakReference weakReference = e7.this.f;
            i iVar = weakReference != null ? (i) weakReference.get() : null;
            if (iVar == null) {
                return;
            }
            int measuredWidth = view.getMeasuredWidth();
            int measuredHeight = view.getMeasuredHeight();
            int measuredWidth2 = iVar.getMeasuredWidth();
            int measuredHeight2 = iVar.getMeasuredHeight();
            int i9 = e7.this.g;
            if (i9 != 1) {
                if (i9 == 2) {
                    int paddingLeft2 = (measuredWidth - measuredWidth2) - view.getPaddingLeft();
                    paddingBottom = (measuredHeight - view.getPaddingBottom()) - measuredHeight2;
                    paddingRight = measuredWidth - view.getPaddingRight();
                    paddingBottom2 = measuredHeight - view.getPaddingBottom();
                    paddingLeft = paddingLeft2;
                } else if (i9 == 3) {
                    int paddingLeft3 = view.getPaddingLeft();
                    paddingBottom = (measuredHeight - view.getPaddingBottom()) - measuredHeight2;
                    int paddingLeft4 = measuredWidth2 + view.getPaddingLeft();
                    paddingBottom2 = measuredHeight - view.getPaddingBottom();
                    paddingLeft = paddingLeft3;
                    paddingRight = paddingLeft4;
                } else {
                    if (i9 == 4 || i9 == 5) {
                        return;
                    }
                    paddingLeft = (measuredWidth - measuredWidth2) - view.getPaddingLeft();
                    paddingTop2 = view.getPaddingTop();
                    paddingRight = measuredWidth - view.getPaddingRight();
                    paddingTop = measuredHeight2 + view.getPaddingTop();
                }
                paddingTop2 = paddingBottom;
                paddingTop = paddingBottom2;
            } else {
                paddingLeft = view.getPaddingLeft();
                int paddingTop3 = view.getPaddingTop();
                int paddingLeft5 = measuredWidth2 + view.getPaddingLeft();
                paddingTop = measuredHeight2 + view.getPaddingTop();
                paddingTop2 = paddingTop3;
                paddingRight = paddingLeft5;
            }
            iVar.layout(paddingLeft, paddingTop2, paddingRight, paddingTop);
        }
    }

    public e7(c cVar, MenuFactory menuFactory, a3.b bVar) {
        super(cVar, menuFactory, bVar);
        if (cVar == null) {
            return;
        }
        this.h = new a();
    }

    public static e7 b(c cVar, MenuFactory menuFactory, a3.b bVar) {
        return new e7(cVar, menuFactory, bVar);
    }

    public void a(ViewGroup viewGroup, g8 g8Var, d.a aVar, int i) {
        View viewB = g8Var.b();
        this.g = i;
        if (i == 5) {
            f fVar = this.b;
            if (fVar != null) {
                fVar.a(aVar);
            }
            gb.a("NativeAdChoicesController: No need to add AdChoicesView, adChoicesPlacement is DRAWING_MANUAL");
            return;
        }
        if (viewB != null && !(viewB instanceof i)) {
            gb.a("NativeAdChoicesController: Warning! You must use AdChoicesView class for placement " + i);
            return;
        }
        i iVar = (i) viewB;
        if (this.f4587a == null) {
            if (iVar != null) {
                a(iVar);
                return;
            }
            return;
        }
        if (iVar == null) {
            Context context = viewGroup.getContext();
            i iVar2 = new i(context);
            kb.b(iVar2, "ad_choices");
            int iA = kb.a(2, context);
            iVar2.setPadding(iA, iA, iA, iA);
            g8Var.a(iVar2);
            iVar = iVar2;
        }
        if (iVar.getParent() == null) {
            try {
                viewGroup.addView(iVar);
            } catch (Throwable th) {
                gb.a("NativeAdChoicesController: Unable to add AdChoices View - " + th.getMessage());
            }
        }
        if (i != 4) {
            viewGroup.addOnLayoutChangeListener(this.h);
        }
        super.a(iVar, aVar);
    }

    public void b(View view) {
        super.a();
        a aVar = this.h;
        if (aVar == null) {
            return;
        }
        view.removeOnLayoutChangeListener(aVar);
    }
}
