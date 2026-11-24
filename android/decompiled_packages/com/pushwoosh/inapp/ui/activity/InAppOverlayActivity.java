package com.pushwoosh.inapp.ui.activity;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.view.ViewGroup;
import com.pushwoosh.inapp.ui.InAppMessageDelegate;
import com.pushwoosh.inapp.ui.g0;
import com.pushwoosh.inapp.ui.g1;
import com.pushwoosh.inapp.ui.i2;
import com.pushwoosh.inapp.ui.j0;
import com.pushwoosh.inapp.ui.j1;
import com.pushwoosh.inapp.ui.k0;
import com.pushwoosh.inapp.ui.l0;
import com.pushwoosh.inapp.ui.m0;
import com.pushwoosh.inapp.ui.n0;
import com.pushwoosh.inapp.ui.n2;
import com.pushwoosh.inapp.ui.o;
import com.pushwoosh.inapp.ui.o0;
import com.pushwoosh.inapp.ui.p0;
import com.pushwoosh.inapp.ui.q0;
import com.pushwoosh.inapp.ui.r0;
import com.pushwoosh.inapp.ui.s0;
import com.pushwoosh.inapp.ui.u;
import com.pushwoosh.inapp.ui.u1;
import com.pushwoosh.inapp.ui.v0;
import com.pushwoosh.inapp.ui.v2;
import com.pushwoosh.inapp.ui.w0;
import com.pushwoosh.inapp.ui.x0;
import com.pushwoosh.inapp.ui.y1;
import com.pushwoosh.richmedia.RichMediaColorSchemeResolver;
import java.lang.ref.WeakReference;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/pushwoosh/inapp/ui/activity/InAppOverlayActivity;", "Landroid/app/Activity;", "<init>", "()V", "pushwoosh-inapp-ui_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class InAppOverlayActivity extends Activity {
    private static volatile InAppOverlayActivity e;
    public static final /* synthetic */ int f = 0;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f5107a;
    private String b;
    private j1 c;
    private boolean d;

    @Override // android.app.Activity
    public final void finish() {
        super.finish();
        overridePendingTransition(0, 0);
    }

    @Override // android.app.Activity
    public final void onBackPressed() {
        j1 j1Var = this.c;
        if (j1Var != null) {
            j1Var.a(new w0(this));
        } else {
            super.finish();
            overridePendingTransition(0, 0);
        }
    }

    /* JADX WARN: Code duplicated, block: B:29:0x009d  */
    /* JADX WARN: Code duplicated, block: B:31:0x00a4  */
    /* JADX WARN: Code duplicated, block: B:33:0x00ae  */
    /* JADX WARN: Code duplicated, block: B:39:0x00cc  */
    /* JADX WARN: Code duplicated, block: B:47:0x00ed  */
    /* JADX WARN: Code duplicated, block: B:52:? A[RETURN, SYNTHETIC] */
    @Override // android.app.Activity
    protected final void onCreate(Bundle bundle) {
        j1 v2Var;
        v0 v0Var;
        InAppMessageDelegate inAppMessageDelegate;
        g1 g1VarB;
        s0 s0Var;
        super.onCreate(bundle);
        s0 s0VarA = g0.a(getIntent().getStringExtra("pw_inapp_raw_json"), RichMediaColorSchemeResolver.isCurrentSchemeDark(this));
        if (s0VarA == null) {
            super.finish();
            overridePendingTransition(0, 0);
            return;
        }
        this.f5107a = s0VarA.f5162a;
        this.b = s0VarA.f;
        r0 layout = s0VarA.b;
        x0 listener = new x0(this);
        Intrinsics.checkNotNullParameter(this, "context");
        Intrinsics.checkNotNullParameter(layout, "layout");
        Intrinsics.checkNotNullParameter(listener, "listener");
        if (layout instanceof n0) {
            v2Var = new u1(this, ((n0) layout).f5147a);
        } else if (layout instanceof o0) {
            v2Var = new i2(this, ((o0) layout).f5149a);
        } else if (layout instanceof m0) {
            v2Var = new u(this, ((m0) layout).f5143a);
        } else if (layout instanceof l0) {
            v2Var = new o(this, ((l0) layout).f5140a);
        } else {
            if (!(layout instanceof p0)) {
                if (layout instanceof q0) {
                    v2Var = new v2(this, ((q0) layout).f5156a);
                } else {
                    if (!(layout instanceof k0)) {
                        throw new NoWhenBranchMatchedException();
                    }
                    v2Var = null;
                }
                if (v2Var == null) {
                    super.finish();
                    overridePendingTransition(0, 0);
                    return;
                }
                this.c = v2Var;
                e = this;
                v0Var = v0.f5172a;
                WeakReference weakReference = v0.d;
                inAppMessageDelegate = weakReference != null ? (InAppMessageDelegate) weakReference.get() : null;
                if (bundle == null && inAppMessageDelegate != null) {
                    inAppMessageDelegate.willPresent(this.f5107a);
                }
                setContentView(v2Var, new ViewGroup.LayoutParams(-1, -1));
                v2Var.a();
                if (bundle == null) {
                    Context applicationContext = getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext, "applicationContext");
                    g1VarB = v0Var.b(applicationContext);
                    s0Var = g1VarB.h;
                    if (s0Var != null && !g1VarB.i) {
                        g1VarB.i = true;
                        j0.b(g1VarB.f5125a, s0Var);
                    }
                    if (inAppMessageDelegate != null) {
                        inAppMessageDelegate.didPresent(this.f5107a);
                    }
                    y1.f5178a.b(this.b);
                }
            }
            v2Var = new n2(this, ((p0) layout).f5153a);
        }
        v2Var.setListener(listener);
        if (v2Var == null) {
            super.finish();
            overridePendingTransition(0, 0);
            return;
        }
        this.c = v2Var;
        e = this;
        v0Var = v0.f5172a;
        WeakReference weakReference2 = v0.d;
        if (weakReference2 != null) {
        }
        if (bundle == null) {
            inAppMessageDelegate.willPresent(this.f5107a);
        }
        setContentView(v2Var, new ViewGroup.LayoutParams(-1, -1));
        v2Var.a();
        if (bundle == null) {
            Context applicationContext2 = getApplicationContext();
            Intrinsics.checkNotNullExpressionValue(applicationContext2, "applicationContext");
            g1VarB = v0Var.b(applicationContext2);
            s0Var = g1VarB.h;
            if (s0Var != null) {
                g1VarB.i = true;
                j0.b(g1VarB.f5125a, s0Var);
            }
            if (inAppMessageDelegate != null) {
                inAppMessageDelegate.didPresent(this.f5107a);
            }
            y1.f5178a.b(this.b);
        }
    }

    @Override // android.app.Activity
    protected final void onDestroy() {
        super.onDestroy();
        if (isChangingConfigurations()) {
            return;
        }
        if (e == this) {
            e = null;
        }
        if (this.d) {
            return;
        }
        this.d = true;
        v0 v0Var = v0.f5172a;
        Context applicationContext = getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "applicationContext");
        v0Var.b(applicationContext).a(this.f5107a);
        if (this.c != null) {
            y1.f5178a.a(this.b);
        }
    }

    @Override // android.app.Activity
    protected final void onPause() {
        super.onPause();
        j1 j1Var = this.c;
        if (j1Var != null) {
            j1Var.b();
        }
    }

    @Override // android.app.Activity
    protected final void onResume() {
        super.onResume();
        j1 j1Var = this.c;
        if (j1Var != null) {
            j1Var.c();
        }
    }

    public static final void a(InAppOverlayActivity inAppOverlayActivity) {
        j1 j1Var = inAppOverlayActivity.c;
        if (j1Var != null) {
            j1Var.a(new w0(inAppOverlayActivity));
        } else {
            super.finish();
            inAppOverlayActivity.overridePendingTransition(0, 0);
        }
    }

    public final void b() {
        j1 j1Var = this.c;
        if (j1Var != null) {
            j1Var.a(new w0(this));
        } else {
            super.finish();
            overridePendingTransition(0, 0);
        }
    }
}
