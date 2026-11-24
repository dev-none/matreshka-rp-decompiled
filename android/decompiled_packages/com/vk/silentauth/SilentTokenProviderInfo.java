package com.vk.silentauth;

import android.os.Parcel;
import android.os.Parcelable;
import com.my.target.common.menu.MenuActionType;
import com.vk.dto.common.id.UserId;
import io.flutter.plugins.firebase.analytics.Constants;
import io.sentry.protocol.FeatureFlags;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SilentTokenProviderInfo.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0010\u0002\n\u0002\b\n\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0004\b\u0081\b\u0018\u0000 ,2\u00020\u0001:\u0001,B=\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\b\b\u0002\u0010\t\u001a\u00020\n\u0012\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\f\u0010\rB\u0011\b\u0016\u0012\u0006\u0010\u000e\u001a\u00020\u000f¢\u0006\u0004\b\f\u0010\u0010J\u0018\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u001d\u001a\u00020\nH\u0016J\b\u0010\u001e\u001a\u00020\nH\u0016J\t\u0010\u001f\u001a\u00020\u0003HÆ\u0003J\t\u0010 \u001a\u00020\u0005HÆ\u0003J\t\u0010!\u001a\u00020\u0005HÆ\u0003J\t\u0010\"\u001a\u00020\bHÆ\u0003J\t\u0010#\u001a\u00020\nHÆ\u0003J\u000b\u0010$\u001a\u0004\u0018\u00010\u0005HÆ\u0003JG\u0010%\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\n2\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u0005HÇ\u0001J\u0013\u0010&\u001a\u00020'2\b\u0010(\u001a\u0004\u0018\u00010)H×\u0003J\t\u0010*\u001a\u00020\nH×\u0001J\t\u0010+\u001a\u00020\u0005H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0014R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\t\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0013\u0010\u000b\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0014¨\u0006-"}, d2 = {"Lcom/vk/silentauth/SilentTokenProviderInfo;", "Landroid/os/Parcelable;", Constants.USER_ID, "Lcom/vk/dto/common/id/UserId;", "uuid", "", "token", "expireTime", "", "weight", "", "applicationProviderPackage", "<init>", "(Lcom/vk/dto/common/id/UserId;Ljava/lang/String;Ljava/lang/String;JILjava/lang/String;)V", "parcel", "Landroid/os/Parcel;", "(Landroid/os/Parcel;)V", "getUserId", "()Lcom/vk/dto/common/id/UserId;", "getUuid", "()Ljava/lang/String;", "getToken", "getExpireTime", "()J", "getWeight", "()I", "getApplicationProviderPackage", "writeToParcel", "", FeatureFlags.TYPE, "describeContents", "component1", "component2", "component3", "component4", "component5", "component6", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "toString", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class SilentTokenProviderInfo implements Parcelable {
    private final String applicationProviderPackage;
    private final long expireTime;
    private final String token;
    private final UserId userId;
    private final String uuid;
    private final int weight;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;
    public static final Parcelable.Creator<SilentTokenProviderInfo> CREATOR = new Parcelable.Creator<SilentTokenProviderInfo>() { // from class: com.vk.silentauth.SilentTokenProviderInfo$Companion$CREATOR$1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public SilentTokenProviderInfo createFromParcel(Parcel parcel) {
            Intrinsics.checkNotNullParameter(parcel, "parcel");
            return new SilentTokenProviderInfo(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public SilentTokenProviderInfo[] newArray(int size) {
            return new SilentTokenProviderInfo[size];
        }
    };

    public static /* synthetic */ SilentTokenProviderInfo copy$default(SilentTokenProviderInfo silentTokenProviderInfo, UserId userId, String str, String str2, long j, int i, String str3, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            userId = silentTokenProviderInfo.userId;
        }
        if ((i2 & 2) != 0) {
            str = silentTokenProviderInfo.uuid;
        }
        if ((i2 & 4) != 0) {
            str2 = silentTokenProviderInfo.token;
        }
        if ((i2 & 8) != 0) {
            j = silentTokenProviderInfo.expireTime;
        }
        if ((i2 & 16) != 0) {
            i = silentTokenProviderInfo.weight;
        }
        if ((i2 & 32) != 0) {
            str3 = silentTokenProviderInfo.applicationProviderPackage;
        }
        long j2 = j;
        String str4 = str2;
        return silentTokenProviderInfo.copy(userId, str, str4, j2, i, str3);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final UserId getUserId() {
        return this.userId;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getUuid() {
        return this.uuid;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getToken() {
        return this.token;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final long getExpireTime() {
        return this.expireTime;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final int getWeight() {
        return this.weight;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final String getApplicationProviderPackage() {
        return this.applicationProviderPackage;
    }

    public final SilentTokenProviderInfo copy(UserId userId, String uuid, String token, long expireTime, int weight, String applicationProviderPackage) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        Intrinsics.checkNotNullParameter(token, "token");
        return new SilentTokenProviderInfo(userId, uuid, token, expireTime, weight, applicationProviderPackage);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof SilentTokenProviderInfo)) {
            return false;
        }
        SilentTokenProviderInfo silentTokenProviderInfo = (SilentTokenProviderInfo) other;
        return Intrinsics.areEqual(this.userId, silentTokenProviderInfo.userId) && Intrinsics.areEqual(this.uuid, silentTokenProviderInfo.uuid) && Intrinsics.areEqual(this.token, silentTokenProviderInfo.token) && this.expireTime == silentTokenProviderInfo.expireTime && this.weight == silentTokenProviderInfo.weight && Intrinsics.areEqual(this.applicationProviderPackage, silentTokenProviderInfo.applicationProviderPackage);
    }

    public int hashCode() {
        int iHashCode = ((((((((this.userId.hashCode() * 31) + this.uuid.hashCode()) * 31) + this.token.hashCode()) * 31) + Long.hashCode(this.expireTime)) * 31) + Integer.hashCode(this.weight)) * 31;
        String str = this.applicationProviderPackage;
        return iHashCode + (str == null ? 0 : str.hashCode());
    }

    public String toString() {
        return "SilentTokenProviderInfo(userId=" + this.userId + ", uuid=" + this.uuid + ", token=" + this.token + ", expireTime=" + this.expireTime + ", weight=" + this.weight + ", applicationProviderPackage=" + this.applicationProviderPackage + ")";
    }

    public SilentTokenProviderInfo(UserId userId, String uuid, String token, long j, int i, String str) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        Intrinsics.checkNotNullParameter(token, "token");
        this.userId = userId;
        this.uuid = uuid;
        this.token = token;
        this.expireTime = j;
        this.weight = i;
        this.applicationProviderPackage = str;
    }

    public /* synthetic */ SilentTokenProviderInfo(UserId userId, String str, String str2, long j, int i, String str3, int i2, DefaultConstructorMarker defaultConstructorMarker) {
        this(userId, str, str2, j, (i2 & 16) != 0 ? 0 : i, (i2 & 32) != 0 ? null : str3);
    }

    public final UserId getUserId() {
        return this.userId;
    }

    public final String getUuid() {
        return this.uuid;
    }

    public final String getToken() {
        return this.token;
    }

    public final long getExpireTime() {
        return this.expireTime;
    }

    public final int getWeight() {
        return this.weight;
    }

    public final String getApplicationProviderPackage() {
        return this.applicationProviderPackage;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public SilentTokenProviderInfo(Parcel parcel) {
        Intrinsics.checkNotNullParameter(parcel, "parcel");
        Parcelable parcelable = parcel.readParcelable(UserId.class.getClassLoader());
        Intrinsics.checkNotNull(parcelable);
        String string = parcel.readString();
        Intrinsics.checkNotNull(string);
        String string2 = parcel.readString();
        Intrinsics.checkNotNull(string2);
        this((UserId) parcelable, string, string2, parcel.readLong(), parcel.readInt(), parcel.readString());
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int flags) {
        Intrinsics.checkNotNullParameter(parcel, "parcel");
        parcel.writeParcelable(this.userId, 0);
        parcel.writeString(this.uuid);
        parcel.writeString(this.token);
        parcel.writeLong(this.expireTime);
        parcel.writeInt(this.weight);
        parcel.writeString(this.applicationProviderPackage);
    }

    /* JADX INFO: compiled from: SilentTokenProviderInfo.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007R\u0016\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00050\t8\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"Lcom/vk/silentauth/SilentTokenProviderInfo$Companion;", "", "<init>", "()V", "fromSilentAuthInfo", "Lcom/vk/silentauth/SilentTokenProviderInfo;", "silentAuthInfo", "Lcom/vk/silentauth/SilentAuthInfo;", "CREATOR", "Landroid/os/Parcelable$Creator;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final SilentTokenProviderInfo fromSilentAuthInfo(SilentAuthInfo silentAuthInfo) {
            Intrinsics.checkNotNullParameter(silentAuthInfo, "silentAuthInfo");
            return new SilentTokenProviderInfo(silentAuthInfo.getUserId$vkid_release(), silentAuthInfo.getUuid(), silentAuthInfo.getToken(), silentAuthInfo.getExpireTime(), silentAuthInfo.getWeight(), silentAuthInfo.getApplicationProviderPackage());
        }
    }
}
