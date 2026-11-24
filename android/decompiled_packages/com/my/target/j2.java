package com.my.target;

import android.content.Context;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.animation.DecelerateInterpolator;
import androidx.core.view.GravityCompat;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.LinearSmoothScroller;
import androidx.recyclerview.widget.LinearSnapHelper;
import androidx.recyclerview.widget.OrientationHelper;
import androidx.recyclerview.widget.RecyclerView;

/* JADX INFO: loaded from: classes6.dex */
public class j2 extends LinearSnapHelper {
    public int b;
    public OrientationHelper g;
    public OrientationHelper h;
    public RecyclerView i;
    public final boolean c = false;
    public final float d = 60.0f;
    public final int e = -1;
    public final float f = -1.0f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final DecelerateInterpolator f4668a = new DecelerateInterpolator(1.7f);

    public class a extends LinearSmoothScroller {
        public a(Context context) {
            super(context);
        }

        @Override // androidx.recyclerview.widget.LinearSmoothScroller
        public float calculateSpeedPerPixel(DisplayMetrics displayMetrics) {
            return 60.0f / displayMetrics.densityDpi;
        }

        @Override // androidx.recyclerview.widget.LinearSmoothScroller
        public int calculateTimeForDeceleration(int i) {
            return (int) Math.ceil(((double) calculateTimeForScrolling(i)) / 0.3d);
        }

        @Override // androidx.recyclerview.widget.LinearSmoothScroller, androidx.recyclerview.widget.RecyclerView.SmoothScroller
        public void onTargetFound(View view, RecyclerView.State state, RecyclerView.SmoothScroller.Action action) {
            RecyclerView recyclerView = j2.this.i;
            if (recyclerView == null || recyclerView.getLayoutManager() == null) {
                return;
            }
            j2 j2Var = j2.this;
            int[] iArrCalculateDistanceToFinalSnap = j2Var.calculateDistanceToFinalSnap(j2Var.i.getLayoutManager(), view);
            int i = iArrCalculateDistanceToFinalSnap[0];
            int i2 = iArrCalculateDistanceToFinalSnap[1];
            int iCalculateTimeForDeceleration = calculateTimeForDeceleration(Math.max(Math.abs(i), Math.abs(i2)));
            if (iCalculateTimeForDeceleration > 0) {
                action.update(i, i2, iCalculateTimeForDeceleration, j2.this.f4668a);
            }
        }
    }

    public j2(int i) {
        this.b = i;
    }

    public void a(int i, Boolean bool) {
        if (this.b != i) {
            this.b = i;
            a(bool);
        }
    }

    @Override // androidx.recyclerview.widget.SnapHelper
    public void attachToRecyclerView(RecyclerView recyclerView) {
        if (recyclerView != null) {
            recyclerView.setOnFlingListener(null);
            this.i = recyclerView;
        } else {
            this.i = null;
        }
        try {
            super.attachToRecyclerView(recyclerView);
        } catch (Throwable unused) {
        }
    }

    public void b(int i) {
        RecyclerView recyclerView;
        RecyclerView.SmoothScroller smoothScrollerCreateScroller;
        if (i == -1 || (recyclerView = this.i) == null || recyclerView.getLayoutManager() == null || (smoothScrollerCreateScroller = createScroller(this.i.getLayoutManager())) == null) {
            return;
        }
        smoothScrollerCreateScroller.setTargetPosition(i);
        this.i.getLayoutManager().startSmoothScroll(smoothScrollerCreateScroller);
    }

    @Override // androidx.recyclerview.widget.LinearSnapHelper, androidx.recyclerview.widget.SnapHelper
    public int[] calculateDistanceToFinalSnap(RecyclerView.LayoutManager layoutManager, View view) {
        int i = this.b;
        if (i == 17) {
            return super.calculateDistanceToFinalSnap(layoutManager, view);
        }
        int[] iArr = new int[2];
        if (!(layoutManager instanceof LinearLayoutManager)) {
            return iArr;
        }
        LinearLayoutManager linearLayoutManager = (LinearLayoutManager) layoutManager;
        if (i == 8388611) {
            iArr[0] = b(view, getHorizontalHelper(linearLayoutManager));
            return iArr;
        }
        iArr[0] = a(view, getHorizontalHelper(linearLayoutManager));
        return iArr;
    }

    @Override // androidx.recyclerview.widget.SnapHelper
    public int[] calculateScrollDistance(int i, int i2) {
        return super.calculateScrollDistance(i, i2);
    }

    @Override // androidx.recyclerview.widget.SnapHelper
    public RecyclerView.SmoothScroller createScroller(RecyclerView.LayoutManager layoutManager) {
        if (!(layoutManager instanceof RecyclerView.SmoothScroller.ScrollVectorProvider) || this.i == null) {
            return null;
        }
        return new a(this.i.getContext());
    }

    @Override // androidx.recyclerview.widget.LinearSnapHelper, androidx.recyclerview.widget.SnapHelper
    public View findSnapView(RecyclerView.LayoutManager layoutManager) {
        return a(layoutManager, true);
    }

    public final OrientationHelper getHorizontalHelper(RecyclerView.LayoutManager layoutManager) {
        OrientationHelper orientationHelper = this.h;
        if (orientationHelper == null || orientationHelper.getLayoutManager() != layoutManager) {
            this.h = OrientationHelper.createHorizontalHelper(layoutManager);
        }
        return this.h;
    }

    public final OrientationHelper getVerticalHelper(RecyclerView.LayoutManager layoutManager) {
        OrientationHelper orientationHelper = this.g;
        if (orientationHelper == null || orientationHelper.getLayoutManager() != layoutManager) {
            this.g = OrientationHelper.createVerticalHelper(layoutManager);
        }
        return this.g;
    }

    public void a(int i) {
        a(i, Boolean.TRUE);
    }

    public final View a(RecyclerView.LayoutManager layoutManager, boolean z) {
        int i = this.b;
        if (i == 17) {
            return a(layoutManager, getHorizontalHelper(layoutManager), 17, z);
        }
        if (i == 48) {
            return a(layoutManager, getVerticalHelper(layoutManager), GravityCompat.START, z);
        }
        if (i == 80) {
            return a(layoutManager, getVerticalHelper(layoutManager), GravityCompat.END, z);
        }
        if (i == 8388611) {
            return a(layoutManager, getHorizontalHelper(layoutManager), GravityCompat.START, z);
        }
        if (i != 8388613) {
            return null;
        }
        return a(layoutManager, getHorizontalHelper(layoutManager), GravityCompat.END, z);
    }

    public final int b(View view, OrientationHelper orientationHelper) {
        int decoratedStart = orientationHelper.getDecoratedStart(view);
        return decoratedStart >= orientationHelper.getStartAfterPadding() / 2 ? decoratedStart - orientationHelper.getStartAfterPadding() : decoratedStart;
    }

    public final void a(Boolean bool) {
        RecyclerView.LayoutManager layoutManager;
        View viewA;
        RecyclerView recyclerView = this.i;
        if (recyclerView == null || recyclerView.getLayoutManager() == null || (viewA = a((layoutManager = this.i.getLayoutManager()), false)) == null) {
            return;
        }
        int[] iArrCalculateDistanceToFinalSnap = calculateDistanceToFinalSnap(layoutManager, viewA);
        if (bool.booleanValue()) {
            this.i.smoothScrollBy(iArrCalculateDistanceToFinalSnap[0], iArrCalculateDistanceToFinalSnap[1]);
        } else {
            this.i.scrollBy(iArrCalculateDistanceToFinalSnap[0], iArrCalculateDistanceToFinalSnap[1]);
        }
    }

    public final int a(View view, OrientationHelper orientationHelper) {
        int decoratedEnd = orientationHelper.getDecoratedEnd(view);
        if (decoratedEnd >= orientationHelper.getEnd() - ((orientationHelper.getEnd() - orientationHelper.getEndAfterPadding()) / 2)) {
            return orientationHelper.getDecoratedEnd(view) - orientationHelper.getEnd();
        }
        return decoratedEnd - orientationHelper.getEndAfterPadding();
    }

    public final View a(RecyclerView.LayoutManager layoutManager, OrientationHelper orientationHelper, int i, boolean z) {
        int end;
        int iAbs;
        View view = null;
        if (layoutManager.getChildCount() != 0 && (layoutManager instanceof LinearLayoutManager)) {
            LinearLayoutManager linearLayoutManager = (LinearLayoutManager) layoutManager;
            if (z && a(linearLayoutManager)) {
                return null;
            }
            if (layoutManager.getClipToPadding()) {
                end = orientationHelper.getStartAfterPadding() + (orientationHelper.getTotalSpace() / 2);
            } else {
                end = orientationHelper.getEnd() / 2;
            }
            boolean z2 = i == 8388611;
            int i2 = Integer.MAX_VALUE;
            for (int i3 = 0; i3 < linearLayoutManager.getChildCount(); i3++) {
                View childAt = linearLayoutManager.getChildAt(i3);
                if (z2) {
                    iAbs = Math.abs(orientationHelper.getDecoratedStart(childAt));
                } else {
                    iAbs = Math.abs((orientationHelper.getDecoratedStart(childAt) + (orientationHelper.getDecoratedMeasurement(childAt) / 2)) - end);
                }
                if (iAbs < i2) {
                    view = childAt;
                    i2 = iAbs;
                }
            }
        }
        return view;
    }

    public final boolean a(LinearLayoutManager linearLayoutManager) {
        if ((!linearLayoutManager.getReverseLayout() && this.b == 8388611) || ((linearLayoutManager.getReverseLayout() && this.b == 8388613) || ((!linearLayoutManager.getReverseLayout() && this.b == 48) || (linearLayoutManager.getReverseLayout() && this.b == 80)))) {
            return linearLayoutManager.findLastCompletelyVisibleItemPosition() == linearLayoutManager.getItemCount() - 1;
        }
        if (this.b == 17) {
            return linearLayoutManager.findFirstCompletelyVisibleItemPosition() == 0 || linearLayoutManager.findLastCompletelyVisibleItemPosition() == linearLayoutManager.getItemCount() - 1;
        }
        return linearLayoutManager.findFirstCompletelyVisibleItemPosition() == 0;
    }
}
