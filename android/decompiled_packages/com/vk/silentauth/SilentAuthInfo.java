package com.vk.silentauth;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import com.my.target.common.menu.MenuActionType;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import com.vk.dto.common.id.UserId;
import com.vk.dto.common.id.UserIdKt;
import io.flutter.plugins.firebase.analytics.Constants;
import io.sentry.protocol.FeatureFlags;
import io.sentry.protocol.Request;
import java.util.ArrayList;
import java.util.List;
import kotlin.Deprecated;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: SilentAuthInfo.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000Z\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u001b\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0016\n\u0002\u0010\u0000\n\u0002\b\u0004\b\u0081\b\u0018\u0000 Z2\u00020\u0001:\u0001ZB½\u0001\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\b\b\u0002\u0010\t\u001a\u00020\u0005\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\r\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u0011\u0012\b\b\u0002\u0010\u0012\u001a\u00020\u0013\u0012\b\b\u0002\u0010\u0014\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0005\u0012\u000e\b\u0002\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00180\u0017\u0012\b\b\u0002\u0010\u0019\u001a\u00020\u0013¢\u0006\u0004\b\u001a\u0010\u001bBË\u0001\b\u0017\u0012\u0006\u0010\u001c\u001a\u00020\u0013\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\b\b\u0002\u0010\t\u001a\u00020\u0005\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\r\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u0011\u0012\b\b\u0002\u0010\u0012\u001a\u00020\u0013\u0012\b\b\u0002\u0010\u0014\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0005\u0012\u000e\b\u0002\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00180\u0017\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010\u0019\u001a\u00020\u0013¢\u0006\u0004\b\u001a\u0010\u001dB\u0011\b\u0016\u0012\u0006\u0010\u001e\u001a\u00020\u001f¢\u0006\u0004\b\u001a\u0010 J\u0018\u0010:\u001a\u00020;2\u0006\u0010<\u001a\u00020\u001f2\u0006\u0010=\u001a\u00020\u0013H\u0016J\b\u0010>\u001a\u00020\u0013H\u0016J\u0006\u0010?\u001a\u00020@J\u0006\u0010A\u001a\u00020\bJ\u000e\u0010B\u001a\u00020\u0003HÀ\u0003¢\u0006\u0002\bCJ\t\u0010D\u001a\u00020\u0005HÆ\u0003J\t\u0010E\u001a\u00020\u0005HÆ\u0003J\t\u0010F\u001a\u00020\bHÆ\u0003J\t\u0010G\u001a\u00020\u0005HÆ\u0003J\u000b\u0010H\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010I\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010J\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\t\u0010K\u001a\u00020\u0005HÆ\u0003J\u000b\u0010L\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010M\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010N\u001a\u0004\u0018\u00010\u0011HÆ\u0003J\t\u0010O\u001a\u00020\u0013HÆ\u0003J\t\u0010P\u001a\u00020\u0005HÆ\u0003J\u000b\u0010Q\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000f\u0010R\u001a\b\u0012\u0004\u0012\u00020\u00180\u0017HÆ\u0003J\t\u0010S\u001a\u00020\u0013HÆ\u0003JÇ\u0001\u0010T\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\u00052\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\r\u001a\u00020\u00052\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u00112\b\b\u0002\u0010\u0012\u001a\u00020\u00132\b\b\u0002\u0010\u0014\u001a\u00020\u00052\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u00052\u000e\b\u0002\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00180\u00172\b\b\u0002\u0010\u0019\u001a\u00020\u0013HÇ\u0001J\u0013\u0010U\u001a\u00020@2\b\u0010V\u001a\u0004\u0018\u00010WH×\u0003J\t\u0010X\u001a\u00020\u0013H×\u0001J\t\u0010Y\u001a\u00020\u0005H×\u0001R\u0014\u0010\u0002\u001a\u00020\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\"R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b#\u0010$R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b%\u0010$R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b&\u0010'R\u0011\u0010\t\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b(\u0010$R\u0013\u0010\n\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b)\u0010$R\u0013\u0010\u000b\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b*\u0010$R\u0013\u0010\f\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b+\u0010$R\u0011\u0010\r\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b,\u0010$R\u0013\u0010\u000e\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b-\u0010$R\u0013\u0010\u000f\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b.\u0010$R\u0013\u0010\u0010\u001a\u0004\u0018\u00010\u0011¢\u0006\b\n\u0000\u001a\u0004\b/\u00100R\u0011\u0010\u0012\u001a\u00020\u0013¢\u0006\b\n\u0000\u001a\u0004\b1\u00102R\u0011\u0010\u0014\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b3\u0010$R\u0013\u0010\u0015\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b4\u0010$R\u0017\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00180\u0017¢\u0006\b\n\u0000\u001a\u0004\b5\u00106R\u0011\u0010\u0019\u001a\u00020\u0013¢\u0006\b\n\u0000\u001a\u0004\b7\u00102R\u0013\u00108\u001a\u0004\u0018\u00010\u00058F¢\u0006\u0006\u001a\u0004\b9\u0010$¨\u0006["}, d2 = {"Lcom/vk/silentauth/SilentAuthInfo;", "Landroid/os/Parcelable;", Constants.USER_ID, "Lcom/vk/dto/common/id/UserId;", "uuid", "", "token", "expireTime", "", "firstName", "photo50", "photo100", "photo200", "lastName", "phone", "serviceInfo", HandleInvocationsFromAdViewer.KEY_EXTRAS, "Landroid/os/Bundle;", "weight", "", "userHash", "applicationProviderPackage", "providerInfoItems", "", "Lcom/vk/silentauth/SilentTokenProviderInfo;", "providerAppId", "<init>", "(Lcom/vk/dto/common/id/UserId;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;ILjava/lang/String;Ljava/lang/String;Ljava/util/List;I)V", "userIdOld", "(ILjava/lang/String;Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;ILjava/lang/String;Ljava/lang/String;Ljava/util/List;Lcom/vk/dto/common/id/UserId;I)V", "parcel", "Landroid/os/Parcel;", "(Landroid/os/Parcel;)V", "getUserId$vkid_release", "()Lcom/vk/dto/common/id/UserId;", "getUuid", "()Ljava/lang/String;", "getToken", "getExpireTime", "()J", "getFirstName", "getPhoto50", "getPhoto100", "getPhoto200", "getLastName", "getPhone", "getServiceInfo", "getExtras", "()Landroid/os/Bundle;", "getWeight", "()I", "getUserHash", "getApplicationProviderPackage", "getProviderInfoItems", "()Ljava/util/List;", "getProviderAppId", "oauthServiceName", "getOauthServiceName", "writeToParcel", "", "dest", FeatureFlags.TYPE, "describeContents", SilentAuthInfo.KEY_IS_EXCHANGE_USER, "", "getDistinctId", "component1", "component1$vkid_release", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "component17", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "", "hashCode", "toString", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class SilentAuthInfo implements Parcelable {
    public static final String EMPTY_USER_HASH = "";
    public static final String KEY_AVATAR = "avatar";
    public static final String KEY_FIRST_NAME = "first_name";
    public static final String KEY_ID = "id";
    private static final String KEY_IS_EXCHANGE_USER = "isExchangeUser";
    public static final String KEY_LAST_NAME = "last_name";
    public static final String KEY_PHONE = "phone";
    public static final String KEY_SERVICE = "key_service";
    public static final String KEY_SERVICE_NAME = "key_service_name";
    public static final String KEY_TOKEN = "token";
    public static final String KEY_TTL = "ttl";
    public static final String KEY_USER = "user";
    public static final String KEY_UUID = "uuid";
    private final String applicationProviderPackage;
    private final long expireTime;
    private final Bundle extras;
    private final String firstName;
    private final String lastName;
    private final String phone;
    private final String photo100;
    private final String photo200;
    private final String photo50;
    private final int providerAppId;
    private final List<SilentTokenProviderInfo> providerInfoItems;
    private final String serviceInfo;
    private final String token;
    private final String userHash;
    private final UserId userId;
    private final String uuid;
    private final int weight;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;
    public static final Parcelable.Creator<SilentAuthInfo> CREATOR = new Parcelable.Creator<SilentAuthInfo>() { // from class: com.vk.silentauth.SilentAuthInfo$Companion$CREATOR$1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public SilentAuthInfo createFromParcel(Parcel parcel) {
            Intrinsics.checkNotNullParameter(parcel, "parcel");
            return new SilentAuthInfo(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public SilentAuthInfo[] newArray(int size) {
            return new SilentAuthInfo[size];
        }
    };

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ SilentAuthInfo copy$default(SilentAuthInfo silentAuthInfo, UserId userId, String str, String str2, long j, String str3, String str4, String str5, String str6, String str7, String str8, String str9, Bundle bundle, int i, String str10, String str11, List list, int i2, int i3, Object obj) {
        int i4;
        List list2;
        UserId userId2 = (i3 & 1) != 0 ? silentAuthInfo.userId : userId;
        String str12 = (i3 & 2) != 0 ? silentAuthInfo.uuid : str;
        String str13 = (i3 & 4) != 0 ? silentAuthInfo.token : str2;
        long j2 = (i3 & 8) != 0 ? silentAuthInfo.expireTime : j;
        String str14 = (i3 & 16) != 0 ? silentAuthInfo.firstName : str3;
        String str15 = (i3 & 32) != 0 ? silentAuthInfo.photo50 : str4;
        String str16 = (i3 & 64) != 0 ? silentAuthInfo.photo100 : str5;
        String str17 = (i3 & 128) != 0 ? silentAuthInfo.photo200 : str6;
        String str18 = (i3 & 256) != 0 ? silentAuthInfo.lastName : str7;
        String str19 = (i3 & 512) != 0 ? silentAuthInfo.phone : str8;
        String str20 = (i3 & 1024) != 0 ? silentAuthInfo.serviceInfo : str9;
        Bundle bundle2 = (i3 & 2048) != 0 ? silentAuthInfo.extras : bundle;
        int i5 = (i3 & 4096) != 0 ? silentAuthInfo.weight : i;
        UserId userId3 = userId2;
        String str21 = (i3 & 8192) != 0 ? silentAuthInfo.userHash : str10;
        String str22 = (i3 & 16384) != 0 ? silentAuthInfo.applicationProviderPackage : str11;
        List list3 = (i3 & 32768) != 0 ? silentAuthInfo.providerInfoItems : list;
        if ((i3 & 65536) != 0) {
            list2 = list3;
            i4 = silentAuthInfo.providerAppId;
        } else {
            i4 = i2;
            list2 = list3;
        }
        return silentAuthInfo.copy(userId3, str12, str13, j2, str14, str15, str16, str17, str18, str19, str20, bundle2, i5, str21, str22, list2, i4);
    }

    /* JADX INFO: renamed from: component1$vkid_release, reason: from getter */
    public final UserId getUserId() {
        return this.userId;
    }

    /* JADX INFO: renamed from: component10, reason: from getter */
    public final String getPhone() {
        return this.phone;
    }

    /* JADX INFO: renamed from: component11, reason: from getter */
    public final String getServiceInfo() {
        return this.serviceInfo;
    }

    /* JADX INFO: renamed from: component12, reason: from getter */
    public final Bundle getExtras() {
        return this.extras;
    }

    /* JADX INFO: renamed from: component13, reason: from getter */
    public final int getWeight() {
        return this.weight;
    }

    /* JADX INFO: renamed from: component14, reason: from getter */
    public final String getUserHash() {
        return this.userHash;
    }

    /* JADX INFO: renamed from: component15, reason: from getter */
    public final String getApplicationProviderPackage() {
        return this.applicationProviderPackage;
    }

    public final List<SilentTokenProviderInfo> component16() {
        return this.providerInfoItems;
    }

    /* JADX INFO: renamed from: component17, reason: from getter */
    public final int getProviderAppId() {
        return this.providerAppId;
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
    public final String getFirstName() {
        return this.firstName;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final String getPhoto50() {
        return this.photo50;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final String getPhoto100() {
        return this.photo100;
    }

    /* JADX INFO: renamed from: component8, reason: from getter */
    public final String getPhoto200() {
        return this.photo200;
    }

    /* JADX INFO: renamed from: component9, reason: from getter */
    public final String getLastName() {
        return this.lastName;
    }

    public final SilentAuthInfo copy(UserId userId, String uuid, String token, long expireTime, String firstName, String photo50, String photo100, String photo200, String lastName, String phone, String serviceInfo, Bundle extras, int weight, String userHash, String applicationProviderPackage, List<SilentTokenProviderInfo> providerInfoItems, int providerAppId) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        Intrinsics.checkNotNullParameter(token, "token");
        Intrinsics.checkNotNullParameter(firstName, "firstName");
        Intrinsics.checkNotNullParameter(lastName, "lastName");
        Intrinsics.checkNotNullParameter(userHash, "userHash");
        Intrinsics.checkNotNullParameter(providerInfoItems, "providerInfoItems");
        return new SilentAuthInfo(userId, uuid, token, expireTime, firstName, photo50, photo100, photo200, lastName, phone, serviceInfo, extras, weight, userHash, applicationProviderPackage, providerInfoItems, providerAppId);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof SilentAuthInfo)) {
            return false;
        }
        SilentAuthInfo silentAuthInfo = (SilentAuthInfo) other;
        return Intrinsics.areEqual(this.userId, silentAuthInfo.userId) && Intrinsics.areEqual(this.uuid, silentAuthInfo.uuid) && Intrinsics.areEqual(this.token, silentAuthInfo.token) && this.expireTime == silentAuthInfo.expireTime && Intrinsics.areEqual(this.firstName, silentAuthInfo.firstName) && Intrinsics.areEqual(this.photo50, silentAuthInfo.photo50) && Intrinsics.areEqual(this.photo100, silentAuthInfo.photo100) && Intrinsics.areEqual(this.photo200, silentAuthInfo.photo200) && Intrinsics.areEqual(this.lastName, silentAuthInfo.lastName) && Intrinsics.areEqual(this.phone, silentAuthInfo.phone) && Intrinsics.areEqual(this.serviceInfo, silentAuthInfo.serviceInfo) && Intrinsics.areEqual(this.extras, silentAuthInfo.extras) && this.weight == silentAuthInfo.weight && Intrinsics.areEqual(this.userHash, silentAuthInfo.userHash) && Intrinsics.areEqual(this.applicationProviderPackage, silentAuthInfo.applicationProviderPackage) && Intrinsics.areEqual(this.providerInfoItems, silentAuthInfo.providerInfoItems) && this.providerAppId == silentAuthInfo.providerAppId;
    }

    public int hashCode() {
        int iHashCode = ((((((((this.userId.hashCode() * 31) + this.uuid.hashCode()) * 31) + this.token.hashCode()) * 31) + Long.hashCode(this.expireTime)) * 31) + this.firstName.hashCode()) * 31;
        String str = this.photo50;
        int iHashCode2 = (iHashCode + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.photo100;
        int iHashCode3 = (iHashCode2 + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.photo200;
        int iHashCode4 = (((iHashCode3 + (str3 == null ? 0 : str3.hashCode())) * 31) + this.lastName.hashCode()) * 31;
        String str4 = this.phone;
        int iHashCode5 = (iHashCode4 + (str4 == null ? 0 : str4.hashCode())) * 31;
        String str5 = this.serviceInfo;
        int iHashCode6 = (iHashCode5 + (str5 == null ? 0 : str5.hashCode())) * 31;
        Bundle bundle = this.extras;
        int iHashCode7 = (((((iHashCode6 + (bundle == null ? 0 : bundle.hashCode())) * 31) + Integer.hashCode(this.weight)) * 31) + this.userHash.hashCode()) * 31;
        String str6 = this.applicationProviderPackage;
        return ((((iHashCode7 + (str6 != null ? str6.hashCode() : 0)) * 31) + this.providerInfoItems.hashCode()) * 31) + Integer.hashCode(this.providerAppId);
    }

    public String toString() {
        return "SilentAuthInfo(userId=" + this.userId + ", uuid=" + this.uuid + ", token=" + this.token + ", expireTime=" + this.expireTime + ", firstName=" + this.firstName + ", photo50=" + this.photo50 + ", photo100=" + this.photo100 + ", photo200=" + this.photo200 + ", lastName=" + this.lastName + ", phone=" + this.phone + ", serviceInfo=" + this.serviceInfo + ", extras=" + this.extras + ", weight=" + this.weight + ", userHash=" + this.userHash + ", applicationProviderPackage=" + this.applicationProviderPackage + ", providerInfoItems=" + this.providerInfoItems + ", providerAppId=" + this.providerAppId + ")";
    }

    public SilentAuthInfo(UserId userId, String uuid, String token, long j, String firstName, String str, String str2, String str3, String lastName, String str4, String str5, Bundle bundle, int i, String userHash, String str6, List<SilentTokenProviderInfo> providerInfoItems, int i2) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        Intrinsics.checkNotNullParameter(token, "token");
        Intrinsics.checkNotNullParameter(firstName, "firstName");
        Intrinsics.checkNotNullParameter(lastName, "lastName");
        Intrinsics.checkNotNullParameter(userHash, "userHash");
        Intrinsics.checkNotNullParameter(providerInfoItems, "providerInfoItems");
        this.userId = userId;
        this.uuid = uuid;
        this.token = token;
        this.expireTime = j;
        this.firstName = firstName;
        this.photo50 = str;
        this.photo100 = str2;
        this.photo200 = str3;
        this.lastName = lastName;
        this.phone = str4;
        this.serviceInfo = str5;
        this.extras = bundle;
        this.weight = i;
        this.userHash = userHash;
        this.applicationProviderPackage = str6;
        this.providerInfoItems = providerInfoItems;
        this.providerAppId = i2;
    }

    public /* synthetic */ SilentAuthInfo(UserId userId, String str, String str2, long j, String str3, String str4, String str5, String str6, String str7, String str8, String str9, Bundle bundle, int i, String str10, String str11, List list, int i2, int i3, DefaultConstructorMarker defaultConstructorMarker) {
        this(userId, str, str2, j, (i3 & 16) != 0 ? "" : str3, (i3 & 32) != 0 ? null : str4, (i3 & 64) != 0 ? null : str5, (i3 & 128) != 0 ? null : str6, (i3 & 256) != 0 ? "" : str7, (i3 & 512) != 0 ? null : str8, (i3 & 1024) != 0 ? null : str9, (i3 & 2048) != 0 ? null : bundle, (i3 & 4096) != 0 ? 0 : i, (i3 & 8192) != 0 ? "" : str10, (i3 & 16384) != 0 ? null : str11, (32768 & i3) != 0 ? CollectionsKt.emptyList() : list, (i3 & 65536) != 0 ? 0 : i2);
    }

    public final UserId getUserId$vkid_release() {
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

    public final String getFirstName() {
        return this.firstName;
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

    public final String getLastName() {
        return this.lastName;
    }

    public final String getPhone() {
        return this.phone;
    }

    public final String getServiceInfo() {
        return this.serviceInfo;
    }

    public final Bundle getExtras() {
        return this.extras;
    }

    public final int getWeight() {
        return this.weight;
    }

    public final String getUserHash() {
        return this.userHash;
    }

    public final String getApplicationProviderPackage() {
        return this.applicationProviderPackage;
    }

    public final List<SilentTokenProviderInfo> getProviderInfoItems() {
        return this.providerInfoItems;
    }

    public final int getProviderAppId() {
        return this.providerAppId;
    }

    public /* synthetic */ SilentAuthInfo(int i, String str, String str2, long j, String str3, String str4, String str5, String str6, String str7, String str8, String str9, Bundle bundle, int i2, String str10, String str11, List list, UserId userId, int i3, int i4, DefaultConstructorMarker defaultConstructorMarker) {
        this(i, str, str2, j, (i4 & 16) != 0 ? "" : str3, (i4 & 32) != 0 ? null : str4, (i4 & 64) != 0 ? null : str5, (i4 & 128) != 0 ? null : str6, (i4 & 256) != 0 ? "" : str7, (i4 & 512) != 0 ? null : str8, (i4 & 1024) != 0 ? null : str9, (i4 & 2048) != 0 ? null : bundle, (i4 & 4096) != 0 ? 0 : i2, (i4 & 8192) != 0 ? "" : str10, (i4 & 16384) != 0 ? null : str11, (32768 & i4) != 0 ? CollectionsKt.emptyList() : list, (65536 & i4) != 0 ? null : userId, (i4 & 131072) != 0 ? 0 : i3);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    @Deprecated(message = "Use constructor with [UserId], current constructor will be hidden in future")
    public SilentAuthInfo(int i, String uuid, String token, long j, String firstName, String str, String str2, String str3, String lastName, String str4, String str5, Bundle bundle, int i2, String userHash, String str6, List<SilentTokenProviderInfo> providerInfoItems, UserId userId, int i3) {
        this(userId == null ? new UserId(i) : userId, uuid, token, j, firstName, str, str2, str3, lastName, str4, str5, bundle, i2, userHash, str6, providerInfoItems, i3);
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        Intrinsics.checkNotNullParameter(token, "token");
        Intrinsics.checkNotNullParameter(firstName, "firstName");
        Intrinsics.checkNotNullParameter(lastName, "lastName");
        Intrinsics.checkNotNullParameter(userHash, "userHash");
        Intrinsics.checkNotNullParameter(providerInfoItems, "providerInfoItems");
    }

    public final String getOauthServiceName() {
        Bundle bundle = this.extras;
        if (bundle != null) {
            return bundle.getString(KEY_SERVICE_NAME);
        }
        return null;
    }

    public SilentAuthInfo(Parcel parcel) {
        Intrinsics.checkNotNullParameter(parcel, "parcel");
        int i = parcel.readInt();
        String string = parcel.readString();
        Intrinsics.checkNotNull(string);
        String string2 = parcel.readString();
        Intrinsics.checkNotNull(string2);
        long j = parcel.readLong();
        String string3 = parcel.readString();
        Intrinsics.checkNotNull(string3);
        String string4 = parcel.readString();
        String string5 = parcel.readString();
        String string6 = parcel.readString();
        String string7 = parcel.readString();
        Intrinsics.checkNotNull(string7);
        String string8 = parcel.readString();
        String string9 = parcel.readString();
        Bundle bundle = (Bundle) parcel.readParcelable(Bundle.class.getClassLoader());
        int i2 = parcel.readInt();
        String string10 = parcel.readString();
        String str = string10 == null ? "" : string10;
        String string11 = parcel.readString();
        ArrayList arrayList = new ArrayList();
        parcel.readList(arrayList, SilentTokenProviderInfo.class.getClassLoader());
        Unit unit = Unit.INSTANCE;
        this(i, string, string2, j, string3, string4, string5, string6, string7, string8, string9, bundle, i2, str, string11, arrayList, (UserId) parcel.readParcelable(UserId.class.getClassLoader()), parcel.readInt());
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel dest, int flags) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        dest.writeInt((int) this.userId.getValue());
        dest.writeString(this.uuid);
        dest.writeString(this.token);
        dest.writeLong(this.expireTime);
        dest.writeString(this.firstName);
        dest.writeString(this.photo50);
        dest.writeString(this.photo100);
        dest.writeString(this.photo200);
        dest.writeString(this.lastName);
        dest.writeString(this.phone);
        dest.writeString(this.serviceInfo);
        dest.writeParcelable(this.extras, 0);
        dest.writeInt(this.weight);
        dest.writeString(this.userHash);
        dest.writeString(this.applicationProviderPackage);
        dest.writeList(this.providerInfoItems);
        dest.writeParcelable(this.userId, 0);
        dest.writeInt(this.providerAppId);
    }

    public final boolean isExchangeUser() {
        Bundle bundle = this.extras;
        if (bundle != null) {
            return bundle.getBoolean(KEY_IS_EXCHANGE_USER);
        }
        return false;
    }

    public final long getDistinctId() {
        if (UserIdKt.isReal(this.userId)) {
            return this.userId.getValue();
        }
        return -Math.abs((this.firstName + this.lastName + this.photo200 + this.phone).hashCode());
    }

    /* JADX INFO: compiled from: SilentAuthInfo.kt */
    @Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\r\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0015J(\u0010\u0016\u001a\u00020\u00132\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u00052\u0006\u0010\u001a\u001a\u00020\u00052\b\u0010\u001b\u001a\u0004\u0018\u00010\u0005R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u0016\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u00130\u001d8\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u001e"}, d2 = {"Lcom/vk/silentauth/SilentAuthInfo$Companion;", "", "<init>", "()V", "EMPTY_USER_HASH", "", "KEY_IS_EXCHANGE_USER", "KEY_SERVICE", "KEY_SERVICE_NAME", "KEY_USER", "KEY_ID", "KEY_FIRST_NAME", "KEY_LAST_NAME", "KEY_AVATAR", "KEY_PHONE", "KEY_TOKEN", "KEY_UUID", "KEY_TTL", "createFromJSON", "Lcom/vk/silentauth/SilentAuthInfo;", "json", "Lorg/json/JSONObject;", "createForExchangeUser", Constants.USER_ID, "Lcom/vk/dto/common/id/UserId;", "exchangeToken", "name", "avatarUrl", "CREATOR", "Landroid/os/Parcelable$Creator;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final SilentAuthInfo createFromJSON(JSONObject json) throws JSONException {
            Intrinsics.checkNotNullParameter(json, "json");
            JSONObject jSONObject = json.getJSONObject("user");
            String strOptString = jSONObject.optString(SilentAuthInfo.KEY_AVATAR);
            UserId userId = new UserId(jSONObject.getLong("id"));
            String string = json.getString("uuid");
            Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
            String string2 = json.getString("token");
            Intrinsics.checkNotNullExpressionValue(string2, "getString(...)");
            long jOptLong = json.optLong(SilentAuthInfo.KEY_TTL);
            String strOptString2 = jSONObject.optString("phone");
            String strOptString3 = jSONObject.optString(SilentAuthInfo.KEY_FIRST_NAME);
            Intrinsics.checkNotNullExpressionValue(strOptString3, "optString(...)");
            String strOptString4 = jSONObject.optString(SilentAuthInfo.KEY_LAST_NAME);
            Intrinsics.checkNotNullExpressionValue(strOptString4, "optString(...)");
            return new SilentAuthInfo(userId, string, string2, jOptLong, strOptString3, strOptString, strOptString, strOptString, strOptString4, strOptString2, null, null, 0, null, null, null, 0, 130048, null);
        }

        public final SilentAuthInfo createForExchangeUser(UserId userId, String exchangeToken, String name, String avatarUrl) {
            Intrinsics.checkNotNullParameter(userId, "userId");
            Intrinsics.checkNotNullParameter(exchangeToken, "exchangeToken");
            Intrinsics.checkNotNullParameter(name, "name");
            Bundle bundle = new Bundle(1);
            bundle.putBoolean(SilentAuthInfo.KEY_IS_EXCHANGE_USER, true);
            Unit unit = Unit.INSTANCE;
            return new SilentAuthInfo(userId, "", exchangeToken, 0L, name, avatarUrl, avatarUrl, avatarUrl, null, null, null, bundle, 0, null, null, null, 0, 128768, null);
        }
    }
}
