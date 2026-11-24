package com.my.target;

import android.content.Context;
import com.my.target.common.MyTargetConfig;
import com.my.target.common.MyTargetPrivacy;
import com.my.target.common.MyTargetVersion;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class d2 {
    public static final d2 n = new d2();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final b0 f4589a = new b0();
    public final u1 b = new u1();
    public final z1 c = new z1();
    public final i2 d = new i2();
    public final h8 e = new h8();
    public final r2 f = new r2();
    public final s0 g = new s0();
    public final p0 h = new p0();
    public final n0 i = new n0();
    public final ec j = new ec();
    public final z6 k = new z6();
    public volatile String l = null;
    public volatile String m = null;

    public static d2 b() {
        return n;
    }

    public t1 a() {
        return this.b.a();
    }

    public String a(Context context) {
        return this.b.a(context);
    }

    public Map a(MyTargetConfig myTargetConfig, MyTargetPrivacy myTargetPrivacy, h6 h6Var, Context context) {
        Map map;
        Map mapA;
        Map mapA2;
        Map mapA3;
        HashMap map2;
        if (f0.a()) {
            gb.a("FingerprintDataProvider: You must not call collectData method from main thread");
            return Collections.EMPTY_MAP;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        Map mapA4 = this.f4589a.a(myTargetConfig, context);
        a(h6Var, 23, jCurrentTimeMillis);
        Map mapA5 = this.b.a(myTargetConfig, context);
        long jA = a(h6Var, 10, jCurrentTimeMillis);
        Map mapA6 = this.j.a(myTargetConfig, context);
        a(h6Var, 21, jA);
        Map mapA7 = this.i.a(myTargetConfig, context);
        long jA2 = a(h6Var, 16, jA);
        Map mapA8 = this.k.a(myTargetConfig, context);
        a(h6Var, 22, jA2);
        Map map3 = new HashMap();
        if (myTargetPrivacy.isConsent()) {
            this.c.b(myTargetConfig, context);
            long jA3 = a(h6Var, 15, jA2);
            Map mapA9 = this.d.a(myTargetConfig, context);
            long jA4 = a(h6Var, 11, jA3);
            mapA = this.e.a(myTargetConfig, context);
            long jA5 = a(h6Var, 14, jA4);
            mapA2 = this.f.a(myTargetConfig, context);
            long jA6 = a(h6Var, 13, jA5);
            mapA3 = this.h.a(myTargetConfig, context);
            long jA7 = a(h6Var, 17, jA6);
            Map mapA10 = this.g.a(myTargetConfig, context);
            a(h6Var, 18, jA7);
            map3 = mapA10;
            map = mapA9;
        } else {
            map = map3;
            mapA = map;
            mapA2 = mapA;
            mapA3 = mapA2;
        }
        synchronized (this) {
            map2 = new HashMap();
            map2.putAll(mapA4);
            map2.putAll(mapA5);
            map2.putAll(mapA6);
            map2.putAll(mapA7);
            map2.putAll(mapA8);
            if (myTargetPrivacy.isConsent()) {
                z1.d dVarA = this.c.a();
                if (h6Var != null) {
                    h6Var.b(15, dVarA.a());
                }
                map2.putAll(dVarA.b());
                map2.putAll(map);
                map2.putAll(mapA);
                map2.putAll(mapA2);
                map2.putAll(mapA3);
                map2.putAll(map3);
            }
        }
        return map2;
    }

    public String a(MyTargetConfig myTargetConfig, MyTargetPrivacy myTargetPrivacy, Context context) {
        if (f0.a()) {
            gb.a("FingerprintDataProvider: You must not call getBidderToken method from main thread");
            return "";
        }
        if (this.l == null) {
            synchronized (this) {
                if (this.l == null) {
                    HashMap map = new HashMap();
                    map.put("sdk_ver_int", MyTargetVersion.VERSION_INT);
                    map.putAll(this.b.a(myTargetConfig, context));
                    this.l = y1.a(map);
                    map.putAll(this.d.a(myTargetConfig, context));
                    map.putAll(this.f.a(myTargetConfig, context));
                    this.m = y1.a(map);
                }
            }
        }
        String str = myTargetPrivacy.isConsent() ? this.m : this.l;
        return str != null ? str : "";
    }

    public void a(MyTargetConfig myTargetConfig, Context context) {
        if (f0.a()) {
            gb.a("FingerprintDataProvider: You must not call collectData method from main thread");
            return;
        }
        this.f4589a.a(myTargetConfig, context);
        this.b.a(myTargetConfig, context);
        this.d.a(myTargetConfig, context);
        this.f.a(myTargetConfig, context);
    }

    public final long a(h6 h6Var, int i, long j) {
        if (h6Var == null) {
            return 0L;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        h6Var.b(i, jCurrentTimeMillis - j);
        return jCurrentTimeMillis;
    }
}
