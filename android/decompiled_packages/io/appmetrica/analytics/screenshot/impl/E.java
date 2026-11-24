package io.appmetrica.analytics.screenshot.impl;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes7.dex */
public final class E implements Parcelable.Creator {
    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        return new F((C2658z) parcel.readParcelable(C2658z.class.getClassLoader()), (H) parcel.readParcelable(H.class.getClassLoader()), (B) parcel.readParcelable(B.class.getClassLoader()));
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i) {
        return new F[i];
    }
}
