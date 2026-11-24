package com.vk.id.group.subscription.compose.util;

import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.ui.graphics.Color;
import androidx.compose.ui.res.ColorResources_androidKt;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.vk.id.group.subscription.common.style.GroupSubscriptionStyle;
import com.vk.id.group.subscription.compose.R;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: StylingUtil.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0010\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\u001a\u0015\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0001¢\u0006\u0002\u0010\u0004\u001a\u0015\u0010\u0005\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0001¢\u0006\u0002\u0010\u0004\u001a\u0015\u0010\u0006\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0000¢\u0006\u0002\u0010\u0007\u001a\u0015\u0010\b\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0001¢\u0006\u0002\u0010\u0004\u001a\u0015\u0010\t\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0001¢\u0006\u0002\u0010\u0004\u001a\u0015\u0010\n\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0001¢\u0006\u0002\u0010\u0004¨\u0006\u000b"}, d2 = {"textPrimaryColor", "Landroidx/compose/ui/graphics/Color;", "style", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Landroidx/compose/runtime/Composer;I)J", "textSecondaryColor", "textPrimaryButtonColor", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;)J", "textPrimaryButtonBackgroundColor", "textSecondaryButtonBackgroundColor", TtmlNode.ATTR_TTS_BACKGROUND_COLOR, "group-subscription-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class StylingUtilKt {
    public static final long textPrimaryColor(GroupSubscriptionStyle style, Composer composer, int i) {
        long jColorResource;
        Intrinsics.checkNotNullParameter(style, "style");
        composer.startReplaceGroup(1121586797);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(1121586797, i, -1, "com.vk.id.group.subscription.compose.util.textPrimaryColor (StylingUtil.kt:9)");
        }
        if (style instanceof GroupSubscriptionStyle.Light) {
            jColorResource = Color.INSTANCE.m4159getBlack0d7_KjU();
        } else {
            if (!(style instanceof GroupSubscriptionStyle.Dark)) {
                throw new NoWhenBranchMatchedException();
            }
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_text_dark_primary, composer, 0);
        }
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return jColorResource;
    }

    public static final long textSecondaryColor(GroupSubscriptionStyle style, Composer composer, int i) {
        int i2;
        Intrinsics.checkNotNullParameter(style, "style");
        composer.startReplaceGroup(440046495);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(440046495, i, -1, "com.vk.id.group.subscription.compose.util.textSecondaryColor (StylingUtil.kt:17)");
        }
        if (style instanceof GroupSubscriptionStyle.Light) {
            i2 = R.color.vkid_text_light_subhead;
        } else {
            if (!(style instanceof GroupSubscriptionStyle.Dark)) {
                throw new NoWhenBranchMatchedException();
            }
            i2 = R.color.vkid_text_dark_subhead;
        }
        long jColorResource = ColorResources_androidKt.colorResource(i2, composer, 0);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return jColorResource;
    }

    public static final long textPrimaryButtonColor(GroupSubscriptionStyle style) {
        Intrinsics.checkNotNullParameter(style, "style");
        if (style instanceof GroupSubscriptionStyle.Light) {
            return Color.INSTANCE.m4170getWhite0d7_KjU();
        }
        if (style instanceof GroupSubscriptionStyle.Dark) {
            return Color.INSTANCE.m4159getBlack0d7_KjU();
        }
        throw new NoWhenBranchMatchedException();
    }

    public static final long textPrimaryButtonBackgroundColor(GroupSubscriptionStyle style, Composer composer, int i) {
        long jColorResource;
        Intrinsics.checkNotNullParameter(style, "style");
        composer.startReplaceGroup(1212274317);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(1212274317, i, -1, "com.vk.id.group.subscription.compose.util.textPrimaryButtonBackgroundColor (StylingUtil.kt:34)");
        }
        if (style instanceof GroupSubscriptionStyle.Light) {
            composer.startReplaceGroup(-378742776);
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_azure_300, composer, 0);
            composer.endReplaceGroup();
        } else {
            if (!(style instanceof GroupSubscriptionStyle.Dark)) {
                composer.startReplaceGroup(-378744492);
                composer.endReplaceGroup();
                throw new NoWhenBranchMatchedException();
            }
            composer.startReplaceGroup(-378740220);
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_white, composer, 0);
            composer.endReplaceGroup();
        }
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return jColorResource;
    }

    public static final long textSecondaryButtonBackgroundColor(GroupSubscriptionStyle style, Composer composer, int i) {
        long jColorResource;
        Intrinsics.checkNotNullParameter(style, "style");
        composer.startReplaceGroup(1629861823);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(1629861823, i, -1, "com.vk.id.group.subscription.compose.util.textSecondaryButtonBackgroundColor (StylingUtil.kt:42)");
        }
        if (style instanceof GroupSubscriptionStyle.Light) {
            composer.startReplaceGroup(63744110);
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_background_secondary_button_light, composer, 0);
            composer.endReplaceGroup();
        } else {
            if (!(style instanceof GroupSubscriptionStyle.Dark)) {
                composer.startReplaceGroup(63742421);
                composer.endReplaceGroup();
                throw new NoWhenBranchMatchedException();
            }
            composer.startReplaceGroup(63747437);
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_background_secondary_button_dark, composer, 0);
            composer.endReplaceGroup();
        }
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return jColorResource;
    }

    public static final long backgroundColor(GroupSubscriptionStyle style, Composer composer, int i) {
        long jColorResource;
        Intrinsics.checkNotNullParameter(style, "style");
        composer.startReplaceGroup(-1180487326);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(-1180487326, i, -1, "com.vk.id.group.subscription.compose.util.backgroundColor (StylingUtil.kt:50)");
        }
        if (style instanceof GroupSubscriptionStyle.Light) {
            composer.startReplaceGroup(2142912673);
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_white, composer, 0);
            composer.endReplaceGroup();
        } else {
            if (!(style instanceof GroupSubscriptionStyle.Dark)) {
                composer.startReplaceGroup(2142910967);
                composer.endReplaceGroup();
                throw new NoWhenBranchMatchedException();
            }
            composer.startReplaceGroup(2142915115);
            jColorResource = ColorResources_androidKt.colorResource(R.color.vkid_background_dark, composer, 0);
            composer.endReplaceGroup();
        }
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return jColorResource;
    }
}
