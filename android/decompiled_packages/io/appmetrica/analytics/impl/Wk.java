package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.TimeUnit;
import kotlin.collections.CollectionsKt;
import okhttp3.internal.connection.RealConnection;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class Wk {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2085e5 f5946a;
    public final Vk b;
    public final C2060d5 c;
    public final AbstractC2131g d;
    public final AbstractC2131g e;
    public Ik f;
    public int g = 0;

    public Wk(C2085e5 c2085e5, Vk vk, C2060d5 c2060d5, C2346oa c2346oa, H2 h2) {
        this.f5946a = c2085e5;
        this.c = c2060d5;
        this.d = c2346oa;
        this.e = h2;
        this.b = vk;
    }

    public final synchronized long a() {
        Ik ik;
        ik = this.f;
        return ik == null ? RealConnection.IDLE_CONNECTION_HEALTHY_NS : ik.d - 1;
    }

    public final void b(Ik ik, W5 w5) {
        if (ik.g && ik.d > 0) {
            C2060d5 c2060d5 = this.c;
            W5 w5A = W5.a(w5, EnumC2195ib.EVENT_TYPE_ALIVE);
            Yk yk = new Yk();
            yk.f5974a = ik.d;
            yk.d = ik.c.f5779a;
            long andIncrement = ik.f.getAndIncrement();
            Zk zk = ik.b;
            zk.a(Zk.g, Long.valueOf(ik.f.get()));
            zk.b();
            yk.b = andIncrement;
            yk.c = TimeUnit.MILLISECONDS.toSeconds(Math.max(ik.i - ik.e, ik.j));
            c2060d5.f6041a.n.a(w5A, yk);
            if (ik.g) {
                ik.g = false;
                Zk zk2 = ik.b;
                zk2.a(Zk.i, Boolean.FALSE);
                zk2.b();
            }
        }
        PublicLogger publicLogger = this.f5946a.m;
        int iOrdinal = ik.c.f5779a.ordinal();
        if (iOrdinal == 0) {
            publicLogger.info("Finish foreground session", new Object[0]);
        } else if (iOrdinal == 1) {
            publicLogger.info("Finish background session", new Object[0]);
        }
        synchronized (ik) {
            Zk zk3 = ik.b;
            zk3.getClass();
            zk3.c = new C2297mb();
            zk3.b();
            ik.h = null;
        }
    }

    public final synchronized void c(W5 w5) {
        if (this.g == 0) {
            Ik ikB = this.d.b();
            if (a(ikB, w5)) {
                this.f = ikB;
                this.g = 3;
            } else {
                Ik ikB2 = this.e.b();
                if (a(ikB2, w5)) {
                    this.f = ikB2;
                    this.g = 2;
                } else {
                    this.f = null;
                    this.g = 1;
                }
            }
        }
        int iA = Q7.a(this.g);
        if (iA == 0) {
            this.f = a(w5);
        } else if (iA == 1) {
            b(this.f, w5);
            this.f = a(w5);
        } else if (iA == 2) {
            if (a(this.f, w5)) {
                Ik ik = this.f;
                long j = w5.i;
                ik.i = j;
                Zk zk = ik.b;
                zk.a(Zk.d, Long.valueOf(j));
                zk.b();
            } else {
                this.f = a(w5);
            }
        }
    }

    public final Ik a(W5 w5) {
        this.f5946a.m.info("Start foreground session", new Object[0]);
        long j = w5.i;
        AbstractC2131g abstractC2131g = this.d;
        Jk jk = new Jk(j, w5.j);
        abstractC2131g.getClass();
        Ik ikA = abstractC2131g.a(jk);
        this.g = 3;
        ((C2415r5) this.f5946a.p).e();
        C2060d5 c2060d5 = this.c;
        c2060d5.f6041a.n.a(W5.a(w5, C2495ua.H.i()), a(ikA, j));
        return ikA;
    }

    public static Yk a(Ik ik, long j) {
        Yk yk = new Yk();
        yk.f5974a = ik.d;
        long andIncrement = ik.f.getAndIncrement();
        Zk zk = ik.b;
        zk.a(Zk.g, Long.valueOf(ik.f.get()));
        zk.b();
        yk.b = andIncrement;
        Zk zk2 = ik.b;
        long j2 = j - ik.e;
        ik.j = j2;
        zk2.a(Zk.e, Long.valueOf(j2));
        yk.c = TimeUnit.MILLISECONDS.toSeconds(ik.j);
        yk.d = ik.c.f5779a;
        return yk;
    }

    public final synchronized Ik b(W5 w5) {
        if (this.g == 0) {
            Ik ikB = this.d.b();
            if (a(ikB, w5)) {
                this.f = ikB;
                this.g = 3;
            } else {
                Ik ikB2 = this.e.b();
                if (a(ikB2, w5)) {
                    this.f = ikB2;
                    this.g = 2;
                } else {
                    this.f = null;
                    this.g = 1;
                }
            }
        }
        if (this.g != 1 && !a(this.f, w5)) {
            this.g = 1;
            this.f = null;
        }
        int iA = Q7.a(this.g);
        if (iA == 1) {
            Ik ik = this.f;
            long j = w5.i;
            ik.i = j;
            Zk zk = ik.b;
            zk.a(Zk.d, Long.valueOf(j));
            zk.b();
            return this.f;
        }
        if (iA != 2) {
            this.f5946a.m.info("Start background session", new Object[0]);
            this.g = 2;
            long j2 = w5.i;
            AbstractC2131g abstractC2131g = this.e;
            Jk jk = new Jk(j2, w5.j);
            abstractC2131g.getClass();
            Ik ikA = abstractC2131g.a(jk);
            if (this.f5946a.t.c()) {
                C2060d5 c2060d5 = this.c;
                c2060d5.f6041a.n.a(W5.a(w5, C2495ua.H.i()), a(ikA, w5.i));
            } else {
                int i = w5.d;
                EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
                if (i == 6145) {
                    C2060d5 c2060d6 = this.c;
                    c2060d6.f6041a.n.a(w5, a(ikA, j2));
                    C2060d5 c2060d7 = this.c;
                    c2060d7.f6041a.n.a(W5.a(w5, C2495ua.H.i()), a(ikA, j2));
                }
            }
            this.f = ikA;
            return ikA;
        }
        return this.f;
    }

    /* JADX WARN: Code duplicated, block: B:61:0x012c  */
    public final boolean a(Ik ik, W5 w5) {
        boolean z;
        boolean z2;
        if (ik == null) {
            return false;
        }
        long j = w5.i;
        boolean z3 = ik.d >= 0;
        if (ik.h == null) {
            synchronized (ik) {
                if (ik.h == null) {
                    try {
                        String asString = ik.f5732a.e.a(ik.d, ik.c.f5779a).getAsString("report_request_parameters");
                        if (!TextUtils.isEmpty(asString)) {
                            ik.h = new Xk(new JSONObject(asString));
                        }
                    } catch (Throwable unused) {
                    }
                }
            }
        }
        Xk xk = ik.h;
        if (xk != null) {
            C2378ph c2378ph = (C2378ph) ik.f5732a.k.a();
            List listListOf = CollectionsKt.listOf((Object[]) new Boolean[]{Boolean.valueOf(TextUtils.equals(c2378ph.getAnalyticsSdkVersionName(), xk.f5959a)), Boolean.valueOf(TextUtils.equals(c2378ph.getAnalyticsSdkBuildNumber(), xk.b)), Boolean.valueOf(TextUtils.equals(c2378ph.getAppVersion(), xk.c)), Boolean.valueOf(TextUtils.equals(c2378ph.getAppBuildNumber(), xk.d)), Boolean.valueOf(TextUtils.equals(c2378ph.getOsVersion(), xk.e)), Boolean.valueOf(xk.f == c2378ph.getOsApiLevel()), Boolean.valueOf(xk.g == c2378ph.r)});
            if (!(listListOf instanceof Collection) || !listListOf.isEmpty()) {
                Iterator it = listListOf.iterator();
                while (true) {
                    if (it.hasNext()) {
                        if (!((Boolean) it.next()).booleanValue()) {
                            z = false;
                        }
                    }
                }
            }
            z = true;
        } else {
            z = false;
        }
        long jElapsedRealtime = ik.k.elapsedRealtime();
        long j2 = ik.i;
        boolean z4 = jElapsedRealtime < j2;
        long j3 = j - j2;
        long j4 = j - ik.e;
        if (z4) {
            z2 = true;
        } else {
            TimeUnit timeUnit = TimeUnit.SECONDS;
            Lk lk = ik.c;
            int iIntValue = ((C2378ph) ik.f5732a.k.a()).f;
            Integer num = lk.d;
            if (num != null) {
                iIntValue = num.intValue();
            }
            if (j3 >= timeUnit.toMillis(iIntValue) || j4 >= timeUnit.toMillis(Mk.f5796a)) {
                z2 = true;
            } else {
                z2 = false;
            }
        }
        if (z3 && z && !z2) {
            return true;
        }
        b(ik, w5);
        return false;
    }
}
