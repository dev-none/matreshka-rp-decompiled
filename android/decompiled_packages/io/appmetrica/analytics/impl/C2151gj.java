package io.appmetrica.analytics.impl;

import android.app.Activity;
import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.model.ScreenInfo;
import io.appmetrica.analytics.coreutils.internal.AndroidUtils;
import java.lang.ref.WeakReference;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.gj, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2151gj implements InterfaceC2260l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C1992af f6099a;
    public ScreenInfo b;
    public boolean c;
    public boolean d;
    public final C2125fj e = new C2125fj();
    public WeakReference f = new WeakReference(null);

    public final synchronized void a(Activity activity) {
        this.f = new WeakReference(activity);
        if (!this.d) {
            if (this.f6099a == null) {
                this.f6099a = new C1992af(C2139g7.a(activity).a());
            }
            C1992af c1992af = this.f6099a;
            Intrinsics.checkNotNull(c1992af);
            this.b = c1992af.p();
            if (this.f6099a == null) {
                this.f6099a = new C1992af(C2139g7.a(activity).a());
            }
            C1992af c1992af2 = this.f6099a;
            Intrinsics.checkNotNull(c1992af2);
            this.c = c1992af2.t();
            this.d = true;
        }
        if (this.b == null) {
            b(activity);
        }
    }

    public final void b(Context context) {
        if (context != null) {
            this.e.getClass();
            ScreenInfo screenInfoA = C2125fj.a(context);
            if (screenInfoA == null || Intrinsics.areEqual(screenInfoA, this.b)) {
                return;
            }
            this.b = screenInfoA;
            if (this.f6099a == null) {
                this.f6099a = new C1992af(C2139g7.a(context).a());
            }
            C1992af c1992af = this.f6099a;
            Intrinsics.checkNotNull(c1992af);
            c1992af.a(this.b);
        }
    }

    public final synchronized ScreenInfo a(Context context) {
        if (!this.d) {
            if (this.f6099a == null) {
                this.f6099a = new C1992af(C2139g7.a(context).a());
            }
            C1992af c1992af = this.f6099a;
            Intrinsics.checkNotNull(c1992af);
            this.b = c1992af.p();
            if (this.f6099a == null) {
                this.f6099a = new C1992af(C2139g7.a(context).a());
            }
            C1992af c1992af2 = this.f6099a;
            Intrinsics.checkNotNull(c1992af2);
            this.c = c1992af2.t();
            this.d = true;
        }
        b((Context) this.f.get());
        if (this.b == null) {
            if (AndroidUtils.isApiAchieved(30)) {
                if (!this.c) {
                    b(context);
                    this.c = true;
                    if (this.f6099a == null) {
                        this.f6099a = new C1992af(C2139g7.a(context).a());
                    }
                    C1992af c1992af3 = this.f6099a;
                    Intrinsics.checkNotNull(c1992af3);
                    c1992af3.v();
                }
            } else {
                b(context);
            }
        }
        return this.b;
    }

    public final void a(C1992af c1992af) {
        this.f6099a = c1992af;
    }
}
