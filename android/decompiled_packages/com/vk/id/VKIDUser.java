package com.vk.id;

import android.os.Parcel;
import android.os.Parcelable;
import io.sentry.protocol.FeatureFlags;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDUser.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0011\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0007\u0018\u00002\u00020\u0001BS\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\n\u0010\u000bJ\b\u0010\u0014\u001a\u00020\u0015H\u0016J\u0013\u0010\u0016\u001a\u00020\u00172\b\u0010\u0018\u001a\u0004\u0018\u00010\u0019H\u0096\u0002J\b\u0010\u001a\u001a\u00020\u0003H\u0016J\u0006\u0010\u001b\u001a\u00020\u0015J\u0016\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020\u0015R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\rR\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\rR\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\rR\u0013\u0010\u0007\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\rR\u0013\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\rR\u0013\u0010\t\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\r¨\u0006!"}, d2 = {"Lcom/vk/id/VKIDUser;", "Landroid/os/Parcelable;", "firstName", "", "lastName", "phone", "photo50", "photo100", "photo200", "email", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getFirstName", "()Ljava/lang/String;", "getLastName", "getPhone", "getPhoto50", "getPhoto100", "getPhoto200", "getEmail", "hashCode", "", "equals", "", Request.JsonKeys.OTHER, "", "toString", "describeContents", "writeToParcel", "", "dest", "Landroid/os/Parcel;", FeatureFlags.TYPE, "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDUser implements Parcelable {
    public static final int $stable = 0;
    public static final Parcelable.Creator<VKIDUser> CREATOR = new Creator();
    private final String email;
    private final String firstName;
    private final String lastName;
    private final String phone;
    private final String photo100;
    private final String photo200;
    private final String photo50;

    /* JADX INFO: compiled from: VKIDUser.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public static final class Creator implements Parcelable.Creator<VKIDUser> {
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final VKIDUser createFromParcel(Parcel parcel) {
            Intrinsics.checkNotNullParameter(parcel, "parcel");
            return new VKIDUser(parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString());
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final VKIDUser[] newArray(int i) {
            return new VKIDUser[i];
        }
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int flags) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        dest.writeString(this.firstName);
        dest.writeString(this.lastName);
        dest.writeString(this.phone);
        dest.writeString(this.photo50);
        dest.writeString(this.photo100);
        dest.writeString(this.photo200);
        dest.writeString(this.email);
    }

    public VKIDUser(String firstName, String lastName, String str, String str2, String str3, String str4, String str5) {
        Intrinsics.checkNotNullParameter(firstName, "firstName");
        Intrinsics.checkNotNullParameter(lastName, "lastName");
        this.firstName = firstName;
        this.lastName = lastName;
        this.phone = str;
        this.photo50 = str2;
        this.photo100 = str3;
        this.photo200 = str4;
        this.email = str5;
    }

    public /* synthetic */ VKIDUser(String str, String str2, String str3, String str4, String str5, String str6, String str7, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, (i & 4) != 0 ? null : str3, (i & 8) != 0 ? null : str4, (i & 16) != 0 ? null : str5, (i & 32) != 0 ? null : str6, (i & 64) != 0 ? null : str7);
    }

    public final String getFirstName() {
        return this.firstName;
    }

    public final String getLastName() {
        return this.lastName;
    }

    public final String getPhone() {
        return this.phone;
    }

    public final String getPhoto50() {
        return this.photo50;
    }

    public final String getPhoto100() {
        return this.photo100;
    }

    public final String getPhoto200() {
        return this.photo200;
    }

    public final String getEmail() {
        return this.email;
    }

    public int hashCode() {
        int iHashCode = ((this.firstName.hashCode() * 31) + this.lastName.hashCode()) * 31;
        String str = this.phone;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.photo50;
        int iHashCode3 = (iHashCode2 + (str2 != null ? str2.hashCode() : 0)) * 31;
        String str3 = this.photo100;
        int iHashCode4 = (iHashCode3 + (str3 != null ? str3.hashCode() : 0)) * 31;
        String str4 = this.photo200;
        int iHashCode5 = (iHashCode4 + (str4 != null ? str4.hashCode() : 0)) * 31;
        String str5 = this.email;
        return iHashCode5 + (str5 != null ? str5.hashCode() : 0);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!Intrinsics.areEqual(getClass(), other != null ? other.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(other, "null cannot be cast to non-null type com.vk.id.VKIDUser");
        VKIDUser vKIDUser = (VKIDUser) other;
        return Intrinsics.areEqual(this.firstName, vKIDUser.firstName) && Intrinsics.areEqual(this.lastName, vKIDUser.lastName) && Intrinsics.areEqual(this.phone, vKIDUser.phone) && Intrinsics.areEqual(this.photo50, vKIDUser.photo50) && Intrinsics.areEqual(this.photo100, vKIDUser.photo100) && Intrinsics.areEqual(this.photo200, vKIDUser.photo200) && Intrinsics.areEqual(this.email, vKIDUser.email);
    }

    public String toString() {
        return "VKIDUser(firstName='" + this.firstName + "', lastName='" + this.lastName + "', phone=" + this.phone + ", photo50=" + this.photo50 + ", photo100=" + this.photo100 + ", photo200=" + this.photo200 + ", email=" + this.email + ")";
    }
}
