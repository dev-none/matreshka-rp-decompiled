package com.vk.id.groupsubscription;

import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: GroupSubscriptionLimit.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\b\u0007\u0018\u00002\u00020\u0001B\u001b\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\b¨\u0006\n"}, d2 = {"Lcom/vk/id/groupsubscription/GroupSubscriptionLimit;", "", "maxSubscriptionsToShow", "", "periodInDays", "<init>", "(II)V", "getMaxSubscriptionsToShow", "()I", "getPeriodInDays", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class GroupSubscriptionLimit {
    public static final int $stable = 0;
    private final int maxSubscriptionsToShow;
    private final int periodInDays;

    /* JADX WARN: Illegal instructions before constructor call */
    public GroupSubscriptionLimit() {
        int i = 0;
        this(i, i, 3, null);
    }

    public GroupSubscriptionLimit(int i, int i2) {
        this.maxSubscriptionsToShow = i;
        this.periodInDays = i2;
    }

    public /* synthetic */ GroupSubscriptionLimit(int i, int i2, int i3, DefaultConstructorMarker defaultConstructorMarker) {
        this((i3 & 1) != 0 ? 2 : i, (i3 & 2) != 0 ? 30 : i2);
    }

    public final int getMaxSubscriptionsToShow() {
        return this.maxSubscriptionsToShow;
    }

    public final int getPeriodInDays() {
        return this.periodInDays;
    }
}
