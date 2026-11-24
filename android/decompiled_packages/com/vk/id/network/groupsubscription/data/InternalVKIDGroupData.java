package com.vk.id.network.groupsubscription.data;

import com.my.target.common.menu.MenuActionType;
import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.Request;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDGroupData.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010 \n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0019\b\u0087\b\u0018\u00002\u00020\u0001BE\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00030\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\t\u0012\u0006\u0010\u000b\u001a\u00020\f¢\u0006\u0004\b\r\u0010\u000eJ\t\u0010\u0019\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0003HÆ\u0003J\u000f\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u00030\u0007HÆ\u0003J\t\u0010\u001d\u001a\u00020\tHÆ\u0003J\t\u0010\u001e\u001a\u00020\tHÆ\u0003J\t\u0010\u001f\u001a\u00020\fHÆ\u0003JU\u0010 \u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\u000e\b\u0002\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00030\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\t2\b\b\u0002\u0010\u000b\u001a\u00020\fHÆ\u0001J\u0013\u0010!\u001a\u00020\f2\b\u0010\"\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010#\u001a\u00020\tHÖ\u0001J\t\u0010$\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0010R\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0010R\u0017\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00030\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0011\u0010\n\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0016R\u0011\u0010\u000b\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\u0018¨\u0006%"}, d2 = {"Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupData;", "", "imageUrl", "", "name", "description", "userImageUrls", "", "subscriberCount", "", "friendsCount", "isVerified", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;IIZ)V", "getImageUrl", "()Ljava/lang/String;", "getName", "getDescription", "getUserImageUrls", "()Ljava/util/List;", "getSubscriberCount", "()I", "getFriendsCount", "()Z", "component1", "component2", "component3", "component4", "component5", "component6", "component7", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "toString", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class InternalVKIDGroupData {
    private final String description;
    private final int friendsCount;
    private final String imageUrl;
    private final boolean isVerified;
    private final String name;
    private final int subscriberCount;
    private final List<String> userImageUrls;

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ InternalVKIDGroupData copy$default(InternalVKIDGroupData internalVKIDGroupData, String str, String str2, String str3, List list, int i, int i2, boolean z, int i3, Object obj) {
        if ((i3 & 1) != 0) {
            str = internalVKIDGroupData.imageUrl;
        }
        if ((i3 & 2) != 0) {
            str2 = internalVKIDGroupData.name;
        }
        if ((i3 & 4) != 0) {
            str3 = internalVKIDGroupData.description;
        }
        if ((i3 & 8) != 0) {
            list = internalVKIDGroupData.userImageUrls;
        }
        if ((i3 & 16) != 0) {
            i = internalVKIDGroupData.subscriberCount;
        }
        if ((i3 & 32) != 0) {
            i2 = internalVKIDGroupData.friendsCount;
        }
        if ((i3 & 64) != 0) {
            z = internalVKIDGroupData.isVerified;
        }
        int i4 = i2;
        boolean z2 = z;
        int i5 = i;
        String str4 = str3;
        return internalVKIDGroupData.copy(str, str2, str4, list, i5, i4, z2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getImageUrl() {
        return this.imageUrl;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getName() {
        return this.name;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getDescription() {
        return this.description;
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
    public final boolean getIsVerified() {
        return this.isVerified;
    }

    public final InternalVKIDGroupData copy(String imageUrl, String name, String description, List<String> userImageUrls, int subscriberCount, int friendsCount, boolean isVerified) {
        Intrinsics.checkNotNullParameter(imageUrl, "imageUrl");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(description, "description");
        Intrinsics.checkNotNullParameter(userImageUrls, "userImageUrls");
        return new InternalVKIDGroupData(imageUrl, name, description, userImageUrls, subscriberCount, friendsCount, isVerified);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof InternalVKIDGroupData)) {
            return false;
        }
        InternalVKIDGroupData internalVKIDGroupData = (InternalVKIDGroupData) other;
        return Intrinsics.areEqual(this.imageUrl, internalVKIDGroupData.imageUrl) && Intrinsics.areEqual(this.name, internalVKIDGroupData.name) && Intrinsics.areEqual(this.description, internalVKIDGroupData.description) && Intrinsics.areEqual(this.userImageUrls, internalVKIDGroupData.userImageUrls) && this.subscriberCount == internalVKIDGroupData.subscriberCount && this.friendsCount == internalVKIDGroupData.friendsCount && this.isVerified == internalVKIDGroupData.isVerified;
    }

    public int hashCode() {
        return (((((((((((this.imageUrl.hashCode() * 31) + this.name.hashCode()) * 31) + this.description.hashCode()) * 31) + this.userImageUrls.hashCode()) * 31) + Integer.hashCode(this.subscriberCount)) * 31) + Integer.hashCode(this.friendsCount)) * 31) + Boolean.hashCode(this.isVerified);
    }

    public String toString() {
        return "InternalVKIDGroupData(imageUrl=" + this.imageUrl + ", name=" + this.name + ", description=" + this.description + ", userImageUrls=" + this.userImageUrls + ", subscriberCount=" + this.subscriberCount + ", friendsCount=" + this.friendsCount + ", isVerified=" + this.isVerified + ")";
    }

    public InternalVKIDGroupData(String imageUrl, String name, String description, List<String> userImageUrls, int i, int i2, boolean z) {
        Intrinsics.checkNotNullParameter(imageUrl, "imageUrl");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(description, "description");
        Intrinsics.checkNotNullParameter(userImageUrls, "userImageUrls");
        this.imageUrl = imageUrl;
        this.name = name;
        this.description = description;
        this.userImageUrls = userImageUrls;
        this.subscriberCount = i;
        this.friendsCount = i2;
        this.isVerified = z;
    }

    public final String getImageUrl() {
        return this.imageUrl;
    }

    public final String getName() {
        return this.name;
    }

    public final String getDescription() {
        return this.description;
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

    public final boolean isVerified() {
        return this.isVerified;
    }
}
