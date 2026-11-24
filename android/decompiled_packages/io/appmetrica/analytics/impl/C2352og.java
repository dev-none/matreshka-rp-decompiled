package io.appmetrica.analytics.impl;

import android.os.Bundle;
import android.os.Handler;
import androidx.core.view.InputDeviceCompat;
import io.appmetrica.analytics.DeferredDeeplinkListener;
import io.appmetrica.analytics.DeferredDeeplinkParametersListener;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.Map;
import java.util.Set;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.og, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2352og implements InterfaceC2251kg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6241a;
    public final Bi b;
    public final C1992af c;
    public final R7 d;
    public final C2551wg e;
    public final Handler f;

    public C2352og(Bi bi, C1992af c1992af, Handler handler) {
        this(bi, c1992af, handler, c1992af.s());
    }

    public final void a() {
        if (this.f6241a) {
            return;
        }
        Bi bi = this.b;
        ResultReceiverC2601yg resultReceiverC2601yg = new ResultReceiverC2601yg(this.f, this);
        bi.getClass();
        Bundle bundle = new Bundle();
        bundle.putParcelable("io.appmetrica.analytics.impl.referrer.common.ReferrerResultReceiver", resultReceiverC2601yg);
        PublicLogger anonymousInstance = PublicLogger.getAnonymousInstance();
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3("", "", InputDeviceCompat.SOURCE_TOUCHSCREEN, 0, anonymousInstance);
        u3.m = bundle;
        M4 m4 = bi.f5614a;
        bi.a(Bi.a(u3, m4), m4, 1, (Map) null);
    }

    public C2352og(Bi bi, C1992af c1992af, Handler handler, boolean z) {
        this(bi, c1992af, handler, z, new R7(z), new C2551wg());
    }

    public C2352og(Bi bi, C1992af c1992af, Handler handler, boolean z, R7 r7, C2551wg c2551wg) {
        this.b = bi;
        this.c = c1992af;
        this.f6241a = z;
        this.d = r7;
        this.e = c2551wg;
        this.f = handler;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2251kg
    public final void a(C2451sg c2451sg) {
        String str = c2451sg == null ? null : c2451sg.f6314a;
        if (this.f6241a) {
            return;
        }
        synchronized (this) {
            R7 r7 = this.d;
            this.e.getClass();
            r7.d = C2551wg.a(str);
            r7.a();
        }
    }

    public final synchronized void a(DeferredDeeplinkParametersListener deferredDeeplinkParametersListener) {
        try {
            R7 r7 = this.d;
            r7.c = deferredDeeplinkParametersListener;
            if (r7.f5862a) {
                r7.a(1);
            } else {
                r7.a();
            }
            this.c.u();
        } catch (Throwable th) {
            this.c.u();
            throw th;
        }
    }

    public final synchronized void a(DeferredDeeplinkListener deferredDeeplinkListener) {
        try {
            R7 r7 = this.d;
            r7.b = deferredDeeplinkListener;
            if (r7.f5862a) {
                r7.a(1);
            } else {
                r7.a();
            }
            this.c.u();
        } catch (Throwable th) {
            this.c.u();
            throw th;
        }
    }
}
