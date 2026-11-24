package com.pushwoosh.b;

import android.app.Activity;
import android.graphics.Rect;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.view.ViewTreeObserver;
import android.view.Window;
import com.pushwoosh.internal.utils.PWLog;
import java.util.Collections;
import java.util.Set;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes6.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5039a;
    public final c b;
    public final Handler c;
    public final Runnable d;
    public Activity f;
    public ViewTreeObserver.OnGlobalLayoutListener g;
    public boolean h;
    public boolean i;
    public final Set e = Collections.newSetFromMap(new WeakHashMap());
    public boolean j = true;

    public e(int i, c cVar) {
        if (i < 30) {
            PWLog.warn("IdleDetector", "Idle timeout " + i + "s is below minimum (30s). Using 30s.");
        }
        this.f5039a = Math.max(i, 30) * 1000;
        this.b = cVar;
        this.c = new Handler(Looper.getMainLooper());
        this.d = new Runnable() { // from class: com.pushwoosh.b.e$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a();
            }
        };
    }

    public final void a() {
        Activity activity;
        if (this.h || (activity = this.f) == null) {
            return;
        }
        this.h = true;
        String simpleName = activity.getClass().getSimpleName();
        int i = this.f5039a / 1000;
        PWLog.debug("IdleDetector", "User idle detected on " + simpleName + " after " + i + "s");
        this.b.a(simpleName, i);
    }

    public final void b() {
        if (this.h || this.i || !this.j || this.f == null) {
            return;
        }
        this.c.removeCallbacks(this.d);
        this.c.postDelayed(this.d, this.f5039a);
    }

    public final void c() {
        Activity activity;
        if (this.g != null && (activity = this.f) != null) {
            Window window = activity.getWindow();
            if (window == null) {
                this.g = null;
                return;
            } else {
                ViewTreeObserver viewTreeObserver = window.getDecorView().getViewTreeObserver();
                if (viewTreeObserver.isAlive()) {
                    viewTreeObserver.removeOnGlobalLayoutListener(this.g);
                }
            }
        }
        this.g = null;
    }

    public final void a(Activity activity) {
        c();
        Window window = activity.getWindow();
        if (window == null) {
            return;
        }
        final View decorView = window.getDecorView();
        this.g = new ViewTreeObserver.OnGlobalLayoutListener() { // from class: com.pushwoosh.b.e$$ExternalSyntheticLambda0
            @Override // android.view.ViewTreeObserver.OnGlobalLayoutListener
            public final void onGlobalLayout() {
                this.f$0.a(decorView);
            }
        };
        decorView.getViewTreeObserver().addOnGlobalLayoutListener(this.g);
    }

    public final void a(View view) {
        Rect rect = new Rect();
        view.getWindowVisibleDisplayFrame(rect);
        boolean z = ((double) (view.getHeight() - rect.height())) > ((double) view.getHeight()) * 0.15d;
        if (z && !this.i) {
            this.i = true;
            this.c.removeCallbacks(this.d);
            PWLog.debug("IdleDetector", "Keyboard visible, idle timer stopped");
        } else {
            if (z || !this.i) {
                return;
            }
            this.i = false;
            if (this.h) {
                return;
            }
            this.c.removeCallbacks(this.d);
            this.c.postDelayed(this.d, this.f5039a);
            PWLog.debug("IdleDetector", "Keyboard hidden, idle timer restarted");
        }
    }
}
