package io.appmetrica.analytics.impl;

import java.util.Set;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ef, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2095ef extends Fd implements Do {
    public static final C2070df d = new C2070df("LOCATION_TRACKING_ENABLED", null);
    public static final C2070df e = new C2070df("PREF_KEY_OFFSET", null);
    public static final C2070df f = new C2070df("UNCHECKED_TIME", null);
    public static final C2070df g = new C2070df("STATISTICS_RESTRICTED_IN_MAIN", null);
    public static final C2070df h = new C2070df("LAST_IDENTITY_LIGHT_SEND_TIME", null);
    public static final C2070df i = new C2070df("NEXT_REPORT_SEND_ATTEMPT_NUMBER", null);
    public static final C2070df j = new C2070df("NEXT_LOCATION_SEND_ATTEMPT_NUMBER", null);
    public static final C2070df k = new C2070df("NEXT_STARTUP_SEND_ATTEMPT_NUMBER", null);
    public static final C2070df l = new C2070df("LAST_REPORT_SEND_ATTEMPT_TIME", null);
    public static final C2070df m = new C2070df("LAST_LOCATION_SEND_ATTEMPT_TIME", null);
    public static final C2070df n = new C2070df("LAST_STARTUP_SEND_ATTEMPT_TIME", null);
    public static final C2070df o = new C2070df("SATELLITE_PRELOAD_INFO_CHECKED", null);
    public static final C2070df p = new C2070df("SATELLITE_CLIDS_CHECKED", null);
    public static final C2070df q = new C2070df("VITAL_DATA", null);
    public static final C2070df r = new C2070df("LAST_KOTLIN_VERSION_SEND_TIME", null);
    public static final C2070df s = new C2070df("ADV_IDENTIFIERS_TRACKING_ENABLED", null);

    public C2095ef(Oa oa) {
        super(oa);
    }

    public final long a(int i2) {
        return this.f6030a.getLong(e.b, i2);
    }

    public final boolean b(boolean z) {
        return this.f6030a.getBoolean(f.b, z);
    }

    public final C2095ef c(boolean z) {
        return (C2095ef) b(g.b, z);
    }

    public final C2095ef d(long j2) {
        return (C2095ef) b(e.b, j2);
    }

    public final boolean e() {
        return this.f6030a.getBoolean(d.b, false);
    }

    public final void f(boolean z) {
        b(d.b, z).b();
    }

    public final C2095ef g() {
        return (C2095ef) b(p.b, true);
    }

    public final C2095ef h() {
        return (C2095ef) b(o.b, true);
    }

    public final boolean i() {
        return this.f6030a.getBoolean(o.b, false);
    }

    public final boolean j() {
        return this.f6030a.getBoolean(p.b, false);
    }

    public final long a(long j2) {
        return this.f6030a.getLong(h.b, j2);
    }

    public final C2095ef b(long j2) {
        return (C2095ef) b(h.b, j2);
    }

    public final C2095ef c(long j2) {
        return (C2095ef) b(r.b, j2);
    }

    public final C2095ef d(boolean z) {
        return (C2095ef) b(f.b, z);
    }

    public final void e(boolean z) {
        b(s.b, z).b();
    }

    public final long f() {
        return this.f6030a.getLong(r.b, 0L);
    }

    @Override // io.appmetrica.analytics.impl.Do
    public final String a() {
        return this.f6030a.getString(q.b, null);
    }

    public final C2095ef b(EnumC1991ae enumC1991ae, int i2) {
        C2070df c2070df;
        int iOrdinal = enumC1991ae.ordinal();
        if (iOrdinal == 0) {
            c2070df = i;
        } else if (iOrdinal != 1) {
            c2070df = iOrdinal != 2 ? null : k;
        } else {
            c2070df = j;
        }
        return c2070df != null ? (C2095ef) b(c2070df.b, i2) : this;
    }

    @Override // io.appmetrica.analytics.impl.AbstractC2044cf
    public final Set<String> c() {
        return this.f6030a.a();
    }

    public final Boolean d() {
        C2070df c2070df = g;
        if (!this.f6030a.a(c2070df.b)) {
            return null;
        }
        return Boolean.valueOf(this.f6030a.getBoolean(c2070df.b, true));
    }

    @Override // io.appmetrica.analytics.impl.Fd
    public final String f(String str) {
        return new C2070df(str, null).b;
    }

    @Override // io.appmetrica.analytics.impl.Do
    public final void a(String str) {
        b(q.b, str).b();
    }

    public final boolean a(boolean z) {
        return this.f6030a.getBoolean(s.b, z);
    }

    public final int a(EnumC1991ae enumC1991ae, int i2) {
        C2070df c2070df;
        int iOrdinal = enumC1991ae.ordinal();
        if (iOrdinal == 0) {
            c2070df = i;
        } else if (iOrdinal != 1) {
            c2070df = iOrdinal != 2 ? null : k;
        } else {
            c2070df = j;
        }
        if (c2070df == null) {
            return i2;
        }
        return this.f6030a.getInt(c2070df.b, i2);
    }

    public final C2095ef b(EnumC1991ae enumC1991ae, long j2) {
        C2070df c2070df;
        int iOrdinal = enumC1991ae.ordinal();
        if (iOrdinal == 0) {
            c2070df = l;
        } else if (iOrdinal != 1) {
            c2070df = iOrdinal != 2 ? null : n;
        } else {
            c2070df = m;
        }
        return c2070df != null ? (C2095ef) b(c2070df.b, j2) : this;
    }

    public final long a(EnumC1991ae enumC1991ae, long j2) {
        C2070df c2070df;
        int iOrdinal = enumC1991ae.ordinal();
        if (iOrdinal == 0) {
            c2070df = l;
        } else if (iOrdinal != 1) {
            c2070df = iOrdinal != 2 ? null : n;
        } else {
            c2070df = m;
        }
        if (c2070df == null) {
            return j2;
        }
        return this.f6030a.getLong(c2070df.b, j2);
    }
}
