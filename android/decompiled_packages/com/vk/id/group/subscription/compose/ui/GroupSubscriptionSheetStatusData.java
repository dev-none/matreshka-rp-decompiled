package com.vk.id.group.subscription.compose.ui;

import android.os.Parcel;
import android.os.Parcelable;
import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.FeatureFlags;
import io.sentry.protocol.Request;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GroupSubscriptionSheetStatusData.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010 \n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0017\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0081\b\u0018\u00002\u00020\u0001BE\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00030\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\t\u0012\u0006\u0010\u000b\u001a\u00020\f¢\u0006\u0004\b\r\u0010\u000eJ\t\u0010\u0019\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0003HÆ\u0003J\u000f\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u00030\u0007HÆ\u0003J\t\u0010\u001d\u001a\u00020\tHÆ\u0003J\t\u0010\u001e\u001a\u00020\tHÆ\u0003J\t\u0010\u001f\u001a\u00020\fHÆ\u0003JU\u0010 \u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\u000e\b\u0002\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00030\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\t2\b\b\u0002\u0010\u000b\u001a\u00020\fHÆ\u0001J\u0006\u0010!\u001a\u00020\tJ\u0013\u0010\"\u001a\u00020\f2\b\u0010#\u001a\u0004\u0018\u00010$HÖ\u0003J\t\u0010%\u001a\u00020\tHÖ\u0001J\t\u0010&\u001a\u00020\u0003HÖ\u0001J\u0016\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020*2\u0006\u0010+\u001a\u00020\tR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0010R\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0010R\u0017\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00030\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0011\u0010\n\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0016R\u0011\u0010\u000b\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\u0018¨\u0006,"}, d2 = {"Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;", "Landroid/os/Parcelable;", "groupImageUrl", "", "groupDescription", "groupName", "userImageUrls", "", "subscriberCount", "", "friendsCount", "isGroupVerified", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;IIZ)V", "getGroupImageUrl", "()Ljava/lang/String;", "getGroupDescription", "getGroupName", "getUserImageUrls", "()Ljava/util/List;", "getSubscriberCount", "()I", "getFriendsCount", "()Z", "component1", "component2", "component3", "component4", "component5", "component6", "component7", MenuActionType.COPY, "describeContents", "equals", Request.JsonKeys.OTHER, "", "hashCode", "toString", "writeToParcel", "", "dest", "Landroid/os/Parcel;", FeatureFlags.TYPE, "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class GroupSubscriptionSheetStatusData implements Parcelable {
    public static final int $stable = 0;
    public static final Parcelable.Creator<GroupSubscriptionSheetStatusData> CREATOR = new Creator();
    private final int friendsCount;
    private final String groupDescription;
    private final String groupImageUrl;
    private final String groupName;
    private final boolean isGroupVerified;
    private final int subscriberCount;
    private final List<String> userImageUrls;

    /* JADX INFO: compiled from: GroupSubscriptionSheetStatusData.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public static final class Creator implements Parcelable.Creator<GroupSubscriptionSheetStatusData> {
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final GroupSubscriptionSheetStatusData createFromParcel(Parcel parcel) {
            Intrinsics.checkNotNullParameter(parcel, "parcel");
            return new GroupSubscriptionSheetStatusData(parcel.readString(), parcel.readString(), parcel.readString(), parcel.createStringArrayList(), parcel.readInt(), parcel.readInt(), parcel.readInt() != 0);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final GroupSubscriptionSheetStatusData[] newArray(int i) {
            return new GroupSubscriptionSheetStatusData[i];
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ GroupSubscriptionSheetStatusData copy$default(GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, String str, String str2, String str3, List list, int i, int i2, boolean z, int i3, Object obj) {
        if ((i3 & 1) != 0) {
            str = groupSubscriptionSheetStatusData.groupImageUrl;
        }
        if ((i3 & 2) != 0) {
            str2 = groupSubscriptionSheetStatusData.groupDescription;
        }
        if ((i3 & 4) != 0) {
            str3 = groupSubscriptionSheetStatusData.groupName;
        }
        if ((i3 & 8) != 0) {
            list = groupSubscriptionSheetStatusData.userImageUrls;
        }
        if ((i3 & 16) != 0) {
            i = groupSubscriptionSheetStatusData.subscriberCount;
        }
        if ((i3 & 32) != 0) {
            i2 = groupSubscriptionSheetStatusData.friendsCount;
        }
        if ((i3 & 64) != 0) {
            z = groupSubscriptionSheetStatusData.isGroupVerified;
        }
        int i4 = i2;
        boolean z2 = z;
        int i5 = i;
        String str4 = str3;
        return groupSubscriptionSheetStatusData.copy(str, str2, str4, list, i5, i4, z2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getGroupImageUrl() {
        return this.groupImageUrl;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getGroupDescription() {
        return this.groupDescription;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getGroupName() {
        return this.groupName;
    }

    public final List<String> component4() {
        return this.userImageUrls;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final int getSubscriberCount() {
        return this.subscriberCount;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final int getFriendsCount() {
        return this.friendsCount;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final boolean getIsGroupVerified() {
        return this.isGroupVerified;
    }

    public final GroupSubscriptionSheetStatusData copy(String groupImageUrl, String groupDescription, String groupName, List<String> userImageUrls, int subscriberCount, int friendsCount, boolean isGroupVerified) {
        Intrinsics.checkNotNullParameter(groupImageUrl, "groupImageUrl");
        Intrinsics.checkNotNullParameter(groupDescription, "groupDescription");
        Intrinsics.checkNotNullParameter(groupName, "groupName");
        Intrinsics.checkNotNullParameter(userImageUrls, "userImageUrls");
        return new GroupSubscriptionSheetStatusData(groupImageUrl, groupDescription, groupName, userImageUrls, subscriberCount, friendsCount, isGroupVerified);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof GroupSubscriptionSheetStatusData)) {
            return false;
        }
        GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData = (GroupSubscriptionSheetStatusData) other;
        return Intrinsics.areEqual(this.groupImageUrl, groupSubscriptionSheetStatusData.groupImageUrl) && Intrinsics.areEqual(this.groupDescription, groupSubscriptionSheetStatusData.groupDescription) && Intrinsics.areEqual(this.groupName, groupSubscriptionSheetStatusData.groupName) && Intrinsics.areEqual(this.userImageUrls, groupSubscriptionSheetStatusData.userImageUrls) && this.subscriberCount == groupSubscriptionSheetStatusData.subscriberCount && this.friendsCount == groupSubscriptionSheetStatusData.friendsCount && this.isGroupVerified == groupSubscriptionSheetStatusData.isGroupVerified;
    }

    public int hashCode() {
        return (((((((((((this.groupImageUrl.hashCode() * 31) + this.groupDescription.hashCode()) * 31) + this.groupName.hashCode()) * 31) + this.userImageUrls.hashCode()) * 31) + Integer.hashCode(this.subscriberCount)) * 31) + Integer.hashCode(this.friendsCount)) * 31) + Boolean.hashCode(this.isGroupVerified);
    }

    public String toString() {
        return "GroupSubscriptionSheetStatusData(groupImageUrl=" + this.groupImageUrl + ", groupDescription=" + this.groupDescription + ", groupName=" + this.groupName + ", userImageUrls=" + this.userImageUrls + ", subscriberCount=" + this.subscriberCount + ", friendsCount=" + this.friendsCount + ", isGroupVerified=" + this.isGroupVerified + ")";
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int flags) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        dest.writeString(this.groupImageUrl);
        dest.writeString(this.groupDescription);
        dest.writeString(this.groupName);
        dest.writeStringList(this.userImageUrls);
        dest.writeInt(this.subscriberCount);
        dest.writeInt(this.friendsCount);
        dest.writeInt(this.isGroupVerified ? 1 : 0);
    }

    public GroupSubscriptionSheetStatusData(String groupImageUrl, String groupDescription, String groupName, List<String> userImageUrls, int i, int i2, boolean z) {
        Intrinsics.checkNotNullParameter(groupImageUrl, "groupImageUrl");
        Intrinsics.checkNotNullParameter(groupDescription, "groupDescription");
        Intrinsics.checkNotNullParameter(groupName, "groupName");
        Intrinsics.checkNotNullParameter(userImageUrls, "userImageUrls");
        this.groupImageUrl = groupImageUrl;
        this.groupDescription = groupDescription;
        this.groupName = groupName;
        this.userImageUrls = userImageUrls;
        this.subscriberCount = i;
        this.friendsCount = i2;
        this.isGroupVerified = z;
    }

    public final String getGroupImageUrl() {
        return this.groupImageUrl;
    }

    public final String getGroupDescription() {
        return this.groupDescription;
    }

    public final String getGroupName() {
        return this.groupName;
    }

    public final List<String> getUserImageUrls() {
        return this.userImageUrls;
    }

    public final int getSubscriberCount() {
        return this.subscriberCount;
    }

    public final int getFriendsCount() {
        return this.friendsCount;
    }

    public final boolean isGroupVerified() {
        return this.isGroupVerified;
    }
}
