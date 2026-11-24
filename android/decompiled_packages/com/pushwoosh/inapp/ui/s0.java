package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class s0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5162a;
    public final r0 b;
    public final Integer c;
    public final Long d;
    public final Long e;
    public final String f;

    public s0(String str, r0 layout, Integer num, Long l, Long l2, String rawJson) {
        Intrinsics.checkNotNullParameter(layout, "layout");
        Intrinsics.checkNotNullParameter(rawJson, "rawJson");
        this.f5162a = str;
        this.b = layout;
        this.c = num;
        this.d = l;
        this.e = l2;
        this.f = rawJson;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof s0)) {
            return false;
        }
        s0 s0Var = (s0) obj;
        return Intrinsics.areEqual(this.f5162a, s0Var.f5162a) && Intrinsics.areEqual(this.b, s0Var.b) && Intrinsics.areEqual(this.c, s0Var.c) && Intrinsics.areEqual(this.d, s0Var.d) && Intrinsics.areEqual(this.e, s0Var.e) && Intrinsics.areEqual(this.f, s0Var.f);
    }

    public final int hashCode() {
        String str = this.f5162a;
        int iHashCode = (this.b.hashCode() + ((str == null ? 0 : str.hashCode()) * 31)) * 31;
        Integer num = this.c;
        int iHashCode2 = (iHashCode + (num == null ? 0 : num.hashCode())) * 31;
        Long l = this.d;
        int iHashCode3 = (iHashCode2 + (l == null ? 0 : l.hashCode())) * 31;
        Long l2 = this.e;
        return this.f.hashCode() + ((iHashCode3 + (l2 != null ? l2.hashCode() : 0)) * 31);
    }

    public final String toString() {
        return "InAppMessage(id=" + this.f5162a + ", layout=" + this.b + ", maxDisplays=" + this.c + ", cooldownSec=" + this.d + ", expireEpochSec=" + this.e + ", rawJson=" + this.f + ')';
    }
}
