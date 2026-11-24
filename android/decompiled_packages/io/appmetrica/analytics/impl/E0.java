package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ndkcrashesapi.internal.NativeCrashSource;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class E0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final NativeCrashSource f5647a;
    public final String b;
    public final String c;
    public final String d;
    public final long e;
    public final F0 f;

    public E0(NativeCrashSource nativeCrashSource, String str, String str2, String str3, long j, F0 f0) {
        this.f5647a = nativeCrashSource;
        this.b = str;
        this.c = str2;
        this.d = str3;
        this.e = j;
        this.f = f0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof E0)) {
            return false;
        }
        E0 e0 = (E0) obj;
        return this.f5647a == e0.f5647a && Intrinsics.areEqual(this.b, e0.b) && Intrinsics.areEqual(this.c, e0.c) && Intrinsics.areEqual(this.d, e0.d) && this.e == e0.e && Intrinsics.areEqual(this.f, e0.f);
    }

    public final int hashCode() {
        return this.f.hashCode() + ((Long.hashCode(this.e) + ((this.d.hashCode() + ((this.c.hashCode() + ((this.b.hashCode() + (this.f5647a.hashCode() * 31)) * 31)) * 31)) * 31)) * 31);
    }

    public final String toString() {
        return "AppMetricaNativeCrash(source=" + this.f5647a + ", handlerVersion=" + this.b + ", uuid=" + this.c + ", dumpFile=" + this.d + ", creationTime=" + this.e + ", metadata=" + this.f + ')';
    }
}
