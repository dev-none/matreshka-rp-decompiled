package com.vk.id.group.subscription.common.style;

import kotlin.Metadata;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GroupSubscriptionStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
/* synthetic */ class GroupSubscriptionStyle$Companion$system$1 extends FunctionReferenceImpl implements Function3<GroupSubscriptionSheetCornersStyle, GroupSubscriptionButtonsCornersStyle, GroupSubscriptionButtonsSizeStyle, GroupSubscriptionStyle.Dark> {
    public static final GroupSubscriptionStyle$Companion$system$1 INSTANCE = new GroupSubscriptionStyle$Companion$system$1();

    GroupSubscriptionStyle$Companion$system$1() {
        super(3, GroupSubscriptionStyle.Dark.class, "<init>", "<init>(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionSheetCornersStyle;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsCornersStyle;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsSizeStyle;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public final GroupSubscriptionStyle.Dark invoke(GroupSubscriptionSheetCornersStyle p0, GroupSubscriptionButtonsCornersStyle p1, GroupSubscriptionButtonsSizeStyle p2) {
        Intrinsics.checkNotNullParameter(p0, "p0");
        Intrinsics.checkNotNullParameter(p1, "p1");
        Intrinsics.checkNotNullParameter(p2, "p2");
        return new GroupSubscriptionStyle.Dark(p0, p1, p2);
    }
}
