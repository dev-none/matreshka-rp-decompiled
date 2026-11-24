package io.appmetrica.analytics.impl;

import android.os.Parcel;
import android.os.Parcelable;
import io.appmetrica.analytics.coreapi.internal.identifiers.IdentifierStatus;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ca, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2039ca implements Parcelable {
    public static final C2013ba CREATOR = new C2013ba();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Boolean f6027a;
    public final IdentifierStatus b;
    public final String c;

    public C2039ca(Boolean bool, IdentifierStatus identifierStatus, String str) {
        this.f6027a = bool;
        this.b = identifierStatus;
        this.c = str;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C2039ca)) {
            return false;
        }
        C2039ca c2039ca = (C2039ca) obj;
        return Intrinsics.areEqual(this.f6027a, c2039ca.f6027a) && this.b == c2039ca.b && Intrinsics.areEqual(this.c, c2039ca.c);
    }

    public final int hashCode() {
        Boolean bool = this.f6027a;
        int iHashCode = (this.b.hashCode() + ((bool == null ? 0 : bool.hashCode()) * 31)) * 31;
        String str = this.c;
        return iHashCode + (str != null ? str.hashCode() : 0);
    }

    public final String toString() {
        return "FeaturesInternal(sslPinning=" + this.f6027a + ", status=" + this.b + ", errorExplanation=" + this.c + ')';
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeValue(this.f6027a);
        parcel.writeString(this.b.getValue());
        parcel.writeString(this.c);
    }

    public C2039ca() {
        this(null, IdentifierStatus.UNKNOWN, null);
    }
}
