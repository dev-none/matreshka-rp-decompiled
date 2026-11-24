package com.vk.id.network.groupsubscription.data;

import com.my.target.common.menu.MenuActionType;
import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.Request;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDGroupMembersData.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0087\b\u0018\u00002\u00020\u0001B\u001d\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\r\u001a\u00020\u0003HÆ\u0003J\u000f\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0003J#\u0010\u000f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0001J\u0013\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0013\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0014\u001a\u00020\u0015HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\f¨\u0006\u0016"}, d2 = {"Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupMembersData;", "", "count", "", "members", "", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDMemberData;", "<init>", "(ILjava/util/List;)V", "getCount", "()I", "getMembers", "()Ljava/util/List;", "component1", "component2", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "toString", "", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class InternalVKIDGroupMembersData {
    private final int count;
    private final List<InternalVKIDMemberData> members;

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ InternalVKIDGroupMembersData copy$default(InternalVKIDGroupMembersData internalVKIDGroupMembersData, int i, List list, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            i = internalVKIDGroupMembersData.count;
        }
        if ((i2 & 2) != 0) {
            list = internalVKIDGroupMembersData.members;
        }
        return internalVKIDGroupMembersData.copy(i, list);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final int getCount() {
        return this.count;
    }

    public final List<InternalVKIDMemberData> component2() {
        return this.members;
    }

    public final InternalVKIDGroupMembersData copy(int count, List<InternalVKIDMemberData> members) {
        Intrinsics.checkNotNullParameter(members, "members");
        return new InternalVKIDGroupMembersData(count, members);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof InternalVKIDGroupMembersData)) {
            return false;
        }
        InternalVKIDGroupMembersData internalVKIDGroupMembersData = (InternalVKIDGroupMembersData) other;
        return this.count == internalVKIDGroupMembersData.count && Intrinsics.areEqual(this.members, internalVKIDGroupMembersData.members);
    }

    public int hashCode() {
        return (Integer.hashCode(this.count) * 31) + this.members.hashCode();
    }

    public String toString() {
        return "InternalVKIDGroupMembersData(count=" + this.count + ", members=" + this.members + ")";
    }

    public InternalVKIDGroupMembersData(int i, List<InternalVKIDMemberData> members) {
        Intrinsics.checkNotNullParameter(members, "members");
        this.count = i;
        this.members = members;
    }

    public final int getCount() {
        return this.count;
    }

    public final List<InternalVKIDMemberData> getMembers() {
        return this.members;
    }
}
