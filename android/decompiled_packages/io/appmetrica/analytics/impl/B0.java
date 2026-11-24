package io.appmetrica.analytics.impl;

import android.content.Context;
import android.os.Handler;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;
import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;

/* JADX INFO: loaded from: classes7.dex */
public abstract class B0 {
    public static I6 a(Handler handler, A0 a0) {
        return new I6(handler, a0);
    }

    public static Gf a(Context context, I6 i6) {
        return new Gf(context, i6);
    }

    public static Bi a(Gf gf, Context context, ICommonExecutor iCommonExecutor) {
        C2361p0 c2361p0 = new C2361p0(context, iCommonExecutor, C2213j4.l().e());
        return new Bi(c2361p0, new Un(new C2446sb()), new M4(gf), new C2075dk(context, c2361p0));
    }

    public static Sl a(Context context, Bi bi, C1992af c1992af, Handler handler) {
        return new Sl(bi, new C1999am(context, c1992af), handler);
    }

    public static C2352og a(Bi bi, C1992af c1992af, Handler handler) {
        return new C2352og(bi, c1992af, handler, c1992af.s());
    }

    public static C2354oi a(Context context, Gf gf, Bi bi, Handler handler, Sl sl) {
        return new C2354oi(context, gf, bi, handler, sl);
    }

    public static C2222jd a(Context context) {
        return new C2222jd(C2213j4.l().c.a(), C2213j4.l().b(context), "client_modules", new SystemTimeProvider());
    }
}
