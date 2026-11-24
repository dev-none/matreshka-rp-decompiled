package com.pushwoosh.m0;

import android.os.Bundle;

/* JADX INFO: loaded from: classes6.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5246a;
    public final int b;
    public final String c;
    public final long d;
    public final Bundle e;

    public d(int i, int i2, String str) {
        this.f5246a = i;
        this.b = i2;
        this.c = str;
        this.e = new Bundle();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && d.class == obj.getClass()) {
            d dVar = (d) obj;
            if (this.f5246a != dVar.f5246a || this.b != dVar.b || this.d != dVar.d) {
                return false;
            }
            String str = this.c;
            if (str == null ? dVar.c != null : !str.equals(dVar.c)) {
                return false;
            }
            Bundle bundle = this.e;
            Bundle bundle2 = dVar.e;
            if (bundle != null) {
                return bundle.equals(bundle2);
            }
            if (bundle2 == null) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i = ((this.f5246a * 31) + this.b) * 31;
        String str = this.c;
        int iHashCode = str != null ? str.hashCode() : 0;
        long j = this.d;
        int i2 = (((i + iHashCode) * 31) + ((int) (j ^ (j >>> 32)))) * 31;
        Bundle bundle = this.e;
        return i2 + (bundle != null ? bundle.hashCode() : 0);
    }

    public d(int i, int i2, String str, long j, Bundle bundle) {
        this.f5246a = i;
        this.b = i2;
        this.c = str;
        this.d = j;
        this.e = bundle;
    }

    public d() {
        this.c = "";
        this.e = new Bundle();
    }
}
