package com.vk.id.group.subscription.common.style;

import android.content.Context;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.common.util.IsDarkThemeKt;
import kotlin.Metadata;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GroupSubscriptionStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b6\u0018\u0000 \u00172\u00020\u0001:\u0003\u0015\u0016\u0017B'\b\u0005\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u001c\u0010\u0010\u001a\u00020\u00118\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0012\u0010\u0013\u001a\u0004\b\u0010\u0010\u0014\u0082\u0001\u0002\u0018\u0019¨\u0006\u001a"}, d2 = {"Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;", "", "cornersStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionSheetCornersStyle;", "buttonsCornersStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsCornersStyle;", "buttonsSizeStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsSizeStyle;", "<init>", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionSheetCornersStyle;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsCornersStyle;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsSizeStyle;)V", "getCornersStyle", "()Lcom/vk/id/group/subscription/common/style/GroupSubscriptionSheetCornersStyle;", "getButtonsCornersStyle", "()Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsCornersStyle;", "getButtonsSizeStyle", "()Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsSizeStyle;", "isLight", "", "isLight$annotations", "()V", "()Z", "Light", "Dark", "Companion", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle$Dark;", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle$Light;", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class GroupSubscriptionStyle {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final GroupSubscriptionButtonsCornersStyle buttonsCornersStyle;
    private final GroupSubscriptionButtonsSizeStyle buttonsSizeStyle;
    private final GroupSubscriptionSheetCornersStyle cornersStyle;
    private final boolean isLight;

    public /* synthetic */ GroupSubscriptionStyle(GroupSubscriptionSheetCornersStyle groupSubscriptionSheetCornersStyle, GroupSubscriptionButtonsCornersStyle groupSubscriptionButtonsCornersStyle, GroupSubscriptionButtonsSizeStyle groupSubscriptionButtonsSizeStyle, DefaultConstructorMarker defaultConstructorMarker) {
        this(groupSubscriptionSheetCornersStyle, groupSubscriptionButtonsCornersStyle, groupSubscriptionButtonsSizeStyle);
    }

    @InternalVKIDApi
    public static /* synthetic */ void isLight$annotations() {
    }

    @InternalVKIDApi
    private GroupSubscriptionStyle(GroupSubscriptionSheetCornersStyle groupSubscriptionSheetCornersStyle, GroupSubscriptionButtonsCornersStyle groupSubscriptionButtonsCornersStyle, GroupSubscriptionButtonsSizeStyle groupSubscriptionButtonsSizeStyle) {
        this.cornersStyle = groupSubscriptionSheetCornersStyle;
        this.buttonsCornersStyle = groupSubscriptionButtonsCornersStyle;
        this.buttonsSizeStyle = groupSubscriptionButtonsSizeStyle;
        this.isLight = this instanceof Light;
    }

    public /* synthetic */ GroupSubscriptionStyle(GroupSubscriptionSheetCornersStyle.Default r1, GroupSubscriptionButtonsCornersStyle.Default r2, GroupSubscriptionButtonsSizeStyle groupSubscriptionButtonsSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? GroupSubscriptionSheetCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? GroupSubscriptionButtonsCornersStyle.Default.INSTANCE : r2, (i & 4) != 0 ? GroupSubscriptionButtonsSizeStyle.DEFAULT : groupSubscriptionButtonsSizeStyle, null);
    }

    public final GroupSubscriptionSheetCornersStyle getCornersStyle() {
        return this.cornersStyle;
    }

    public final GroupSubscriptionButtonsCornersStyle getButtonsCornersStyle() {
        return this.buttonsCornersStyle;
    }

    public final GroupSubscriptionButtonsSizeStyle getButtonsSizeStyle() {
        return this.buttonsSizeStyle;
    }

    /* JADX INFO: renamed from: isLight, reason: from getter */
    public final boolean getIsLight() {
        return this.isLight;
    }

    /* JADX INFO: compiled from: GroupSubscriptionStyle.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle$Light;", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;", "cornersStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionSheetCornersStyle;", "buttonsCornersStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsCornersStyle;", "buttonsSizeStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsSizeStyle;", "<init>", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionSheetCornersStyle;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsCornersStyle;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsSizeStyle;)V", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Light extends GroupSubscriptionStyle {
        public Light() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ Light(GroupSubscriptionSheetCornersStyle.Default r1, GroupSubscriptionButtonsCornersStyle.Default r2, GroupSubscriptionButtonsSizeStyle groupSubscriptionButtonsSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? GroupSubscriptionSheetCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? GroupSubscriptionButtonsCornersStyle.Default.INSTANCE : r2, (i & 4) != 0 ? GroupSubscriptionButtonsSizeStyle.DEFAULT : groupSubscriptionButtonsSizeStyle);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Light(GroupSubscriptionSheetCornersStyle cornersStyle, GroupSubscriptionButtonsCornersStyle buttonsCornersStyle, GroupSubscriptionButtonsSizeStyle buttonsSizeStyle) {
            super(cornersStyle, buttonsCornersStyle, buttonsSizeStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(buttonsCornersStyle, "buttonsCornersStyle");
            Intrinsics.checkNotNullParameter(buttonsSizeStyle, "buttonsSizeStyle");
        }
    }

    /* JADX INFO: compiled from: GroupSubscriptionStyle.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle$Dark;", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;", "cornersStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionSheetCornersStyle;", "buttonsCornersStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsCornersStyle;", "buttonsSizeStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsSizeStyle;", "<init>", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionSheetCornersStyle;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsCornersStyle;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsSizeStyle;)V", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Dark extends GroupSubscriptionStyle {
        public Dark() {
            this(null, null, null, 7, null);
        }

        public /* synthetic */ Dark(GroupSubscriptionSheetCornersStyle.Default r1, GroupSubscriptionButtonsCornersStyle.Default r2, GroupSubscriptionButtonsSizeStyle groupSubscriptionButtonsSizeStyle, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? GroupSubscriptionSheetCornersStyle.Default.INSTANCE : r1, (i & 2) != 0 ? GroupSubscriptionButtonsCornersStyle.Default.INSTANCE : r2, (i & 4) != 0 ? GroupSubscriptionButtonsSizeStyle.DEFAULT : groupSubscriptionButtonsSizeStyle);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public Dark(GroupSubscriptionSheetCornersStyle cornersStyle, GroupSubscriptionButtonsCornersStyle buttonsCornersStyle, GroupSubscriptionButtonsSizeStyle buttonsSizeStyle) {
            super(cornersStyle, buttonsCornersStyle, buttonsSizeStyle, null);
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(buttonsCornersStyle, "buttonsCornersStyle");
            Intrinsics.checkNotNullParameter(buttonsSizeStyle, "buttonsSizeStyle");
        }
    }

    /* JADX INFO: compiled from: GroupSubscriptionStyle.kt */
    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J,\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\r¨\u0006\u000e"}, d2 = {"Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle$Companion;", "", "<init>", "()V", "system", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;", "context", "Landroid/content/Context;", "cornersStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionSheetCornersStyle;", "buttonsCornersStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsCornersStyle;", "buttonsSizeStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionButtonsSizeStyle;", "group-subscription-common_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public static /* synthetic */ GroupSubscriptionStyle system$default(Companion companion, Context context, GroupSubscriptionSheetCornersStyle groupSubscriptionSheetCornersStyle, GroupSubscriptionButtonsCornersStyle groupSubscriptionButtonsCornersStyle, GroupSubscriptionButtonsSizeStyle groupSubscriptionButtonsSizeStyle, int i, Object obj) {
            if ((i & 2) != 0) {
                groupSubscriptionSheetCornersStyle = GroupSubscriptionSheetCornersStyle.Default.INSTANCE;
            }
            if ((i & 4) != 0) {
                groupSubscriptionButtonsCornersStyle = GroupSubscriptionButtonsCornersStyle.Default.INSTANCE;
            }
            if ((i & 8) != 0) {
                groupSubscriptionButtonsSizeStyle = GroupSubscriptionButtonsSizeStyle.DEFAULT;
            }
            return companion.system(context, groupSubscriptionSheetCornersStyle, groupSubscriptionButtonsCornersStyle, groupSubscriptionButtonsSizeStyle);
        }

        public final GroupSubscriptionStyle system(Context context, GroupSubscriptionSheetCornersStyle cornersStyle, GroupSubscriptionButtonsCornersStyle buttonsCornersStyle, GroupSubscriptionButtonsSizeStyle buttonsSizeStyle) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(cornersStyle, "cornersStyle");
            Intrinsics.checkNotNullParameter(buttonsCornersStyle, "buttonsCornersStyle");
            Intrinsics.checkNotNullParameter(buttonsSizeStyle, "buttonsSizeStyle");
            return (GroupSubscriptionStyle) ((Function3) (IsDarkThemeKt.getInternalVkIdIsDarkTheme(context) ? GroupSubscriptionStyle$Companion$system$1.INSTANCE : GroupSubscriptionStyle$Companion$system$2.INSTANCE)).invoke(cornersStyle, buttonsCornersStyle, buttonsSizeStyle);
        }
    }
}
