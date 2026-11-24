package com.vk.id.group.subscription.common.style;

import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;

/* JADX INFO: compiled from: GroupSubscriptionButtonsSizeStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\u0018\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0019\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006R\u001c\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0007\u0010\b\u001a\u0004\b\t\u0010\nR\u001c\u0010\u0004\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u000b\u0010\b\u001a\u0004\b\f\u0010\nj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014j\u0002\b\u0015j\u0002\b\u0016j\u0002\b\u0017j\u0002\b\u0018j\u0002\b\u0019j\u0002\b\u001a¨\u0006\u001b"}, d2 = {"Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsSizeStyle;", "", "heightDp", "", "textSizeSp", "<init>", "(Ljava/lang/String;III)V", "getHeightDp$annotations", "()V", "getHeightDp", "()I", "getTextSizeSp$annotations", "getTextSizeSp", "DEFAULT", "SMALL_32", "SMALL_34", "SMALL_36", "SMALL_38", "MEDIUM_40", "MEDIUM_42", "MEDIUM_44", "MEDIUM_46", "LARGE_48", "LARGE_50", "LARGE_52", "LARGE_54", "LARGE_56", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public enum GroupSubscriptionButtonsSizeStyle {
    DEFAULT(44, 14),
    SMALL_32(32, 14),
    SMALL_34(34, 14),
    SMALL_36(36, 14),
    SMALL_38(38, 14),
    MEDIUM_40(40, 16),
    MEDIUM_42(42, 16),
    MEDIUM_44(44, 16),
    MEDIUM_46(46, 16),
    LARGE_48(48, 18),
    LARGE_50(50, 17),
    LARGE_52(52, 17),
    LARGE_54(54, 17),
    LARGE_56(56, 17);

    private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());
    private final int heightDp;
    private final int textSizeSp;

    public static EnumEntries<GroupSubscriptionButtonsSizeStyle> getEntries() {
        return $ENTRIES;
    }

    @InternalVKIDApi
    public static /* synthetic */ void getHeightDp$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getTextSizeSp$annotations() {
    }

    GroupSubscriptionButtonsSizeStyle(int i, int i2) {
        this.heightDp = i;
        this.textSizeSp = i2;
    }

    public final int getHeightDp() {
        return this.heightDp;
    }

    public final int getTextSizeSp() {
        return this.textSizeSp;
    }
}
