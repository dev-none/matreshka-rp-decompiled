package com.my.target;

import android.graphics.Rect;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import java.lang.ref.WeakReference;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class bc implements w2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f4559a;
    public final u9 b;
    public final float c;
    public final boolean d;
    public WeakReference h;
    public WeakReference i;
    public a j;
    public boolean f = false;
    public boolean g = false;
    public final Runnable e = new Runnable() { // from class: com.my.target.bc$$ExternalSyntheticLambda0
        @Override // java.lang.Runnable
        public final void run() {
            this.f$0.b();
        }
    };

    public static abstract class a {
        public void a() {
        }

        public void a(boolean z) {
        }
    }

    public bc(xb xbVar, za zaVar, boolean z) {
        float fB = xbVar.b();
        if (fB == 1.0f) {
            this.b = u9.d;
        } else {
            this.b = u9.a((int) (fB * 1000.0f));
        }
        this.f4559a = new ArrayList();
        a(xbVar, zaVar);
        this.c = xbVar.c() * 100.0f;
        this.d = z;
    }

    public static bc a(xb xbVar, za zaVar, boolean z) {
        return new bc(xbVar, zaVar, z);
    }

    public static bc b(xb xbVar, za zaVar) {
        return new bc(xbVar, zaVar, true);
    }

    public boolean c() {
        return this.f;
    }

    public void d() {
        WeakReference weakReference = this.i;
        dc dcVar = weakReference == null ? null : (dc) weakReference.get();
        this.i = null;
        if (dcVar == null) {
            return;
        }
        dcVar.setStateChangedListener(null);
        ViewParent parent = dcVar.getParent();
        if (parent == null) {
            return;
        }
        ((ViewGroup) parent).removeView(dcVar);
        gb.b("ViewabilityTracker", "help view removed");
    }

    public void e() {
        if (this.f) {
            this.f = false;
            gb.b("ViewabilityTracker", "stop tracking");
            d();
            this.b.b(this.e);
            this.g = false;
            this.h = null;
            for (int size = this.f4559a.size() - 1; size >= 0; size--) {
                ((cb) this.f4559a.get(size)).c();
            }
        }
    }

    public static float a(View view) {
        if (view != null && view.getParent() != null && view.getWindowVisibility() == 0 && view.getVisibility() == 0 && view.getAlpha() >= 0.5f) {
            int width = view.getWidth();
            int height = view.getHeight();
            if (height > 0 && width > 0) {
                Rect rect = new Rect();
                if (view.getGlobalVisibleRect(rect)) {
                    return (rect.width() * rect.height()) / ((width * height) / 100.0f);
                }
            }
        }
        return 0.0f;
    }

    public void b(View view) {
        if (this.f) {
            this.h = new WeakReference(view);
            if (view instanceof ViewGroup) {
                a((ViewGroup) view);
            }
        }
    }

    public void c(View view) {
        if (this.f) {
            return;
        }
        if (this.f4559a.isEmpty() && this.d) {
            return;
        }
        gb.b("ViewabilityTracker", "start tracking");
        this.f = true;
        this.h = new WeakReference(view);
        for (int size = this.f4559a.size() - 1; size >= 0; size--) {
            ((cb) this.f4559a.get(size)).a(view);
        }
        b();
        if (this.f) {
            this.b.a(this.e);
            if (view instanceof ViewGroup) {
                a((ViewGroup) view);
            }
        }
    }

    public void b() {
        WeakReference weakReference = this.h;
        View view = weakReference == null ? null : (View) weakReference.get();
        if (view == null) {
            gb.b("ViewabilityTracker", "Tracking view disappeared");
            e();
            return;
        }
        float fA = a(view);
        boolean z = e2.a(fA, this.c) != -1;
        gb.b("ViewabilityTracker", "View visibility " + fA + "% (isVisible = " + z + ")");
        a(z, fA, view);
    }

    @Override // com.my.target.w2
    public a a() {
        return this.j;
    }

    public void a(a aVar) {
        this.j = aVar;
    }

    @Override // com.my.target.w2
    public void a(cb cbVar) {
        for (int size = this.f4559a.size() - 1; size >= 0; size--) {
            if (this.f4559a.get(size) == cbVar) {
                this.f4559a.remove(size);
                break;
            }
        }
        if (this.f4559a.isEmpty() && this.d) {
            gb.b("ViewabilityTracker", "statTrackers are empty and shouldStopOnShow = true, stop tracking");
            e();
        }
    }

    public void a(ViewGroup viewGroup) {
        d();
        try {
            dc dcVar = new dc(viewGroup.getContext());
            kb.b(dcVar, "viewability_view");
            viewGroup.addView(dcVar);
            gb.b("ViewabilityTracker", "help view added");
            dcVar.setStateChangedListener(new dc.a() { // from class: com.my.target.bc$$ExternalSyntheticLambda1
                @Override // com.my.target.dc.a
                public final void a(boolean z) {
                    this.f$0.a(z);
                }
            });
            this.i = new WeakReference(dcVar);
        } catch (Throwable th) {
            gb.c("ViewabilityTracker", "Unable to add Viewability View - " + th.getMessage());
            this.i = null;
        }
    }

    public void a(boolean z, float f, View view) {
        boolean z2 = this.g;
        for (int size = this.f4559a.size() - 1; size >= 0; size--) {
            ((cb) this.f4559a.get(size)).a(z, f, view);
        }
        if (z2 == z) {
            return;
        }
        this.g = this.f && z;
        a aVar = this.j;
        if (aVar != null) {
            aVar.a(z);
        }
    }

    public void a(boolean z) {
        WeakReference weakReference = this.i;
        dc dcVar = weakReference == null ? null : (dc) weakReference.get();
        if (dcVar == null) {
            gb.b("ViewabilityTracker", "help view is null");
            this.i = null;
            return;
        }
        ViewParent parent = dcVar.getParent();
        WeakReference weakReference2 = this.h;
        View view = weakReference2 == null ? null : (View) weakReference2.get();
        if (parent != null && parent == view) {
            gb.b("ViewabilityTracker", "onViewVisibilityChanged = " + z);
            if (z) {
                b();
                if (this.f) {
                    this.b.a(this.e);
                    return;
                }
                return;
            }
            this.b.b(this.e);
            a(false, 0.0f, view);
            return;
        }
        gb.b("ViewabilityTracker", "onStateChanged viewParent is null or not equals to rootView");
        dcVar.setStateChangedListener(null);
        this.i.clear();
        this.i = null;
    }

    public final void a(xb xbVar, za zaVar) {
        long jA = (long) (xbVar.a() * 1000.0f);
        ab abVarB = zaVar.b("viewabilityDuration");
        gb.b("ViewabilityTracker", "ViewabilityDuration stats count = " + abVarB.f4536a.size());
        if (!abVarB.f4536a.isEmpty()) {
            this.f4559a.add(zb.a(this, abVarB, jA));
        }
        ab abVarB2 = zaVar.b("show");
        gb.b("ViewabilityTracker", "Show stats count = " + abVarB2.f4536a.size());
        this.f4559a.add(ka.a(this, abVarB2, jA, zaVar));
        ab abVarB3 = zaVar.b("viewin");
        gb.b("ViewabilityTracker", "View In stats count = " + abVarB3.f4536a.size());
        this.f4559a.add(wb.a(this, abVarB3));
        ab abVarB4 = zaVar.b("render");
        gb.b("ViewabilityTracker", "Render stats count = " + abVarB4.f4536a.size());
        ab abVarB5 = zaVar.b("viewabilityMeasurable");
        gb.b("ViewabilityTracker", "ViewabilityMeasurable stats count = " + abVarB5.f4536a.size());
        this.f4559a.add(t9.a(this, abVarB4, abVarB5));
    }
}
