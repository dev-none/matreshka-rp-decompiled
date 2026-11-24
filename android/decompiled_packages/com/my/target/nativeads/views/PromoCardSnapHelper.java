package com.my.target.nativeads.views;

import android.view.View;
import androidx.recyclerview.widget.OrientationHelper;
import androidx.recyclerview.widget.RecyclerView;
import androidx.recyclerview.widget.SnapHelper;

/* JADX INFO: loaded from: classes6.dex */
public final class PromoCardSnapHelper extends SnapHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f4751a;
    public final a b;
    public OrientationHelper c;

    public interface a {
        boolean isReachedEnd();

        boolean isReachedStart();
    }

    public PromoCardSnapHelper(int i, a aVar) {
        this.f4751a = i;
        this.b = aVar;
    }

    public final boolean a(RecyclerView.LayoutManager layoutManager, int i, int i2) {
        if (layoutManager.canScrollHorizontally()) {
            return i > 0;
        }
        return i2 > 0;
    }

    @Override // androidx.recyclerview.widget.SnapHelper
    public int[] calculateDistanceToFinalSnap(RecyclerView.LayoutManager layoutManager, View view) {
        int[] iArr = new int[2];
        if (layoutManager.canScrollHorizontally()) {
            iArr[0] = a(layoutManager, view, a(layoutManager));
        }
        return iArr;
    }

    @Override // androidx.recyclerview.widget.SnapHelper
    public View findSnapView(RecyclerView.LayoutManager layoutManager) {
        int childCount = layoutManager.getChildCount();
        View view = null;
        if (childCount == 0) {
            return null;
        }
        if (this.b.isReachedStart()) {
            return layoutManager.getChildAt(0);
        }
        if (this.b.isReachedEnd()) {
            return layoutManager.getChildAt(childCount - 1);
        }
        OrientationHelper orientationHelperA = a(layoutManager);
        int startAfterPadding = orientationHelperA.getStartAfterPadding() + (orientationHelperA.getTotalSpace() / 2) + 1;
        int i = Integer.MAX_VALUE;
        for (int i2 = 0; i2 < childCount; i2++) {
            View childAt = layoutManager.getChildAt(i2);
            int iAbs = Math.abs((orientationHelperA.getDecoratedStart(childAt) + (orientationHelperA.getDecoratedMeasurement(childAt) / 2)) - startAfterPadding);
            if (iAbs < i) {
                view = childAt;
                i = iAbs;
            }
        }
        return view;
    }

    @Override // androidx.recyclerview.widget.SnapHelper
    public int findTargetSnapPosition(RecyclerView.LayoutManager layoutManager, int i, int i2) {
        int itemCount = layoutManager.getItemCount();
        if (itemCount == 0) {
            return -1;
        }
        OrientationHelper orientationHelperA = a(layoutManager);
        int childCount = layoutManager.getChildCount();
        View view = null;
        int i3 = Integer.MAX_VALUE;
        int i4 = Integer.MIN_VALUE;
        View view2 = null;
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = layoutManager.getChildAt(i5);
            if (childAt != null) {
                int iA = a(layoutManager, childAt, orientationHelperA);
                if (iA <= 0 && iA > i4) {
                    view2 = childAt;
                    i4 = iA;
                }
                if (iA >= 0 && iA < i3) {
                    view = childAt;
                    i3 = iA;
                }
            }
        }
        boolean zA = a(layoutManager, i, i2);
        if (zA && view != null) {
            return layoutManager.getPosition(view);
        }
        if (!zA && view2 != null) {
            return layoutManager.getPosition(view2);
        }
        if (zA) {
            view = view2;
        }
        if (view == null) {
            return -1;
        }
        int position = layoutManager.getPosition(view) + (!zA ? -1 : 1);
        if (position < 0 || position >= itemCount) {
            return -1;
        }
        return position;
    }

    public final int a(RecyclerView.LayoutManager layoutManager, View view, OrientationHelper orientationHelper) {
        int decoratedStart = (orientationHelper.getDecoratedStart(view) + (orientationHelper.getDecoratedMeasurement(view) / 2)) - (orientationHelper.getStartAfterPadding() + (orientationHelper.getTotalSpace() / 2));
        if (layoutManager.getPosition(view) == 0) {
            return decoratedStart - (this.f4751a / 2);
        }
        return layoutManager.getItemCount() + (-1) == layoutManager.getPosition(view) ? decoratedStart + (this.f4751a / 2) : decoratedStart;
    }

    public final OrientationHelper a(RecyclerView.LayoutManager layoutManager) {
        OrientationHelper orientationHelper = this.c;
        if (orientationHelper == null || orientationHelper.getLayoutManager() != layoutManager) {
            this.c = OrientationHelper.createHorizontalHelper(layoutManager);
        }
        return this.c;
    }
}
