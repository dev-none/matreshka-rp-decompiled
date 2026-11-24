package io.appmetrica.analytics.screenshot.impl;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes7.dex */
public final class D implements Parcelable {
    public static final C CREATOR = new C();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6535a;
    public final F b;

    public D(boolean z, F f) {
        this.f6535a = z;
        this.b = f;
    }

    public final F a() {
        return this.b;
    }

    public final boolean b() {
        return this.f6535a;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final String toString() {
        return "ParcelableRemoteScreenshotConfig(enabled=" + this.f6535a + ", config=" + this.b + ')';
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeByte(this.f6535a ? (byte) 1 : (byte) 0);
        parcel.writeParcelable(this.b, i);
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public D(j0 j0Var) {
        boolean zB = j0Var.b();
        k0 k0VarA = j0Var.a();
        this(zB, k0VarA != null ? new F(k0VarA) : null);
    }
}
