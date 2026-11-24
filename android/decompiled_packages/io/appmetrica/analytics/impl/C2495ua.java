package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufStateStorage;
import io.appmetrica.analytics.coreapi.internal.identifiers.PlatformIdentifiers;
import io.appmetrica.analytics.coreapi.internal.system.PermissionExtractor;
import io.appmetrica.analytics.coreutils.internal.ReferenceHolder;
import io.appmetrica.analytics.coreutils.internal.reflection.ReflectionUtils;
import io.appmetrica.analytics.coreutils.internal.services.UtilityServiceProvider;
import io.appmetrica.analytics.coreutils.internal.services.WaitForActivationDelayBarrier;
import io.appmetrica.analytics.locationapi.internal.LocationClient;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ua, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2495ua {
    public static volatile C2495ua H;
    public volatile T9 C;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6349a;
    public volatile C2402qg b;
    public volatile L6 c;
    public volatile Z2 e;
    public volatile C2429rj f;
    public volatile U g;
    public volatile C2211j2 h;
    public volatile PlatformIdentifiers i;
    public volatile C2600yf j;
    public volatile H3 k;
    public volatile C2095ef l;
    public volatile Co m;
    public volatile C2228jj n;
    public volatile Mb o;
    public El p;
    public volatile Ck r;
    public volatile Rb w;
    public volatile C2409qn x;
    public volatile C2581xl y;
    public volatile Cd z;
    public final C2470ta q = new C2470ta();
    public final Zc s = new Zc();
    public final C2016bd t = new C2016bd();
    public final C2283lm u = new C2283lm();
    public final C2229jk v = new C2229jk();
    public final Vd A = new Vd();
    public final UtilityServiceProvider B = new UtilityServiceProvider();
    public final C2406qk D = new C2406qk();
    public final ReferenceHolder E = new ReferenceHolder();
    public final Bk F = new Bk();
    public final C2208j G = new C2208j();
    public final C2356ok d = new C2356ok();

    public C2495ua(Context context) {
        this.f6349a = context;
    }

    public static void a(Context context) {
        if (H == null) {
            synchronized (C2495ua.class) {
                if (H == null) {
                    H = new C2495ua(context.getApplicationContext());
                }
            }
        }
    }

    public static C2495ua k() {
        return H;
    }

    public final synchronized S2 A() {
        if (this.p == null) {
            El el = new El(this.f6349a);
            this.p = el;
            this.u.a(el);
        }
        return this.p;
    }

    public final C2283lm B() {
        return this.u;
    }

    public final C2409qn C() {
        C2409qn c2409qn;
        C2409qn c2409qn2 = this.x;
        if (c2409qn2 != null) {
            return c2409qn2;
        }
        synchronized (this) {
            c2409qn = this.x;
            if (c2409qn == null) {
                c2409qn = new C2409qn(this.f6349a);
                this.x = c2409qn;
            }
        }
        return c2409qn;
    }

    public final synchronized Co D() {
        if (this.m == null) {
            this.m = new Co(this.f6349a);
        }
        return this.m;
    }

    public final void E() {
        if (this.j == null) {
            synchronized (this) {
                if (this.j == null) {
                    Um umA = Tm.a(Cif.class);
                    Context context = this.f6349a;
                    Vm vm = (Vm) umA;
                    ProtobufStateStorage<Object> protobufStateStorageA = vm.a(context, vm.a(context));
                    Cif cif = (Cif) protobufStateStorageA.read();
                    this.j = new C2600yf(this.f6349a, protobufStateStorageA, new C2376pf(), new C2147gf(cif), new C2575xf(), new C2351of(this.f6349a), new C2475tf(k().z()), new C2224jf(), cif, "[PreloadInfoStorage]");
                }
            }
        }
    }

    public final C2208j b() {
        return this.G;
    }

    public final U c() {
        U u;
        U u2 = this.g;
        if (u2 != null) {
            return u2;
        }
        synchronized (this) {
            u = this.g;
            if (u == null) {
                u = new U(this.f6349a, this.d.a(), this.u.b());
                this.u.a(u);
                this.g = u;
            }
        }
        return u;
    }

    public final C2211j2 d() {
        C2211j2 c2211j2;
        C2211j2 c2211j3 = this.h;
        if (c2211j3 != null) {
            return c2211j3;
        }
        synchronized (this) {
            c2211j2 = this.h;
            if (c2211j2 == null) {
                c2211j2 = new C2211j2(this.f6349a, AbstractC2237k2.a());
                this.h = c2211j2;
            }
        }
        return c2211j2;
    }

    public final C2363p2 e() {
        return l().b;
    }

    public final H3 f() {
        if (this.k == null) {
            synchronized (this) {
                if (this.k == null) {
                    Um umA = Tm.a(A3.class);
                    Context context = this.f6349a;
                    Vm vm = (Vm) umA;
                    ProtobufStateStorage<Object> protobufStateStorageA = vm.a(context, vm.a(context));
                    this.k = new H3(this.f6349a, protobufStateStorageA, new I3(), new C2513v3(), new L3(), new Yi(this.f6349a), new J3(z()), new C2538w3(), (A3) protobufStateStorageA.read(), "[ClidsInfoStorage]");
                }
            }
        }
        return this.k;
    }

    public final Context g() {
        return this.f6349a;
    }

    public final L6 h() {
        if (this.c == null) {
            synchronized (this) {
                if (this.c == null) {
                    this.c = new L6(new K6(z()));
                }
            }
        }
        return this.c;
    }

    public final T9 i() {
        T9 t9;
        T9 t10 = this.C;
        if (t10 != null) {
            return t10;
        }
        synchronized (this) {
            t9 = this.C;
            if (t9 == null) {
                t9 = new T9(this.f6349a);
                this.C = t9;
            }
        }
        return t9;
    }

    public final PermissionExtractor j() {
        C2581xl c2581xl = this.y;
        if (c2581xl != null) {
            return c2581xl;
        }
        synchronized (this) {
            C2581xl c2581xl2 = this.y;
            if (c2581xl2 != null) {
                return c2581xl2;
            }
            C2581xl c2581xl3 = new C2581xl(p().c.getAskForPermissionStrategy());
            this.y = c2581xl3;
            return c2581xl3;
        }
    }

    public final Mb l() {
        Mb mb;
        Mb mb2 = this.o;
        if (mb2 != null) {
            return mb2;
        }
        synchronized (this) {
            mb = this.o;
            if (mb == null) {
                mb = new Mb(new W2(this.f6349a, this.d.a()), new C2363p2());
                this.o = mb;
            }
        }
        return mb;
    }

    public final Rb m() {
        Rb tb;
        Rb rb = this.w;
        if (rb != null) {
            return rb;
        }
        synchronized (this) {
            tb = this.w;
            if (tb == null) {
                Context context = this.f6349a;
                ReflectionUtils reflectionUtils = ReflectionUtils.INSTANCE;
                LocationClient locationClient = (LocationClient) ReflectionUtils.loadAndInstantiateClassWithDefaultConstructor("io.appmetrica.analytics.location.internal.LocationClientImpl", LocationClient.class);
                tb = locationClient == null ? new Tb() : new Sb(context, new Zb(), locationClient);
                this.w = tb;
            }
        }
        return tb;
    }

    public final Rb n() {
        return m();
    }

    public final C2016bd o() {
        return this.t;
    }

    public final Ck p() {
        Ck ck;
        Ck ck2 = this.r;
        if (ck2 != null) {
            return ck2;
        }
        synchronized (this) {
            ck = this.r;
            if (ck == null) {
                ck = new Ck();
                this.r = ck;
            }
        }
        return ck;
    }

    public final Cd q() {
        Cd cd;
        Cd cd2 = this.z;
        if (cd2 != null) {
            return cd2;
        }
        synchronized (this) {
            cd = this.z;
            if (cd == null) {
                cd = new Cd(this.f6349a, new po());
                this.z = cd;
            }
        }
        return cd;
    }

    public final Vd r() {
        return this.A;
    }

    public final PlatformIdentifiers s() {
        PlatformIdentifiers platformIdentifiers;
        PlatformIdentifiers platformIdentifiers2 = this.i;
        if (platformIdentifiers2 != null) {
            return platformIdentifiers2;
        }
        synchronized (this) {
            platformIdentifiers = this.i;
            if (platformIdentifiers == null) {
                platformIdentifiers = new PlatformIdentifiers(c(), d());
                this.i = platformIdentifiers;
            }
        }
        return platformIdentifiers;
    }

    public final C2600yf t() {
        E();
        return this.j;
    }

    public final C2402qg u() {
        if (this.b == null) {
            synchronized (this) {
                if (this.b == null) {
                    this.b = new C2402qg(this.f6349a, H.D().c);
                }
            }
        }
        return this.b;
    }

    public final C2228jj v() {
        C2228jj c2228jj;
        C2228jj c2228jj2 = this.n;
        if (c2228jj2 != null) {
            return c2228jj2;
        }
        synchronized (this) {
            c2228jj = this.n;
            if (c2228jj == null) {
                c2228jj = new C2228jj(this.f6349a);
                this.n = c2228jj;
            }
        }
        return c2228jj;
    }

    public final synchronized C2429rj w() {
        return this.f;
    }

    public final C2356ok x() {
        return this.d;
    }

    public final Bk y() {
        return this.F;
    }

    public final C2095ef z() {
        if (this.l == null) {
            synchronized (this) {
                if (this.l == null) {
                    this.l = new C2095ef(C2139g7.a(this.f6349a).c());
                }
            }
        }
        return this.l;
    }

    public final WaitForActivationDelayBarrier a() {
        return this.B.getActivationBarrier();
    }
}
