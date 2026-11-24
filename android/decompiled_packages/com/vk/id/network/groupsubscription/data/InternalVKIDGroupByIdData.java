package com.vk.id.network.groupsubscription.data;

import com.my.target.common.menu.MenuActionType;
import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDGroupByIdData.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0011\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B/\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\b¢\u0006\u0004\b\t\u0010\nJ\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0013\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\bHÆ\u0003J;\u0010\u0016\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\bHÆ\u0001J\u0013\u0010\u0017\u001a\u00020\b2\b\u0010\u0018\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0019\u001a\u00020\u001aHÖ\u0001J\t\u0010\u001b\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\fR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\fR\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\fR\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\u0010¨\u0006\u001c"}, d2 = {"Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupByIdData;", "", "groupId", "", "name", "imageUrl", "description", "isVerified", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", "getGroupId", "()Ljava/lang/String;", "getName", "getImageUrl", "getDescription", "()Z", "component1", "component2", "component3", "component4", "component5", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class InternalVKIDGroupByIdData {
    private final String description;
    private final String groupId;
    private final String imageUrl;
    private final boolean isVerified;
    private final String name;

    public static /* synthetic */ InternalVKIDGroupByIdData copy$default(InternalVKIDGroupByIdData internalVKIDGroupByIdData, String str, String str2, String str3, String str4, boolean z, int i, Object obj) {
        if ((i & 1) != 0) {
            str = internalVKIDGroupByIdData.groupId;
        }
        if ((i & 2) != 0) {
            str2 = internalVKIDGroupByIdData.name;
        }
        if ((i & 4) != 0) {
            str3 = internalVKIDGroupByIdData.imageUrl;
        }
        if ((i & 8) != 0) {
            str4 = internalVKIDGroupByIdData.description;
        }
        if ((i & 16) != 0) {
            z = internalVKIDGroupByIdData.isVerified;
        }
        boolean z2 = z;
        String str5 = str3;
        return internalVKIDGroupByIdData.copy(str, str2, str5, str4, z2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getGroupId() {
        return this.groupId;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getName() {
        return this.name;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getImageUrl() {
        return this.imageUrl;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final String getDescription() {
        return this.description;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final boolean getIsVerified() {
        return this.isVerified;
    }

    public final InternalVKIDGroupByIdData copy(String groupId, String name, String imageUrl, String description, boolean isVerified) {
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(imageUrl, "imageUrl");
        Intrinsics.checkNotNullParameter(description, "description");
        return new InternalVKIDGroupByIdData(groupId, name, imageUrl, description, isVerified);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof InternalVKIDGroupByIdData)) {
            return false;
        }
        InternalVKIDGroupByIdData internalVKIDGroupByIdData = (InternalVKIDGroupByIdData) other;
        return Intrinsics.areEqual(this.groupId, internalVKIDGroupByIdData.groupId) && Intrinsics.areEqual(this.name, internalVKIDGroupByIdData.name) && Intrinsics.areEqual(this.imageUrl, internalVKIDGroupByIdData.imageUrl) && Intrinsics.areEqual(this.description, internalVKIDGroupByIdData.description) && this.isVerified == internalVKIDGroupByIdData.isVerified;
    }

    public int hashCode() {
        return (((((((this.groupId.hashCode() * 31) + this.name.hashCode()) * 31) + this.imageUrl.hashCode()) * 31) + this.description.hashCode()) * 31) + Boolean.hashCode(this.isVerified);
    }

    public String toString() {
        return "InternalVKIDGroupByIdData(groupId=" + this.groupId + ", name=" + this.name + ", imageUrl=" + this.imageUrl + ", description=" + this.description + ", isVerified=" + this.isVerified + ")";
    }

    public InternalVKIDGroupByIdData(String groupId, String name, String imageUrl, String description, boolean z) {
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(imageUrl, "imageUrl");
        Intrinsics.checkNotNullParameter(description, "description");
        this.groupId = groupId;
        this.name = name;
        this.imageUrl = imageUrl;
        this.description = description;
        this.isVerified = z;
    }

    public final String getGroupId() {
        return this.groupId;
    }

    public final String getName() {
        return this.name;
    }

    public final String getImageUrl() {
        return this.imageUrl;
    }

    public final String getDescription() {
        return this.description;
    }

    public final boolean isVerified() {
        return this.isVerified;
    }
}
