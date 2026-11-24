package com.my.target;

import androidx.compose.material3.internal.CalendarModelKt;
import com.my.target.common.CustomParams;
import com.my.target.mediation.AdNetworkConfig;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class j {
    public int g;
    public String h;
    public int j;
    public volatile String k;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final CustomParams f4665a = new CustomParams();
    public final Map b = Collections.synchronizedMap(new HashMap());
    public long c = CalendarModelKt.MillisecondsIn24Hours;
    public boolean d = true;
    public boolean e = true;
    public int f = 360;
    public int i = 0;
    public o l = o.i;

    public j(int i, String str) {
        this.j = i;
        this.k = str;
    }

    public static j a(int i, String str) {
        return new j(i, str);
    }

    public void b(boolean z) {
        this.e = z;
    }

    public void c(String str) {
        this.k = str;
    }

    public void d(int i) {
        this.f = i;
    }

    public long e() {
        return this.c;
    }

    public int f() {
        return this.i;
    }

    public CustomParams g() {
        return this.f4665a;
    }

    public String h() {
        return this.k;
    }

    public int i() {
        return this.j;
    }

    public int j() {
        return this.f;
    }

    public boolean k() {
        return this.d;
    }

    public boolean l() {
        return this.e;
    }

    public o a() {
        return this.l;
    }

    public void b(String str) {
        this.h = str;
    }

    public void c(int i) {
        this.j = i;
    }

    public String d() {
        return this.h;
    }

    public void a(o oVar) {
        this.l = oVar;
        oVar.a(this.i);
    }

    public void b(int i) {
        this.i = i;
        this.l.a(i);
    }

    public int c() {
        return this.g;
    }

    public Collection b() {
        return this.b.values();
    }

    public void a(long j) {
        if (j < 0) {
            this.c = 0L;
        } else {
            this.c = j;
        }
    }

    public void a(int i) {
        this.g = i;
    }

    public void a(boolean z) {
        this.d = z;
    }

    public void a(String str, AdNetworkConfig adNetworkConfig) {
        this.b.put(str.toLowerCase(), adNetworkConfig);
    }

    public AdNetworkConfig a(String str) {
        return (AdNetworkConfig) this.b.get(str.toLowerCase());
    }
}
