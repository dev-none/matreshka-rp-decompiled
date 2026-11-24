package io.appmetrica.analytics.screenshot.impl;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.z, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2658z implements Parcelable {
    public static final C2657y CREATOR = new C2657y();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6581a;

    public C2658z(boolean z) {
        this.f6581a = z;
    }

    public final boolean a() {
        return this.f6581a;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final String toString() {
        return "ParcelableApiCaptorConfig(enabled=" + this.f6581a + ')';
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeByte(this.f6581a ? (byte) 1 : (byte) 0);
    }

    public C2658z(h0 h0Var) {
        this(h0Var.a());
    }
}
