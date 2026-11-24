package ru.rustore.sdk.metrics.internal;

import android.content.Context;
import java.security.KeyManagementException;
import java.security.NoSuchAlgorithmException;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.X509TrustManager;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.metrics.MetricsClient;
import ru.rustore.sdk.reactive.core.Dispatcher;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public abstract class c1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6601a;
    public final Lazy b;
    public final Lazy c;
    public final Lazy d;
    public final Lazy e;
    public final Lazy f;
    public final Lazy g;
    public final Lazy h;
    public final Lazy i;
    public final Lazy j;
    public final Lazy k;
    public final Lazy l;
    public final Lazy m;
    public final Lazy n;
    public final Lazy o;
    public final Lazy p;
    public final Lazy q;
    public final Lazy r;
    public final Lazy s;
    public final Lazy t;
    public final Lazy u;
    public final Lazy v;
    public final Lazy w;

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class a extends Lambda implements Function0<ru.rustore.sdk.metrics.internal.e> {
        public a() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final ru.rustore.sdk.metrics.internal.e invoke() {
            return new ru.rustore.sdk.metrics.internal.e(new ru.rustore.sdk.metrics.internal.d((SSLSocketFactory) c1.this.l.getValue(), (ru.rustore.sdk.metrics.internal.k) c1.this.c.getValue(), (h1) c1.this.m.getValue()));
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class b extends Lambda implements Function0<ru.rustore.sdk.metrics.internal.g> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final b f6603a = new b();

        public b() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final ru.rustore.sdk.metrics.internal.g invoke() {
            return new ru.rustore.sdk.metrics.internal.g(new ru.rustore.sdk.metrics.internal.j(new ru.rustore.sdk.metrics.internal.i()));
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class c extends Lambda implements Function0<ru.rustore.sdk.metrics.internal.h> {
        public c() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final ru.rustore.sdk.metrics.internal.h invoke() {
            return new ru.rustore.sdk.metrics.internal.h((s0) c1.this.k.getValue(), (w0) c1.this.q.getValue(), (ru.rustore.sdk.metrics.internal.k) c1.this.c.getValue());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class d extends Lambda implements Function0<ru.rustore.sdk.metrics.internal.k> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final d f6605a = new d();

        public d() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final ru.rustore.sdk.metrics.internal.k invoke() {
            return new d1();
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class e extends Lambda implements Function0<MetricsClient> {
        public e() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final MetricsClient invoke() {
            return new MetricsClient(new ru.rustore.sdk.metrics.internal.t((y0) c1.this.t.getValue(), new ru.rustore.sdk.metrics.internal.f((s0) c1.this.k.getValue()), (z0) c1.this.v.getValue(), (Dispatcher) c1.this.b.getValue(), (ru.rustore.sdk.metrics.internal.k) c1.this.c.getValue()));
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class f extends Lambda implements Function0<ru.rustore.sdk.metrics.internal.u> {
        public f() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final ru.rustore.sdk.metrics.internal.u invoke() {
            c1 c1Var = c1.this;
            return new ru.rustore.sdk.metrics.internal.u(c1Var.f6601a, (h0) c1Var.f.getValue());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class g extends Lambda implements Function0<f0> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final g f6608a = new g();

        public g() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final f0 invoke() {
            return new f0(new g1());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class h extends Lambda implements Function0<h0> {
        public h() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final h0 invoke() {
            return new h0(new c0(), new d0(), (f0) c1.this.e.getValue(), new g0());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class i extends Lambda implements Function0<k0> {
        public i() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final k0 invoke() {
            return new k0((ru.rustore.sdk.metrics.internal.u) c1.this.g.getValue(), (ru.rustore.sdk.metrics.internal.k) c1.this.c.getValue());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class j extends Lambda implements Function0<p0> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final j f6611a = new j();

        public j() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final p0 invoke() {
            return new p0(new z(), new i1());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class k extends Lambda implements Function0<q0> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final k f6612a = new k();

        public k() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final q0 invoke() {
            return new q0(new z());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class l extends Lambda implements Function0<s0> {
        public l() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final s0 invoke() {
            return new s0((k0) c1.this.h.getValue(), (p0) c1.this.i.getValue(), (q0) c1.this.j.getValue(), (ru.rustore.sdk.metrics.internal.k) c1.this.c.getValue());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class m extends Lambda implements Function0<t0> {
        public m() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final t0 invoke() {
            return new t0(new y((ru.rustore.sdk.metrics.internal.e) c1.this.n.getValue(), new v0(), (ru.rustore.sdk.metrics.internal.k) c1.this.c.getValue(), (SSLSocketFactory) c1.this.l.getValue()));
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class n extends Lambda implements Function0<w0> {
        public n() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final w0 invoke() {
            return new w0((h1) c1.this.m.getValue(), new i0(c1.this.f6601a), (t0) c1.this.o.getValue(), (k1) c1.this.p.getValue());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class o extends Lambda implements Function0<x0> {
        public o() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final x0 invoke() {
            return new x0((s0) c1.this.k.getValue(), (w0) c1.this.q.getValue());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class p extends Lambda implements Function0<y0> {
        public p() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final y0 invoke() {
            return new y0((s0) c1.this.k.getValue(), (x0) c1.this.r.getValue(), (ru.rustore.sdk.metrics.internal.h) c1.this.s.getValue());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class q extends Lambda implements Function0<z0> {
        public q() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final z0 invoke() {
            c1 c1Var = c1.this;
            return new z0(c1Var.f6601a, (ru.rustore.sdk.metrics.internal.g) c1Var.u.getValue());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class r extends Lambda implements Function0<e1> {
        public r() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final e1 invoke() {
            return new e1(c1.this.f6601a);
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class s extends Lambda implements Function0<f1> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final s f6620a = new s();

        public s() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final f1 invoke() {
            return new f1();
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class t extends Lambda implements Function0<SSLSocketFactory> {
        public t() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final SSLSocketFactory invoke() throws NoSuchAlgorithmException, KeyManagementException {
            X509TrustManager trustManager = (X509TrustManager) ((b1) c1.this).x.getValue();
            Intrinsics.checkNotNullParameter(trustManager, "trustManager");
            SSLContext sSLContext = SSLContext.getInstance("TLSv1.2");
            sSLContext.init(null, new X509TrustManager[]{trustManager}, null);
            SSLSocketFactory socketFactory = sSLContext.getSocketFactory();
            Intrinsics.checkNotNullExpressionValue(socketFactory, "getInstance(\"TLSv1.2\")\n …           .socketFactory");
            return socketFactory;
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class u extends Lambda implements Function0<h1> {
        public u() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final h1 invoke() {
            return new h1((e1) c1.this.d.getValue(), new i1());
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class v extends Lambda implements Function0<k1> {
        public v() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final k1 invoke() {
            return new k1(c1.this.f6601a);
        }
    }

    public c1(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.f6601a = context;
        this.b = LazyKt.lazy(s.f6620a);
        this.c = LazyKt.lazy(d.f6605a);
        this.d = LazyKt.lazy(new r());
        this.e = LazyKt.lazy(g.f6608a);
        this.f = LazyKt.lazy(new h());
        this.g = LazyKt.lazy(new f());
        this.h = LazyKt.lazy(new i());
        this.i = LazyKt.lazy(j.f6611a);
        this.j = LazyKt.lazy(k.f6612a);
        this.k = LazyKt.lazy(new l());
        this.l = LazyKt.lazy(new t());
        this.m = LazyKt.lazy(new u());
        this.n = LazyKt.lazy(new a());
        this.o = LazyKt.lazy(new m());
        this.p = LazyKt.lazy(new v());
        this.q = LazyKt.lazy(new n());
        this.r = LazyKt.lazy(new o());
        this.s = LazyKt.lazy(new c());
        this.t = LazyKt.lazy(new p());
        this.u = LazyKt.lazy(b.f6603a);
        this.v = LazyKt.lazy(new q());
        this.w = LazyKt.lazy(new e());
    }
}
