package com.pushwoosh.inapp.ui;

import com.pushwoosh.internal.platform.AndroidPlatformModule;
import kotlin.collections.ArrayDeque;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class g1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final j0 f5125a;
    public final t0 b;
    public final Function1 c;
    public final u0 d;
    public h1 e;
    public volatile boolean f;
    public final ArrayDeque g;
    public s0 h;
    public boolean i;

    public g1(j0 frequencyStore, t0 foregroundProvider, u0 delegateProvider) {
        f1 mainExecutor = f1.f5122a;
        Intrinsics.checkNotNullParameter(frequencyStore, "frequencyStore");
        Intrinsics.checkNotNullParameter(foregroundProvider, "foregroundProvider");
        Intrinsics.checkNotNullParameter(mainExecutor, "mainExecutor");
        Intrinsics.checkNotNullParameter(delegateProvider, "delegateProvider");
        this.f5125a = frequencyStore;
        this.b = foregroundProvider;
        this.c = mainExecutor;
        this.d = delegateProvider;
        this.g = new ArrayDeque();
    }

    public final void a(boolean z) {
        this.f = z;
        if (z) {
            return;
        }
        this.c.invoke(new Runnable() { // from class: com.pushwoosh.inapp.ui.g1$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                g1.a(this.f$0);
            }
        });
    }

    public static final void a(g1 this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.a();
    }

    public final void a(String str) {
        InAppMessageDelegate inAppMessageDelegate;
        s0 s0Var = this.h;
        String str2 = s0Var != null ? s0Var.f5162a : null;
        if (str == null || str2 == null || Intrinsics.areEqual(str, str2)) {
            boolean z = this.i;
            this.h = null;
            this.i = false;
            if (z && (inAppMessageDelegate = (InAppMessageDelegate) this.d.invoke()) != null) {
                if (str == null) {
                    str = str2;
                }
                inAppMessageDelegate.didClose(str);
            }
            a();
        }
    }

    public final void a() {
        if (this.f || this.h != null || this.g.isEmpty()) {
            return;
        }
        this.b.getClass();
        boolean zIsApplicationInForeground = AndroidPlatformModule.isApplicationInForeground();
        Boolean.valueOf(zIsApplicationInForeground).getClass();
        if (zIsApplicationInForeground) {
            s0 s0Var = (s0) this.g.removeFirst();
            InAppMessageDelegate inAppMessageDelegate = (InAppMessageDelegate) this.d.invoke();
            if (inAppMessageDelegate != null && !inAppMessageDelegate.shouldDisplay(s0Var.f5162a)) {
                a();
                return;
            }
            if (!j0.a(this.f5125a, s0Var)) {
                a();
                return;
            }
            h1 h1Var = this.e;
            if (h1Var == null) {
                return;
            }
            this.h = s0Var;
            this.i = false;
            h1Var.a(s0Var);
        }
    }
}
