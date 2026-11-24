package com.vk.id;

import android.os.Parcel;
import android.os.Parcelable;
import com.vk.id.common.InternalVKIDApi;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.protocol.FeatureFlags;
import io.sentry.protocol.Request;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AccessToken.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\"\n\u0002\b\r\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0007\u0018\u00002\u00020\u0001BE\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u000e\u0010\n\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u000b¢\u0006\u0004\b\f\u0010\rJ\b\u0010\u0018\u001a\u00020\u0019H\u0016J\u0013\u0010\u001a\u001a\u00020\u001b2\b\u0010\u001c\u001a\u0004\u0018\u00010\u001dH\u0096\u0002J\u0006\u0010\u001e\u001a\u00020\u0019J\u0016\u0010\u001f\u001a\u00020 2\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020\u0019R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0019\u0010\n\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017¨\u0006$"}, d2 = {"Lcom/vk/id/AccessToken;", "Landroid/os/Parcelable;", "token", "", Constants.ID_TOKEN, "userID", "", "expireTime", "userData", "Lcom/vk/id/VKIDUser;", "scopes", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;JJLcom/vk/id/VKIDUser;Ljava/util/Set;)V", "getToken", "()Ljava/lang/String;", "getIdToken", "getUserID", "()J", "getExpireTime", "getUserData", "()Lcom/vk/id/VKIDUser;", "getScopes", "()Ljava/util/Set;", "hashCode", "", "equals", "", Request.JsonKeys.OTHER, "", "describeContents", "writeToParcel", "", "dest", "Landroid/os/Parcel;", FeatureFlags.TYPE, "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class AccessToken implements Parcelable {
    public static final int $stable = 0;
    public static final Parcelable.Creator<AccessToken> CREATOR = new Creator();
    private final long expireTime;
    private final String idToken;
    private final Set<String> scopes;
    private final String token;
    private final VKIDUser userData;
    private final long userID;

    /* JADX INFO: compiled from: AccessToken.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public static final class Creator implements Parcelable.Creator<AccessToken> {
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final AccessToken createFromParcel(Parcel parcel) {
            LinkedHashSet linkedHashSet;
            Intrinsics.checkNotNullParameter(parcel, "parcel");
            String string = parcel.readString();
            String string2 = parcel.readString();
            long j = parcel.readLong();
            long j2 = parcel.readLong();
            VKIDUser vKIDUserCreateFromParcel = VKIDUser.CREATOR.createFromParcel(parcel);
            if (parcel.readInt() == 0) {
                linkedHashSet = null;
            } else {
                int i = parcel.readInt();
                LinkedHashSet linkedHashSet2 = new LinkedHashSet(i);
                for (int i2 = 0; i2 != i; i2++) {
                    linkedHashSet2.add(parcel.readString());
                }
                linkedHashSet = linkedHashSet2;
            }
            return new AccessToken(string, string2, j, j2, vKIDUserCreateFromParcel, linkedHashSet);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final AccessToken[] newArray(int i) {
            return new AccessToken[i];
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    @InternalVKIDApi
    public AccessToken(String token, long j, long j2, VKIDUser userData, Set<String> set) {
        this(token, null, j, j2, userData, set, 2, null);
        Intrinsics.checkNotNullParameter(token, "token");
        Intrinsics.checkNotNullParameter(userData, "userData");
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int flags) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        dest.writeString(this.token);
        dest.writeString(this.idToken);
        dest.writeLong(this.userID);
        dest.writeLong(this.expireTime);
        this.userData.writeToParcel(dest, flags);
        Set<String> set = this.scopes;
        if (set == null) {
            dest.writeInt(0);
            return;
        }
        dest.writeInt(1);
        dest.writeInt(set.size());
        Iterator<String> it = set.iterator();
        while (it.hasNext()) {
            dest.writeString(it.next());
        }
    }

    @InternalVKIDApi
    public AccessToken(String token, String str, long j, long j2, VKIDUser userData, Set<String> set) {
        Intrinsics.checkNotNullParameter(token, "token");
        Intrinsics.checkNotNullParameter(userData, "userData");
        this.token = token;
        this.idToken = str;
        this.userID = j;
        this.expireTime = j2;
        this.userData = userData;
        this.scopes = set;
    }

    public /* synthetic */ AccessToken(String str, String str2, long j, long j2, VKIDUser vKIDUser, Set set, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, (i & 2) != 0 ? null : str2, j, j2, vKIDUser, set);
    }

    public final String getToken() {
        return this.token;
    }

    public final String getIdToken() {
        return this.idToken;
    }

    public final long getUserID() {
        return this.userID;
    }

    public final long getExpireTime() {
        return this.expireTime;
    }

    public final VKIDUser getUserData() {
        return this.userData;
    }

    public final Set<String> getScopes() {
        return this.scopes;
    }

    public int hashCode() {
        return (((((this.token.hashCode() * 31) + Long.hashCode(this.userID)) * 31) + Long.hashCode(this.expireTime)) * 31) + this.userData.hashCode();
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!Intrinsics.areEqual(getClass(), other != null ? other.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(other, "null cannot be cast to non-null type com.vk.id.AccessToken");
        AccessToken accessToken = (AccessToken) other;
        return Intrinsics.areEqual(this.token, accessToken.token) && this.userID == accessToken.userID && this.expireTime == accessToken.expireTime && Intrinsics.areEqual(this.userData, accessToken.userData);
    }
}
