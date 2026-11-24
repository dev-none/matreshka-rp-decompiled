package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.sg, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2451sg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6314a;
    public final long b;
    public final long c;
    public final EnumC2426rg d;

    public C2451sg(byte[] bArr) throws InvalidProtocolBufferNanoException {
        C2476tg c2476tgA = C2476tg.a(bArr);
        this.f6314a = c2476tgA.f6334a;
        this.b = c2476tgA.c;
        this.c = c2476tgA.b;
        this.d = a(c2476tgA.d);
    }

    public final byte[] a() {
        C2476tg c2476tg = new C2476tg();
        c2476tg.f6334a = this.f6314a;
        c2476tg.c = this.b;
        c2476tg.b = this.c;
        int iOrdinal = this.d.ordinal();
        int i = 1;
        if (iOrdinal != 1) {
            i = 2;
            if (iOrdinal != 2) {
                i = 0;
            }
        }
        c2476tg.d = i;
        return MessageNano.toByteArray(c2476tg);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && C2451sg.class == obj.getClass()) {
            C2451sg c2451sg = (C2451sg) obj;
            if (this.b == c2451sg.b && this.c == c2451sg.c && this.f6314a.equals(c2451sg.f6314a) && this.d == c2451sg.d) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int iHashCode = this.f6314a.hashCode() * 31;
        long j = this.b;
        int i = (iHashCode + ((int) (j ^ (j >>> 32)))) * 31;
        long j2 = this.c;
        return this.d.hashCode() + ((i + ((int) (j2 ^ (j2 >>> 32)))) * 31);
    }

    public final String toString() {
        return "ReferrerInfo{installReferrer='" + this.f6314a + "', referrerClickTimestampSeconds=" + this.b + ", installBeginTimestampSeconds=" + this.c + ", source=" + this.d + '}';
    }

    public C2451sg(String str, long j, long j2, EnumC2426rg enumC2426rg) {
        this.f6314a = str;
        this.b = j;
        this.c = j2;
        this.d = enumC2426rg;
    }

    public static EnumC2426rg a(int i) {
        if (i == 1) {
            return EnumC2426rg.c;
        }
        if (i != 2) {
            return EnumC2426rg.b;
        }
        return EnumC2426rg.d;
    }
}
