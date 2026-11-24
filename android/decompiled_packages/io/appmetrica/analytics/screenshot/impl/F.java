package io.appmetrica.analytics.screenshot.impl;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes7.dex */
public final class F implements Parcelable {
    public static final E CREATOR = new E();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2658z f6536a;
    public final H b;
    public final B c;

    public F(C2658z c2658z, H h, B b) {
        this.f6536a = c2658z;
        this.b = h;
        this.c = b;
    }

    public final C2658z a() {
        return this.f6536a;
    }

    public final B b() {
        return this.c;
    }

    public final H c() {
        return this.b;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final String toString() {
        return "ParcelableScreenshotConfig(apiCaptorConfig=" + this.f6536a + ", serviceCaptorConfig=" + this.b + ", contentObserverCaptorConfig=" + this.c + ')';
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeParcelable(this.f6536a, i);
        parcel.writeParcelable(this.b, i);
        parcel.writeParcelable(this.c, i);
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public F(k0 k0Var) {
        h0 h0VarA = k0Var.a();
        C2658z c2658z = h0VarA != null ? new C2658z(h0VarA) : null;
        l0 l0VarC = k0Var.c();
        H h = l0VarC != null ? new H(l0VarC) : null;
        i0 i0VarB = k0Var.b();
        this(c2658z, h, i0VarB != null ? new B(i0VarB) : null);
    }
}
